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
    parameter int PADDR_BITS = 19
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
    input logic [63:0] hc_value_in,  // The write to the lower-level cache
    input logic hc_we_in,  // Higher-level cache is requesting a read/write
    // Outputs to Higher-Level Caches (remember lower is slower with caches)
    output logic hc_ready_out,  // lower cache is ready (lower is slower)
    output logic hc_valid_out,  // lower cache is sending data to this module
    output logic [PADDR_BITS-1:0] hc_addr_out,  // Address being returned may cause an eviction!
    output logic [63:0] hc_value_out,  // lower
    // Inputs from Memory Bus (SDRAM controller)
    input logic mem_bus_ready_in,  // This might go unsused...
    input logic mem_bus_valid_in,  // DRAM data is valid for LLC to consume
    // InOut on Memory Bus (SDRAM controller)
    inout logic [63:0] mem_bus_value_io,  // Load / Store value for memory module
    // Outputs to Memory Bus (SDRAM controller)
    output logic [PADDR_BITS-1:0] mem_bus_addr_out,  // Load addr for memory module
    output logic mem_bus_ready_out,  // Should ALWAYS be ready to receive data from SDRAM controller
    output logic mem_bus_valid_out
);
    // You may reuse the cache module that the L1D team will work on
    // Your main task will be talking to the DIMM on an eviction or flush.
endmodule : last_level_cache

// A signal is expected to be sent to multiple DDR4 SDRAM chips at a time. You
// do need to consider this, it is done transparently by the DIMM.

// There may be more latencies that aren't accounted for in these parameters,
// but which are needed for communication with the DIMM. Please post on Ed if
// you notice this.

// An SDRAM dimm has no valid/ready information. Data is expected exactly
// CAS_LATENCY signals after it is requested.

module ddr4_sdram_controller #(
    parameter int CAS_LATENCY = 22,  // latency in cycles to get a response from DRAM
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int ROW_BITS = 8,  // log2(ROWS)
    parameter int COL_BITS = 4,  // log2(COLS)
    parameter int PADDR_BITS = 19
) (
    // Generic
    input clk_in,
    input rst_N_in,
    input cs_N_in,
    // Inputs from memory bus
    input logic mem_bus_ready_in,  // DRAM is ready to receive info
    input logic mem_bus_valid_in,  // DRAM data is ready for LLC to consume
    input logic [PADDR_BITS-1:0] mem_bus_addr_in,  // Address from the last-level cache
    // Inout on memory bus
    inout logic [63:0] mem_bus_value_io,  //
    // Outputs to DDR4 SDRAM
    output logic act_out,  // Activate sdram
    output logic [16:0] dram_addr_out,  // row/col or special bits.
    output logic [1:0] bg_out,  // Bank group id
    output logic [1:0] ba_out,  // Bank id
    output logic [63:0] dqm_out,  // Data mask in. Set to one to block masks
    output logic mem_bus_ready_out,  // LLC ready to receive info
    output logic mem_bus_valid_out,  // DRAM info is ready for LLC.
    // Inouts to DDR4 SDRAM
    inout logic [63:0] dqs  // Data ins/outs from all dram chips
);
endmodule : ddr4_sdram_controller


// adjust refresh param based on the actual clock, currently assuming 1 GHz clock => 64 ms = 64,000,000 ns
module autorefresh #(
    parameter int REFRESH = 64_000_000
) (
    input logic clk_in,
    input logic rst_in,
    output logic refresh
);
    localparam WIDTH = $clog2(REFRESH)
    logic [WIDTH-1:0] count;
    always_ff @(posedge clk or posedge rst_in) begin
        if (rst_in) begin
            count <= 0;
            refresh <= 0;
        end else if (count == REFRESH - 1) begin
            count <= 0;
            refresh <= ~refresh;
        end else begin
            count <= count + 1;
        end
    end 
endmodule : autorefresh


