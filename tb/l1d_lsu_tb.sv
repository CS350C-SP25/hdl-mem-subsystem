`timescale 1ns / 1ps

module l1d_lsu_tb (
    // General Input Signals
    input logic clk,
    input logic rst_N,
    input logic cs_N,
    
    // We interface with higher level cache, so in this case it's the lsu's inputs

    // Processor Instruction Interface
    input logic lsu_proc_instr_valid,
    input logic [TAG_WIDTH-1:0] lsu_proc_instr_tag,
    input logic lsu_proc_instr_is_write,

    // Processor Data Interface
    input logic lsu_proc_data_valid,
    input logic [TAG_WIDTH-1:0] lsu_proc_data_tag,
    input logic [63:0] lsu_proc_addr,
    input logic [63:0] lsu_proc_value,

    // Processor Handshaking Outputs
    output logic lsu_proc_instr_ready,
    output logic lsu_proc_data_ready,

    // Completion Interface Outputs
    output logic lsu_completion_valid,
    output logic [63:0] lsu_completion_value,
    output logic [TAG_WIDTH-1:0] lsu_completion_tag
);

// Internal Signals between the LSU and L1D
    // LSU -> L1D
    logic lsu_l1d_flush,
    logic lsu_l1d_valid, lsu_l1d_ready,
    logic [63:0] lsu_l1d_addr,
    logic [63:0] lsu_l1d_value,
    logic [TAG_WIDTH-1:0] lsu_l1d_tag,
    logic lsu_l1d_write_complete,
    logic lsu_l1d_tag_complete,

    // L1D -> LSU
    logic l1d_lsu_valid,
    logic l1d_lsu_ready,
    logic [63:0] l1d_lsu_addr,
    logic [63:0] l1d_lsu_value,
    logic [TAG_WIDTH-1:0] l1d_lsu_tag,
    logic l1d_write_complete,
    logic l1d_tag_complete,

// DUT Instances

// Instantiate the lsu
load_store_unit #(
    .QUEUE_DEPTH(32),
    .TAG_WIDTH(10),
) lsu_inst (
    .clk_in(clk),
    .rst_N_in(rst_N),
    .cs_N_in(cs_N),
    .proc_instr_valid_in(lsu_proc_instr_valid),
    .proc_instr_tag_in(lsu_proc_instr_tag),
    .proc_instr_is_write_in(lsu_proc_instr_is_write),
    .proc_data_valid_in(lsu_proc_data_valid),
    .proc_data_tag_in(lsu_proc_data_tag),
    .proc_addr_in(lsu_proc_addr),
    .proc_value_in(lsu_proc_value),
    .l1d_valid_in(l1d_lsu_valid),
    .l1d_ready_in(l1d_lsu_ready),
    .l1d_addr_in(l1d_lsu_addr),
    .l1d_value_in(l1d_lsu_value),
    .l1d_tag_in(l1d_lsu_tag),
    .l1d_write_complete_in(l1d_write_complete_in),
    .l1d_tag_complete_in(l1d_tag_complete_in),
    .proc_instr_ready_out(lsu_proc_instr_ready),
    .proc_data_ready_out(lsu_proc_data_ready),
    .l1d_valid_out(lsu_l1d_valid),
    .l1d_ready_out(lsu_l1d_ready),
    .l1d_addr_out(lsu_l1d_addr),
    .l1d_value_out(lsu_l1d_value),
    .l1d_we_out(l1d_write_complete),
    .l1d_tag_complete_out(l1d_tag_complete),
    .completion_valid_out(lsu_completion_valid),
    .completion_value_out(lsu_completion_value),
    .compeltion_tag_out(lsu_completion_tag)
);

// Instantiate the l1d cache
l1_data_cache #(
     .A(3),
     .B(64),
     .C(1536),
     .PADDR_BITS(19),
     .MSHR_COUNT(4),
     .TAG_BITS(10)
) l1d_inst (
     .clk_in(clk),
     .rst_N_in(rst_N),
     .cs_N_in(cs_N),
     .flush_in(lsu_l1d_flush),
     .lsu_valid_in(l1d_lsu_valid),
     .lsu_ready_in(l1d_lsu_ready),
     .lsu_addr_in(l1d_lsu_addr),
     .lsu_value_in(l1d_lsu_value),
     .lsu_tag_in(l1d_lsu_tag),
     .lsu_we_in(l1d_write_complete),
     .lsu_valid_out(lsu_l1d_valid),
     .lsu_ready_out(lsu_l1d_ready),
     .lsu_addr_out(lsu_l1d_addr),
     .lsu_value_out(lsu_l1d_value),
     .lsu_write_complete_out(lsu_l1d_write_complete),
)

// Monitor signals for debugging
always_ff @(posedge clk) begin
     if (lsu_proc_data_ready) begin
          $display("LSU_PROC_DATA_READY_OUT %b", lsu_proc_data_ready);
     end
end

endmodule


