#include <verilated.h>
#include <verilated_vcd_c.h>

#include <iostream>
#include <map>
#include <random>
#include <vector>

// Include the Verilated header for the L1 cache module
#include "Vl1_data_cache.h"  // Change this include

// Testbench parameters (match the Verilog module)
const int A = 3;
const int B = 64;
const int C = 1536;
const int PADDR_BITS = 22;
const int MSHR_COUNT = 4;
const int TAG_BITS = 10;

// Test duration in clock cycles
const int MAX_SIM_TIME = 10000;
// VCD trace file toggle
const bool ENABLE_WAVES = true;

// Memory operation types for L1 cache
enum MemOp { READ, WRITE, FLUSH };  // Simplified for L1 cache

// Memory transaction record
struct MemTransaction {
    MemOp op;
    uint64_t addr;  // Changed to 64-bit for L1
    uint64_t value;
    bool completed;
    int start_cycle;
    int complete_cycle;
};

class TestBench {
   private:
    Vl1_data_cache* m_dut;  // Change to the L1 cache DUT
    VerilatedVcdC* m_trace;
    uint64_t m_tickCount;
    std::map<uint64_t, uint64_t> m_memoryModel;  // Use 64-bit addresses
    std::vector<MemTransaction> m_pendingTransactions;
    std::mt19937 m_rng;

   public:
    TestBench() {
        m_dut = new Vl1_data_cache;  // Instantiate L1 cache DUT
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
        m_dut->clk_in = 0;
        eval();
        if (m_trace) m_trace->dump(10 * m_tickCount + 5);

        m_dut->clk_in = 1;
        eval();
        if (m_trace) m_trace->dump(10 * m_tickCount + 10);

        m_tickCount++;
    }

    void reset() {
        m_dut->rst_N_in = 0;
        m_dut->cs_N_in = 1;  // L1 cache is active low

        // Initialize other inputs
        m_dut->lsu_valid_in = 0;
        m_dut->lsu_ready_in = 1;  // Assume LSU is initially ready
        m_dut->lsu_addr_in = 0;
        m_dut->lsu_value_in = 0;
        m_dut->lsu_we_in = 0;
        m_dut->flush_in = 0;
        m_dut->lc_ready_in = 1;  // Initially ready to receive from lower cache
        m_dut->lc_valid_in = 0;
        m_dut->lc_addr_in = 0;
        m_dut->lc_value_in = 0;

        // Run a few cycles in reset
        for (int i = 0; i < 5; i++) {
            tick();
        }

        // Release reset
        m_dut->rst_N_in = 1;
        tick();
    }

    void eval() { m_dut->eval(); }

    // Add a memory read transaction
    void read(uint64_t addr) {  // Changed addr to uint64_t
        MemTransaction txn;
        txn.op = READ;
        txn.addr = addr;
        txn.value = 0;
        txn.completed = false;
        txn.start_cycle = m_tickCount;
        txn.complete_cycle = 0;
        m_pendingTransactions.push_back(txn);
    }

