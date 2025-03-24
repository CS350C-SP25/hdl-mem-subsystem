#include <verilated.h>
#include <verilated_vcd_c.h>

#include <bitset>
#include <cassert>
#include <iostream>
#include <map>
#include <random>
#include <vector>

#include "Vllc_dimm_tb.h"

// Test duration in clock cycles
const int MAX_SIM_TIME = 100000;
// VCD trace file toggle
const bool ENABLE_WAVES = true;

// Memory operation types
enum MemOp { READ, WRITE, CACHE_LINE_FILL, FLUSH };

// Memory transaction record
struct MemTransaction {
    MemOp op;
    uint32_t addr;
    uint64_t value;
    uint64_t expected_value;
    bool completed;
    int start_cycle;
    int complete_cycle;
};

class TestBench {
   private:
    Vllc_dimm_tb* m_dut;
    VerilatedVcdC* m_trace;
    uint64_t m_tickCount;
    std::map<uint32_t, uint64_t> m_memoryModel;
    std::vector<MemTransaction> m_pendingTransactions;
    std::vector<MemTransaction> m_completedTransactions;
    std::mt19937 m_rng;

   public:
    TestBench() {
        m_dut = new Vllc_dimm_tb;
        m_tickCount = 0;
        m_trace = nullptr;

        // Seed random number generator
        m_rng.seed(std::random_device()());
    }

    ~TestBench() {
        if (m_trace) {
            m_trace->close();
            delete m_trace;
        }
        delete m_dut;
    }

    void openTrace(const char* filename) {
        if (!m_trace) {
            m_trace = new VerilatedVcdC;
            m_dut->trace(m_trace, 1000);
            m_trace->open(filename);
        }
    }

    void tick() {
        // Toggle clock
        m_dut->clk = 0;
        eval();
        if (m_trace) m_trace->dump(10 * m_tickCount + 5);

        m_dut->clk = 1;
        eval();
        if (m_trace) m_trace->dump(10 * m_tickCount + 10);

        m_tickCount++;
    }

    void reset() {
        m_dut->rst_N = 0;

        // Initialize inputs to inactive state
        m_dut->cs_in = 0;
        m_dut->flush_in = 0;
        m_dut->hc_valid_in = 0;
        m_dut->hc_ready_in = 1;  // Higher cache is ready to receive
        m_dut->hc_addr_in = 0;
        m_dut->hc_value_in = 0;
        m_dut->hc_we_in = 0;
        for (int i = 0; i < 512; i++) {
            m_dut->hc_line_in[i] = 0;
        }
        m_dut->hc_cl_in = 0;

        // Run a few cycles in reset
        for (int i = 0; i < 5; i++) {
            tick();
        }

        // Release reset
        m_dut->rst_N = 1;
        tick();
    }

    void eval() { m_dut->eval(); }

    // Add a memory read transaction
    void read(uint32_t addr) {
        MemTransaction txn;
        txn.op = READ;
        txn.addr = addr;
        txn.value = 0;
        txn.expected_value =
            m_memoryModel[addr & ~0x7ULL];  // Align to 8-byte boundary
        txn.completed = false;
        txn.start_cycle = m_tickCount;
        txn.complete_cycle = 0;

        m_pendingTransactions.push_back(txn);
    }

    // Add a memory write transaction
    void write(uint32_t addr, uint64_t value) {
        MemTransaction txn;
        txn.op = WRITE;
        txn.addr = addr;
        txn.value = value;
        txn.completed = false;
        txn.start_cycle = m_tickCount;
        txn.complete_cycle = 0;

        // Update our memory model
        m_memoryModel[addr & ~0x7ULL] = value;  // Align to 8-byte boundary

        m_pendingTransactions.push_back(txn);
    }

    // Add a cache line fill operation
    void cacheFill(uint32_t addr, const uint64_t* line_data) {
        MemTransaction txn;
        txn.op = CACHE_LINE_FILL;
        txn.addr = addr;
        txn.value = 0;
        txn.completed = false;
        txn.start_cycle = m_tickCount;
        txn.complete_cycle = 0;

        // Update our memory model for the entire cache line (8 words)
        uint32_t aligned_addr = addr & ~0x3FULL;  // Align to 64-byte cache line
        for (int i = 0; i < 8; i++) {
            m_memoryModel[aligned_addr + i * 8] = line_data[i];
        }

        m_pendingTransactions.push_back(txn);
    }

