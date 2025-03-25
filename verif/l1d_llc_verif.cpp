// #include "Vl1_data_cache.h"
// #include "Vlast_level_cache.h"
#include <bitset>
#include <cassert>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <random>
#include <string>
#include <vector>

#include "verilated.h"
#include "verilated_vcd_c.h"

// Constants for L1D cache parameters
constexpr int L1D_A = 3;            // Associativity
constexpr int L1D_B = 64;           // Block size in bytes
constexpr int L1D_C = 1536;         // Cache size in bytes
constexpr int L1D_PADDR_BITS = 19;  // Physical address bits
constexpr int L1D_MSHR_COUNT = 4;   // Miss Status Holding Register count
constexpr int L1D_TAG_BITS = 10;    // Tag bits

// Constants for LLC parameters
constexpr int LLC_A = 8;
constexpr int LLC_B = 64;
constexpr int LLC_C = 16384;
constexpr int LLC_PADDR_BITS = 19;
constexpr int LLC_W = 64;
constexpr int LLC_CAS_LATENCY = 22;
constexpr int LLC_ACTIVATION_LATENCY = 8;
constexpr int LLC_PRECHARGE_LATENCY = 5;
constexpr int LLC_ROW_BITS = 8;
constexpr int LLC_COL_BITS = 4;
constexpr int LLC_BUS_WIDTH = 16;
constexpr int LLC_BANK_GROUPS = 2;
constexpr int LLC_BANKS_PER_GROUP = 4;

// Forward declarations
class L1DataCache;
class LastLevelCache;

// Cache line structure
struct CacheLine {
    bool valid;
    bool dirty;
    uint32_t tag;
    std::vector<uint8_t> data;

    CacheLine(int block_size)
        : valid(false), dirty(false), tag(0), data(block_size, 0) {}
};

// Memory model for testing
class MemoryModel {
   private:
    std::map<uint32_t, uint8_t> memory;

   public:
    void write(uint32_t addr, const std::vector<uint8_t>& data) {
        for (size_t i = 0; i < data.size(); i++) {
            memory[addr + i] = data[i];
        }
    }

    void read(uint32_t addr, std::vector<uint8_t>& data) {
        for (size_t i = 0; i < data.size(); i++) {
            data[i] = memory.count(addr + i) ? memory[addr + i] : 0;
        }
    }
};

// Testbench class
class L1DLLCTB {
   private:
    // Clock and reset
    bool clk;
    bool rst_N;

    // L1D cache interface inputs
    bool l1d_cs_N_in;
    bool l1d_flush_in;
    bool l1d_lsu_valid_in;
    bool l1d_lsu_ready_in;
    uint64_t l1d_lsu_addr_in;
    uint64_t l1d_lsu_value_in;
    uint16_t l1d_lsu_tag_in;
    bool l1d_lsu_we_in;

    // L1D cache interface outputs
    bool l1d_lsu_valid_out;
    bool l1d_lsu_ready_out;
    uint64_t l1d_lsu_addr_out;
    uint64_t l1d_lsu_value_out;
    bool l1d_lsu_write_complete_out;

    // Internal signals for L1D->LLC communication
    bool l1d_lc_valid_out;
    bool l1d_lc_ready_out;
    uint32_t l1d_lc_addr_out;
    std::vector<uint8_t> l1d_lc_value_out;
    bool l1d_lc_we_out;

    // Internal signals for LLC->L1D communication
    bool llc_hc_valid_out;
    bool llc_hc_ready_out;
    uint32_t llc_hc_addr_out;
    uint64_t llc_hc_value_out;
    std::vector<uint8_t> llc_hc_line_out;

    // Memory bus signals
    std::vector<uint8_t> llc_mem_bus_value_io;
    uint32_t llc_mem_bus_addr_out;
    bool llc_mem_bus_ready_out;
    bool llc_mem_bus_valid_out;

    // Test control
    bool test_done;
    int test_count;
    int total_tests;
    std::vector<std::string> test_results;

    // DUT instances
    std::unique_ptr<L1DataCache> l1d;
    std::unique_ptr<LastLevelCache> llc;

    // Memory model
    std::shared_ptr<MemoryModel> memory;

    // Simulation time
    uint64_t current_time;

    // Random number generator
    std::mt19937 rng;

   public:
    // Constructor
    L1DLLCTB();

    // Initialize the DUT instances
    void initDuts();

    // Clock generation
    void tick();
    void waitPosEdge(int cycles = 1);

    // Reset the testbench
    void reset();

    // Issue a read request to L1D
    void issueRead(uint64_t addr, uint16_t tag);

    // Issue a write request to L1D
    void issueWrite(uint64_t addr, uint64_t value, uint16_t tag);

    // Wait for a read response from L1D
    bool waitForReadResponse(uint64_t& value, int timeout = 1000);

    // Wait for a write confirmation
    bool waitForWriteComplete(int timeout = 1000);

    // Generate a random test address
    uint64_t generateAddress();

    // Evaluate the DUTs (update internal state)
    void evaluateDuts();

    // Test cases
    void runSimpleReadTest();
    void runSimpleWriteTest();
    void runReadAfterWriteTest();
    void runConsecutiveReadsTest();
    void runConsecutiveWritesTest();
    void runCacheMissTest();
    void runReadModifyWriteTest();
    void runRandomAccessTest();
    void runAddressMappingTest();
    void runBoundaryTest();

    // Run all tests
    void runTests();

    // Report test results
    void reportResults();
};

// L1 Data Cache model
class L1DataCache {
   private:
    // Cache parameters
    int associativity;
    int block_size;
    int cache_size;
    int num_sets;
    int paddr_bits;
    int mshr_count;
    int tag_bits;

    // Cache structure
    std::vector<std::vector<CacheLine>> cache_sets;

    // LRU counters (one per way per set)
    std::vector<std::vector<int>> lru_counters;

    // MSHR (Miss Status Holding Register)
    struct MSHR_Entry {
        bool valid;
        uint32_t addr;
        uint16_t tag;
        bool is_write;
        uint64_t write_value;
    };
    std::vector<MSHR_Entry> mshr;