    // Add a memory write transaction
    void write(uint64_t addr, uint64_t value) {  // Changed addr to uint64_t
        MemTransaction txn;
        txn.op = WRITE;
        txn.addr = addr;
        txn.value = value;
        txn.completed = false;
        txn.start_cycle = m_tickCount;
        txn.complete_cycle = 0;
        m_memoryModel[addr] = value;  // Store with 64-bit address
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

    void driveInputs() {
        // Default values
        m_dut->cs_N_in = 1;  // Deassert chip select (inactive)
        m_dut->lsu_valid_in = 0;
        m_dut->lsu_we_in = 0;
        m_dut->lsu_addr_in = 0;
        m_dut->lsu_value_in = 0;
        m_dut->flush_in = 0;
        m_dut->lc_valid_in = 0;
        m_dut->lc_addr_in = 0;
        m_dut->lc_value_in = 0;

        if (m_pendingTransactions.empty()) {
            return;
        }

        auto& txn = m_pendingTransactions.front();
        m_dut->cs_N_in = 0;  // Assert chip select (active)

        switch (txn.op) {
            case READ:
                m_dut->lsu_valid_in = 1;
                m_dut->lsu_we_in = 0;
                m_dut->lsu_addr_in = txn.addr;
                break;
            case WRITE:
                m_dut->lsu_valid_in = 1;
                m_dut->lsu_we_in = 1;
                m_dut->lsu_addr_in = txn.addr;
                m_dut->lsu_value_in = txn.value;
                break;
            case FLUSH:
                m_dut->flush_in = 1;
                break;
        }

        // Simulate lower cache response (for simplicity).  In a real testbench,
        // this would be more complex, modeling actual memory behavior.  For
        // now, assume lower cache is always ready and provides data after a
        // delay.
        if (m_tickCount > 5) {  // Add a small delay
            m_dut->lc_valid_in = 1;
            m_dut->lc_addr_in = txn.addr;
            if (txn.op == READ) {
                m_dut->lc_value_in = m_memoryModel[txn.addr];
            } else {
                m_dut->lc_value_in = txn.value;
            }
        }
        tick();
        m_dut->lsu_valid_in = 0;  // deassert
        m_dut->flush_in = 0;
        m_dut->lc_valid_in = 0;
        if (m_dut->lsu_ready_out) {
            m_pendingTransactions.erase(m_pendingTransactions.begin());
        }
    }

    void checkOutputs() {
        if (m_dut->lsu_valid_out) {
            uint64_t addr = m_dut->lsu_addr_out;
            uint64_t value = m_dut->lsu_value_out;
            std::cout << "LSU: Cycle " << m_tickCount << ": ";
            if (m_dut->lsu_we_in)
                std::cout << "Write Complete to addr 0x" << std::hex << addr
                          << ", value 0x" << value << std::endl;
            else
                std::cout << "Read data 0x" << value << " from addr 0x" << addr
                          << std::endl;

            // Basic data checking (optional, depending on test)
            if (m_pendingTransactions.front().op == READ) {
                if (value != m_memoryModel[addr])
                    std::cout << "  ERROR: Data mismatch!" << std::endl;
                else
                    std::cout << "  Data matches." << std::endl;
            }
        }
        m_dut->lsu_ready_in = 1;  // lsu is always ready
    }

    uint64_t randomAddr() {
        std::uniform_int_distribution<uint64_t> dist(0,
                                                     (1ULL << PADDR_BITS) - 1);
        return dist(m_rng);
    }

    uint64_t randomValue() {
        std::uniform_int_distribution<uint64_t> dist(0, UINT64_MAX);
        return dist(m_rng);
    }

    void runRandomTest(int num_operations) {
        std::uniform_int_distribution<int> op_dist(0, 1);  // 0: read, 1: write

        for (int i = 0; i < num_operations; i++) {
            uint64_t addr = randomAddr();
            uint64_t value = randomValue();

            int op = op_dist(m_rng);
            if (op == 0) {
                read(addr);
                std::cout << "Read  address: " << addr
                          << " at time: " << m_tickCount << std::endl;
            } else {
                write(addr, value);
                std::cout << "Write address: " << addr << " value: " << value
                          << " at time: " << m_tickCount << std::endl;
            }

            int cycles = 1 + (m_rng() % 3);  // Run for a few cycles
            for (int j = 0; j < cycles; j++) {
                driveInputs();
                tick();
                checkOutputs();
            }
        }
    }

    void runSequentialTest(int num_operations) {
        uint64_t start_addr = 0x100;  // Start address
        for (int i = 0; i < num_operations; ++i) {
            uint64_t addr =
                start_addr + i * 8;  // Increment by word size (8 bytes)
            uint64_t value = i;

            if (i % 2 == 0) {
                write(addr, value);
                std::cout << "Write address: " << addr << " value: " << value
                          << " at time: " << m_tickCount << std::endl;

            } else {
                read(addr);
                std::cout << "Read  address: " << addr
                          << " at time: " << m_tickCount << std::endl;
            }

            for (int j = 0; j < 3; ++j) {  // Execute for a few cycles
                driveInputs();
                tick();
                checkOutputs();
            }
        }
    }

    void runFlushTest() {
        // fill the cache
        for (int i = 0; i < 10; i++) {
            uint64_t addr = i * 64;
            uint64_t value = i;
            write(addr, value);
            for (int j = 0; j < 2; j++) {
                driveInputs();
                tick();
                checkOutputs();
            }
        }
        // flush the cache
        flush();
        for (int j = 0; j < 5; j++) {
            driveInputs();
            tick();
            checkOutputs();
        }

        // read the cache
        for (int i = 0; i < 10; i++) {
            uint64_t addr = i * 64;
            read(addr);
            for (int j = 0; j < 2; j++) {
                driveInputs();
                tick();
                checkOutputs();
            }
        }
    }

    void finalize() {
        std::cout << "Finalizing..." << std::endl;
        while (!m_pendingTransactions.empty()) {
            driveInputs();
            tick();
            checkOutputs();
        }
        std::cout << "Simulation complete after " << m_tickCount << " cycles."
                  << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    TestBench tb;
    if (ENABLE_WAVES) {
        tb.openTrace("l1_data_cache_tb.vcd");  // change the tracefile name
    }

    tb.reset();

    // Run tests
    std::cout << "Running random test..." << std::endl;
    tb.runRandomTest(100);
    std::cout << "Running sequential test..." << std::endl;
    tb.runSequentialTest(100);
    std::cout << "Running flush test..." << std::endl;
    tb.runFlushTest();

    tb.finalize();

    return 0;
}
