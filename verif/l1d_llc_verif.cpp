#include <iostream>
#include <vector>
#include <cstdint>
#include <memory>
#include <functional>
#include <string>
#include <iomanip>

// Constants for cache parameters
constexpr int L1D_A = 3;
constexpr int L1D_B = 64;
constexpr int L1D_C = 1536;
constexpr int L1D_PADDR_BITS = 19;
constexpr int L1D_MSHR_COUNT = 4;
constexpr int L1D_TAG_BITS = 10;

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
    uint16_t l1d_lsu_tag_in;     // 10 bits in original but using uint16_t for convenience
    bool l1d_lsu_we_in;
    
    // L1D cache interface outputs
    bool l1d_lsu_valid_out;
    bool l1d_lsu_ready_out;
    uint64_t l1d_lsu_addr_out;
    uint64_t l1d_lsu_value_out;
    bool l1d_lsu_write_complete_out;

    // Internal signals for L1D->LLC communication
    bool l1d_lc_valid;
    bool l1d_lc_ready;
    uint32_t lc_addr_out;        // PADDR_BITS=19, using uint32_t
    std::vector<uint8_t> lc_value_out; // 8*B=512 bits = 64 bytes
    bool lc_we;

    // Internal signals for LLC->L1D communication
    bool lc_l1d_valid;
    bool lc_l1d_ready;
    uint32_t lc_addr_in;
    std::vector<uint8_t> lc_value_in;
    
    // Signals specific to LLC interface
    bool llc_hc_valid_out;
    bool llc_hc_ready_out;
    uint32_t llc_hc_addr_out;
    std::vector<uint8_t> llc_hc_line_out;
    
    // Test control
    bool test_done;
    int test_count;
    
    // DUT instances
    std::unique_ptr<L1DataCache> l1d;
    std::unique_ptr<LastLevelCache> llc;
    
    uint64_t current_time;
    