    // Cache line replacement policy (simple LRU)
    int findVictim(int set_index);
    void updateLRU(int set_index, int way);

    // Find a cache line by tag
    int findLine(int set_index, uint32_t tag);

    // Calculate set index from address
    int getSetIndex(uint64_t addr) {
        return (addr >> 6) % num_sets;  // Assuming 64-byte blocks
    }

    // Calculate tag from address
    uint32_t getTag(uint64_t addr) {
        return (addr >> (6 + log2(num_sets)));  // Assuming 64-byte blocks
    }

    // Helper function for log2
    int log2(int value) {
        int result = 0;
        while (value >>= 1) result++;
        return result;
    }

   public:
    // Constructor
    L1DataCache(int a, int b, int c, int paddr_bits, int mshr_count,
                int tag_bits);

    // Single cycle update method
    void evaluate(
        // Inputs
        bool clk, bool rst_N, bool cs_N_in, bool flush_in, bool lsu_valid_in,
        bool lsu_ready_in, uint64_t lsu_addr_in, uint64_t lsu_value_in,
        uint16_t lsu_tag_in, bool lsu_we_in, bool lc_ready_in, bool lc_valid_in,
        uint32_t lc_addr_in, const std::vector<uint8_t>& lc_value_in,

        // Outputs (passed by reference)
        bool& lsu_valid_out, bool& lsu_ready_out, uint64_t& lsu_addr_out,
        uint64_t& lsu_value_out, bool& lsu_write_complete_out,
        bool& lc_valid_out, bool& lc_ready_out, uint32_t& lc_addr_out,
        std::vector<uint8_t>& lc_value_out, bool& lc_we_out);
};

// Last Level Cache model
class LastLevelCache {
   private:
    // Cache parameters
    int associativity;
    int block_size;
    int cache_size;
    int num_sets;
    int paddr_bits;
    int w;
    int cas_latency;
    int activation_latency;
    int precharge_latency;
    int row_bits;
    int col_bits;
    int bus_width;
    int bank_groups;
    int banks_per_group;

    // Cache structure
    std::vector<std::vector<CacheLine>> cache_sets;

    // LRU counters (one per way per set)
    std::vector<std::vector<int>> lru_counters;

    // Memory interface
    std::shared_ptr<MemoryModel> memory;

    // DRAM access state
    enum class DRAMState { IDLE, ACTIVATING, READING, WRITING, PRECHARGING };
    DRAMState dram_state;
    int dram_counter;
    uint32_t pending_addr;
    bool pending_is_write;

    // Cache line replacement policy (simple LRU)
    int findVictim(int set_index);
    void updateLRU(int set_index, int way);

    // Find a cache line by tag
    int findLine(int set_index, uint32_t tag);

    // Calculate set index from address
    int getSetIndex(uint64_t addr) {
        return (addr >> 6) % num_sets;  // Assuming 64-byte blocks
    }

    // Calculate tag from address
    uint32_t getTag(uint64_t addr) {
        return (addr >> (6 + log2(num_sets)));  // Assuming 64-byte blocks
    }

    // Helper function for log2
    int log2(int value) {
        int result = 0;
        while (value >>= 1) result++;
        return result;
    }

   public:
    // Constructor
    LastLevelCache(int a, int b, int c, int paddr_bits, int w, int cas_latency,
                   int activation_latency, int precharge_latency, int row_bits,
                   int col_bits, int bus_width, int bank_groups,
                   int banks_per_group, std::shared_ptr<MemoryModel> mem_model);

    // Single cycle update method
    void evaluate(
        // Inputs
        bool clk, bool rst_N, bool cs_in, bool flush_in, bool hc_valid_in,
        bool hc_ready_in, uint32_t hc_addr_in, uint64_t hc_value_in,
        bool hc_we_in, const std::vector<uint8_t>& hc_line_in, bool hc_cl_in,

        // Outputs (passed by reference)
        bool& hc_valid_out, bool& hc_ready_out, uint32_t& hc_addr_out,
        uint64_t& hc_value_out, std::vector<uint8_t>& hc_line_out,
        bool& mem_bus_ready_out, bool& mem_bus_valid_out,
        uint32_t& mem_bus_addr_out, std::vector<uint8_t>& mem_bus_value_io);
};

// Implementation of L1DataCache constructor
L1DataCache::L1DataCache(int a, int b, int c, int paddr_bits, int mshr_count,
                         int tag_bits)
    : associativity(a),
      block_size(b),
      cache_size(c),
      paddr_bits(paddr_bits),
      mshr_count(mshr_count),
      tag_bits(tag_bits) {
    // Calculate number of sets
    num_sets = cache_size / (associativity * block_size);

    // Initialize cache structure
    cache_sets.resize(
        num_sets, std::vector<CacheLine>(associativity, CacheLine(block_size)));

    // Initialize LRU counters
    lru_counters.resize(num_sets, std::vector<int>(associativity, 0));

    // Initialize MSHR
    mshr.resize(mshr_count);
    for (auto& entry : mshr) {
        entry.valid = false;
    }

    std::cout << "L1D Cache initialized: " << num_sets << " sets, "
              << associativity << "-way, " << block_size << " bytes per block"
              << std::endl;
}

// Implementation of LastLevelCache constructor
LastLevelCache::LastLevelCache(int a, int b, int c, int paddr_bits, int w,
                               int cas_latency, int activation_latency,
                               int precharge_latency, int row_bits,
                               int col_bits, int bus_width, int bank_groups,
                               int banks_per_group,
                               std::shared_ptr<MemoryModel> mem_model)
    : associativity(a),
      block_size(b),
      cache_size(c),
      paddr_bits(paddr_bits),
      w(w),
      cas_latency(cas_latency),
      activation_latency(activation_latency),
      precharge_latency(precharge_latency),
      row_bits(row_bits),
      col_bits(col_bits),
      bus_width(bus_width),
      bank_groups(bank_groups),
      banks_per_group(banks_per_group),
      memory(mem_model),
      dram_state(DRAMState::IDLE),
      dram_counter(0),
      pending_addr(0),
      pending_is_write(false) {
    // Calculate number of sets
    num_sets = cache_size / (associativity * block_size);

    // Initialize cache structure
    cache_sets.resize(
        num_sets, std::vector<CacheLine>(associativity, CacheLine(block_size)));

    // Initialize LRU counters
    lru_counters.resize(num_sets, std::vector<int>(associativity, 0));

    std::cout << "LLC initialized: " << num_sets << " sets, " << associativity
              << "-way, " << block_size << " bytes per block" << std::endl;
}

