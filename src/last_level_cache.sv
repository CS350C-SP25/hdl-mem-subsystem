// The LLC (Last Level Cache) is not only the slowest and largest cache in the
// system, but it also communicates the memory controller, which dispatches
// requests to SDRAM controller.

// The memory controller communicates with the DDR4 SDRAM controller over
// the memory bus. The DDR4 SDRAM controller is aware of the structure of SDRAM
// and is responsible for getting data from SDRAM and sending it over the bus.
// Data is acquired over multiple cycles, since a single read from the row
// buffer will provide less than 64 bits.

// The memory bus is fundamentally a collection of wires. Only one bit can exist
// on a wire at a given time. As far as I, Nate, can tell, the DRAM controller
// does not have a queue. Thus, it is the sole-responsibility of the memory
// controller to make smart queueing policies and performance optimizations to
// minimize latency (if it chooses to). DDR4 is supposed to be pipelined
// however, which gives good throughput.

// A comment indicates that the ready-in on from the memory bus to the LLC may
// go unused. This is because DRAM is pipelined, and the synchronization is done
// via. known latency times, rather than through handshake protocols. Handshake
// protocols do not work well with bi-directional wires anyways.
module last_level_cache #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384,
    parameter int PADDR_BITS = 19, 
    parameter int W = 64, // wordsize
    // following params added by us
    parameter int CAS_LATENCY = 22,  // latency in cycles to get a response from DRAM
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int ROW_BITS = 8,  // log2(ROWS)
    parameter int COL_BITS = 4,  // log2(COLS)
    parameter int BUS_WIDTH = 16,  // bus width per chip
    parameter int BANK_GROUPS = 8,
    parameter int BANKS_PER_GROUP = 8
) (
    // Generic
    input logic clk_in,
    input logic rst_N_in,  // Resets cache without flushing
    input logic cs_in,  // Chip Select (aka. enable)
    input logic flush_in,  // Flush all of the cache to memory
    // Inputs from Higher-Level Cache
    input logic hc_valid_in,  // data is ready for either lsu or next level cache
    input logic hc_ready_in,  // ready to receive input from LLC. This is priority
    input logic [PADDR_BITS-1:0] hc_addr_in,  // This address being returned may cause an eviction!
    input logic [W-1:0] hc_value_in,  // The write to the lower-level cache
    input logic hc_we_in,  // Higher-level cache is requesting a read/write
    // Outputs to Higher-Level Caches (remember lower is slower with caches)
    output logic hc_ready_out,  // lower cache is ready (lower is slower)
    output logic hc_valid_out,  // lower cache is sending data to this module
    output logic [PADDR_BITS-1:0] hc_addr_out,  // Address being returned may cause an eviction!
    output logic [W-1:0] hc_value_out,  // lower
    // Inputs from Memory Bus (SDRAM controller)
    input logic mem_bus_ready_in,  // This might go unsused...
    input logic mem_bus_valid_in,  // DRAM data is valid for LLC to consume
    // InOut on Memory Bus (SDRAM controller)
    inout logic [W-1:0] mem_bus_value_io,  // Load / Store value for memory module
    // Outputs to Memory Bus (SDRAM controller)
    output logic [PADDR_BITS:0] mem_bus_addr_out,  // Load addr for memory module, top bit is used for act_n
    output logic mem_bus_ready_out,  // Should ALWAYS be ready to receive data from SDRAM controller
    output logic mem_bus_valid_out
);
    logic sdram_valid_out;
    logic sdram_ready_out;
    logic [PADDR_BITS-1:0] sdram_addr_out;
    logic [W-1:0] sdram_value_out;
    logic sdram_we_out;

    logic sdram_valid_in;
    logic sdram_ready_in;
    logic [PADDR_BITS-1:0] sdram_addr_in;
    logic [W-1:0] sdram_value_in;
    logic hc_we_out;

    // preliminary logics for scheduling onto the bus
    logic [PADDR_BITS-1:0] _bus_addr_out;
    logic [$clog2(BANK_GROUPS)-1:0] _bus_bank_group_out;
    logic [$clog2(BANKS_PER_GROUP)-1:0] _bus_bank_out;
    logic [ROW_BITS-1:0] _bus_row_out;
    logic [COL_BITS-1:0] _bus_col_out;
    logic [511:0] _bus_val_out;
    logic [2:0] _bus_cmd_out;
    logic _bus_valid_out;
    logic _bus_act_out;
    logic _bus_addr_cmd_out;

    cache #(
        .A(A),
        .B(B),
        .C(C),
        .W(W), 
        .ADDRESS_SIZE(PADDR_BITS) // not currently implemented in cache but should be 
    ) dut (
      .rst_N_in(rst_N_in),
      .clk_in(clk_in),
      .cs_in(cs_in),
      .flush_in(flush_in),
      .hc_valid_in(hc_valid_in),
      .hc_ready_in(hc_ready_in),
      .hc_addr_in(hc_addr_in),
      .hc_value_in(hc_value_in),
      .hc_we_in(hc_we_in),
      .lc_valid_out(sdram_valid_out),
      .lc_ready_out(sdram_ready_out),
      .lc_addr_out(sdram_addr_out),
      .lc_value_out(sdram_value_out),
      .we_out(sdram_we_out),
      .lc_valid_in(sdram_valid_in),
      .lc_ready_in(sdram_ready_in),
      .lc_addr_in(sdram_addr_in),
      .lc_value_in(sdram_value_in),
      .hc_valid_out(hc_valid_out),
      .hc_ready_out(hc_ready_out),
      .hc_we_out(hc_we_out),
      .hc_addr_out(hc_addr_out),
      .hc_value_out(hc_value_out)
    );

    typedef enum logic [3:0] {
        IDLE,
        ROW_ACT,
        COL_ACT,
        READING,
        WRITING,
        PRECHARGING,
        REFRESHING,
        INIT
    } sdram_state_t;

    // TODO: add functionality for chip select?

    logic mem_bus_ready;
    logic bursting_block;

    request_scheduler #(
        .BUS_WIDTH(BUS_WIDTH),  // bus width per chip
        .BANK_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP),       // banks per group
        .ROW_BITS(ROW_BITS),    // bits to address rows
        .COL_BITS(COL_BITS),     // bits to address columns
        .PADDR_BITS(PADDR_BITS),
        .QUEUE_SIZE(16), // set this, play around with it
        .ACTIVATION_LATENCY(ACTIVATION_LATENCY),
        .PRECHARGE_LATENCY(PRECHARGE_LATENCY), 
        .BANKS(BANK_GROUPS * BANKS_PER_GROUP)
    ) _request_scheduler (
        .clk_in(clk_in),
        .rst_in(rst_N_in), //TODO CLINT WHICH IS IT?? rst or NOT rst
        .mem_bus_addr_in(sdram_addr_out),
        .valid_in(sdram_valid_out), 
        .write_in(sdram_we_out), 
        .val_in(sdram_value_out), 
        .cmd_ready(mem_bus_ready), 
        .bursting(bursting_block),
        // OUTPUTS
        .addr_out(mem_bus_addr_out),
        .bank_group_out(_bus_bank_group_out),
        .bank_out(_bus_bank_out),
        .row_out(_bus_row_out),
        .col_out(_bus_col_out),
        .val_out(_bus_val_out),
        .cmd_out(_bus_cmd_out), // 0 is read, 1 is write, 2 is activate, 3 is precharge; if valid_out is 0 then block
        .valid_out(_bus_valid_out)
    );
    // TODO IMPLEMENT CMD SENDER TO SEND CMDS ON BUS AND TO RECEIVE DATA FROM BUS!

    command_sender #(
        .CAS_LATENCY(CAS_LATENCY),
        .BANK_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP),       // banks per group
        .ROW_BITS(ROW_BITS),    // bits to address rows
        COL_BITS(COL_BITS)     // bits to address columns
    ) cmd_sender (
        .clk_in(clk_in),
        .rst_N_in(rst_N_in), //TODO HERE YOU GO HERE TOO CLINT
        .bank_group_in(_bus_bank_group_out),
        .bank_in(_bus_bank_out),
        .row_in(_bus_row_out),
        .col_in(_bus_col_out),
        .valid_in(_bus_valid_out), // if not valid ignore
        .val_in(_bus_val_out), // val to write if write
        .cmd_in(_bus_cmd_out),

        .bank_group_out(),
        .bank_out(),
        .act_out(lc_valid_in), // Command bit (read is resolving)
        .dram_addr_out(),  // col (offset?)
        .val_out(), //oops ITS TOO BIG. this is a cache line but the tight cache is looking for a WORD on the clock cycle, at best with DDR4 I need at least 2 words per cycle
        .bursting(bursting_block), // set to HI when the dimm should not recieve any commands that will interfere with a burst
        .mem_bus_value_io(mem_bus_value_io)  // Load / Store value for memory module
    );

    // Set default values
    always_ff @(posedge clk_in or posedge rst_N_in) begin
        if (rst_N_in) begin
            mem_bus_ready <= '0;
            mem_bus_valid_out <= '0;
        end else begin
            mem_bus_valid_out <= _bus_valid_out;
            mem_bus_ready <= !_bus_valid_out; // not ready to receive new requests, we still processing
        end
    end
endmodule: last_level_cache