public:
    L1DLLCTB() : 
        clk(false),
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
        l1d_lc_valid(false),
        l1d_lc_ready(false),
        lc_addr_out(0),
        lc_we(false),
        lc_l1d_valid(false),
        lc_l1d_ready(false),
        lc_addr_in(0),
        llc_hc_valid_out(false),
        llc_hc_ready_out(false),
        llc_hc_addr_out(0),
        test_done(false),
        test_count(0),
        current_time(0)
    {
        // Initialize vector sizes
        lc_value_out.resize(L1D_B, 0);  // B bytes
        lc_value_in.resize(L1D_B, 0);
        llc_hc_line_out.resize(LLC_B, 0);
        
        // Create DUT instances
        initDuts();
    }
    
    // Initialize the DUT instances
    void initDuts();
    
    // Clock generation
    void tick() {
        // Toggle clock
        clk = !clk;
        current_time++;
        
        if (clk) { // positive edge
            // Update DUT state on positive edge
            evaluateDuts();
            
            // Monitor signals for debugging
            if (l1d_lsu_valid_out) {
                std::cout << "Time " << current_time << ": L1D LSU Valid Out: " 
                          << (l1d_lsu_valid_out ? "1" : "0") << std::endl;
            }
            
            if (llc_hc_valid_out) {
                std::cout << "Time " << current_time << ": LLC HC Valid Out: " 
                          << (llc_hc_valid_out ? "1" : "0") << std::endl;
            }
        }
    }
    
    void waitPosEdge(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            if (clk) tick(); // Make sure we're on negative edge
            tick();          // Go to positive edge
        }
    }
    
    // Reset the testbench
    void reset() {
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
        l1d_cs_N_in = false; // Enable cache
        
        waitPosEdge();
    }
    
    // Issue a read request to L1D
    void issueRead(uint64_t addr, uint16_t tag) {
        // Wait for L1D to be ready to accept requests
        while (!l1d_lsu_ready_out) {
            waitPosEdge();
        }
        
        std::cout << "Time " << current_time << ": Issuing READ request - "
                  << "Address: 0x" << std::hex << addr 
                  << ", Tag: 0x" << tag << std::dec << std::endl;
        
        l1d_lsu_valid_in = true;
        l1d_lsu_addr_in = addr;
        l1d_lsu_tag_in = tag;
        l1d_lsu_we_in = false;  // Read operation
        
        waitPosEdge();
        
        l1d_lsu_valid_in = false;
    }
    
    // Issue a write request to L1D
    void issueWrite(uint64_t addr, uint64_t value, uint16_t tag) {
        // Wait for L1D to be ready to accept requests
        while (!l1d_lsu_ready_out) {
            waitPosEdge();
        }
        
        std::cout << "Time " << current_time << ": Issuing WRITE request - "
                  << "Address: 0x" << std::hex << addr 
                  << ", Value: 0x" << value
                  << ", Tag: 0x" << tag << std::dec << std::endl;
        
        l1d_lsu_valid_in = true;
        l1d_lsu_addr_in = addr;
        l1d_lsu_value_in = value;
        l1d_lsu_tag_in = tag;
        l1d_lsu_we_in = true;  // Write operation
        
        waitPosEdge();
        
        l1d_lsu_valid_in = false;
    }
    
    // Wait for a read response from L1D
    bool waitForReadResponse(uint64_t &value, int timeout = 1000) {
        int cycles_waited = 0;
        bool response_received = false;
        
        while (cycles_waited < timeout && !response_received) {
            waitPosEdge();
            cycles_waited++;
            
            if (l1d_lsu_valid_out) {
                value = l1d_lsu_value_out;
                std::cout << "Time " << current_time << ": Read response received - "
                          << "Value: 0x" << std::hex << value << std::dec << std::endl;
                response_received = true;
                
                // ACK the response
                l1d_lsu_ready_in = true;
                waitPosEdge();
                l1d_lsu_ready_in = false;
            }
            
            if (cycles_waited % 100 == 0 && !response_received) {
                std::cout << "Time " << current_time << ": Still waiting for read response... "
                          << cycles_waited << " cycles elapsed" << std::endl;
            }
        }
        
        if (!response_received) {
            std::cout << "Time " << current_time << ": TIMEOUT waiting for read response!" << std::endl;
        }
        
        return response_received;
    }
    
    // Wait for a write confirmation
    bool waitForWriteComplete(int timeout = 1000) {
        int cycles_waited = 0;
        bool write_completed = false;
        
        while (cycles_waited < timeout && !write_completed) {
            waitPosEdge();
            cycles_waited++;
            
            if (l1d_lsu_write_complete_out) {
                std::cout << "Time " << current_time << ": Write completion received" << std::endl;
                write_completed = true;
            }
            
            if (cycles_waited % 100 == 0 && !write_completed) {
                std::cout << "Time " << current_time << ": Still waiting for write completion... "
                          << cycles_waited << " cycles elapsed" << std::endl;
            }
        }
        
        if (!write_completed) {
            std::cout << "Time " << current_time << ": TIMEOUT waiting for write completion!" << std::endl;
        }
        
        return write_completed;
    }
    
    // Run basic tests
    void runTests() {
        std::cout << "Starting L1D-LLC Cache Tests" << std::endl;
        
        // Reset the test environment
        reset();
        
        // Test 1: Simple read test
        std::cout << "\n=== Test 1: Simple Read Test ===" << std::endl;
        uint64_t addr1 = 0x1000;
        uint16_t tag1 = 0x1;
        uint64_t readValue = 0;
        
        issueRead(addr1, tag1);
        bool success = waitForReadResponse(readValue);
        
        if (success) {
            std::cout << "Test 1: Read successful, value: 0x" << std::hex << readValue << std::dec << std::endl;
            test_count++;
        }
        
        // Test 2: Simple write test
        std::cout << "\n=== Test 2: Simple Write Test ===" << std::endl;
        uint64_t addr2 = 0x2000;
        uint16_t tag2 = 0x2;
        uint64_t writeValue = 0xDEADBEEFCAFEBAAF;
        
        issueWrite(addr2, writeValue, tag2);
        success = waitForWriteComplete();
        
        if (success) {
            std::cout << "Test 2: Write successful" << std::endl;
            test_count++;
        }
        
        // Test 3: Read after write (same address) to verify write
        std::cout << "\n=== Test 3: Read After Write Test ===" << std::endl;
        issueRead(addr2, tag2);
        success = waitForReadResponse(readValue);
        
        if (success) {
            std::cout << "Test 3: Read after write, value: 0x" << std::hex << readValue << std::dec << std::endl;
            if (readValue == writeValue) {
                std::cout << "Test 3: Read value matches written value - PASS" << std::endl;
                test_count++;
            } else {
                std::cout << "Test 3: Read value does not match written value - FAIL" << std::endl;
            }
        }
        
        // Test 4: Multiple consecutive reads
        std::cout << "\n=== Test 4: Multiple Consecutive Reads Test ===" << std::endl;
        const int NUM_READS = 3;
        uint64_t addr4 = 0x3000;
        bool all_reads_successful = true;
        
        for (int i = 0; i < NUM_READS; i++) {
            std::cout << "Starting read " << (i + 1) << " of " << NUM_READS << std::endl;
            issueRead(addr4 + i * 8, tag2 + i);  // 8-byte offsets
            success = waitForReadResponse(readValue);
            
            if (!success) {
                std::cout << "Read " << (i + 1) << " failed!" << std::endl;
                all_reads_successful = false;
                break;
            }
            
            std::cout << "Read " << (i + 1) << " successful, value: 0x" 
                      << std::hex << readValue << std::dec << std::endl;
        }
        
        if (all_reads_successful) {
            std::cout << "Test 4: All consecutive reads successful - PASS" << std::endl;
            test_count++;
        } else {
            std::cout << "Test 4: Not all consecutive reads successful - FAIL" << std::endl;
        }
        
        // Test 5: Multiple consecutive writes
        std::cout << "\n=== Test 5: Multiple Consecutive Writes Test ===" << std::endl;
        const int NUM_WRITES = 3;
        uint64_t addr5 = 0x4000;
        bool all_writes_successful = true;
        
        for (int i = 0; i < NUM_WRITES; i++) {
            std::cout << "Starting write " << (i + 1) << " of " << NUM_WRITES << std::endl;
            issueWrite(addr5 + i * 8, 0xAAAAAAAA0000BBBB + i, tag2 + i + NUM_READS);
            success = waitForWriteComplete();
            
            if (!success) {
                std::cout << "Write " << (i + 1) << " failed!" << std::endl;
                all_writes_successful = false;
                break;
            }
            
            std::cout << "Write " << (i + 1) << " successful" << std::endl;
        }
        
        if (all_writes_successful) {
            std::cout << "Test 5: All consecutive writes successful - PASS" << std::endl;
            test_count++;
        } else {
            std::cout << "Test 5: Not all consecutive writes successful - FAIL" << std::endl;
        }
        
        // Test 6: Cache miss test (read from an address that should cause a miss)
        std::cout << "\n=== Test 6: Cache Miss Test ===" << std::endl;
        // Choose an address that's likely to cause a miss due to mapping to a different set
        uint64_t addr6 = 0x10000;  // Far from previous addresses
        uint16_t tag6 = 0xA;
        
        issueRead(addr6, tag6);
        success = waitForReadResponse(readValue, 2000);  // Longer timeout for cache miss
        
        if (success) {
            std::cout << "Test 6: Cache miss handled successfully - PASS" << std::endl;
            test_count++;
        } else {
            std::cout << "Test 6: Cache miss handling failed - FAIL" << std::endl;
        }
        
        // Test 7: Read-modify-write test
        std::cout << "\n=== Test 7: Read-Modify-Write Test ===" << std::endl;
        uint64_t addr7 = 0x5000;
        uint16_t tag7 = 0xB;
        uint64_t initialValue = 0xAABBCCDD;
        uint64_t modifiedValue;
        
        // Write initial value
        issueWrite(addr7, initialValue, tag7);
        success = waitForWriteComplete();
        
        if (success) {
            // Read the value
            issueRead(addr7, tag7);
            success = waitForReadResponse(readValue);
            
            if (success) {
                // Modify the value
                modifiedValue = readValue ^ 0xFFFFFFFF;  // XOR to flip bits
                
                // Write it back
                issueWrite(addr7, modifiedValue, tag7);
                success = waitForWriteComplete();
                
                if (success) {
                    // Read again to verify
                    issueRead(addr7, tag7);
                    success = waitForReadResponse(readValue);
                    
                    if (success && readValue == modifiedValue) {
                        std::cout << "Test 7: Read-Modify-Write successful - PASS" << std::endl;
                        test_count++;
                    } else {
                        std::cout << "Test 7: Read-Modify-Write verification failed - FAIL" << std::endl;
                    }
                }
            }
        }
        
        // Test summary
        std::cout << "\n=== Test Summary ===" << std::endl;
        std::cout << "Tests passed: " << test_count << " out of 7 possible tests" << std::endl;
        
        if (test_count == 7) {
            std::cout << "ALL TESTS PASSED!" << std::endl;
        } else {
            std::cout << "SOME TESTS FAILED!" << std::endl;
        }
        
        test_done = true;
    }
    
    // Evaluate the DUTs (update internal state)
    void evaluateDuts();
};