// Implementation of L1DLLCTB constructor
L1DLLCTB::L1DLLCTB()
    : clk(false),
      rst_N(false),
      l1d_cs_N_in(false),
      l1d_flush_in(false),
      l1d_lsu_valid_in(false),
      l1d_lsu_ready_in(false),
      l1d_lsu_addr_in(0),
      l1d_lsu_value_in(0),
      l1d_lsu_tag_in(0),
      l1d_lsu_we_in(false),
      l1d_lsu_valid_out(false),
      l1d_lsu_ready_out(false),
      l1d_lsu_addr_out(0),
      l1d_lsu_value_out(0),
      l1d_lsu_write_complete_out(false),
      l1d_lc_valid_out(false),
      l1d_lc_ready_out(false),
      l1d_lc_addr_out(0),
      l1d_lc_we_out(false),
      llc_hc_valid_out(false),
      llc_hc_ready_out(false),
      llc_hc_addr_out(0),
      llc_hc_value_out(0),
      llc_mem_bus_addr_out(0),
      llc_mem_bus_ready_out(false),
      llc_mem_bus_valid_out(false),
      test_done(false),
      test_count(0),
      total_tests(0),
      current_time(0),
      rng(std::random_device{}()) {
    // Initialize vector sizes
    l1d_lc_value_out.resize(L1D_B, 0);
    llc_hc_line_out.resize(LLC_B, 0);
    llc_mem_bus_value_io.resize(LLC_W / 8, 0);

    // Create memory model
    memory = std::make_shared<MemoryModel>();

    // Create DUT instances
    initDuts();
}

// Implementation of initDuts method
void L1DLLCTB::initDuts() {
    // Create the L1 Data Cache
    l1d = std::make_unique<L1DataCache>(L1D_A, L1D_B, L1D_C, L1D_PADDR_BITS,
                                        L1D_MSHR_COUNT, L1D_TAG_BITS);

    // Create the Last Level Cache
    llc = std::make_unique<LastLevelCache>(
        LLC_A, LLC_B, LLC_C, LLC_PADDR_BITS, LLC_W, LLC_CAS_LATENCY,
        LLC_ACTIVATION_LATENCY, LLC_PRECHARGE_LATENCY, LLC_ROW_BITS,
        LLC_COL_BITS, LLC_BUS_WIDTH, LLC_BANK_GROUPS, LLC_BANKS_PER_GROUP,
        memory);
}

// Implementation of tick method
void L1DLLCTB::tick() {
    // Toggle clock
    clk = !clk;
    current_time++;

    if (clk) {  // positive edge
        // Update DUT state on positive edge
        evaluateDuts();

        // Monitor signals for debugging
        // if (l1d_lsu_valid_out) {
        //     std::cout << "Time " << current_time << ": L1D LSU Valid Out: "
        //               << (l1d_lsu_valid_out ? "1" : "0") << std::endl;
        // }

        // if (llc_hc_valid_out) {
        //     std::cout << "Time " << current_time << ": LLC HC Valid Out: "
        //               << (llc_hc_valid_out ? "1" : "0") << std::endl;
        // }
    }
}

// Implementation of waitPosEdge method
void L1DLLCTB::waitPosEdge(int cycles) {
    for (int i = 0; i < cycles; i++) {
        if (clk) tick();  // Make sure we're on negative edge
        tick();           // Go to positive edge
    }
}

// Implementation of reset method
void L1DLLCTB::reset() {
    rst_N = false;
    l1d_cs_N_in = true;  // Cache select inactive
    l1d_flush_in = false;
    l1d_lsu_valid_in = false;
    l1d_lsu_ready_in = true;
    l1d_lsu_addr_in = 0;
    l1d_lsu_value_in = 0;
    l1d_lsu_tag_in = 0;
    l1d_lsu_we_in = false;

    // Apply reset for a few cycles
    waitPosEdge(3);

    // Release reset
    rst_N = true;
    l1d_cs_N_in = false;  // Enable cache

    waitPosEdge();
}

// Implementation of issueRead method
void L1DLLCTB::issueRead(uint64_t addr, uint16_t tag) {
    // Wait for L1D to be ready to accept requests
    while (!l1d_lsu_ready_out) {
        waitPosEdge();
    }

    std::cout << "Time " << current_time << ": Issuing READ request - "
              << "Address: 0x" << std::hex << addr << ", Tag: 0x" << tag
              << std::dec << std::endl;

    l1d_lsu_valid_in = true;
    l1d_lsu_addr_in = addr;
    l1d_lsu_tag_in = tag;
    l1d_lsu_we_in = false;  // Read operation

    waitPosEdge();

    l1d_lsu_valid_in = false;
}

// Implementation of issueWrite method
void L1DLLCTB::issueWrite(uint64_t addr, uint64_t value, uint16_t tag) {
    // Wait for L1D to be ready to accept requests
    while (!l1d_lsu_ready_out) {
        waitPosEdge();
    }

    std::cout << "Time " << current_time << ": Issuing WRITE request - "
              << "Address: 0x" << std::hex << addr << ", Value: 0x" << value
              << ", Tag: 0x" << tag << std::dec << std::endl;

    l1d_lsu_valid_in = true;
    l1d_lsu_addr_in = addr;
    l1d_lsu_value_in = value;
    l1d_lsu_tag_in = tag;
    l1d_lsu_we_in = true;  // Write operation

    waitPosEdge();

    l1d_lsu_valid_in = false;
}

