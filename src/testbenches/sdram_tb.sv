module ddr4_system_tb();
  // Clock and reset generation
  logic clk;
  logic rst_N;
  
  // Parameters
  localparam CAS_LATENCY = 22;
  localparam ACTIVATION_LATENCY = 8;
  localparam PRECHARGE_LATENCY = 5;
  localparam ROW_BITS = 8;
  localparam COL_BITS = 4;
  localparam BUS_WIDTH = 16;
  localparam PADDR_BITS = 19;
  localparam REFRESH_CYCLE = 5120;
  
  // Signals between controller and DIMM
  logic cs_N;
  logic cke;
  logic act;
  logic [16:0] addr;
  logic [1:0] bg;
  logic [1:0] ba;
  logic [63:0] dqm;
  wire [63:0] dqs;
  
  // Signals between testbench and controller
  logic mem_bus_ready_in;
  logic mem_bus_valid_in;
  logic [PADDR_BITS-1:0] mem_bus_addr_in;
  wire [63:0] mem_bus_value_io;
  logic mem_bus_ready_out;
  logic mem_bus_valid_out;
  
  // Testbench signals
  logic [63:0] write_data;
  logic [63:0] read_data;
  logic tb_writing;
  logic [63:0] expected_data;
  
  // Memory operations
  typedef enum {MEM_READ, MEM_WRITE, MEM_IDLE} mem_op_t;
  mem_op_t current_op;
  
  // Test data
  logic [63:0] test_data[10];
  logic [PADDR_BITS-1:0] test_addr[10];
  
  // Connect to DQS bus when writing
  assign mem_bus_value_io = tb_writing ? write_data : 'z;
  assign read_data = mem_bus_value_io;
  
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
    .clk_in(clk),
    .rst_N_in(rst_N),
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
    .clk_in(clk),
    .rst_N_in(rst_N),
    .cs_N_in(cs_N),
    .cke_in(cke),
    .act_in(act),
    .addr_in(addr),
    .bg_in(bg),
    .ba_in(ba),
    .dqm_in(dqm),
    .dqs(dqs)
  );
endmodule: ddr4_system_tb;