// L1 Data Cache model
class L1DataCache {
private:
    // Cache state variables
    std::vector<std::vector<uint64_t>> cache_data;
    std::vector<bool> valid_bits;
    std::vector<bool> dirty_bits;
    std::vector<uint32_t> tag_bits;

    // Cache parameters
    int associativity;
    int block_size;
    int cache_size;
    int num_sets;
    
    // Pending operation tracking
    int delay_counter;
    bool read_pending;
    bool write_pending;
    uint64_t pending_addr;
    uint64_t pending_value;
    uint16_t pending_tag;

public:
    // Constructor
    L1DataCache(int a, int b, int c, int paddr_bits, int mshr_count, int tag_bits) :
        associativity(a),
        block_size(b),
        cache_size(c),
        delay_counter(0),
        read_pending(false),
        write_pending(false),
        pending_addr(0),
        pending_value(0),
        pending_tag(0)
    {
        // Calculate number of sets
        num_sets = cache_size / (associativity * block_size);
        
        // Initialize cache structures
        cache_data.resize(num_sets, std::vector<uint64_t>(associativity * block_size / sizeof(uint64_t), 0));
        valid_bits.resize(num_sets * associativity, false);
        dirty_bits.resize(num_sets * associativity, false);
        tag_bits.resize(num_sets * associativity, 0);
        
        std::cout << "L1D Cache initialized: " << num_sets << " sets, " 
                  << associativity << "-way, " << block_size << " bytes per block" << std::endl;
    }
    