// Implementation of waitForReadResponse method
bool L1DLLCTB::waitForReadResponse(uint64_t& value, int timeout) {
    int cycles_waited = 0;
    bool response_received = false;

    while (cycles_waited < timeout && !response_received) {
        waitPosEdge();
        cycles_waited++;

        if (l1d_lsu_valid_out) {
            value = l1d_lsu_value_out;
            std::cout << "Time " << current_time
                      << ": Read response received - "
                      << "Value: 0x" << std::hex << value << std::dec
                      << std::endl;
            response_received = true;

            // ACK the response
            l1d_lsu_ready_in = true;
            waitPosEdge();
            l1d_lsu_ready_in = false;
        }

        if (cycles_waited % 100 == 0 && !response_received) {
            std::cout << "Time " << current_time
                      << ": Still waiting for read response... "
                      << cycles_waited << " cycles elapsed" << std::endl;
        }
    }

    if (!response_received) {
        std::cout << "Time " << current_time
                  << ": TIMEOUT waiting for read response!" << std::endl;
    }

    return response_received;
}

// Implementation of waitForWriteComplete method
bool L1DLLCTB::waitForWriteComplete(int timeout) {
    int cycles_waited = 0;
    bool write_completed = false;

    while (cycles_waited < timeout && !write_completed) {
        waitPosEdge();
        cycles_waited++;

        if (l1d_lsu_write_complete_out) {
            std::cout << "Time " << current_time
                      << ": Write completion received" << std::endl;
            write_completed = true;
        }

        if (cycles_waited % 100 == 0 && !write_completed) {
            std::cout << "Time " << current_time
                      << ": Still waiting for write completion... "
                      << cycles_waited << " cycles elapsed" << std::endl;
        }
    }

    if (!write_completed) {
        std::cout << "Time " << current_time
                  << ": TIMEOUT waiting for write completion!" << std::endl;
    }

    return write_completed;
}

// Implementation of generateAddress method
uint64_t L1DLLCTB::generateAddress() {
    std::uniform_int_distribution<uint64_t> dist(0,
                                                 (1UL << L1D_PADDR_BITS) - 1);
    uint64_t addr = dist(rng);
    // Align to 8-byte boundary
    addr &= ~7UL;
    return addr;
}

// Implementation of evaluateDuts method
void L1DLLCTB::evaluateDuts() {
    if (l1d && llc) {
        // Vectors need to be initialized with proper sizes
        std::vector<uint8_t> lc_value_in(L1D_B, 0);

        // Evaluate L1D cache
        l1d->evaluate(clk, rst_N, l1d_cs_N_in, l1d_flush_in, l1d_lsu_valid_in,
                      l1d_lsu_ready_in, l1d_lsu_addr_in, l1d_lsu_value_in,
                      l1d_lsu_tag_in, l1d_lsu_we_in, llc_hc_ready_out,
                      llc_hc_valid_out, llc_hc_addr_out, lc_value_in,

                      l1d_lsu_valid_out, l1d_lsu_ready_out, l1d_lsu_addr_out,
                      l1d_lsu_value_out, l1d_lsu_write_complete_out,
                      l1d_lc_valid_out, l1d_lc_ready_out, l1d_lc_addr_out,
                      l1d_lc_value_out, l1d_lc_we_out);

        // Capture intermediate signals for LLC
        bool llc_cs_in = true;  // LLC is always enabled in this testbench
        bool llc_flush_in = l1d_flush_in;
        bool llc_hc_cl_in = false;  // This signal is unused in the testbench

        // Evaluate LLC cache
        llc->evaluate(
            clk, rst_N, llc_cs_in, llc_flush_in, l1d_lc_valid_out,
            l1d_lc_ready_out, l1d_lc_addr_out, 0,  // hc_value_in is unused
            l1d_lc_we_out, l1d_lc_value_out, llc_hc_cl_in,

            llc_hc_valid_out, llc_hc_ready_out, llc_hc_addr_out,
            llc_hc_value_out, llc_hc_line_out, llc_mem_bus_ready_out,
            llc_mem_bus_valid_out, llc_mem_bus_addr_out, llc_mem_bus_value_io);
    }
}

// Implementation of test cases

void L1DLLCTB::runSimpleReadTest() {
    std::cout << "\n=== Test 1: Simple Read Test ===" << std::endl;
    total_tests++;

    uint64_t addr = 0x1000;
    uint16_t tag = 0x1;
    uint64_t readValue = 0;

    issueRead(addr, tag);
    bool success = waitForReadResponse(readValue);

    if (success) {
        std::cout << "Test 1: Read successful, value: 0x" << std::hex
                  << readValue << std::dec << std::endl;
        test_count++;
        test_results.push_back("Simple Read Test: PASS");
    } else {
        test_results.push_back("Simple Read Test: FAIL - Read timeout");
    }
}

void L1DLLCTB::runSimpleWriteTest() {
    std::cout << "\n=== Test 2: Simple Write Test ===" << std::endl;
    total_tests++;

    uint64_t addr = 0x2000;
    uint16_t tag = 0x2;
    uint64_t writeValue = 0xDEADBEEFCAFEBAAF;

    issueWrite(addr, writeValue, tag);
    bool success = waitForWriteComplete();

    if (success) {
        std::cout << "Test 2: Write successful" << std::endl;
        test_count++;
        test_results.push_back("Simple Write Test: PASS");
    } else {
        test_results.push_back("Simple Write Test: FAIL - Write timeout");
    }
}

