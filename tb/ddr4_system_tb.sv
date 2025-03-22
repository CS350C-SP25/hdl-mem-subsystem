module ddr4_system_tb(
  // Input ports
  input logic clk_in,
  input logic rst_N_in,
  input logic [18:0] mem_bus_addr_in,  // Using PADDR_BITS-1:0
  input logic [63:0] write_data_in,
  input logic write_enable_in,
  
  // Output ports
  output logic [63:0] read_data_out,
  output logic cs_N_out,
  output logic act_out,
  output logic [16:0] addr_out,
  output logic [1:0] bg_out,
  output logic [1:0] ba_out,
  output logic [63:0] dqm_out
);
  // Parameters
  localparam CAS_LATENCY = 22;
  localparam ACTIVATION_LATENCY = 8;
  localparam PRECHARGE_LATENCY = 5;
  localparam ROW_BITS = 8;
  localparam COL_BITS = 4;
  localparam BUS_WIDTH = 16;
  localparam PADDR_BITS = 19;
  localparam REFRESH_CYCLE = 5120;
  
  // Internal signals
  logic cke;
  wire [63:0] dqs;
  wire [63:0] mem_bus_value_io;
  
  // Assign outputs
  assign cs_N_out = cs_N;
  assign addr_out = addr;
  assign bg_out = bg;
  assign ba_out = ba;
  assign dqm_out = dqm;
  assign act_out = act;
  assign read_data_out = read_data;
  
  // Connect to DQS bus when writing
  logic tb_writing;
  assign tb_writing = write_enable_in;
  logic [63:0] write_data;
  assign write_data = write_data_in;
  logic [63:0] read_data;
  
  assign mem_bus_value_io = tb_writing ? write_data : 'z;
  assign read_data = mem_bus_value_io;
  
  // Signals between controller and DIMM
  logic cs_N;
  logic act;
  logic [16:0] addr;
  logic [1:0] bg;
  logic [1:0] ba;
  logic [63:0] dqm;
  
  // Hard-wire timing control signals rather than using handshaking
  logic mem_bus_ready_in = 1'b1;  // Always ready
  logic mem_bus_valid_in = 1'b1;  // Always valid when operation is requested
  logic mem_bus_ready_out;        // Not used in timing-based design
  logic mem_bus_valid_out;        // Not used in timing-based design
  
  // Instantiate controller
  ddr4_sdram_controller #(
    .CAS_LATENCY(CAS_LATENCY),
    .ACTIVATION_LATENCY(ACTIVATION_LATENCY),
    .PRECHARGE_LATENCY(PRECHARGE_LATENCY),
    .ROW_BITS(ROW_BITS),
    .COL_BITS(COL_BITS),
    .PADDR_BITS(PADDR_BITS),
    .BUS_WIDTH(BUS_WIDTH)
  ) controller (
    .clk_in(clk_in),
    .rst_N_in(rst_N_in),
    .cs_N_in(cs_N),
    .mem_bus_ready_in(mem_bus_ready_in),
    .mem_bus_valid_in(mem_bus_valid_in),
    .mem_bus_addr_in(mem_bus_addr_in),
    .mem_bus_value_io(mem_bus_value_io),
    .act_out(act),
    .dram_addr_out(addr),
    .bg_out(bg),
    .ba_out(ba),
    .dqm_out(dqm),
    .mem_bus_ready_out(mem_bus_ready_out),
    .mem_bus_valid_out(mem_bus_valid_out),
    .dqs(dqs)
  );
  
  // Instantiate DIMM
  ddr4_dimm #(
    .CAS_LATENCY(CAS_LATENCY),
    .ACTIVATION_LATENCY(ACTIVATION_LATENCY),
    .PRECHARGE_LATENCY(PRECHARGE_LATENCY),
    .ROW_BITS(ROW_BITS),
    .COL_BITS(COL_BITS),
    .WIDTH(BUS_WIDTH),
    .REFRESH_CYCLE(REFRESH_CYCLE)
  ) dimm (
    .clk_in(clk_in),
    .rst_N_in(rst_N_in),
    .cs_N_in(cs_N),
    .cke_in(cke),
    .act_in(act),
    .addr_in(addr),
    .bg_in(bg),
    .ba_in(ba),
    .dqm_in(dqm),
    .dqs(dqs)
  );

  // Initialize cke
  initial begin
    cke = 1'b1; // Enable clock
  end
endmodule: ddr4_system_tb