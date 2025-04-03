#include "Vddr4_dimm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <bitset>
#include <random>
#include <unordered_map>
#include <queue>

using namespace std;
typedef enum {
    CMD_READ,
    CMD_WRITE,
    CMD_PRE,
    CMD_ACT
} cmd_type_t;

typedef struct read_q_elem {
    int maturity; //time this read matures;
    int address;
} rqe_t;

typedef struct cmd_q_elem {
    cmd_type_t cmd;
    int address;
} cqe_t;

// Column-address strobe latency. Delay in cycles between read request and data being ready
const int ACTIVATION_LATENCY= 8;  // latency in cycles to activate row buffer
const int PRECHARGE_LATENCY =5;  // latency in cycles to precharge (clear row buffer)
const int ROW_BITS =8;
const int COL_BITS =4;
const int BANKS = 8;
const int BA_BITS = 2;
const int BG_BITS = 1;
const int COL_OFFSET = 3;
const int REFRESH_CYCLE= 5120;
const int BURST_LOAD =8;
const vluint64_t max_sim_time= 1000; // however many cycles we are taking, this is prob not correct
static Vddr4_dimm* dut;
uint16_t bank_data [BANKS] [256] [16];
static VerilatedVcdC* m_trace;
static uint8_t bank_activated[8]; //running bank state (what the state should be at the end of the q).
static uint8_t bank_cycles_left[8];
std::queue<rqe_t*> read_q;
std::queue<cqe_t*> cmd_q;
int m_tickCount;
vluint64_t sim_time;
unordered_map<int, long> small_mem;

static unsigned int addr_row (unsigned int addr) {
    return (addr >> (COL_OFFSET + COL_BITS + BA_BITS + BG_BITS)) & ((1 << ROW_BITS) - 1);
}

static unsigned int addr_col (unsigned int addr) {
    return (addr >> COL_OFFSET) & ((1 << COL_BITS) - 1);
}

static unsigned int addr_bg (unsigned int addr) {
    return (addr >> (COL_OFFSET + COL_BITS + BA_BITS)) & ((1 << BG_BITS) - 1);
}

static unsigned int addr_ba (unsigned int addr) {
    return (addr >> (COL_OFFSET + COL_BITS)) & ((1 << BA_BITS) - 1);
}

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

void tick(int num = 2) {
    // Toggle clock
    for (int i = 0; i < num; i++) {
        dut->clk_in ^= 1;
        dut->eval();
        if (m_trace) m_trace->dump(10 * m_tickCount + 5);
        m_tickCount++;
    }

}


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

void write_command (int addr, uint16_t data_to_write) {

    // Assigning bank group bits
    dut->bg_in = addr_bg(addr);
    dut->ba_in = addr_ba(addr);

    // Control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 0;

    // Reset address register
    dut->addr_in = 0;

    // Set the column address
    dut->addr_in addr_col(addr);

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

uint16_t read_command (int addr) {
    // Assigning bank group bits
    dut->bg_in = addr_bg(addr);
    dut->ba_in = addr_ba(addr);

    // Control signal assignments
    dut->cs_N_in = 0;
    dut->act_in = 0;

    // Reset address register
    dut->addr_in = 0;

    // Set the column address
    dut->addr_in addr_col(addr);

    // Setting specific bits manually
    dut->addr_in |= (1 << 16);
    dut->addr_in &= ~(1 << 15);
    dut->addr_in |= (1 << 14);

    dut->addr_in &= ~(1 << 10);

    Bank& bank = banks[(addr_bg(addr) << BA_BITS) + addr_ba(addr)];
    dut->cs_N_in = 1;
    dut->dqs = 0;
    for (int i = 0; i < 22; i++) {
        toggleClock();
    }
    long cl_out[8] = new long[8];
    for (int i = 0; i < 8; i++) {
        cl_out[i] = dut->dqs;
        tick(1);
    }
    return cl_out;
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

void process_reads() {
    if (read_q.empty()) {
        return NULL;
    }
    int timeUntilRead = read_q.front()->maturity - m_tickCount;
    for (int i = 0; i < timeUntilRead; i++) {
        tick();
    }
    //the read is happening!!!
    long cl_out[8] = new long[8];
    for (int i = 0; i < 8; i++) {
        cl_out[i] = dut->dqs;
        tick(1);
    }
}

void noActPre (int numOps) {
    int starting_addr = 0x840;//some fixed random number
    for (int i = 0; i < numOps; i++) {
        while (!read_q.empty() && read_q.front()->maturity + 4 < m_tickCount && read_q.front()->maturity - 4 >= m_tickCount) {
            process_reads();
        }
        write (start_addr);
        while (!read_q.empty() && read_q.front()->maturity + 4 < m_tickCount && read_q.front()->maturity - 4 >= m_tickCount) {
            process_reads();
        }
        read (start_addr);
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


