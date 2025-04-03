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

// Testbench class
class L1DLSUVerif {
private:
    // Clock and reset
    bool clk;
    bool rst_N;
    bool cs_N;

    // Processor Instruction Interface
    bool lsu_proc_instr_valid;
    uint16_t lsu_proc_instr_tag;
    bool lsu_proc_instr_is_write;
    bool lsu_proc_instr_ready;

    // Processor Data Interface
    bool lsu_proc_data_valid;
    uint16_t lsu_proc_data_tag;
    uint64_t lsu_proc_addr;
    uint64_t lsu_proc_value;
    bool lsu_proc_data_ready;

    // Completion Interface
    bool lsu_completion_valid;
    uint64_t lsu_completion_value;
    uint16_t lsu_completion_tag;

    // Test control
    bool test_done;
    int test_count;
    int total_tests;
    std::vector<std::string> test_results;

    // Simulation time
    uint64_t current_time;

    // Random number generator
    std::mt19937 rng;

    // Memory model for verification
    std::map<uint64_t, uint64_t> memory;

public:
    // Constructor
    L1DLSUVerif() : clk(false),
                    rst_N(false),
                    cs_N(false),
                    lsu_proc_instr_valid(false),
                    lsu_proc_instr_tag(0),
                    lsu_proc_instr_is_write(false),
                    lsu_proc_instr_ready(false),
                    lsu_proc_data_valid(false),
                    lsu_proc_data_tag(0),
                    lsu_proc_addr(0),
                    lsu_proc_value(0),
                    lsu_proc_data_ready(false),
                    lsu_completion_valid(false),
                    lsu_completion_value(0),
                    lsu_completion_tag(0),
                    test_done(false),
                    test_count(0),
                    total_tests(0),
                    current_time(0),
                    rng(std::random_device{}()) {}

    // Clock generation
    void tick() {
        clk = !clk;
        current_time++;
    }