void L1DLLCTB::runReadAfterWriteTest() {
    std::cout << "\n=== Test 3: Read After Write Test ===" << std::endl;
    total_tests++;

    uint64_t addr = 0x2000;
    uint16_t tag = 0x2;
    uint64_t writeValue = 0xDEADBEEFCAFEBAAF;
    uint64_t readValue = 0;

    // Write then read from the same address
    issueWrite(addr, writeValue, tag);
    bool writeSuccess = waitForWriteComplete();

    if (writeSuccess) {
        issueRead(addr, tag);
        bool readSuccess = waitForReadResponse(readValue);

        if (readSuccess) {
            std::cout << "Test 3: Read after write, value: 0x" << std::hex
                      << readValue << std::dec << std::endl;
            if (readValue == writeValue) {
                std::cout << "Test 3: Read value matches written value - PASS"
                          << std::endl;
                test_count++;
                test_results.push_back("Read After Write Test: PASS");
            } else {
                test_results.push_back(
                    "Read After Write Test: FAIL - Value mismatch");
            }
        } else {
            test_results.push_back(
                "Read After Write Test: FAIL - Read timeout");
        }
    } else {
        test_results.push_back("Read After Write Test: FAIL - Write timeout");
    }
}

void L1DLLCTB::runConsecutiveReadsTest() {
    std::cout << "\n=== Test 4: Multiple Consecutive Reads Test ==="
              << std::endl;
    total_tests++;

    const int NUM_READS = 5;
    uint64_t addr = 0x3000;
    bool all_reads_successful = true;
    uint64_t readValue;

    for (int i = 0; i < NUM_READS; i++) {
        std::cout << "Starting read " << (i + 1) << " of " << NUM_READS
                  << std::endl;
        issueRead(addr + i * 8, 0x30 + i);  // 8-byte offsets, different tags
        bool success = waitForReadResponse(readValue);

        if (!success) {
            std::cout << "Read " << (i + 1) << " failed!" << std::endl;
            all_reads_successful = false;
            break;
        }

        std::cout << "Read " << (i + 1) << " successful, value: 0x" << std::hex
                  << readValue << std::dec << std::endl;
    }

    if (all_reads_successful) {
        std::cout << "Test 4: All consecutive reads successful - PASS"
                  << std::endl;
        test_count++;
        test_results.push_back("Consecutive Reads Test: PASS");
    } else {
        test_results.push_back("Consecutive Reads Test: FAIL - Read failed");
    }
}

void L1DLLCTB::runConsecutiveWritesTest() {
    std::cout << "\n=== Test 5: Multiple Consecutive Writes Test ==="
              << std::endl;
    total_tests++;

    const int NUM_WRITES = 5;
    uint64_t addr = 0x4000;
    bool all_writes_successful = true;

    for (int i = 0; i < NUM_WRITES; i++) {
        std::cout << "Starting write " << (i + 1) << " of " << NUM_WRITES
                  << std::endl;
        issueWrite(addr + i * 8, 0xAAAAAAAA0000BBBB + i, 0x40 + i);
        bool success = waitForWriteComplete();

        if (!success) {
            std::cout << "Write " << (i + 1) << " failed!" << std::endl;
            all_writes_successful = false;
            break;
        }

        std::cout << "Write " << (i + 1) << " successful" << std::endl;
    }

    if (all_writes_successful) {
        std::cout << "Test 5: All consecutive writes successful - PASS"
                  << std::endl;
        test_count++;
        test_results.push_back("Consecutive Writes Test: PASS");
    } else {
        test_results.push_back("Consecutive Writes Test: FAIL - Write failed");
    }
}

void L1DLLCTB::runCacheMissTest() {
    std::cout << "\n=== Test 6: Cache Miss Test ===" << std::endl;
    total_tests++;

    // Choose addresses in different cache sets to cause misses
    uint64_t addr1 = 0x10000;
    uint64_t addr2 = 0x20000;
    uint64_t addr3 = 0x30000;
    uint64_t readValue;

    // Read from addr1
    issueRead(addr1, 0x50);
    bool success1 =
        waitForReadResponse(readValue, 2000);  // Longer timeout for cache miss

    if (!success1) {
        test_results.push_back("Cache Miss Test: FAIL - First read timeout");
        return;
    }

    // Read from addr2
    issueRead(addr2, 0x51);
    bool success2 = waitForReadResponse(readValue, 2000);

    if (!success2) {
        test_results.push_back("Cache Miss Test: FAIL - Second read timeout");
        return;
    }

    // Read from addr3
    issueRead(addr3, 0x52);
    bool success3 = waitForReadResponse(readValue, 2000);

    if (success1 && success2 && success3) {
        std::cout << "Test 6: Cache miss handling successful - PASS"
                  << std::endl;
        test_count++;
        test_results.push_back("Cache Miss Test: PASS");
    } else {
        test_results.push_back("Cache Miss Test: FAIL - Read timeout");
    }
}

void L1DLLCTB::runReadModifyWriteTest() {
    std::cout << "\n=== Test 7: Read-Modify-Write Test ===" << std::endl;
    total_tests++;

    uint64_t addr = 0x5000;
    uint16_t tag = 0x60;
    uint64_t initialValue = 0xAABBCCDD;
    uint64_t modifiedValue;
    uint64_t readValue;

    // Write initial value
    issueWrite(addr, initialValue, tag);
    bool success = waitForWriteComplete();

    if (!success) {
        test_results.push_back(
            "Read-Modify-Write Test: FAIL - Initial write timeout");
        return;
    }

    // Read the value
    issueRead(addr, tag);
    success = waitForReadResponse(readValue);

    if (!success) {
        test_results.push_back("Read-Modify-Write Test: FAIL - Read timeout");
        return;
    }

    // Modify the value
    modifiedValue = readValue ^ 0xFFFFFFFF;  // XOR to flip bits

    // Write it back
    issueWrite(addr, modifiedValue, tag);
    success = waitForWriteComplete();

    if (!success) {
        test_results.push_back(
            "Read-Modify-Write Test: FAIL - Modified write timeout");
        return;
    }

    // Read again to verify
    issueRead(addr, tag);
    success = waitForReadResponse(readValue);

    if (success && readValue == modifiedValue) {
        std::cout << "Test 7: Read-Modify-Write successful - PASS" << std::endl;
        test_count++;
        test_results.push_back("Read-Modify-Write Test: PASS");
    } else {
        test_results.push_back(
            "Read-Modify-Write Test: FAIL - Value mismatch or read timeout");
    }
}