    // Single cycle update method - called on clock edge
    void evaluate(
        // Inputs
        bool clk,
        bool rst_N,
        bool cs_N_in,
        bool flush_in,
        bool lsu_valid_in,
        bool lsu_ready_in,
        uint64_t lsu_addr_in,
        uint64_t lsu_value_in,
        uint16_t lsu_tag_in,
        bool lsu_we_in,
        bool lc_ready_in,
        bool lc_valid_in,
        uint32_t lc_addr_in,
        const std::vector<uint8_t>& lc_value_in,
        
        // Outputs (passed by reference)
        bool& lsu_valid_out,
        bool& lsu_ready_out,
        uint64_t& lsu_addr_out,
        uint64_t& lsu_value_out,
        bool& lsu_write_complete_out,
        bool& lc_valid_out,
        bool& lc_ready_out,
        uint32_t& lc_addr_out,
        std::vector<uint8_t>& lc_value_out
    ) {
        // Default outputs
        lsu_valid_out = false;
        lsu_ready_out = !read_pending && !write_pending;
        lsu_addr_out = 0;
        lsu_value_out = 0;
        lsu_write_complete_out = false;
        lc_valid_out = false;
        lc_ready_out = true;
        lc_addr_out = 0;
        
        // Reset handling
        if (!rst_N) {
            delay_counter = 0;
            read_pending = false;
            write_pending = false;
            pending_addr = 0;
            pending_value = 0;
            pending_tag = 0;
            return;
        }
        
        // Cache disabled
        if (cs_N_in) {
            return;
        }
        
        // Handle new requests
        if (lsu_valid_in && lsu_ready_out) {
            if (lsu_we_in) {
                // Write request
                write_pending = true;
                pending_addr = lsu_addr_in;
                pending_value = lsu_value_in;
                pending_tag = lsu_tag_in;
                delay_counter = 5; // Arbitrary delay for write
            } else {
                // Read request
                read_pending = true;
                pending_addr = lsu_addr_in;
                pending_tag = lsu_tag_in;
                delay_counter = 10; // Arbitrary delay for read
            }
        }
        
        // Process pending operations
        if (read_pending || write_pending) {
            if (delay_counter > 0) {
                delay_counter--;
            } else {
                if (read_pending) {
                    // Complete read
                    lsu_valid_out = true;
                    lsu_addr_out = pending_addr;
                    lsu_value_out = 0xCAFEBABEDEADBEEF; // Dummy read value
                    
                    if (lsu_ready_in) {
                        read_pending = false;
                    }
                } else if (write_pending) {
                    // Complete write
                    lsu_write_complete_out = true;
                    write_pending = false;
                }
            }
        }
        
        // LLC communication (simplified)
        if (lc_valid_in) {
            // Handle incoming data from LLC
        }
    }
};

// Last Level Cache model
class LastLevelCache {
private:
    // Cache state variables
    std::vector<std::vector<uint64_t>> cache_data;
    std::vector<bool> valid_bits;
    std::vector<uint32_t> tag_bits;

    // Cache parameters
    int associativity;
    int block_size;
    int cache_size;
    int num_sets;
    
