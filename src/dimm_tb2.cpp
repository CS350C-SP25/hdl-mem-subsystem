#include "Vddr4_dimm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <bitset>

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

void write_command (bool pre, bitset<COL_BITS> col, bitset<3>, 
                    vector<uint64_t>& a, vector<uint64_t>& b) {
    
    dut->bg_in = (bank_num[3]); 
    dut->dqs_reg = (data_to_write[0]);
    dut->cs_N_in = 0;
    dut->
    
}

void read_command () {
    // Assigning bank group bits
    dut->bg_in = (bank_num[3]);

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
    if (pre[0]) {
        dut->addr_in |= (1 << 10);
    } else {
        dut->addr_in &= ~(1 << 10);
    }

    dut->cs_N_in = 1;
}

int main (int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vddr4_dimm;
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("dump.vcd");

     sim_time = 0; // simulator time

        toggleClock();
   
    // initialize
    dut->rst_N_in = 1;
    dut->clk_in = 0;
    dut->eval();
    m_trace->dump(sim_time);
    while (sim_time < max_sim_time) {
        //dut_reset(dut, sim_time);
        toggleClock();
        activate (0, 0, dut->clk_in);
        toggleClock();

        activate (1, 0, dut->clk_in);
        toggleClock();
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    return 0;
}


