#include "Vddr4_dimm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <bitset>
#include <random>

using namespace std;
// Column-address strobe latency. Delay in cycles between read request and data being ready
const int ACTIVATION_LATENCY= 8;  // latency in cycles to activate row buffer
const int PRECHARGE_LATENCY =5;  // latency in cycles to precharge (clear row buffer)
const int ROW_BITS =8;
const int COL_BITS =4;
const int BANKS =8;
const int REFRESH_CYCLE= 5120;
const int BURST_LOAD =8;
const vluint64_t max_sim_time= 100; // however many cycles we are taking, this is prob not correct
static Vddr4_dimm* dut;
uint16_t bank_data [BANKS] [256] [16];
static VerilatedVcdC* m_trace;
vluint64_t sim_time;

// init a random num generator
random_device rd;
mt19937 rng(rd());
uniform_int_distribution<int> op_distr(1,4);
uniform_int_distribution<int> bank_distr(1,8);
uniform_int_distribution<int> row_distr(1,256);
uniform_int_distribution<int> col_distr(1,16);
uniform_int_distribution<uint16_t> data_distr;

 // Simulated DIMM Memory Structure
 struct Bank {
    vector<vector<uint16_t>> memory;
    bool row_active = false;
    uint16_t active_row = 0;
};

Bank banks[BANKS];

// VCD trace file toggle
const bool ENABLE_WAVES = true;


void toggleClock(int num = 2) {
    for (int i = 0; i < num; i++) {
        sim_time+= 5;
        dut->clk_in ^= 1;
        dut->eval();
        dut->eval();
        //m_trace->dump(sim_time);
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
    dut->cs_N_in = 0;
    dut->act_in = 0;
    dut->addr_in = 0;
    dut->addr_in = row;
    dut->bg_in = bank_num;
    Bank& bank = banks[bank_num];
    bank.row_active = true;
    bank.active_row = row;
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

    Bank& bank = banks[bank_num];
    bank.row_active = false;
}

void write_command (bool pre, uint8_t col, uint8_t bank_num, uint16_t data_to_write) {

    // Assigning bank group bits
    dut->bg_in |= (bank_num & 0b1);
    dut->ba_in |= ((bank_num & 0b110) >> 1);

    // Control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 0;

    // Reset address register
    dut->addr_in = 0;

    // Set the column address
    dut->addr_in |= (static_cast<unsigned long>(col) & ((1 << COL_BITS) - 1));

    // Setting specific bits manually
    dut->addr_in |= (1 << 16);
    dut->addr_in &= ~(1 << 15);
    dut->addr_in &= ~(1 << 14);

    // Writing out data 
    dut->dqs = data_to_write;
    Bank& bank = banks[bank_num];
    bank_data [bank_num] [bank.active_row] [col] = data_to_write; 

    //precharge
    if (pre) {
        dut->addr_in |= (1 << 10);
    } else {
        dut->addr_in &= ~(1 << 10);
    }

    dut->cs_N_in = 1;
    dut->dqs = 0;

    // CAS latency
    for (int i = 0; i < 22; i++) {
        toggleClock();
    }
}

uint16_t read_command (bool pre, uint8_t col, uint8_t bank_num) {
    // Assigning bank group bits
    dut->bg_in |= (bank_num & 0b1);
    dut->ba_in |= ((bank_num & 0b110) >> 1);

    // Control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 0;

    // Reset address register
    dut->addr_in = 0;

    // Set the column address
    dut->addr_in |= (static_cast<unsigned long>(col) & ((1 << COL_BITS) - 1));

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
    Bank& bank = banks[bank_num];
    dut->cs_N_in = 1;
    dut->dqs = 0;
    uint16_t read_data = bank_data [bank_num] [bank.active_row] [col];
    return read_data;
}

// Issue a bunch of writes then reads
void runWRTest(int num_operations, unsigned clock) {
    cout << "Running a basic write-read test" << endl;
    for (int i = 1; i <= num_operations; i++) {
        int bank = bank_distr(rng);
        uint16_t row = row_distr(rng);
        uint16_t col = col_distr(rng);
        uint16_t write_data = data_distr(rng);


        cout << "Activating bank " << bank << " at row " << row << endl;
        activate(bank, row, clock);
        
        cout << "Issuing write of " << write_data << " to bank " << bank << " row " << row << " col " << col << endl;
        write_command (1, col, bank, write_data);
    
        cout << "Reading data just written... " << endl;
        uint16_t read_data = read_command (1, col, bank);

        cout << "Data read is " << read_data << endl;
    
        assert(read_data == write_data);
    
        precharge (bank);
    }
}


int main (int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    //Verilated::traceEverOn(true);

    dut = new Vddr4_dimm;
    m_trace = new VerilatedVcdC;
    // dut->trace(m_trace, 5);
    // m_trace->open("dump.vcd");

    // initalize bank states
    for (int i = 0; i < BANKS; i++) {
        for (int j = 0; j < 256; j++) {
            for (int k = 0; k < 16; k++) {
                bank_data [i] [j] [k] = 0;
            }
        }
    }


    sim_time = 0; // simulator time

    toggleClock();
   
    // initialize
    dut->rst_N_in = 1;
    dut->clk_in = 1;
    dut->eval();
    //m_trace->dump(sim_time);
    while (sim_time < max_sim_time) {
	runWRTest(10, dut->clk_in);
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    return 0;
}