    // Request processing state
    int delay_counter;
    bool request_pending;
    uint32_t pending_addr;

public:
    // Constructor
    LastLevelCache(
        int a, int b, int c, int paddr_bits, int w, 
        int cas_latency, int activation_latency, int precharge_latency,
        int row_bits, int col_bits, int bus_width,
        int bank_groups, int banks_per_group
    ) :
        associativity(a),
        block_size(b),
        cache_size(c),
        delay_counter(0),
        request_pending(false),
        pending_addr(0)
    {
        // Calculate number of sets
        num_sets = cache_size / (associativity * block_size);
        
        // Initialize cache structures
        cache_data.resize(num_sets, std::vector<uint64_t>(associativity * block_size / sizeof(uint64_t), 0));
        valid_bits.resize(num_sets * associativity, false);
        tag_bits.resize(num_sets * associativity, 0);
        
        std::cout << "LLC initialized: " << num_sets << " sets, " 
                  << associativity << "-way, " << block_size << " bytes per block" << std::endl;
    }
    
    // Single cycle update method - called on clock edge
    void evaluate(
        // Inputs
        bool clk,
        bool rst_N,
        bool cs_in,
        bool flush_in,
        bool hc_valid_in,
        bool hc_ready_in,
        uint32_t hc_addr_in,
        const std::vector<uint8_t>& hc_value_in,
        bool hc_we_in,
        const std::vector<uint8_t>& hc_line_in,
        
        // Outputs (passed by reference)
        bool& hc_valid_out,
        bool& hc_ready_out,
        uint32_t& hc_addr_out,
        std::vector<uint8_t>& hc_line_out
    ) {
        // Default outputs
        hc_valid_out = false;
        hc_ready_out = true;
        hc_addr_out = 0;
        
        // Reset handling
        if (!rst_N) {
            delay_counter = 0;
            request_pending = false;
            pending_addr = 0;
            return;
        }
        
        // Cache disabled
        if (!cs_in) {
            return;
        }
        
        // Process requests from higher cache
        if (hc_valid_in && hc_ready_out) {
            request_pending = true;
            pending_addr = hc_addr_in;
            delay_counter = 30; // Arbitrary delay for LLC operation
        }
        
        if (request_pending) {
            if (delay_counter > 0) {
                delay_counter--;
            } else {
                // Complete the request
                hc_valid_out = true;
                hc_addr_out = pending_addr;
                
                // Set dummy data in the cache line
                for (size_t i = 0; i < hc_line_out.size(); i++) {
                    hc_line_out[i] = (i & 0xFF);
                }
                
                if (hc_ready_in) {
                    request_pending = false;
                }
            }
        }
    }
};

// Implementation of initDuts method
void L1DLLCTB::initDuts() {
    // Create the L1 Data Cache and Last Level Cache instances
    l1d = std::make_unique<L1DataCache>(
        L1D_A, L1D_B, L1D_C, L1D_PADDR_BITS, L1D_MSHR_COUNT, L1D_TAG_BITS
    );
    
    llc = std::make_unique<LastLevelCache>(
        LLC_A, LLC_B, LLC_C, LLC_PADDR_BITS, LLC_W,
        LLC_CAS_LATENCY, LLC_ACTIVATION_LATENCY, LLC_PRECHARGE_LATENCY,
        LLC_ROW_BITS, LLC_COL_BITS, LLC_BUS_WIDTH,
        LLC_BANK_GROUPS, LLC_BANKS_PER_GROUP
    );
}

// Implementation of evaluate method to update DUT state
void L1DLLCTB::evaluateDuts() {
    if (l1d && llc) {
        // Evaluate L1D cache
        l1d->evaluate(
            clk, rst_N, l1d_cs_N_in, l1d_flush_in,
            l1d_lsu_valid_in, l1d_lsu_ready_in,
            l1d_lsu_addr_in, l1d_lsu_value_in,
            l1d_lsu_tag_in, l1d_lsu_we_in,
            l1d_lc_ready, lc_l1d_valid,
            lc_addr_in, lc_value_in,
            
            l1d_lsu_valid_out, l1d_lsu_ready_out,
            l1d_lsu_addr_out, l1d_lsu_value_out,
            l1d_lsu_write_complete_out,
            l1d_lc_valid, l1d_lc_ready,
            lc_addr_out, lc_value_out
        );
        
        // Capture intermediate signals for LLC
        bool llc_cs_in = true;  // LLC is always enabled in this testbench
        bool llc_flush_in = false;
        
        // Evaluate LLC cache
        llc->evaluate(
            clk, rst_N, llc_cs_in, llc_flush_in,
            l1d_lc_valid, l1d_lc_ready,
            lc_addr_out, lc_value_out,
            lc_we, lc_value_out,
            
            lc_l1d_valid, lc_l1d_ready,
            lc_addr_in, lc_value_in
        );
    }
}

// Main function
int main() {
    L1DLLCTB testbench;
    testbench.runTests();
    return 0;
}