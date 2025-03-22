#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vddr4_system_tb.h"  // Generated header from Verilator
#include <iostream>
#include <vector>
#include <cstdint>
#include <cassert>

// Test transaction structure
struct MemTransaction {
    uint64_t address;
    uint64_t data;
    bool is_write;
};

class DDR4Testbench {
private:
    Vddr4_system_tb* m_ddr4;
    VerilatedVcdC* m_trace;
    uint64_t m_tickCount;
    
    // Test data
    std::vector<MemTransaction> m_transactions;
    size_t m_currentTransaction;
    
    // Timing constants based on controller parameters
    const int CAS_LATENCY = 22;
    const int ACTIVATION_LATENCY = 8;
    const int PRECHARGE_LATENCY = 5;
    const int WRITE_TO_READ_DELAY = 10;  // tWTR parameter
    const int READ_TO_WRITE_DELAY = 10;  // tRTW parameter
    
    // Calculated timing
    const int WRITE_LATENCY = ACTIVATION_LATENCY + CAS_LATENCY;  // ACT to data
    const int READ_LATENCY = ACTIVATION_LATENCY + CAS_LATENCY;   // ACT to data
    
    // Operation type for tracking
    enum OpType { OP_NONE, OP_READ, OP_WRITE };
    OpType m_lastOp;
    
public:
    DDR4Testbench() : 
        m_tickCount(0), 
        m_currentTransaction(0),
        m_lastOp(OP_NONE) {
        // Initialize the Verilog module
        m_ddr4 = new Vddr4_system_tb;
        
        // Initialize VCD trace file
        Verilated::traceEverOn(true);
        m_trace = new VerilatedVcdC;
        m_ddr4->trace(m_trace, 99);
        m_trace->open("ddr4_trace.vcd");
        
        // Initialize test transactions
        setupTestTransactions();
    }
    
    ~DDR4Testbench() {
        m_trace->close();
        delete m_trace;
        delete m_ddr4;
    }
    
    void setupTestTransactions() {
        // Create a series of write and read operations
        const int NUM_TESTS = 10;
        
        // Create test patterns - write then read back from same address
        for (int i = 0; i < NUM_TESTS; i++) {
            uint64_t addr = i * 8; // Consecutive addresses, multiples of 8
            uint64_t data = 0xA500000000000000ULL | i; // Unique data pattern
            
            // Add write transaction
            m_transactions.push_back({addr, data, true});
            
            // Add read transaction to verify
            m_transactions.push_back({addr, data, false});
        }
    }
    
    void reset() {
        // Reset cycle
        m_ddr4->rst_N_in = 0;
        m_ddr4->clk_in = 0;
        m_ddr4->write_enable_in = 0;
        tick(10);
        m_ddr4->rst_N_in = 1;
        tick(5);
    }
    
    void tick(int count = 1) {
        for (int i = 0; i < count; i++) {
            m_ddr4->clk_in = 0;
            m_ddr4->eval();
            m_trace->dump(10 * m_tickCount);
            
            m_ddr4->clk_in = 1;
            m_ddr4->eval();
            m_trace->dump(10 * m_tickCount + 5);
            
            m_tickCount++;
        }
    }
    
    void runTest() {
        reset();
        
        std::cout << "Using fixed timing parameters:" << std::endl;
        std::cout << "- CAS Latency: " << CAS_LATENCY << " cycles" << std::endl;
        std::cout << "- Activation Latency: " << ACTIVATION_LATENCY << " cycles" << std::endl;
        std::cout << "- Total Read Latency: " << READ_LATENCY << " cycles" << std::endl;
        std::cout << "- Total Write Latency: " << WRITE_LATENCY << " cycles" << std::endl;
        std::cout << std::endl;
        
        while (m_currentTransaction < m_transactions.size()) {
            auto& txn = m_transactions[m_currentTransaction];
            
            // Calculate required inter-operation delay
            int delayBeforeOperation = 0;
            if (m_lastOp == OP_WRITE && !txn.is_write) {
                delayBeforeOperation = WRITE_TO_READ_DELAY;
            } else if (m_lastOp == OP_READ && txn.is_write) {
                delayBeforeOperation = READ_TO_WRITE_DELAY;
            }
            
            // Add inter-operation delay if needed
            if (delayBeforeOperation > 0) {
                std::cout << "Waiting " << delayBeforeOperation << " cycles between operations..." << std::endl;
                tick(delayBeforeOperation);
            }
            
            if (txn.is_write) {
                performWriteOperation(txn.address, txn.data);
                m_lastOp = OP_WRITE;
            } else {
                performReadOperation(txn.address, txn.data);
                m_lastOp = OP_READ;
            }
            
            m_currentTransaction++;
        }
        
        std::cout << "All tests completed in " << m_tickCount << " clock cycles" << std::endl;
    }
    
    void performWriteOperation(uint64_t address, uint64_t data) {
        // Start a write operation
        std::cout << "Starting write at address 0x" << std::hex << address << ", data 0x" 
                  << data << std::dec << " (cycle " << m_tickCount << ")" << std::endl;
        
        // Apply write control signals
        m_ddr4->mem_bus_addr_in = address & 0x7FFFF; // Apply address mask (19 bits)
        m_ddr4->write_data_in = data;
        m_ddr4->write_enable_in = 1;
        
        // Tick one cycle to initiate the write
        tick();
        
        // Wait for the write to complete based on fixed timing
        std::cout << "Waiting " << WRITE_LATENCY - 1 << " cycles for write to complete..." << std::endl;
        tick(WRITE_LATENCY - 1);
        
        // Deassert write enable
        m_ddr4->write_enable_in = 0;
        
        // Wait for write recovery time
        const int WRITE_RECOVERY = 5;
        tick(WRITE_RECOVERY);
        
        std::cout << "Write completed at cycle " << m_tickCount << std::endl;
    }
    
    void performReadOperation(uint64_t address, uint64_t expectedData) {
        // Start a read operation
        std::cout << "Starting read at address 0x" << std::hex << address 
                  << std::dec << " (cycle " << m_tickCount << ")" << std::endl;
        
        // Apply read control signals
        m_ddr4->mem_bus_addr_in = address & 0x7FFFF; // Apply address mask (19 bits)
        m_ddr4->write_enable_in = 0;
        
        // Tick one cycle to initiate the read
        tick();
        
        // Wait for the read to complete based on fixed timing
        std::cout << "Waiting " << READ_LATENCY << " cycles for read data..." << std::endl;
        tick(READ_LATENCY);
        
        // Capture read data
        uint64_t readData = m_ddr4->read_data_out;
        
        // Verify read data
        if (readData == expectedData) {
            std::cout << "✓ Read verification PASSED at address 0x" << std::hex << address 
                      << ", data: 0x" << readData << std::dec << std::endl;
        } else {
            std::cout << "✗ Read verification FAILED at address 0x" << std::hex << address 
                      << ", expected: 0x" << expectedData << ", got: 0x" << readData 
                      << std::dec << std::endl;
        }
        
        // Add a short delay after read
        tick(2);
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    DDR4Testbench tb;
    tb.runTest();
    
    return 0;
}