    // Add a cache flush operation
    void flush() {
        MemTransaction txn;
        txn.op = FLUSH;
        txn.addr = 0;
        txn.value = 0;
        txn.completed = false;
        txn.start_cycle = m_tickCount;
        txn.complete_cycle = 0;

        m_pendingTransactions.push_back(txn);
    }

    // Drive inputs based on pending transactions
    void driveInputs() {
        // Default values - no operation
        m_dut->cs_in = 0;
        m_dut->flush_in = 0;
        m_dut->hc_valid_in = 0;

        // If nothing to drive, return
        if (m_pendingTransactions.empty()) {
            return;
        }
        // Check if LLC is ready to accept new transaction
        // std::cout << "0x" << std::hex << m_dut->hc_ready_out << "\n";
        // Get the next pending transaction
            auto& txn = m_pendingTransactions.front();

            m_dut->cs_in = 1;

            switch (txn.op) {
                case READ:
                    std::cout << "Reading to addr 0x" << std::hex << txn.addr
                              << "\n";
                    m_dut->hc_addr_in = txn.addr;
                    m_dut->hc_we_in = 0;
                    m_dut->hc_cl_in = 0;
                    m_dut->hc_valid_in = 1;
                    break;

                case WRITE:
                    std::cout << "Writing to addr 0x" << std::hex << txn.addr
                              << "\n";
                    m_dut->hc_addr_in = txn.addr;
                    m_dut->hc_value_in = txn.value;
                    m_dut->hc_we_in = 1;
                    m_dut->hc_cl_in = 0;
                    m_dut->hc_valid_in = 1;
                    break;

                case CACHE_LINE_FILL:
                    std::cout << "Line fill to addr 0x" << std::hex << txn.addr
                              << "\n";
                    m_dut->hc_addr_in = txn.addr;
                    // For simplicity, we're just sending a pattern as cache
                    // line data In a real test, this would be the actual cache
                    // line data
                    for (int i = 0; i < 8; i++) {
                        uint64_t word =
                            m_memoryModel[txn.addr & ~0x3FULL + i * 8];
                        for (int j = 0; j < 64; j++) {
                            m_dut->hc_line_in[i * 64 + j] = (word >> j) & 0x1;
                        }
                    }
                    m_dut->hc_we_in = 1;
                    m_dut->hc_cl_in = 1;
                    m_dut->hc_valid_in = 1;
                    break;

                case FLUSH:
                    std::cout << "Flushing \n";
                    m_dut->flush_in = 1;
                    m_dut->hc_valid_in = 1;
                    break;
            }
            tick();
            m_dut->hc_valid_in = 0;

            // Remove from pending transactions
            if (m_dut->hc_ready_out) {
                m_pendingTransactions.erase(m_pendingTransactions.begin());
            }
        
    }

    // Check outputs and mark transactions as complete
    void checkOutputs() {
        // Check if LLC has completed an operation
        if (m_dut->hc_valid_out) {
            uint32_t addr = m_dut->hc_addr_out;
            uint64_t value = m_dut->hc_value_out;

            std::cout << "Cycle " << m_tickCount
                      << ": LLC completed operation at address 0x" << std::hex
                      << addr << ", value = 0x" << value << std::dec
                      << std::endl;

            // Check if this matches any of our expected values
            uint32_t aligned_addr = addr & ~0x7ULL;
            if (m_memoryModel.find(aligned_addr) != m_memoryModel.end()) {
                uint64_t expected = m_memoryModel[aligned_addr];
                if (value != expected) {
                    std::cout << "ERROR: Value mismatch at address 0x"
                              << std::hex << addr << ", expected 0x" << expected
                              << ", got 0x" << value << std::dec << std::endl;
                } else {
                    std::cout << "Correct value found at 0x" << std::hex << addr
                              << ", expected 0x" << expected << ", got 0x"
                              << value << std::dec << std::endl;
                }
            }

            // Acknowledge receipt of data from LLC
            m_dut->hc_ready_in = 1;
        }
    }

    // Generate a random address within the memory space
    uint32_t randomAddr() {
        // Our memory has 19-bit addresses
        std::uniform_int_distribution<uint32_t> dist(0, (1 << 19) - 1);
        return dist(m_rng);
    }

