#include "Vddr4_dimm.h"
#include "Vddr4_sdram_controller.h" // Added controller module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <bitset>
#include <random>

// Constants from both modules
const int CAS_LATENCY = 22;
const int ACTIVATION_LATENCY = 8;  // latency in cycles to activate row buffer
const int PRECHARGE_LATENCY = 5;  // latency in cycles to precharge (clear row buffer)
const int ROW_BITS = 8;
const int COL_BITS = 4;
const int BUS_WIDTH = 16;
const int BANK_GROUPS = 8;
const int BANKS_PER_GROUP = 8;
const int BANKS = BANK_GROUPS * BANKS_PER_GROUP;
const int REFRESH_CYCLE = 5120;
const int BURST_LOAD = 8;
const int PADDR_BITS = 19;

const vluint64_t max_sim_time = 6000; // simulation time in cycles
vluint64_t sim_time = 0;

// Module instances
static Vddr4_dimm* dimm;
static Vddr4_sdram_controller* controller;
static VerilatedVcdC* m_trace;

using namespace std;

void toggleClock(int num = 2) {
    for (int i = 0; i < num; i++) {
        sim_time += 5;
        
        // Toggle clock for both modules
        dimm->clk_in ^= 1;
        controller->clk ^= 1;
        
        // Evaluate both modules
        controller->eval();
        dimm->eval();
        
        // Connect controller outputs to DIMM inputs
        dimm->cs_N_in = controller->cs_n;
        dimm->cke_in = controller->cke;
        dimm->act_in = controller->act_n;
        dimm->addr_in = controller->addr;
        dimm->bg_in = controller->bg;
        dimm->ba_in = controller->ba;
        dimm->dqm_in = controller->dqm;
        
        // Connect DIMM outputs to controller inputs
        controller->dqs_in = dimm->dqs;
        controller->dq_in = dimm->dq_out;
        
        // Forward DQS signals
        dimm->dqs = controller->dqs_out;
        
        // Re-evaluate after connections
        controller->eval();
        dimm->eval();
        
        m_trace->dump(sim_time);
    }
}

void reset_system() {
    // Reset the DIMM
    dimm->rst_N_in = 0;
    dimm->cs_N_in = 1;
    dimm->cke_in = 0;
    dimm->act_in = 0;
    dimm->addr_in = 0;
    dimm->bg_in = 0;
    dimm->ba_in = 0;
    dimm->dqm_in = 0;
    dimm->dqs = 0;
    
    // Reset the controller
    controller->rst_n = 0;
    controller->paddr = 0;
    controller->pdata_in = 0;
    controller->pdata_mask = 0;
    controller->pwrite = 0;
    controller->pvalid = 0;
    
    // Toggle clock a few times during reset
    toggleClock(4);
    
    // Release reset
    dimm->rst_N_in = 1;
    controller->rst_n = 1;
    toggleClock(2);
}

// Memory access through controller
void memory_write(uint32_t address, uint64_t* data, bool auto_precharge = false) {
    // Set processor interface signals to controller
    controller->paddr = address;
    controller->pwrite = 1;
    controller->pvalid = 1;
    
    // Write data to controller (assuming 64-bit data path)
    for (int i = 0; i < 8; i++) {
        controller->pdata_in = data[i];
        toggleClock();
    }
    
    // Deassert valid
    controller->pvalid = 0;
    
    // Wait for controller to process the request
    // In a real system, we would wait for pready, but here we'll just wait a fixed time
    int wait_cycles = CAS_LATENCY + ACTIVATION_LATENCY + (auto_precharge ? PRECHARGE_LATENCY : 0);
    toggleClock(wait_cycles);
}

uint64_t* memory_read(uint32_t address, bool auto_precharge = false) {
    static uint64_t read_data[8];
    
    // Set processor interface signals to controller
    controller->paddr = address;
    controller->pwrite = 0;
    controller->pvalid = 1;
    
    // Toggle clock to start read operation
    toggleClock();
    
    // Deassert valid
    controller->pvalid = 0;
    
    // Wait for controller to process the request
    int wait_cycles = CAS_LATENCY + ACTIVATION_LATENCY + (auto_precharge ? PRECHARGE_LATENCY : 0);
    toggleClock(wait_cycles);
    
    // Read data from controller (assuming 64-bit data path)
    for (int i = 0; i < 8; i++) {
        read_data[i] = controller->pdata_out;
        toggleClock();
    }
    
    return read_data;
}

// Random memory test pattern
void run_random_memory_test(int num_operations = 100) {
    random_device rd;
    mt19937 rng(rd());
    
    uniform_int_distribution<uint32_t> addr_dist(0, (1 << PADDR_BITS) - 1);
    uniform_int_distribution<int> op_dist(0, 1); // 0 for read, 1 for write
    
    cout << "Running random memory test with " << num_operations << " operations" << endl;
    
    for (int i = 0; i < num_operations; i++) {
        uint32_t addr = addr_dist(rng);
        int op = op_dist(rng);
        
        if (op == 0) {
            // Read operation
            cout << "Operation " << i << ": Reading from address 0x" << hex << addr << dec << endl;
            uint64_t* data = memory_read(addr, true);
            cout << "Read data[0]: 0x" << hex << data[0] << dec << endl;
        } else {
            // Write operation
            uint64_t write_data[8];
            for (int j = 0; j < 8; j++) {
                write_data[j] = rng();
            }
            
            cout << "Operation " << i << ": Writing to address 0x" << hex << addr << dec << endl;
            cout << "Write data[0]: 0x" << hex << write_data[0] << dec << endl;
            memory_write(addr, write_data, true);
        }
        
        // Add some idle cycles between operations
        toggleClock(4);
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize modules
    dimm = new Vddr4_dimm;
    controller = new Vddr4_sdram_controller;
    
    // Setup trace
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    dimm->trace(m_trace, 5);
    controller->trace(m_trace, 5);
    m_trace->open("integrated_test.vcd");
    
    // Initialize clock
    dimm->clk_in = 0;
    controller->clk = 0;
    
    // Reset the system
    reset_system();
    
    cout << "Starting memory test..." << endl;
    
    // Basic test - write and read back
    uint64_t test_data[8] = {0xABCD1234, 0x56789ABC, 0xDEF01234, 0x56789ABC, 
                             0xDEF01234, 0x56789ABC, 0xDEF01234, 0x56789ABC};
    uint32_t test_addr = 0x12345;
    
    cout << "Basic test: Writing data to address 0x" << hex << test_addr << dec << endl;
    memory_write(test_addr, test_data);
    
    cout << "Basic test: Reading data from address 0x" << hex << test_addr << dec << endl;
    uint64_t* read_data = memory_read(test_addr);
    
    // Verify data
    bool data_match = true;
    for (int i = 0; i < 8; i++) {
        if (test_data[i] != read_data[i]) {
            data_match = false;
            cout << "Data mismatch at index " << i << ": Expected 0x" << hex << test_data[i] 
                 << ", Got 0x" << read_data[i] << dec << endl;
        }
    }
    
    if (data_match) {
        cout << "Basic test passed: Data matches" << endl;
    } else {
        cout << "Basic test failed: Data mismatch" << endl;
    }
    
    // Run random access pattern
    run_random_memory_test(20);
    
    // Cleanup
    m_trace->close();
    delete dimm;
    delete controller;
    
    cout << "Test completed" << endl;
    
    return 0;
}