void L1DLLCTB::runRandomAccessTest() {
    std::cout << "\n=== Test 8: Random Access Test ===" << std::endl;
    total_tests++;

    const int NUM_OPS = 20;
    bool all_ops_successful = true;

    std::map<uint64_t, uint64_t> expected_values;

    for (int i = 0; i < NUM_OPS; i++) {
        std::cout << "Operation " << (i + 1) << " of " << NUM_OPS << std::endl;

        // Randomly decide between read and write
        bool is_write = (rng() % 2 == 0);
        uint64_t addr = generateAddress();
        uint16_t tag = rng() & 0x3FF;  // Random 10-bit tag

        if (is_write || expected_values.find(addr) == expected_values.end()) {
            // Write operation or no previous write to this address
            uint64_t value = ((uint64_t)rng() << 32) | rng();
            issueWrite(addr, value, tag);
            bool success = waitForWriteComplete();

            if (!success) {
                std::cout << "Write operation " << (i + 1) << " failed!"
                          << std::endl;
                all_ops_successful = false;
                break;
            }

            expected_values[addr] = value;
        } else {
            // Read operation
            uint64_t expected = expected_values[addr];
            uint64_t readValue;

            issueRead(addr, tag);
            bool success = waitForReadResponse(readValue);

            if (!success) {
                std::cout << "Read operation " << (i + 1) << " failed!"
                          << std::endl;
                all_ops_successful = false;
                break;
            }

            if (readValue != expected) {
                std::cout << "Read operation " << (i + 1) << " value mismatch!"
                          << std::endl;
                std::cout << "Expected: 0x" << std::hex << expected
                          << std::endl;
                std::cout << "Received: 0x" << readValue << std::dec
                          << std::endl;
                all_ops_successful = false;
                break;
            }
        }
    }

    if (all_ops_successful) {
        std::cout << "Test 8: Random access test successful - PASS"
                  << std::endl;
        test_count++;
        test_results.push_back("Random Access Test: PASS");
    } else {
        test_results.push_back("Random Access Test: FAIL - Operation failure");
    }
}

void L1DLLCTB::runAddressMappingTest() {
    std::cout << "\n=== Test 9: Address Mapping Test ===" << std::endl;
    total_tests++;

    // Test different address patterns that map to the same/different cache sets
    struct AddrTestCase {
        uint64_t addr;
        std::string description;
    };

    // Calculate bit positions for set index based on L1D cache parameters
    int l1d_set_bits = log2(L1D_C / (L1D_A * L1D_B));
    int l1d_block_offset_bits = log2(L1D_B);

    std::cout << "L1D cache: " << L1D_A << "-way, " << L1D_B << " bytes/block, "
              << (L1D_C / (L1D_A * L1D_B)) << " sets" << std::endl;
    std::cout << "Set bits start at bit " << l1d_block_offset_bits
              << " and use " << l1d_set_bits << " bits" << std::endl;

    // Create addresses that map to same/different sets
    std::vector<AddrTestCase> testAddresses = {
        {0x0000, "Base address (set 0)"},
        {0x0040, "Next block in set 0"},
        {0x0080, "Third block in set 0"},
        {uint64_t(1) << l1d_block_offset_bits, "First block in set 1"},
        {(uint64_t(1) << l1d_block_offset_bits) + 0x40,
         "Second block in set 1"},
        {(uint64_t(2) << l1d_block_offset_bits), "First block in set 2"},
    };

    // Write a unique value to each address
    for (size_t i = 0; i < testAddresses.size(); i++) {
        uint64_t addr = testAddresses[i].addr;
        uint64_t value = 0xAAAA0000 + i;

        std::cout << "Writing to " << testAddresses[i].description << " (0x"
                  << std::hex << addr << ")" << std::dec << std::endl;

        issueWrite(addr, value, i);
        bool success = waitForWriteComplete();

        if (!success) {
            test_results.push_back("Address Mapping Test: FAIL - Write failed");
            return;
        }
    }

    // Read back from each address
    bool all_reads_successful = true;

    for (size_t i = 0; i < testAddresses.size(); i++) {
        uint64_t addr = testAddresses[i].addr;
        uint64_t expected_value = 0xAAAA0000 + i;
        uint64_t readValue;

        std::cout << "Reading from " << testAddresses[i].description << " (0x"
                  << std::hex << addr << ")" << std::dec << std::endl;

        issueRead(addr, i + 0x100);  // Use different tags for reads
        bool success = waitForReadResponse(readValue);

        if (!success) {
            all_reads_successful = false;
            break;
        }

        if (readValue != expected_value) {
            std::cout << "Read value mismatch!" << std::endl;
            std::cout << "Expected: 0x" << std::hex << expected_value
                      << std::endl;
            std::cout << "Received: 0x" << readValue << std::dec << std::endl;
            all_reads_successful = false;
            break;
        }

        std::cout << "Read successful, value: 0x" << std::hex << readValue
                  << std::dec << std::endl;
    }

    if (all_reads_successful) {
        std::cout << "Test 9: Address mapping test successful - PASS"
                  << std::endl;
        test_count++;
        test_results.push_back("Address Mapping Test: PASS");
    } else {
        test_results.push_back(
            "Address Mapping Test: FAIL - Read mismatch or failure");
    }
}

