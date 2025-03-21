
// A signal is expected to be sent to multiple DDR4 SDRAM chips at a time. You
// do need to consider this, it is done transparently by the DIMM.

// There may be more latencies that aren't accounted for in these parameters,
// but which are needed for communication with the DIMM. Please post on Ed if
// you notice this.

// An SDRAM dimm has no valid/ready information. Data is expected exactly
// CAS_LATENCY signals after it is requested.

// we operate on the assumption that no one will send data while the sdram_controller is busy

module ddr4_sdram_controller #(
    parameter int CAS_LATENCY = 22,  // latency in cycles to get a response from DRAM
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int ROW_BITS = 8,  // log2(ROWS)
    parameter int COL_BITS = 4,  // log2(COLS)
    parameter int PADDR_BITS = 19,

    // Following parameters added by us
    parameter int BUS_WIDTH = 16,  // bus width per chip
    parameter int BANK_GROUPS = 8,
    parameter int BANKS_PER_GROUP = 8,
    parameter int BANKS = BANK_GROUPS * BANKS_PER_GROUP
) (
    // Generic
    input clk_in,
    input rst_N_in,
    input cs_N_in,
    // Inputs from memory bus
    input logic mem_bus_ready_in,  // DRAM is ready to receive info (unused)
    input logic mem_bus_valid_in,  // DRAM data is ready for LLC to consume (unused)
    input logic [PADDR_BITS-1:0] mem_bus_addr_in,  // Address from the last-level cache
    // Inout on memory bus
    inout logic [63:0] mem_bus_value_io,  //
    // Outputs to DDR4 SDRAM
    output logic act_out,  // Activate sdram, when this is high, we need to set RAS,CAS,WE
    output logic [16:0] dram_addr_out,  // row/col or special bits.
    output logic [1:0] bg_out,  // Bank group id
    output logic [1:0] ba_out,  // Bank id
    output logic [63:0] dqm_out,  // Data mask in. Set to one to block masks
    output logic mem_bus_ready_out,  // Ready to receive info from LLC
    output logic mem_bus_valid_out,  // DRAM info is ready for LLC
    // Inouts to DDR4 SDRAM
    inout logic [63:0] dqs  // Data ins/outs from all dram chips
);
    typedef struct packed {
        logic [ROW_BITS-1:0] row_out;
    } bank_row_t;

    typedef struct packed {
        logic [BANKS-1:0] precharge;
        logic [BANKS-1:0] activate;
        bank_row_t row_address; // Row address to activate
    } bank_state_params_in_t;

    typedef struct packed {
        bank_row_t [BANKS-1:0] active_row_out;  // Active row for a selected bank
        logic [BANKS-1:0] ready_to_access; // precharged
        logic [BANKS-1:0] active_bank;
        logic [BANKS-1:0] blocked;
    } bank_state_params_out_t;

    typedef struct packed {
        logic read;
        logic [31:0] cycle_counter; 
    } read_request_t;

    bank_state_params_in_t state_params_in;
    bank_state_params_out_t state_params_out;
    logic [PADDR_BITS-1:0] addr;
    logic [63:0] value;
    logic [ROW_BITS-1:0] row;
    logic [COL_BITS-1:0] col;
    logic [$clog2(BANK_GROUPS)-1:0] bg;
    logic [$clog2(BANKS_PER_GROUP)-1:0] ba;
    logic [$clog2(BANKS)-1:0] b_idx;
    logic we; // write enable, send this on the first bit of paddr
    logic [1:0] cmd;
    logic [1:0] state; // 0 row_ready 1 col_ready

    logic send_t;
    logic send_dram_t;
    logic [63:0] mem_bus_value_io_t; // when sending value back through mem_bus for a read
    logic act_out_t;  // Activate sdram, when this is high, we need to set RAS,CAS,WE
    logic [16:0] dram_addr_out_t;  // row/col or special bits.
    logic [63:0] dqm_out_t;  // Data mask in. Set to one to block masks
    // Inouts to DDR4 SDRAM
    logic [63:0] dqs_t; // when sending a data to sdram for a write
    logic [63:0] dqs_out;
    logic [63:0] mem_bus_value_io_out;
    logic   enqueue_in,
            dequeue_in,
            empty,
            full;
    logic [31:0] cycle_counter;
    read_request_t req_in, req_out;
    assign b_idx = (bg * BANKS_PER_GROUP[$clog2(BANK_GROUPS) + $clog2(BANKS_PER_GROUP) - 1:0]) + {{$clog2(BANK_GROUPS){1'b0}}, ba};
    assign we = mem_bus_addr_in[PADDR_BITS-1];
    assign state_params_in.row_address.row_out = row;
    assign mem_bus_value_io = send_t ? mem_bus_value_io_out : 'z;
    assign dqs = send_dram_t ? dqs_out : 'z;

    sdram_bank_state #(
        .ROW_WIDTH(ROW_BITS),
        .NUM_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP),
        .BANKS(BANK_GROUPS * BANKS_PER_GROUP),
        .ACTIVATION_LATENCY(ACTIVATION_LATENCY),
        .PRECHARGE_LATENCY(PRECHARGE_LATENCY),
        .bank_row_t(bank_row_t)
    ) _sdram_bank_state (
        .clk(clk_in),
        .rst(rst_N_in),
        .precharge(state_params_in.precharge),
        .activate(state_params_in.activate),
        .row_address(state_params_in.row_address),
        .active_row_out(state_params_out.active_row_out),
        .ready_to_access(state_params_out.ready_to_access),
        .active_bank(state_params_out.active_bank),
        .blocked(state_params_out.blocked)
    );

    address_parser #(
        .ROW_BITS(ROW_BITS),
        .COL_BITS(COL_BITS),
        .PADDR_BITS(PADDR_BITS),
        .BANK_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP)
    ) _address_parser(
        .mem_bus_addr_in(mem_bus_addr_in),
        .row_out(row),
        .col_out(col),
        .bg_out(bg),
        .ba_out(ba)
    );

    mem_req_queue #(
        .QUEUE_SIZE(32),
        .mem_request_t(read_request_t) // default placeholder
    ) read_queue(
        .clk_in(clk_in),
        .rst_in(rst_N_in),
        .enqueue_in(enqueue_in),
        .dequeue_in(dequeue_in),
        .req_in(req_in),
        .cycle_count(cycle_counter),
        .req_out(req_out),
        .empty(empty),
        .full(full)
    );

    always_ff @(posedge clk_in or posedge rst_N_in) begin
        if (rst_N_in) begin
            state <= '0;
            cycle_counter <= '0;
        end else begin
            addr <= mem_bus_addr_in;
            value <= mem_bus_value_io;
            cycle_counter <= cycle_counter + 1;
            dqs_out <= dqs_t;
            mem_bus_value_io_out <= mem_bus_value_io_t;
        end
    end

    always_comb begin
        req_in.read = 0;
        req_in.cycle_counter = 0;
        enqueue_in = 0;
        dequeue_in = 0;
        send_dram_t = 0;
        cmd = 2'b00;
        act_out_t = 0;
        dram_addr_out_t = '0;
        dqs_t = '0;
        state_params_in.precharge = state_params_out.ready_to_access;
        state_params_in.activate = state_params_out.active_bank;
        state_params_in.row_address.row_out = '0;
        send_t = 0;
        mem_bus_value_io_t = '0;
        // check, then decide what command to issue
        if (mem_bus_valid_in) begin
            // row-issue ready, lets determine which command to issue
            if (state_params_out.active_bank[b_idx] && 
                state_params_out.active_row_out[b_idx].row_out == row) begin
                // ready to perform r/w
                cmd = {1'b0, we};
                act_out_t = 1;
                dram_addr_out_t = {1'b1, 1'b0, !we, {{14-COL_BITS}{1'b0}}, col};
                if (we) begin
                    dqs_t = mem_bus_value_io;
                    send_dram_t = 1;
                end
                req_in.read = !we;
                req_in.cycle_counter = cycle_counter + 1; // read/write latency temp set to 1
            end else if (state_params_out.active_bank[b_idx]) begin
                // need to precharge
                cmd = 2'b11;
                act_out_t = 1;
                dram_addr_out_t = {1'b0, 1'b1, 1'b0, {{14-ROW_BITS}{1'b0}}, row};
                state_params_in.precharge = state_params_out.ready_to_access;
                state_params_in.precharge[b_idx] = 1'b1;
                req_in.cycle_counter = cycle_counter + PRECHARGE_LATENCY;
            end else begin
                // need to activate
                cmd = 2'b10;
                act_out_t = 0;
                dram_addr_out_t = {{{17-ROW_BITS}{1'b0}}, row};
                state_params_in.activate = state_params_out.active_bank;
                state_params_in.activate[b_idx] = 1'b1;
                state_params_in.row_address = row;
                req_in.cycle_counter = cycle_counter + ACTIVATION_LATENCY;
            end
            enqueue_in = 1;
        end
        // based on the command, update bank state
        // then track in a queue when to read (can we modularize this)
        if (req_out.cycle_counter < cycle_counter) begin
            // take top, dequeue it, and if its a read, send back through bus
            if (req_out.read) begin
                send_t = 1;
                mem_bus_value_io_t = dqs;
            end
            dequeue_in = 1;
        end
    end

endmodule : ddr4_sdram_controller