import types::*;
// This modules shows how the various components of the memory subsystem are
// connected together. This serves both as a reference and as a testbench file.

// Every module contains a an active-low chip select signal. When inactive, this
// means te outputs of that particular module are expected to be in a high
// impedance state (ie. 'z), and the module will not react to inputs. This is
// useful to quickly disable and replace modules without having to physically
// re-wire them (both in real-life and in SystemVerilog). During week 2, test
// vectors will be provided, and can be easily inserted into the modules.
module mem_subsystem_tb (
    input logic start_testing
);

    localparam logic UseLSU = 0;

    logic proc_valid;
    logic lsu_ready;
    logic mem_id;
    lsu_op_e lsu_op;
    data_t proc_data;

    processor proc (
        .start,
        .clk_in,
        .lsu_ready_in(lsu_ready),
        .mem_id_out(mem_id),
        .valid_out(proc_valid),
        .lsu_op_out(lsu_op),
        .data_out(proc_data)
    );


    load_store_unit lsu (
        .clk_in,
        .rst_N_in,
        .cs_N_in(0),
        .proc_valid_in(proc_valid),
        .proc_mem_id_in(mem_id),
        .proc_lsu_op_in(lsu_op),
        .proc_data_in(proc_data),
        .proc_ready_out(lsu_ready),
        .l1d_valid_in,
        .l1d_ready_in,
        .l1d_valid_out,
        .l1d_mem_op_out,
        .l1d_addr_out
        .l1d_data_out,
        .l1d_mem_op_out,
        .load_valid_out,
        .load_data_out,
        .load_store_id_out
    );

    /*
     TODO(Nate): Insert the l1d, llc, dimm and wire them all together in this tester.
     */

endmodule : mem_subsystem

module processor #(
    parameter int TAG_WIDTH = 10 // Each instruction, when executing out-of-order, is given a tag.
) (
    input logic start,
    input logic clk_in,
    input logic lsu_ready_in,  // We will have to stall if the LSU is full...
    output logic [$clog2(MEM_IDS)-1:0] mem_id,  // The ID of this mem access
    output logic valid_out,  // Tell the lsu that it is valid
    output lsu_op_e lsu_op_out,  // Decode said to do this input
    output data_t data_out  // either addr/data from proc or data from l1c
);
endmodule : processor