void L1DLLCTB::runBoundaryTest() {
    std::cout << "\n=== Test 10: Boundary Test ===" << std::endl;
    total_tests++;

    // Test addresses at the boundaries of various caches and address spaces

    // Address at the boundary of a cache block
    uint64_t blockBoundaryAddr = L1D_B - 8;  // Last 8 bytes in first block

    // Address at the boundary of the L1D cache
    uint64_t l1dBoundaryAddr = L1D_C - 8;  // Last 8 bytes in L1D cache

    // Address at the boundary of the LLC cache
    uint64_t llcBoundaryAddr = LLC_C - 8;  // Last 8 bytes in LLC cache

    // Address at the boundary of the addressable space
    uint64_t maxAddr =
        (1ULL << L1D_PADDR_BITS) - 8;  // Last 8 bytes in address space

    // Write unique values to each address
    std::vector<std::pair<uint64_t, uint64_t>> testAddrs = {
        {blockBoundaryAddr, 0xBB00BB00BB00BB00},
        {l1dBoundaryAddr, 0xCC11CC11CC11CC11},
        {llcBoundaryAddr, 0xDD22DD22DD22DD22},
        {maxAddr, 0xEE33EE33EE33EE33}};

    bool all_tests_successful = true;

    for (const auto& test : testAddrs) {
        uint64_t addr = test.first;
        uint64_t value = test.second;
        uint64_t readValue;

        // Write to address
        std::cout << "Writing to boundary address 0x" << std::hex << addr
                  << ", value: 0x" << value << std::dec << std::endl;

        issueWrite(addr, value, 0xA0);
        bool success = waitForWriteComplete();

        if (!success) {
            all_tests_successful = false;
            break;
        }

        // Read from the same address
        issueRead(addr, 0xA1);
        success = waitForReadResponse(readValue);

        if (!success) {
            all_tests_successful = false;
            break;
        }

        if (readValue != value) {
            std::cout << "Read value mismatch at boundary address 0x"
                      << std::hex << addr << std::dec << std::endl;
            all_tests_successful = false;
            break;
        }

        std::cout << "Boundary test for address 0x" << std::hex << addr
                  << " passed" << std::dec << std::endl;
    }

    if (all_tests_successful) {
        std::cout << "Test 10: Boundary test successful - PASS" << std::endl;
        test_count++;
        test_results.push_back("Boundary Test: PASS");
    } else {
        test_results.push_back(
            "Boundary Test: FAIL - Boundary operation failed");
    }
}

// Implementation of runTests method
void L1DLLCTB::runTests() {
    std::cout << "Starting L1D-LLC Cache Tests" << std::endl;

    // Reset the test environment
    reset();

    // Run all test cases
    runSimpleReadTest();
    runSimpleWriteTest();
    runReadAfterWriteTest();
    runConsecutiveReadsTest();
    runConsecutiveWritesTest();
    runCacheMissTest();
    runReadModifyWriteTest();
    runRandomAccessTest();
    runAddressMappingTest();
    runBoundaryTest();

    // Report test results
    reportResults();

    test_done = true;
}

// Implementation of reportResults method
void L1DLLCTB::reportResults() {
    std::cout << "\n=== Test Summary ===" << std::endl;

    for (const auto& result : test_results) {
        std::cout << result << std::endl;
    }

    std::cout << "Tests passed: " << test_count << " out of " << total_tests
              << " possible tests" << std::endl;

    if (test_count == total_tests) {
        std::cout << "ALL TESTS PASSED!" << std::endl;
    } else {
        std::cout << "SOME TESTS FAILED!" << std::endl;
    }
}

// Implementation of findVictim method for L1DataCache
int L1DataCache::findVictim(int set_index) {
    // Find the least recently used way
    int victim = 0;
    int min_counter = lru_counters[set_index][0];

    for (int i = 1; i < associativity; i++) {
        if (lru_counters[set_index][i] < min_counter) {
            min_counter = lru_counters[set_index][i];
            victim = i;
        }
    }

    return victim;
}

// Implementation of updateLRU method for L1DataCache
void L1DataCache::updateLRU(int set_index, int way) {
    // Update LRU counters
    for (int i = 0; i < associativity; i++) {
        if (lru_counters[set_index][i] > lru_counters[set_index][way]) {
            lru_counters[set_index][i]--;
        }
    }

    lru_counters[set_index][way] = associativity - 1;
}

// Implementation of findLine method for L1DataCache
int L1DataCache::findLine(int set_index, uint32_t tag) {
    for (int i = 0; i < associativity; i++) {
        if (cache_sets[set_index][i].valid &&
            cache_sets[set_index][i].tag == tag) {
            return i;
        }
    }

    return -1;  // Not found
}

// Implementation of findVictim method for LastLevelCache
int LastLevelCache::findVictim(int set_index) {
    // Find the least recently used way
    int victim = 0;
    int min_counter = lru_counters[set_index][0];

    for (int i = 1; i < associativity; i++) {
        if (lru_counters[set_index][i] < min_counter) {
            min_counter = lru_counters[set_index][i];
            victim = i;
        }
    }

    return victim;
}

// Implementation of updateLRU method for LastLevelCache
void LastLevelCache::updateLRU(int set_index, int way) {
    // Update LRU counters
    for (int i = 0; i < associativity; i++) {
        if (lru_counters[set_index][i] > lru_counters[set_index][way]) {
            lru_counters[set_index][i]--;
        }
    }

    lru_counters[set_index][way] = associativity - 1;
}

// Implementation of findLine method for LastLevelCache
int LastLevelCache::findLine(int set_index, uint32_t tag) {
    for (int i = 0; i < associativity; i++) {
        if (cache_sets[set_index][i].valid &&
            cache_sets[set_index][i].tag == tag) {
            return i;
        }
    }

    return -1;  // Not found
}

