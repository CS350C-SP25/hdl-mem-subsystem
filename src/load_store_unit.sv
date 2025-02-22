import types::*;

// A Load-Store Unit
module load_store_unit #(
    parameter int QUEUE_DEPTH = 32,
    parameter int TAG_WIDTH   = 10
) (
    // Generic inputs
    input logic clk_in,
    input logic rst_N_in,
    input logic cs_N_in,  // Chip Select (like an enable signal for testing purposes)
    // Inputs from processor
    input logic proc_valid_in,  // Input from the processor is valid
    input logic [TAG_WIDTH-1:0] proc_instr_tag_in,  // The ID of this mem access
    input lsu_op_e proc_lsu_op_in,  // Decode said to do this input
    input data_t proc_data_in,  // BAD NAME: // either addr/value from proc or value from l1c
    // Inputs from l1D
    input logic l1d_valid_in,
    input logic l1d_ready_in,  // L1 cache ready to receive data
    // Outputs to processor
    output logic proc_ready_out,  // Ready to receive input from the processor (because DRAM won't block)
    // Outputs to L1D
    output logic l1d_valid_out,  // our data is valid for consumption by L1 cache
    output mem_op_e l1d_instr_tag_out,  // What memory op are we sending to the L1 cache
    output logic [63:0] l1d_addr_out,  // What addr are we sending to the L1 cache
    output logic [63:0] l1d_data_out,  // What data are we sending to the L1 cache
    // Outputs (results)
    output logic completion_valid_out,  // The load/store is ready to be retired
    output logic [63:0] completion_data_out,  // The data from the load store
    output logic [TAG_WIDTH-1:0] completion_tag_out  // For debugging... The retired mem ID
);
    // TODO(LSU Team): Implement a load store unit, which uses an LSQ
    // (load/store queue to enforce sequential memory consistency).


    // Note that the ALU (processor) CANNOT block. Most ARM operations take 1
    // cycle, and we really like this property. We also have said that DRAM
    // shouldn't be blocked. So both inputs must be handled concurrently in the LSU.
endmodule : load_store_unit