    // Generate a random 64-bit value
    uint64_t randomValue() {
        std::uniform_int_distribution<uint64_t> dist(0, UINT64_MAX);
        return dist(m_rng);
    }

    // Run a random sequence of memory operations
    void runRandomTest(int num_operations) {
        std::uniform_int_distribution<int> op_dist(0, 10);

        for (int i = 0; i < num_operations; i++) {
            int op_type = op_dist(m_rng);

            // Create a bias toward reads and writes
            if (op_type < 4) {
                // Read operation
                uint32_t addr = randomAddr();
                read(addr);
            } else if (op_type < 8) {
                // Write operation
                uint32_t addr = randomAddr();
                uint64_t value = randomValue();
                write(addr, value);
            } else if (op_type < 10) {
                // Cache line fill - less frequent
                uint32_t addr = randomAddr() & ~0x3FULL;  // Align to cache line
                uint64_t line_data[8];
                for (int j = 0; j < 8; j++) {
                    line_data[j] = randomValue();
                }
                cacheFill(addr, line_data);
            } else {
                // Flush - least frequent
                flush();
            }

            // Run simulation for a random number of cycles to introduce
            // variability
            int cycles = 5 + (m_rng() % 10);
            for (int j = 0; j < cycles; j++) {
                driveInputs();
                tick();
                checkOutputs();
            }
        }
    }

    // Run a sequential access pattern test
    void runSequentialTest(int num_operations) {
        uint32_t start_addr = 0x24440; // Align to cache line
        
        for (int i = 0; i < num_operations; i++) {
            uint32_t addr = start_addr + (i * 64) % (1 << 19);

            uint64_t value = 0xDEADBEEF00000000ULL | i;
            write(addr, value);

            driveInputs();

            // Run simulation for a few cycles
            for (int j = 0; j < 40; j++) {
                tick();
            }
        }

    }

    // Run a stress test with cache thrashing pattern
    void runThrashingTest(int num_operations) {
        // Generate addresses that target different cache sets
        // Assuming direct-mapped cache with 8 sets (for simplicity)
        const int NUM_SETS = 8;

        for (int i = 0; i < num_operations; i++) {
            uint32_t set = i % NUM_SETS;
            uint32_t addr = set * 64;  // Each cache line is 64 bytes

            if (i % 3 == 0) {
                // Read operation
                read(addr);
            } else {
                // Write operation
                uint64_t value = 0xC0FFEE0000000000ULL | i;
                write(addr, value);
            }

            // Run simulation for a few cycles
            for (int j = 0; j < 5; j++) {
                driveInputs();
                tick();
                checkOutputs();
            }
        }
    }

    // Complete any remaining operations and check final state
    void finalize() {
        std::cout << "Finalizing operations \n";
        int idle_cycles = 0;
        const int MAX_IDLE = 100;  // Max cycles to wait for completion

        while (!m_pendingTransactions.empty() && idle_cycles < MAX_IDLE) {
            driveInputs();
            tick();
            checkOutputs();

            // Check if any operation is in progress
            if (m_dut->hc_valid_in || m_dut->hc_valid_out) {
                idle_cycles = 0;
            } else {
                idle_cycles++;
            }
        }

        if (!m_pendingTransactions.empty()) {
            std::cout << "WARNING: " << m_pendingTransactions.size()
                      << " operations did not complete after " << MAX_IDLE
                      << " idle cycles" << std::endl;
        }

        std::cout << "Simulation completed after " << m_tickCount
                  << " clock cycles" << std::endl;
    }
};

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Create test bench
    TestBench tb;

    // Enable waveform tracing if desired
    if (ENABLE_WAVES) {
        tb.openTrace("llc_dimm_tb_waves.vcd");
    }

    // Reset the DUT
    tb.reset();

    std::cout << "Starting LLC+DIMM integration test..." << std::endl;

    // Run various test sequences
    // std::cout << "\nRunning random access test..." << std::endl;
    // tb.runRandomTest(100);

    std::cout << "\nRunning sequential access test..." << std::endl;
    tb.runSequentialTest(8);

    // std::cout << "\nRunning cache thrashing test..." << std::endl;
    // tb.runThrashingTest(30);

    // Complete any remaining operations
    tb.finalize();

    std::cout << "\nLLC+DIMM integration test completed successfully!"
              << std::endl;

    return 0;
}