// Implementation of L1DataCache evaluate method
void L1DataCache::evaluate(
    bool clk, bool rst_N, bool cs_N_in, bool flush_in, bool lsu_valid_in,
    bool lsu_ready_in, uint64_t lsu_addr_in, uint64_t lsu_value_in,
    uint16_t lsu_tag_in, bool lsu_we_in, bool lc_ready_in, bool lc_valid_in,
    uint32_t lc_addr_in, const std::vector<uint8_t>& lc_value_in,

    bool& lsu_valid_out, bool& lsu_ready_out, uint64_t& lsu_addr_out,
    uint64_t& lsu_value_out, bool& lsu_write_complete_out, bool& lc_valid_out,
    bool& lc_ready_out, uint32_t& lc_addr_out,
    std::vector<uint8_t>& lc_value_out, bool& lc_we_out) {
    // Default output values
    lsu_valid_out = false;
    lsu_ready_out = true;
    lsu_addr_out = 0;
    lsu_value_out = 0;
    lsu_write_complete_out = false;
    lc_valid_out = false;
    lc_ready_out = true;
    lc_addr_out = 0;
    lc_we_out = false;

    // Static variables to track state across cycles
    static bool pending_read = false;
    static bool pending_write = false;
    static uint64_t pending_addr = 0;
    static uint64_t pending_value = 0;
    static uint16_t pending_tag = 0;
    static int delay_counter = 0;
    static bool waiting_for_llc = false;

    // Reset logic
    if (!rst_N) {
        pending_read = false;
        pending_write = false;
        pending_addr = 0;
        pending_value = 0;
        pending_tag = 0;
        delay_counter = 0;
        waiting_for_llc = false;

        // Reset MSHR
        for (auto& entry : mshr) {
            entry.valid = false;
        }

        return;
    }

    // Cache disabled
    if (cs_N_in) {
        return;
    }

    // Simplified cache model for simulation - this doesn't model the full cache
    // behavior

    // Handle new request from LSU
    if (lsu_valid_in && lsu_ready_out && !pending_read && !pending_write &&
        !waiting_for_llc) {
        if (lsu_we_in) {
            // Write request
            pending_write = true;
            pending_addr = lsu_addr_in;
            pending_value = lsu_value_in;
            pending_tag = lsu_tag_in;
            delay_counter = 5;  // Arbitrary delay
        } else {
            // Read request
            pending_read = true;
            pending_addr = lsu_addr_in;
            pending_tag = lsu_tag_in;
            delay_counter = 10;  // Arbitrary delay
        }
    }

    // Process pending operations
    if (pending_read) {
        if (delay_counter > 0) {
            delay_counter--;
        } else {
            // Simulate cache hit/miss - randomly decide to get data from LLC
            bool cache_hit = (rand() % 4 != 0);  // 75% hit rate

            if (cache_hit) {
                // Cache hit - return data
                lsu_valid_out = true;
                lsu_addr_out = pending_addr;
                lsu_value_out = 0xCAFEBABEDEADBEEF;  // Dummy value

                if (lsu_ready_in) {
                    pending_read = false;
                }
            } else if (!waiting_for_llc) {
                // Cache miss - request from LLC
                lc_valid_out = true;
                lc_addr_out = pending_addr & ((1 << paddr_bits) -
                                              1);  // Truncate to paddr_bits
                lc_we_out = false;
                waiting_for_llc = true;
            }
        }
    } else if (pending_write) {
        if (delay_counter > 0) {
            delay_counter--;
        } else {
            // Complete write
            lsu_write_complete_out = true;
            pending_write = false;
        }
    }

    // Handle response from LLC
    if (lc_valid_in && waiting_for_llc) {
        waiting_for_llc = false;

        // Forward data to LSU
        lsu_valid_out = true;
        lsu_addr_out = pending_addr;
        lsu_value_out = 0xDEADC0DE12345678;  // Dummy value

        if (lsu_ready_in) {
            pending_read = false;
        }
    }

    // Set lsu_ready_out based on state
    lsu_ready_out = !pending_read && !pending_write && !waiting_for_llc;
}

// Implementation of LastLevelCache evaluate method
void LastLevelCache::evaluate(
    bool clk, bool rst_N, bool cs_in, bool flush_in, bool hc_valid_in,
    bool hc_ready_in, uint32_t hc_addr_in, uint64_t hc_value_in, bool hc_we_in,
    const std::vector<uint8_t>& hc_line_in, bool hc_cl_in,

    bool& hc_valid_out, bool& hc_ready_out, uint32_t& hc_addr_out,
    uint64_t& hc_value_out, std::vector<uint8_t>& hc_line_out,
    bool& mem_bus_ready_out, bool& mem_bus_valid_out,
    uint32_t& mem_bus_addr_out, std::vector<uint8_t>& mem_bus_value_io) {
    // Default output values
    hc_valid_out = false;
    hc_ready_out = true;
    hc_addr_out = 0;
    hc_value_out = 0;
    mem_bus_ready_out = true;
    mem_bus_valid_out = false;
    mem_bus_addr_out = 0;

    // Reset logic
    if (!rst_N) {
        dram_state = DRAMState::IDLE;
        dram_counter = 0;
        pending_addr = 0;
        pending_is_write = false;
        return;
    }

    // Cache disabled
    if (!cs_in) {
        return;
    }

    // DRAM state machine
    switch (dram_state) {
        case DRAMState::IDLE:
            if (hc_valid_in && hc_ready_out) {
                // Start DRAM access
                pending_addr = hc_addr_in;
                pending_is_write = hc_we_in;
                dram_state = DRAMState::ACTIVATING;
                dram_counter = activation_latency;
            }
            break;

        case DRAMState::ACTIVATING:
            if (dram_counter > 0) {
                dram_counter--;
            } else {
                if (pending_is_write) {
                    dram_state = DRAMState::WRITING;
                    dram_counter = cas_latency;

                    // Write data to memory
                    memory->write(pending_addr, hc_line_in);
                } else {
                    dram_state = DRAMState::READING;
                    dram_counter = cas_latency;
                }
            }
            break;

        case DRAMState::READING:
            if (dram_counter > 0) {
                dram_counter--;
            } else {
                // Read data from memory
                memory->read(pending_addr, hc_line_out);

                // Send data to higher cache
                hc_valid_out = true;
                hc_addr_out = pending_addr;
                hc_value_out = 0x12345678ABCDEF;  // Dummy value

                if (hc_ready_in) {
                    dram_state = DRAMState::PRECHARGING;
                    dram_counter = precharge_latency;
                }
            }
            break;

        case DRAMState::WRITING:
            if (dram_counter > 0) {
                dram_counter--;
            } else {
                dram_state = DRAMState::PRECHARGING;
                dram_counter = precharge_latency;
            }
            break;

        case DRAMState::PRECHARGING:
            if (dram_counter > 0) {
                dram_counter--;
            } else {
                dram_state = DRAMState::IDLE;
            }
            break;
    }

    // Set hc_ready_out based on state
    hc_ready_out = (dram_state == DRAMState::IDLE);
}

// Main function
int main() {
    L1DLLCTB testbench;
    testbench.runTests();
    return 0;
}