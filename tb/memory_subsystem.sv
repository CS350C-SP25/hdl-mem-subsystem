

module memory_subsystem #(
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
    output logic [TAG_WIDTH-1:0] lsu_completion_tag
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



  // L1D -> LC (Lower Cache) Interface Outputs (to external LC model)
  logic [PADDR_BITS-1:0] l1d_lc_addr_to_lc;
  logic [8*B-1:0] l1d_lc_wdata_to_lc;
  logic l1d_lc_valid_to_lc;
  logic l1d_lc_ready_to_lc;  // L1D ready to accept data from LC
  logic l1d_lc_we_to_lc;

  // LC -> L1D Interface Inputs (from external LC model)
  logic lc_l1d_valid_to_l1d;  // LC has valid data/response for L1D
  logic lc_l1d_ready_to_l1d;  // LC ready to accept request from L1D
  logic [PADDR_BITS-1:0] lc_l1d_addr_to_l1d;  // Address associated with LC response
  logic [8*B-1:0] lc_l1d_rdata_to_l1d;  // Read data from LC

  // Internal signals connecting LLC to DIMM
  logic cke;
  logic act;
  logic [16:0] addr;
  logic [1:0] bg;
  logic [1:0] ba;
  logic [63:0] dqm;

  // Memory bus signals (internal between LLC and DIMM)
  logic mem_bus_ready_in;
  logic mem_bus_valid_in;
  logic [63:0] mem_bus_value_io;
  logic [18:0] mem_bus_addr_out;
  logic mem_bus_ready_out;
  logic mem_bus_valid_out;
  logic cs = 1'b1;

  // Test control
  bit test_done;
  int test_count;



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

  logic [63:0] dummy;

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
      .flush_in(lsu_l1d_flush),
      .hc_valid_in(l1d_lc_valid_to_lc),
      .hc_ready_in(l1d_lc_ready_to_lc),
      .hc_addr_in(l1d_lc_addr_to_lc),
      .hc_value_in(l1d_lc_wdata_to_lc[63:0]),  // Filler falue for unused pin
      .hc_we_in(l1d_lc_we_to_lc),
      .hc_line_in(l1d_lc_wdata_to_lc),
      .hc_cl_in(l1d_lc_we_to_lc),
      .hc_ready_out(lc_l1d_ready_to_l1d),
      .hc_valid_out(lc_l1d_valid_to_l1d),
      .hc_addr_out(lc_l1d_addr_to_l1d),
      .hc_value_out(dummy),
      .mem_bus_ready_in(l1d_lc_ready_to_lc),
      .mem_bus_valid_in(l1d_lc_valid_to_lc),
      .mem_bus_value_io(mem_bus_value_io),
      .mem_bus_addr_out(mem_bus_addr_out),
      .mem_bus_ready_out(mem_bus_ready_out),
      .mem_bus_valid_out(mem_bus_valid_out)
  );

  ddr4_dimm #(
      .CAS_LATENCY(22),
      .ACTIVATION_LATENCY(8),
      .PRECHARGE_LATENCY(5),
      .ROW_BITS(8),
      .COL_BITS(4),
      .WIDTH(16),
      .REFRESH_CYCLE(5120)
  ) dimm (
      .clk_in(clk),
      .rst_N_in(rst_N),
      .cs_N_in(cs_N),
      .cke_in(cke),
      .act_in(act),
      .addr_in(addr),
      .bg_in(bg),
      .ba_in(ba),
      .dqm_in(dqm),
      .dqs(mem_bus_value_io)
  );
  always_comb begin
    // cs_N = mem_bus_addr_out[18];
    act  = mem_bus_addr_out[17];
    addr = mem_bus_addr_out[16:0];
    bg   = {1'b0, mem_bus_addr_out[13]};
    ba   = mem_bus_addr_out[12:11];
    dqm  = '0;
  end

  initial begin
    cke = 1'b1;
  end
endmodule
