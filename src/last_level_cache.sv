module last_level_cache #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384
) (
    // Regular signals
    input logic rst_N_in,
    input logic cs_N_in,  // chip select, active-low
    input logic clk_in,  // clk input
    // Inputs from l1d
    input logic l1d_ready_in,  // LLC ready to receive info. This may always be ready
    input logic l1d_valid_in,  // LLC info is valid
    input logic [63:0] l1d_addr_in,  // addr or value out depending on miss or hit
    input logic [63:0] l1d_value_in,  // addr or value out depending on miss or hit
    // Inputs from dram
    input logic dram_ready_in,  // DRAM is ready to receive info
    input logic dram_valid_in,  // DRAM data is ready for LLC to consume
    input logic [63:0] dram_value_in,  // Load returned from DRAM
    // Outputs to DRAM
    output logic cs_N_in,  // chip select. active low
    output logic ras_N_in,  // row address strobe. active low.
    output logic cas_N_in,  // column address strobe. active low.
    output logic we_N_in,  // write enable. active low.
    output logic [$clog2(BANKS)-1:0] bank,
    // Outputs to L1D
    output logic hit_out,  // hit or miss
    output data_t data_out,  // addr or value out depending on miss or hit
    output logic ready_out,  // Ready to receive inputs
    output logic l1d_valid  // Outputs are valid
);
    // You may reuse the cache module that the L1D team will work on
    // Your main task will be handling a miss and talking to the DIMM
endmodule : last_level_cache

// You may choose to make this DDR4 controller as a separate module which is
// used by your LLC, or you may choose to delete the below declaration include
// the design in the LLC module.
module ddr4_controller #(
    parameter int REFRESH = 64
) (
    input logic rst_N_in,
    input logic clk_in
);
    logic refresh;
    // once timer becomes 1, refresh all banks => wait 100 microseconds (or if our clock is 1 GHz, wait 1 ns)
    autorefresh #(.REFRESH(REFRESH)) a_rfr(clk_in, rst_N_in, refresh);

endmodule : ddr4_controller

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
    parameter int QUEUE_SIZE=16 // set this, play around with it
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
        logic [2:0] state, // 000 nothing (needs everything), 001 precharge pending, 010 activate ready, 011 activate pending, 100 r/w ready, 101 r/w pending, 110 r/w done
        logic [1:0] wait_cycles, // max 3 cycle occupancy
        logic valid
    } read_request_t;

    typedef struct packed {
        logic [$clog2(BANK_GROUPS)-1:0] bank_group,
        logic [$clog2(BANKS_PER_GROUP)-1:0] bank,
        logic [ROW_BITS-1:0] row,
        logic [COL_BITS-1:0] col,
        logic [63:0] val_in,
        logic [2:0] state, // 000 nothing (needs everything), 001 precharge pending, 010 activate ready, 011 activate pending, 100 r/w ready, 101 r/w pending, 110 r/w done
        logic [1:0] wait_cycles, // max 3 cycle occupancy
        logic valid // do we need this?
    } write_request_t;

    // Function to set fields of a read request
    function automatic void init_read_req(
        output read_request_t req,
        input logic [$clog2(BANK_GROUPS)-1:0] bg,
        input logic [$clog2(BANKS_PER_GROUP)-1:0] b,
        input logic [ROW_BITS-1:0] r,
        input logic [COL_BITS-1:0] c,
        input logic precharged
    );
        req.bank_group = bg;
        req.bank = b;
        req.row = r;
        req.col = c;
        req.state = precharged ? 3'b010 : 3'b000; // if its already precharged skip to ready for activation
        req.wait_cycles = 2'b00;
        req.valid = 1'b1;
    endfunction

    // Function to set fields of a write request
    function automatic void init_write_req(
        output write_request_t req,
        input logic [$clog2(BANK_GROUPS)-1:0] bg,
        input logic [$clog2(BANKS_PER_GROUP)-1:0] b,
        input logic [ROW_BITS-1:0] r,
        input logic [COL_BITS-1:0] c,
        input logic [63:0] data,
        input logic precharged
    );
        req.bank_group = bg;
        req.bank = b;
        req.row = r;
        req.col = c;
        req.val_in = data;
        req.state = precharged ? 3'b010 : 3'b000; // precharged ? skip to activation stage
        req.wait_cycles = 2'b00;
        req.valid = 1'b1;
    endfunction

    read_request_t read_queue[QUEUE_SIZE-1:0];
    write_request_t write_queue[QUEUE_SIZE-1:0];
    logic [$clog2(QUEUE_SIZE)-1:0] read_queue_head;
    logic [$clog2(QUEUE_SIZE)-1:0] write_queue_head;
    logic [$clog2(QUEUE_SIZE)-1:0] read_queue_len;
    logic [$clog2(QUEUE_SIZE)-1:0] write_queue_len;

    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            read_queue_len <= 0;
            write_queue_len <= 0;
            read_queue_head <= 0;
            write_queue_head <= 0;
        end
        // TODO every clock cycle we need to determine which request to take a look at, then which command to issue based on that request
    end

    always_comb begin
        if (valid_in) begin
            if (write_in) begin
                if (write_queue_len >= QUEUE_SIZE) begin
                    cmd_out <= 3'b100; // block
                end
                else begin
                    localparam write_queue_tail = write_queue_head + write_queue_len;
                    init_write_req(write_queue[write_queue_tail], bank_group_in, bank_in, row, col, val_in, precharged);
                end
            end else begin
                if (read_queue_len >= QUEUE_SIZE) begin
                    cmd_out <= 3'b100; // block
                end
                else begin
                    localparam read_queue_tail = read_queue_head + read_queue_len;
                    init_read_req(read_queue[read_queue_tail], bank_group_in, bank_in, row, col, precharged);
                end
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