    void waitPosEdge(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            if (clk) tick();  // Make sure we're on negative edge
            tick();           // Go to positive edge
        }
    }

    // Reset the testbench
    void reset() {
        rst_N = false;
        cs_N = true;  // Cache select inactive
        lsu_proc_instr_valid = false;
        lsu_proc_data_valid = false;
        lsu_proc_addr = 0;
        lsu_proc_value = 0;
        lsu_proc_instr_tag = 0;
        lsu_proc_data_tag = 0;
        lsu_proc_instr_is_write = false;

        // Apply reset for a few cycles
        waitPosEdge(3);

        // Release reset
        rst_N = true;
        cs_N = false;  // Enable cache

        waitPosEdge();
    }

    // Issue a load instruction
    void issueLoad(uint64_t addr, uint16_t tag) {
        // Wait for LSU to be ready to accept instructions
        while (!lsu_proc_instr_ready) {
            waitPosEdge();
        }

        std::cout << "Time " << current_time << ": Issuing LOAD instruction - "
                  << "Address: 0x" << std::hex << addr << ", Tag: 0x" << tag
                  << std::dec << std::endl;

        lsu_proc_instr_valid = true;
        lsu_proc_instr_tag = tag;
        lsu_proc_instr_is_write = false;
        lsu_proc_addr = addr;

        waitPosEdge();

        lsu_proc_instr_valid = false;
    }

    // Issue a store instruction
    void issueStore(uint64_t addr, uint64_t value, uint16_t tag) {
        // Wait for LSU to be ready to accept instructions
        while (!lsu_proc_instr_ready) {
            waitPosEdge();
        }

        std::cout << "Time " << current_time << ": Issuing STORE instruction - "
                  << "Address: 0x" << std::hex << addr << ", Value: 0x" << value
                  << ", Tag: 0x" << tag << std::dec << std::endl;

        lsu_proc_instr_valid = true;
        lsu_proc_instr_tag = tag;
        lsu_proc_instr_is_write = true;
        lsu_proc_addr = addr;
        lsu_proc_value = value;

        waitPosEdge();

        lsu_proc_instr_valid = false;
    }

    // Wait for a load completion
    bool waitForLoadCompletion(uint64_t& value, int timeout = 1000) {
        int cycles_waited = 0;
        bool completion_received = false;

        while (cycles_waited < timeout && !completion_received) {
            waitPosEdge();
            cycles_waited++;

            if (lsu_completion_valid) {
                value = lsu_completion_value;
                std::cout << "Time " << current_time
                          << ": Load completion received - "
                          << "Value: 0x" << std::hex << value << std::dec
                          << std::endl;
                completion_received = true;
            }

            if (cycles_waited % 100 == 0 && !completion_received) {
                std::cout << "Time " << current_time
                          << ": Still waiting for load completion... "
                          << cycles_waited << " cycles elapsed" << std::endl;
            }
        }

        if (!completion_received) {
            std::cout << "Time " << current_time
                      << ": TIMEOUT waiting for load completion!" << std::endl;
        }

        return completion_received;
    }

    // Wait for a store completion
    bool waitForStoreCompletion(int timeout = 1000) {
        int cycles_waited = 0;
        bool completion_received = false;

        while (cycles_waited < timeout && !completion_received) {
            waitPosEdge();
            cycles_waited++;

            if (lsu_completion_valid) {
                std::cout << "Time " << current_time
                          << ": Store completion received" << std::endl;
                completion_received = true;
            }

            if (cycles_waited % 100 == 0 && !completion_received) {
                std::cout << "Time " << current_time
                          << ": Still waiting for store completion... "
                          << cycles_waited << " cycles elapsed" << std::endl;
            }
        }

        if (!completion_received) {
            std::cout << "Time " << current_time
                      << ": TIMEOUT waiting for store completion!" << std::endl;
        }

        return completion_received;
    }

    // Generate a random test address
    uint64_t generateAddress() {
        std::uniform_int_distribution<uint64_t> dist(0,
                                                    (1UL << L1D_PADDR_BITS) - 1);
        uint64_t addr = dist(rng);
        // Align to 8-byte boundary
        addr &= ~7UL;
        return addr;
    }

    // Test cases
    void runSimpleLoadTest() {
        std::cout << "\n=== Test 1: Simple Load Test ===" << std::endl;
        total_tests++;

        uint64_t addr = 0x1000;
        uint16_t tag = 0x1;
        uint64_t loadValue = 0;

        issueLoad(addr, tag);
        bool success = waitForLoadCompletion(loadValue);

        if (success) {
            std::cout << "Test 1: Load successful, value: 0x" << std::hex
                      << loadValue << std::dec << std::endl;
            test_count++;
            test_results.push_back("Simple Load Test: PASS");
        } else {
            test_results.push_back("Simple Load Test: FAIL - Load timeout");
        }
    }

    void runSimpleStoreTest() {
        std::cout << "\n=== Test 2: Simple Store Test ===" << std::endl;
        total_tests++;

        uint64_t addr = 0x2000;
        uint16_t tag = 0x2;
        uint64_t storeValue = 0xDEADBEEFCAFEBAAF;

        issueStore(addr, storeValue, tag);
        bool success = waitForStoreCompletion();

        if (success) {
            std::cout << "Test 2: Store successful" << std::endl;
            test_count++;
            test_results.push_back("Simple Store Test: PASS");
        } else {
            test_results.push_back("Simple Store Test: FAIL - Store timeout");
        }
    }

    void runLoadAfterStoreTest() {
        std::cout << "\n=== Test 3: Load After Store Test ===" << std::endl;
        total_tests++;

        uint64_t addr = 0x3000;
        uint16_t tag = 0x3;
        uint64_t storeValue = 0x1234567890ABCDEF;
        uint64_t loadValue = 0;

        // Store then load from the same address
        issueStore(addr, storeValue, tag);
        bool storeSuccess = waitForStoreCompletion();

        if (storeSuccess) {
            issueLoad(addr, tag);
            bool loadSuccess = waitForLoadCompletion(loadValue);

            if (loadSuccess) {
                std::cout << "Test 3: Load after store, value: 0x" << std::hex
                          << loadValue << std::dec << std::endl;
                if (loadValue == storeValue) {
                    std::cout << "Test 3: Load value matches stored value - PASS"
                              << std::endl;
                    test_count++;
                    test_results.push_back("Load After Store Test: PASS");
                } else {
                    test_results.push_back(
                        "Load After Store Test: FAIL - Value mismatch");
                }
            } else {
                test_results.push_back(
                    "Load After Store Test: FAIL - Load timeout");
            }
        } else {
            test_results.push_back("Load After Store Test: FAIL - Store timeout");
        }
    }

    void runConsecutiveLoadsTest() {
        std::cout << "\n=== Test 4: Multiple Consecutive Loads Test ==="
                  << std::endl;
        total_tests++;

        const int NUM_LOADS = 5;
        uint64_t addr = 0x4000;
        bool all_loads_successful = true;
        uint64_t loadValue;

        for (int i = 0; i < NUM_LOADS; i++) {
            std::cout << "Starting load " << (i + 1) << " of " << NUM_LOADS
                      << std::endl;
            issueLoad(addr + i * 8, 0x40 + i);  // 8-byte offsets, different tags
            bool success = waitForLoadCompletion(loadValue);

            if (!success) {
                std::cout << "Load " << (i + 1) << " failed!" << std::endl;
                all_loads_successful = false;
                break;
            }

            std::cout << "Load " << (i + 1) << " successful, value: 0x"
                      << std::hex << loadValue << std::dec << std::endl;
        }

        if (all_loads_successful) {
            std::cout << "Test 4: All consecutive loads successful - PASS"
                      << std::endl;
            test_count++;
            test_results.push_back("Consecutive Loads Test: PASS");
        } else {
            test_results.push_back("Consecutive Loads Test: FAIL - Load failed");
        }
    }

    void runConsecutiveStoresTest() {
        std::cout << "\n=== Test 5: Multiple Consecutive Stores Test ==="
                  << std::endl;
        total_tests++;

        const int NUM_STORES = 5;
        uint64_t addr = 0x5000;
        bool all_stores_successful = true;

        for (int i = 0; i < NUM_STORES; i++) {
            std::cout << "Starting store " << (i + 1) << " of " << NUM_STORES
                      << std::endl;
            issueStore(addr + i * 8, 0xAAAAAAAA0000BBBB + i, 0x50 + i);
            bool success = waitForStoreCompletion();

            if (!success) {
                std::cout << "Store " << (i + 1) << " failed!" << std::endl;
                all_stores_successful = false;
                break;
            }

            std::cout << "Store " << (i + 1) << " successful" << std::endl;
        }

        if (all_stores_successful) {
            std::cout << "Test 5: All consecutive stores successful - PASS"
                      << std::endl;
            test_count++;
            test_results.push_back("Consecutive Stores Test: PASS");
        } else {
            test_results.push_back("Consecutive Stores Test: FAIL - Store failed");
        }
    }

    void runRandomAccessTest() {
        std::cout << "\n=== Test 6: Random Access Test ===" << std::endl;
        total_tests++;

        const int NUM_OPS = 20;
        bool all_ops_successful = true;

        std::map<uint64_t, uint64_t> expected_values;

        for (int i = 0; i < NUM_OPS; i++) {
            std::cout << "Operation " << (i + 1) << " of " << NUM_OPS << std::endl;

            // Randomly decide between load and store
            bool is_store = (rng() % 2 == 0);
            uint64_t addr = generateAddress();
            uint16_t tag = rng() & 0x3FF;  // Random 10-bit tag

            if (is_store || expected_values.find(addr) == expected_values.end()) {
                // Store operation or no previous store to this address
                uint64_t value = ((uint64_t)rng() << 32) | rng();
                issueStore(addr, value, tag);
                bool success = waitForStoreCompletion();

                if (!success) {
                    std::cout << "Store operation " << (i + 1) << " failed!"
                              << std::endl;
                    all_ops_successful = false;
                    break;
                }

                expected_values[addr] = value;
            } else {
                // Load operation
                uint64_t expected = expected_values[addr];
                uint64_t loadValue;

                issueLoad(addr, tag);
                bool success = waitForLoadCompletion(loadValue);

                if (!success) {
                    std::cout << "Load operation " << (i + 1) << " failed!"
                              << std::endl;
                    all_ops_successful = false;
                    break;
                }

                if (loadValue != expected) {
                    std::cout << "Load operation " << (i + 1)
                              << " value mismatch!" << std::endl;
                    std::cout << "Expected: 0x" << std::hex << expected
                              << std::endl;
                    std::cout << "Received: 0x" << loadValue << std::dec
                              << std::endl;
                    all_ops_successful = false;
                    break;
                }
            }
        }

        if (all_ops_successful) {
            std::cout << "Test 6: Random access test successful - PASS"
                      << std::endl;
            test_count++;
            test_results.push_back("Random Access Test: PASS");
        } else {
            test_results.push_back("Random Access Test: FAIL - Operation failure");
        }
    }

    void runBoundaryTest() {
        std::cout << "\n=== Test 7: Boundary Test ===" << std::endl;
        total_tests++;

        // Test addresses at the boundaries of various caches and address spaces
        uint64_t blockBoundaryAddr = L1D_B - 8;  // Last 8 bytes in first block
        uint64_t l1dBoundaryAddr = L1D_C - 8;    // Last 8 bytes in L1D cache
        uint64_t maxAddr = (1ULL << L1D_PADDR_BITS) - 8;  // Last 8 bytes in address space

        // Write unique values to each address
        std::vector<std::pair<uint64_t, uint64_t>> testAddrs = {
            {blockBoundaryAddr, 0xBB00BB00BB00BB00},
            {l1dBoundaryAddr, 0xCC11CC11CC11CC11},
            {maxAddr, 0xEE33EE33EE33EE33}};

        bool all_tests_successful = true;

        for (const auto& test : testAddrs) {
            uint64_t addr = test.first;
            uint64_t value = test.second;
            uint64_t loadValue;

            // Store to address
            std::cout << "Storing to boundary address 0x" << std::hex << addr
                      << ", value: 0x" << value << std::dec << std::endl;

            issueStore(addr, value, 0xA0);
            bool success = waitForStoreCompletion();

            if (!success) {
                all_tests_successful = false;
                break;
            }

            // Load from the same address
            issueLoad(addr, 0xA1);
            success = waitForLoadCompletion(loadValue);

            if (!success) {
                all_tests_successful = false;
                break;
            }

            if (loadValue != value) {
                std::cout << "Load value mismatch at boundary address 0x"
                          << std::hex << addr << std::dec << std::endl;
                all_tests_successful = false;
                break;
            }

            std::cout << "Boundary test for address 0x" << std::hex << addr
                      << " passed" << std::dec << std::endl;
        }

        if (all_tests_successful) {
            std::cout << "Test 7: Boundary test successful - PASS" << std::endl;
            test_count++;
            test_results.push_back("Boundary Test: PASS");
        } else {
            test_results.push_back("Boundary Test: FAIL - Boundary operation failed");
        }
    }

    // Run all tests
    void runTests() {
        std::cout << "Starting LSU-L1D Cache Tests" << std::endl;

        // Reset the test environment
        reset();

        // Run all test cases
        runSimpleLoadTest();
        runSimpleStoreTest();
        runLoadAfterStoreTest();
        runConsecutiveLoadsTest();
        runConsecutiveStoresTest();
        runRandomAccessTest();
        runBoundaryTest();

        // Report test results
        reportResults();

        test_done = true;
    }

    // Report test results
    void reportResults() {
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
};

// Main function
int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);

    // Create and run testbench
    L1DLSUVerif testbench;
    testbench.runTests();

    return 0;
}