module request_scheduler #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384,
    parameter int BUS_WIDTH = 16,  // bus width per chip
    parameter int BANK_GROUPS = 8,
    parameter int BANKS_PER_GROUP = 8,       // banks per group
    parameter int ROW_BITS = 8,    // bits to address rows
    parameter int COL_BITS = 4,     // bits to address columns
    parameter int QUEUE_SIZE = 16, // set this, play around with it
    parameter int ACTIVATION_LATENCY = 8,
    parameter int PRECHARGE_LATENCY = 5
) (
    input logic clk_in,
    input logic rst_in,
    input logic [$clog2(BANK_GROUPS)-1:0] bank_group_in,
    input logic [$clog2(BANKS_PER_GROUP)-1:0] bank_in,
    input logic [ROW_BITS-1:0] row_in,
    input logic [COL_BITS-1:0] col_in,
    input logic valid_in, // if not valid ignore
    input logic write_in, // if val is ok to write (basically write request)
    input logic [63:0] val_in, // val to write if write
    input logic precharged, // is row already precharged?
    input logic cmd_ready, // is controller ready to receive command

    output logic [$clog2(BANK_GROUPS)-1:0] bank_group_out,
    output logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out,
    output logic [ROW_BITS-1:0] row_out,
    output logic [COL_BITS-1:0] col_out,
    output logic [2:0] cmd_out, // 0 is read, 1 is write, 2 is activate, 3 is precharge, 4 is block
    output logic valid_out,
);
    typedef struct packed {
        logic [$clog2(BANK_GROUPS)-1:0] bank_group,
        logic [$clog2(BANKS_PER_GROUP)-1:0] bank,
        logic [ROW_BITS-1:0] row,
        logic [COL_BITS-1:0] col,
        logic [63:0] val_in,
        logic [2:0] state, // 000 nothing (needs everything), 001 precharge pending, 010 activate ready, 011 activate pending, 100 r/w ready, 101 r/w pending, 110 r/w done
        logic [3:0] wait_cycles, // max 8 cycle occupancy (hardcoded for now)
        logic write,
        logic valid // do we need this?
    } mem_request_t;

    typedef struct packed {
        mem_request_t queue[QUEUE_SIZE-1:0],
        logic [$clog2(QUEUE_SIZE)-1:0] head;
        logic [$clog2(QUEUE_SIZE)-1:0] size;
    } req_queue_t;

    function automatic void rst_req_queue(
        output req_queue_t r_queue
    );
        r_queue.head = 0;
        r_queue.size = 0;
    endfunction

    // Function to set fields of a write request
    function automatic void init_mem_req(
        output write_request_t req,
        input logic [$clog2(BANK_GROUPS)-1:0] bg,
        input logic [$clog2(BANKS_PER_GROUP)-1:0] b,
        input logic [ROW_BITS-1:0] r,
        input logic [COL_BITS-1:0] c,
        input logic [63:0] data,
        input logic write,
        input logic [2:0] state
    );
        req.bank_group = bg;
        req.bank = b;
        req.row = r;
        req.col = c;
        req.val_in = data;
        req.state = state; // precharged ? skip to activation stage
        req.wait_cycles = 3'b0;
        req.valid = 1'b1;
        req.write = write;
    endfunction

    function automatic void enqueue(
        output req_queue_t r_queue,
        input mem_request_t in_req,
        input logic [2:0] state
    );
        // TODO what if queue is full? how do we block?
        init_mem_req(
            r_queue.queue[(r_queue.head + r_queue.size) % QUEUE_SIZE],
            req.bank_group,
            req.bank,
            req.row,
            req.col,
            req.val_in,
            req.data,
            req.write,
            state
        );
        r_queue.size <= r_queue.size + 1;
    endfunction

    req_queue_t read_queue;
    req_queue_t write_queue;
    req_queue_t precharge_queue;
    req_queue_t activation_queue;

    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            rst_req_queue(read_queue);
            rst_req_queue(write_queue);
            rst_req_queue(precharge_queue);
            rst_req_queue(activation_queue);
        end
        // MANAGERIAL STUFF - decrease wait cycles every cycle, pop off queues, add to new queues, etc...
        // update all requests waitcycles
        for (int i = 0; i < precharge_queue.size; i++) begin
            int idx = (i + precharge_queue.head) % QUEUE_SIZE;
            mem_request_t req = precharge_queue.queue[idx];
            // if precharge pending decrease wait cycles; if its 0 time to pop off queue
            if (req.valid && req.state == 3'b001 ) begin
                req.wait_cycles <= req.wait_cycles - 1;
                if (req.wait_cycles == 3'b0) begin
                    req.valid = 1'b0;
                    // pop onto the next queue
                    enqueue(activation_queue, req, 3'b010);
                end
            end
            // clear the front of the queue
            if (!req.valid && idx == precharge_queue.head) begin
                precharge_queue.head <= (precharge_queue.head + 1) % QUEUE_SIZE;
                precharge_queue.size <= precharge_queue.size - 1;
            end
        end
        for (int i = 0; i < activation_queue.size; i++) begin
            int idx = (i + activation_queue.head) % QUEUE_SIZE;
            mem_request_t req = activation_queue.queue[idx];
            if (req.valid && req.state == 3'b011 ) begin
                req.wait_cycles <= req.wait_cycles - 1;
                if (req.wait_cycles == 3'b0) begin
                    req.valid = 1'b0;
                    if (req.write) begin
                        enqueue(write_queue, req, 3'b100);
                    end else begin
                        enqueue(read_queue, req, 3'b100);
                    end
                end
            end
            if (!req.valid && idx == activation_queue.head) begin
                activation_queue.head <= (activation_queue.head + 1) % QUEUE_SIZE;
                activation_queue.size <= activation_queue.size - 1;
            end
        end
    end

    always_comb begin
        if (valid_in) begin
            if (precharge_queue.size >= QUEUE_SIZE) begin
                cmd_out <= 3'b100; // block
            end else begin
                // TODO if its already precharged or activated skip those steps, we need to keep track of whats precharged/activated
                init_mem_req(
                    precharge_queue.queue[(precharge_queue.head + precharge_queue.size) % QUEUE_SIZE],
                    bank_group_in,
                    bank_in,
                    row,
                    col,
                    val_in,
                    write_in,
                    3'b000
                );
            end
        end
    end

endmodule: request_scheduler

module address_parser #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384,
    parameter int BUS_WIDTH = 16,  // bus width per chip
    parameter int BANK_GROUPS = 8,
    parameter int BANKS_PER_GROUP = 8,       // banks per group
    parameter int ROW_BITS = 8,    // bits to address rows
    parameter int COL_BITS = 4     // bits to address columns
) (
    input logic [63:0]                          l1d_addr_in,
    output logic [$clog2(BANK_GROUPS)]          bank_group_out,
    output logic [$clog2(BANKS_PER_GROUP)-1:0]  bank_out,
    output logic [ROW_BITS-1:0]                 row_out,
    output logic [COL_BITS-1:0]                 col_out
);

    // Associativity: 8, block size = 16, capacity = 16384
    localparam int num_sets = C / (A * B);
    // Block offset =  bits
    localparam int block_offset_bits = $clog2(B);
    localparam int set_index_bits = $clog2(num_sets);
    localparam int tag_bits = 64 - block_offset_bits - set_index_bits;

    localparam int BANK_BITS = $clog2(BANKS);

    // Need to reevaluate after the design review. Current assumptions:
    // The bank, row, and column address are stored at the lower bits of the address in, leaving the remaining more significant bits for other info

    // Proposed mapping for now: 
    /*
    Cache:  [    52-bit Tag    ][6-bit Set Index][  6-bit Block Offset  ]
    DDR4:   [Unused][Row][BankGroup][  Bank  ][    Column    ]
                        [  44  ][ 8 ][    3    ][   6   ][      4       ]

    */

    assign bank_out = address_in[BANK_BITS + ROW_BITS + COL_BITS - 1: ROW_BITS + COL_BITS];
    assign row_out = address_in[ROW_POS + COL_BITS: COL_BITS];
    assign column_out = address_in[COL_POS: 0];


endmodule