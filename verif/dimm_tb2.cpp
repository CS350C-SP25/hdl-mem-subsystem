#include "Vddr4_dimm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <bitset>
#include <random>

// Column-address strobe latency. Delay in cycles between read request and data being ready
const int ACTIVATION_LATENCY= 8;  // latency in cycles to activate row buffer
const int PRECHARGE_LATENCY =5;  // latency in cycles to precharge (clear row buffer)
const int ROW_BITS =8;
const int COL_BITS =4;
const int BANKS =8;
const int REFRESH_CYCLE= 5120;
const int BURST_LOAD =8;
const vluint64_t max_sim_time= 6000; // however many cycles we are taking, this is prob not correct
static Vddr4_dimm* dut;
vluint64_t sim_time;
static VerilatedVcdC* m_trace;
using namespace std;

void toggleClock(int num = 2) {
    for (int i = 0; i < num; i++) {
        sim_time+= 5;
        dut->clk_in ^= 1;
        dut->eval();
        dut->eval();
        m_trace->dump(sim_time);
    }
}

void dut_reset () {
    dut->rst_N_in = 1;
    if  (sim_time >= 0 && sim_time <= max_sim_time) {  
        dut->rst_N_in = 0;
        dut->cs_N_in = 1;
        dut->cke_in = 0;
        dut->act_in = 0;
        dut->addr_in = 0;
        dut->bg_in=0;
        dut->ba_in = 0;
        dut->dqm_in = 0;
        dut->dqs = 0;
    }
}

void activate (unsigned bank_num, unsigned row, unsigned clock) {
    while (clock) {
        dut->cs_N_in = 0;
        dut->act_in = 0;
        dut->addr_in = 0;
        dut->addr_in = row;
        dut->bg_in = bank_num;
    }
}

void precharge (uint8_t bank_num) {
    // assign bank group bits
    dut->bg_in |= (bank_num & 0b1);
    dut->ba_in |= ((bank_num & 0b110) >> 1);

    // control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 1;

    // reset address register
    dut->addr_in = 0;

    // set the specific address bits needed manually
    dut->addr_in &= ~(1 << 16);
    dut->addr_in |= (1 << 15);
    dut->addr_in &= ~(1 << 14);

    // set chip select
    dut->cs_N_in = 1;

    // zero out dqs reg
    dut->dqs = 0;
}

void write_command (bool pre, uint8_t col, uint8_t bank_num, uint64_t (&data_to_write)[8]) {

    // Assigning bank group bits
    dut->bg_in |= (bank_num & 0b1);
    dut->ba_in |= ((bank_num & 0b110) >> 1);

    // Control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 0;

    // Reset address register
    dut->addr_in = 0;

    // Set the column address
    dut->addr_in |= (col.to_ulong() & ((1 << COL_BITS) - 1));

    // Setting specific bits manually
    dut->addr_in |= (1 << 16);
    dut->addr_in &= ~(1 << 15);
    dut->addr_in &= ~(1 << 14);

    // Writing out data 
    dut->dqs = data_to_write[0];
    dut->dqs = data_to_write[1];
    toggleClock(); // assuming that this toggled 1 cycle
    dut->dqs = data_to_write[2];
    dut->dqs = data_to_write[3];
    toggleClock();
    dut->dqs = data_to_write[4];
    dut->dqs = data_to_write[5];
    toggleClock();
    dut->dqs = data_to_write[6];
    dut->dqs = data_to_write[7];
    toggleClock();
    //precharge
    if (pre) {
        dut->addr_in |= (1 << 10);
    } else {
        dut->addr_in &= ~(1 << 10);
    }

    dut->cs_N_in = 1;
    dut->dqs = 0;
}

void read_command (bool pre, uint8_t col, uint8_t bank_num) {
    // Assigning bank group bits
    dut->bg_in |= (bank_num & 0b1);
    dut->ba_in |= ((bank_num & 0b110) >> 1);

    // Control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 0;

    // Reset address register
    dut->addr_in = 0;

    // Set the column address
    dut->addr_in |= (col.to_ulong() & ((1 << COL_BITS) - 1));

    // Setting specific bits manually
    dut->addr_in |= (1 << 16);
    dut->addr_in &= ~(1 << 15);
    dut->addr_in |= (1 << 14);

    //precharge
    if (pre) {
        dut->addr_in |= (1 << 10);
    } else {
        dut->addr_in &= ~(1 << 10);
    }

    dut->cs_N_in = 1;
    dut->dqs = 0;
}

int main (int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vddr4_dimm;
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("dump.vcd");
    
    // init a random num generator
    random_device rd;
    mt19937 rng(rd());

    uniform_int_distribution<int> op_distr(1,4);
    uniform_int_distribution<int> bank_distr(1,8);
    uniform_int_distribution<int> row_distr(1,256);
    uniform_int_distribution<int> col_distr(1,16);
    uniform_int_distribution<int> data_distr(0,100000); // randomizing data

     sim_time = 0; // simulator time

        toggleClock();
   
    // initialize
    dut->rst_N_in = 1;
    dut->clk_in = 0;
    dut->eval();
    m_trace->dump(sim_time);
    while (sim_time < max_sim_time) {
	int random_op = op_distr(rng);
	int random_bank = bank_distr(rng);
	int random_row = row_distr(rng);

	if (random_op == 1) {
	  // activate command
          cout << "Activating row " << random_row << " in bank " << random_bank << endl;
	  activate (random_bank, random_row, dut->clk_in);
	} else if (random_op == 2) {
	  // precharge command
          cout << "Precharging active row in bank " << random_bank << endl;
	  precharge (random_bank);
	} else if (random_op == 3) {
	  // write command
          random_col = col_distr(rng);
	  //generate random data to write out
	  uint64_t data_to_write[8];
	  for (int i = 0; i < 8; i++) {
	    data_to_write[i] = data_distr(rng);
	    cout << "Writing " << data_to_write[i] << " to col " << random_col << " in bank " << random_bank << endl;
	  } 
	  write_command (1, random_col, random_bank, data_to_write);
	} else if (random_op == 4) {
	  // read command
          random_col = col_distr(rng);
	  cout << "Reading from col " << random_col << " in bank " << random_bank << endl;
	  read_command (1, random_col, random_bank);
	}
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    return 0;
}


