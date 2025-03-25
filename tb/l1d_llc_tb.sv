// tb meant to ensure connection between caches work
module l1d_llc_tb #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384,
    parameter int PADDR_BITS = 19,
    parameter int W = 64
) (

    // Input signals
    input logic clk,
    input logic rst_N,

    // L1D cache interface inputs
    input logic l1d_cs_N_in,
    input logic l1d_flush_in,
    input logic l1d_lsu_valid_in,
    input logic l1d_lsu_ready_in,
    input logic [63:0] l1d_lsu_addr_in,
    input logic [63:0] l1d_lsu_value_in,
    input logic [9:0] l1d_lsu_tag_in,
    input logic l1d_lsu_we_in,

    // L1D cache interface outputs
    output logic l1d_lsu_valid_out,
    output logic l1d_lsu_ready_out,
    output logic [63:0] l1d_lsu_addr_out,
    output logic [63:0] l1d_lsu_value_out,
    output logic l1d_lsu_write_complete_out
);

  // Internal signals for L1D->LLC communication
  logic [PADDR_BITS-1:0] l1d_lc_addr_out;
  logic [8*B-1:0] l1d_lc_value_out;
  logic l1d_lc_ready_out;
  logic l1d_lc_valid_out;
  logic l1d_lc_we_out;

  logic [63:0] l1d_hc_value_in;  // Unused
  logic [511:0] l1d_hc_value_out;  // Unused
  // Standins for the previous 2 unused signals
  logic [63:0] temp_64;
  logic [511:0] temp_512;
  assign temp_64  = '0;
  assign temp_512 = '0;

  // Internal signals for LLC->L1D communication
  logic llc_hc_valid_out;
  logic llc_hc_ready_out;
  logic [PADDR_BITS-1:0] llc_hc_addr_out;
  logic [63:0] llc_hc_value_out;

  // Other signals for llc (for DIMM)
  logic [W-1:0] llc_mem_bus_value_io;
  logic [PADDR_BITS-1:0] llc_mem_bus_addr_out;
  logic llc_mem_bus_ready_out;
  logic llc_mem_bus_valid_out;

  // TODO: this is for indicating a cache line write to the LLC, but where is it meant to be coming from?
  // naming seems to indicate it should be coming from higher cache (l1d), but l1d has no lc_cl_out
  logic llc_hc_cl_in;
  assign llc_hc_cl_in = '0;

  // Test control
  bit test_done;
  int test_count;

  logic [10-1:0] lsu_tag_out;

  // DUT instances
  l1_data_cache #(
      .A(3),
      .B(64),
      .C(1536),
      .PADDR_BITS(19),
      .MSHR_COUNT(4),
      .TAG_BITS(10)
  ) l1d (
      .clk_in(clk),
      .rst_N_in(rst_N),
      .cs_N_in('0),  // chip select is active low
      .flush_in(l1d_flush_in),
      .lsu_valid_in(l1d_lsu_valid_in),
      .lsu_ready_in(l1d_lsu_ready_in),
      .lsu_addr_in(l1d_lsu_addr_in),
      .lsu_value_in(l1d_lsu_value_in),
      .lsu_tag_in(l1d_lsu_tag_in),
      .lsu_we_in(l1d_lsu_we_in),
      .lsu_valid_out(l1d_lsu_valid_out),
      .lsu_ready_out(l1d_lsu_ready_out),
      .lsu_addr_out(l1d_lsu_addr_out),
      .lsu_value_out(l1d_lsu_value_out),
      .lsu_write_complete_out(l1d_lsu_write_complete_out),
      .lc_ready_in(llc_hc_ready_out),
      .lc_valid_in(llc_hc_valid_out),
      .lc_addr_in(llc_hc_addr_out),
      .lc_value_in(temp_512),  // TODO: Replace with llc_hc_value_out later, default value for now
      .lc_valid_out(l1d_lc_valid_out),
      .lc_ready_out(l1d_lc_ready_out),
      .lc_addr_out(l1d_lc_addr_out),
      .lc_value_out(l1d_lc_value_out),
      .lc_we_out(l1d_lc_we_out),
      .lsu_tag_out(lsu_tag_out)
  );

  last_level_cache #(
      .A(8),
      .B(64),
      .C(16384),
      .PADDR_BITS(19),
      .W(64),
      .CAS_LATENCY(22),
      .ACTIVATION_LATENCY(8),
      .PRECHARGE_LATENCY(5),
      .ROW_BITS(8),
      .COL_BITS(4),
      .BUS_WIDTH(16),
      .BANK_GROUPS(2),
      .BANKS_PER_GROUP(4)
  ) llc (
      .clk_in(clk),
      .rst_N_in(rst_N),
      .cs_in('0),  // active low. keep enabled for testbench
      .flush_in(l1d_flush_in),  // TODO: This flush is meant for l1d. Should l1d output a flush? or just use the l1d one for llc
      .hc_valid_in(l1d_lc_valid_out),
      .hc_ready_in(l1d_lc_ready_out),
      .hc_addr_in(l1d_lc_addr_out),
      .hc_value_in(temp_64),  // Filler falue for unused pin
      .hc_we_in(l1d_lc_we_out),
      .hc_line_in(l1d_lc_value_out),  // TODO: difference between value_in and line_in?
      .hc_cl_in(llc_hc_cl_in), // TODO: unsure where this is meant to be coming from. default value set above
      .hc_ready_out(llc_hc_ready_out),
      .hc_valid_out(llc_hc_valid_out),
      .hc_addr_out(llc_hc_addr_out),
      .hc_value_out(llc_hc_value_out),
      .mem_bus_ready_in(l1d_lc_ready_out),
      .mem_bus_valid_in(l1d_lc_valid_out),
      .mem_bus_value_io(llc_mem_bus_value_io),
      .mem_bus_addr_out(llc_mem_bus_addr_out),
      .mem_bus_ready_out(llc_mem_bus_ready_out),
      .mem_bus_valid_out(llc_mem_bus_valid_out)
  );

  // Monitor signals for debugging
  always_ff @(posedge clk) begin
    // if (l1d_lsu_valid_out) begin
    //   $display("L1D LSU Valid Out: %b", l1d_lsu_valid_out);
    // end
    // if (llc_hc_valid_out) begin
    //   $display("LLC HC Valid Out: %b", llc_hc_valid_out);
    // end
    $monitor("[%0t] LLC HC Valid Out: %b, L1D LSU Valid Out: %b", $time, llc_hc_valid_out,
             l1d_lsu_valid_out);
  end

endmodule
