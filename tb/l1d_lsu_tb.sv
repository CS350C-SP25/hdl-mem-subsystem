`timescale 1ns / 1ps

module l1d_lsu_tb #(
    parameter int TAG_WIDTH = 10,
    parameter int A = 3,
    parameter int B = 64,
    parameter int C = 1536,
    parameter int PADDR_BITS = 19
) (
    // General Input Signals
    input logic clk,
    input logic rst_N,
    input logic cs_N,

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
    output logic [TAG_WIDTH-1:0] lsu_completion_tag,

    // L1D -> LC (Lower Cache) Interface Outputs (to external LC model)
    output logic [PADDR_BITS-1:0] l1d_lc_addr_to_lc,
    output logic [8*B-1:0] l1d_lc_wdata_to_lc,
    output logic l1d_lc_valid_to_lc,
    output logic l1d_lc_ready_to_lc,  // L1D ready to accept data from LC
    output logic l1d_lc_we_to_lc,

    // LC -> L1D Interface Inputs (from external LC model)
    input logic lc_l1d_valid_to_l1d,  // LC has valid data/response for L1D
    input logic lc_l1d_ready_to_l1d,  // LC ready to accept request from L1D
    input logic [PADDR_BITS-1:0] lc_l1d_addr_to_l1d,  // Address associated with LC response
    input logic [8*B-1:0] lc_l1d_rdata_to_l1d  // Read data from LC
);

  // Internal Signals between the LSU and L1D
  // LSU -> L1D
  logic lsu_l1d_flush;
  logic lsu_l1d_valid, lsu_l1d_ready;
  logic [63:0] lsu_l1d_addr;
  logic [63:0] lsu_l1d_value;
  logic [TAG_WIDTH-1:0] lsu_l1d_tag;
  logic lsu_l1d_we;

  // L1D -> LSU
  logic l1d_lsu_valid;
  logic l1d_lsu_ready;
  logic [63:0] l1d_lsu_addr;
  logic [63:0] l1d_lsu_value;
  logic [TAG_WIDTH-1:0] l1d_lsu_tag;
  logic l1d_lsu_write_complete;
  logic [TAG_WIDTH-1:0] l1d_lsu_tag_complete;  // Note: This seems unused in original LSU instance

  // DUT Instances

  // Instantiate the lsu
  load_store_unit #(
      .QUEUE_DEPTH(32),
      .TAG_WIDTH  (TAG_WIDTH)
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
      .l1d_write_complete_in(l1d_lsu_write_complete),
      //   .l1d_tag_out(l1d_lsu_tag_complete), // Connect if needed by LSU
      .proc_instr_ready_out(lsu_proc_instr_ready),
      .proc_data_ready_out(lsu_proc_data_ready),
      .l1d_valid_out(lsu_l1d_valid),
      .l1d_ready_out(lsu_l1d_ready),  // LSU ready signal connected to L1D
      .l1d_addr_out(lsu_l1d_addr),
      .l1d_value_out(lsu_l1d_value),
      .l1d_we_out(lsu_l1d_we),
      .l1d_tag_out(lsu_l1d_tag),
      .completion_valid_out(lsu_completion_valid),
      .completion_value_out(lsu_completion_value),
      .completion_tag_out(lsu_completion_tag)
  );

  // Instantiate the l1d cache
  l1_data_cache #(
      .A(A),
      .B(B),
      .C(C),
      .PADDR_BITS(PADDR_BITS),
      .MSHR_COUNT(4),
      .TAG_BITS(TAG_WIDTH)
  ) l1d_inst (
      .clk_in(clk),
      .rst_N_in(rst_N),
      .cs_N_in(cs_N),
      .flush_in(lsu_l1d_flush), // Assuming flush comes from LSU or testbench control logic (not defined yet)
      // LSU Interface
      .lsu_valid_in(lsu_l1d_valid),
      .lsu_ready_in(lsu_l1d_ready),  // L1D ready signal connected back to LSU
      .lsu_addr_in(lsu_l1d_addr),
      .lsu_value_in(lsu_l1d_value),
      .lsu_tag_in(lsu_l1d_tag),
      .lsu_we_in(lsu_l1d_we),
      .lsu_valid_out(l1d_lsu_valid),
      .lsu_ready_out(l1d_lsu_ready),  // L1D asking LSU if it's ready
      .lsu_addr_out(l1d_lsu_addr),
      .lsu_value_out(l1d_lsu_value),
      .lsu_write_complete_out(l1d_lsu_write_complete),
      .lsu_tag_out(l1d_lsu_tag),
      // LC interface (connected to module ports)
      .lc_ready_in(lc_l1d_ready_to_l1d),  // Input from external LC: LC ready to accept L1D request
      .lc_valid_in(lc_l1d_valid_to_l1d),  // Input from external LC: LC has valid response/data
      .lc_addr_in(lc_l1d_addr_to_l1d),  // Input from external LC: Address associated with response
      .lc_value_in(lc_l1d_rdata_to_l1d),  // Input from external LC: Read data
      .lc_valid_out(l1d_lc_valid_to_lc),  // Output to external LC: L1D has valid request
      .lc_ready_out(l1d_lc_ready_to_lc), // Output to external LC: L1D ready to accept response/data
      .lc_addr_out(l1d_lc_addr_to_lc),  // Output to external LC: Address for L1D request
      .lc_value_out(l1d_lc_wdata_to_lc),  // Output to external LC: Write data for L1D request
      .lc_we_out(l1d_lc_we_to_lc)  // Output to external LC: Write enable for L1D request
  );

  // Monitor signals for debugging (example)
  always_ff @(posedge clk) begin
    if (lsu_proc_data_valid & lsu_proc_data_ready) begin
      $display("[%0t] TB: LSU accepts proc data (Tag %0d, Addr %h, Write %b)", $time,
               lsu_proc_data_tag, lsu_proc_addr, lsu_proc_instr_is_write);
    end
    if (l1d_lc_valid_to_lc & lc_l1d_ready_to_l1d) begin
      $display("[%0t] TB: L1D -> LC Request (Addr %h, WE %b)", $time, l1d_lc_addr_to_lc,
               l1d_lc_we_to_lc);
    end
    if (lc_l1d_valid_to_l1d & l1d_lc_ready_to_lc) begin
      $display("[%0t] TB: LC -> L1D Response (Addr %h)", $time, lc_l1d_addr_to_l1d);
    end
    if (lsu_completion_valid) begin
      $display("[%0t] TB: LSU Completion (Tag %0d, Value %h)", $time, lsu_completion_tag,
               lsu_completion_value);
    end
  end

endmodule

