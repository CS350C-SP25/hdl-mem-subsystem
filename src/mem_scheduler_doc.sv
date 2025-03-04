// documentation headers so everything is easier for me to access
// delete before submitting
typedef struct packed {
    logic [$clog2(BANK_GROUPS)-1:0] bank_group,
    logic [$clog2(BANKS_PER_GROUP)-1:0] bank,
    logic [ROW_BITS-1:0] row,
    logic [COL_BITS-1:0] col,
    logic [63:0] val_in,
    logic [2:0] state, // 000 nothing (needs everything), 001 precharge pending, 010 activate ready, 011 activate pending, 100 r/w ready, 101 r/w pending, 110 r/w done
    logic [31:0] cycle_count // cycle counter of when the last state was set
    logic write,
    logic valid // do we need this?
} mem_request_t;

typedef struct packed {
    logic enqueue_in,
    logic dequeue_in,
    logic transfer_ready, // command is available 
    mem_request_t req_in,
    mem_request_t ready_top_out,
    mem_request_t pending_top_out,
    logic ready_empty_out, // if empty then top doesnt matter
    logic pending_empty_out,
    logic promote,
    logic incoming // if theres an incoming request into the scheduler and it needs to be placed in the queue, it takes priority over a promotion
} mem_queue_params;

typedef struct packed {
    logic [BANKS-1:0] bank_enable,  // Enable signal for each bank (1: enabled, 0: disabled)
    logic [BANKS-1:0] precharge,    // Precharge signal for each bank (1: precharge, 0: no precharge)
    logic [BANKS-1:0] activate,     // Activate signal for each bank (1: activate, 0: no activate)
    logic [ROW_BITS-1:0] row_address, // Row address to activate
    logic [BANKS-1:0] request_data,  // Request data signal for each bank
    logic [ROW_BITS-1:0] active_row_out,  // Active row for a selected bank
    logic [BANKS-1:0] ready_to_access, // Bank ready to access (not in precharge)
    logic [BANKS-1:0] active_bank 
} bank_state_params;



/**
* ORIGINAL REQUEST SCHEDULER WITH TRANS SCHEDULER COMMENTED OUT; FOR WORKING ON LATER, NOT FOR SUBMISSION
**/
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
    parameter int PRECHARGE_LATENCY = 5, 
    parameter int BANKS = BANK_GROUPS * BANKS_PER_GROUP;
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
        logic [31:0] cycle_count // cycle counter of when the last state was set
        logic write,
        logic valid // do we need this?
    } mem_request_t;

    typedef struct packed {
        logic enqueue_in,
        logic dequeue_in,
        logic transfer_ready, // command is available 
        mem_request_t req_in,
        mem_request_t ready_top_out,
        mem_request_t pending_top_out,
        logic ready_empty_out, // if empty then top doesnt matter
        logic pending_empty_out,
        logic promote,
        logic incoming // if theres an incoming request into the scheduler and it needs to be placed in the queue, it takes priority over a promotion
    } mem_queue_params;

    typedef struct packed {
        logic [BANKS-1:0] bank_enable,  // Enable signal for each bank (1: enabled, 0: disabled)
        logic [BANKS-1:0] precharge,    // Precharge signal for each bank (1: precharge, 0: no precharge)
        logic [BANKS-1:0] activate,     // Activate signal for each bank (1: activate, 0: no activate)
        logic [ROW_BITS-1:0] row_address, // Row address to activate
        logic [BANKS-1:0] request_data,  // Request data signal for each bank
        logic [ROW_BITS-1:0] active_row_out,  // Active row for a selected bank
        logic [BANKS-1:0] ready_to_access, // Bank ready to access (not in precharge)
        logic [BANKS-1:0] active_bank 
    } bank_state_params;

    // used for transaction scheduler, dont need this for submission
    // typedef struct packed {
    //     logic enqueue_in;
    //     logic dequeue_in;
    //     mem_request_t req_in;
    //     mem_request_t req_out;
    //     logic empty;
    //     logic full;
    // } trans_params_t;

    // Function to set fields of a write request
    function automatic void init_mem_req(
        output write_request_t req,
        input logic [$clog2(BANK_GROUPS)-1:0] bg,
        input logic [$clog2(BANKS_PER_GROUP)-1:0] b,
        input logic [ROW_BITS-1:0] r,
        input logic [COL_BITS-1:0] c,
        input logic [63:0] data,
        input logic [31:0] cycle_count,
        input logic write,
        input logic [2:0] state
    );
        req.bank_group = bg;
        req.bank = b;
        req.row = r;
        req.col = c;
        req.val_in = data;
        req.state = state; // precharged ? skip to activation stage
        req.cycle_count = cycle_count;
        req.valid = 1'b1;
        req.write = write;
    endfunction

    // submodule for handling memory request queues
    module mem_req_queue #(
        parameter QUEUE_SIZE=16
    ) (
        input logic clk_in,
        input logic rst_in,
        input logic enqueue_in,
        input logic dequeue_in,
        input mem_request_t req_in,
        input logic [31:0] cycle_count,
        output mem_request_t req_out,
        output logic empty,
        output logic full
    );
        mem_request_t queue[QUEUE_SIZE-1:0];
        mem_request_t next_queue[QUEUE_SIZE-1:0];
        logic [$clog2(QUEUE_SIZE)-1:0] next_head;
        logic [$clog2(QUEUE_SIZE)-1:0] next_size;
        logic [$clog2(QUEUE_SIZE)-1:0] head;
        logic [$clog2(QUEUE_SIZE)-1:0] size;
        always_ff @(posedge clk_in or posedge rst_in) begin
            if (rst_in) begin
                head <= 0;
                size <= 0;
            end else begin
            end
        end

        always_ff @(posedge clk_in) begin
            queue <= next_queue;
        end

        always_comb begin
            next_queue = queue;
            next_size = size;
            next_head = head;
            
            if (enqueue_in && !full) begin
                next_queue[(head + size) % QUEUE_SIZE] = req_in;
                next_size = size + 1;
            end
            if (dequeue_in && !full) begin
                next_size = size - 1;
                next_head = (head + 1) % QUEUE_SIZE;
            end
        end
        // Full & Empty Flags
        assign req_out = queue[head];
        assign full = (size == QUEUE_SIZE);
        assign empty = (size == 0);
    endmodule: mem_req_queue;

    // submodule for handling the actual commands, serves as a wrapper for a double queue
    module mem_cmd_queue #(
        parameter QUEUE_SIZE = 16,
        parameter LATENCY = 0, // DEFINITELY CHANGE THIS
    ) (
        input logic clk_in,
        input logic rst_in,
        input logic enqueue_in,
        input logic transfer_ready, // command is available 
        input mem_request_t req_in,
        input logic [31:0] cycle_count,
        input logic promote_ready, // if upper queue is ready for promotion. if it is full or there are incoming requests, those take priority
        output mem_request_t ready_top_out,
        output mem_request_t pending_top_out,
        output logic ready_empty_out, // if empty then top doesnt matter
        output logic pending_empty_out,
        output logic promote // if pending_top_out needs to be dequeued and promoted to the next queue 
    );
        logic transfer;
        logic ready_empty;
        logic ready_full;
        logic pending_empty;
        logic pending_full;
        mem_request_t ready_top;
        mem_request_t ready_top_reg; // register to maintain state for timing issues
        mem_request_t pending_top;

        mem_req_queue #(QUEUE_SIZE) ready(
            .clk_in(clk_in), 
            .rst_in(rst_in), 
            .enqueue_in(enqueue_in), 
            .dequeue_in(transfer), 
            .req_in(req_in), 
            .cycle_count(cycle_count), 
            .req_out(ready_top), 
            .empty(ready_empty), 
            .full(ready_full)
        );
        mem_req_queue #(QUEUE_SIZE) pending(
            .clk_in(clk_in), 
            .rst_in(rst_in), 
            .enqueue_in(transfer), 
            .dequeue_in(promote && promote_ready), 
            .req_in(ready_top_reg), 
            .cycle_count(cycle_count), 
            .req_out(pending_top), 
            .empty(pending_empty), 
            .full(pending_full)
        );

        // necessary to prevent timing issues with dequeue
        always_ff @(posedge clk_in) begin
            if (promote) begin
                pending_top_out <= pending_top;
            end
            if (transfer) begin
                ready_top_reg <= ready_top;
            end
        end

        assign ready_top_out = ready_top_reg;
        assign ready_empty_out = ready_empty;
        assign pending_empty_out = pending_empty;
        // promote to next queue
        assign promote = !pending_empty & (pending_top.cycle_count + LATENCY <= cycle_counter);
        
    endmodule: mem_cmd_queue;

    logic [31:0] cycle_counter;
    logic [$clog2(BANK_GROUPS) + $clog2(BANKS_PER_GROUP) - 1:0] bank_idx;
    bank_state_params bank_state_params;
    mem_queue_params [BANKS-1:0] read_params;
    mem_queue_params [BANKS-1:0] write_params;
    mem_queue_params [BANKS-1:0] precharge_params;
    mem_queue_params [BANKS-1:0] activation_params;
    // used for transaction scheduler, not required for submission
    // trans_params_t [BANKS-1:0] trans_params;
    // logic [$clog2(BANKS)-1:0] last_bank; // last bank scheduled for the transaction scheduler
    // logic [ROW_BITS-1:0] last_row; // last row for the last bank scheduled
    
    assign bank_idx = bank_group_in * bank_in;

    sdram_bank_state #(
        .ROW_WIDTH(ROW_BITS),
        .NUM_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP)
    ) bank_state(
        clk, 
        rst,
        bank_state_params.bank_enable, 
        bank_state_params.precharge, 
        bank_state_params.activate, 
        bank_state_params.row_address, 
        bank_state_params.request_data, 
        bank_state_params.active_row_out,  
        bank_state_params.ready_to_access, 
        bank_state_params.active_bank 
    );

    // step 3b. enqueues if activation_queue is promoting its top element and not a write request. dequeues when promote is active
    genvar i;
    generate
        for (i = 0; i < BANKS; i = i + 1) begin : bank_queues
            // Read Queue
            mem_req_queue #(.QUEUE_SIZE(16)) read_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(activation_params[i].promote & !activation_params[i].pending_top_out.write),
                .transfer_ready(read_params[i].transfer_ready),
                .req_in(read_params[i].incoming ? read_params[i].req_in : activation_params[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(1'b1),
                .ready_top_out(read_params[i].ready_top_out),
                .pending_top_out(ready_params[i].pending_top_out),
                .ready_empty(read_params[i].ready_empty),
                .pending_empty(read_params[i].pending_empty),
                .promote(read_params[i].promote)
            );

            // Write Queue
            mem_req_queue #(.QUEUE_SIZE(16)) write_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(activation_params[i].promote & activation_params[i].pending_top_out.write),
                .transfer_ready(write_params[i].transfer_ready),
                .req_in(write_params[i].incoming ? write_params[i].req_in : activation_params[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(1'b1),
                .ready_top_out(write_params[i].ready_top_out),
                .pending_top_out(ready_params[i].pending_top_out),
                .ready_empty(write_params[i].ready_empty),
                .pending_empty(write_params[i].pending_empty),
                .promote(write_params[i].promote)
            );

            // Precharge Queue
            mem_req_queue #(.QUEUE_SIZE(16)) precharge_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(precharge_params[i].enqueue),
                .transfer_ready(precharge_params[i].transfer_ready),
                .req_in(precharge_params[i].req_in),
                .cycle_count(cycle_counter),
                .promote_ready(!activation_params[i].incoming),
                .ready_top_out(precharge_params[i].ready_top_out),
                .pending_top_out(ready_params[i].pending_top_out),
                .ready_empty(precharge_params[i].ready_empty),
                .pending_empty(precharge_params[i].pending_empty),
                .promote(precharge_params[i].promote)
            );

            // Activation Queue
            mem_req_queue #(.QUEUE_SIZE(16)) activation_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(precharge_params[i].promote),
                .transfer_ready(activation_params[i].transfer_ready),
                .req_in(activation_params[i].incoming ? activation_params[i].req_in : precharge_params[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(activation_params[i].pending_top_out.write ? !write_params[i].incoming : !read_params[i].incoming),
                .ready_top_out(activation_params[i].ready_top_out),
                .pending_top_out(ready_params[i].pending_top_out),
                .ready_empty(activation_params[i].ready_empty),
                .pending_empty(activation_params[i].pending_empty),
                .promote(activation_params[i].promote)
            );

            // Transaction Scheduler Queue
            mem_req_queue #(QUEUE_SIZE) trans_scheduler_queue(
                .clk_in(clk_in), 
                .rst_in(rst_in), 
                .enqueue_in(trans_params[i].enqueue_in), 
                .dequeue_in(trans_params[i].dequeue_in), 
                .req_in(trans_params[i].req_in), 
                .cycle_count(cycle_count), 
                .req_out(trans_params[i].req_out), 
                .empty(trans_params[i].empty), 
                .full(trans_params[i].full)
            );
        end
    endgenerate

    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            cycle_counter <= 0;
        end else begin
            cycle_counter <= cycle_counter + 1;
        end
    end

    always_comb begin
        if (valid_in) begin
            if (precharge_params.full) begin
                cmd_out <= 3'b100; // block
            end else begin
                // Access enter queue algorithm. TODO implement forwarding write data to request if its a read, or if theres a corresponding burst, append to burst
                memory_request_t incoming_req;
                init_mem_req(
                    incoming_req,
                    bank_group_in,
                    bank_in,
                    row,
                    col,
                    val_in,
                    cycle_counter,
                    write_in,
                    3'b000
                );
                // TRANSACTION SCHEDULER IF WE WANT TO IMPLEMENT THIS LATER [bank-based, rank-based scheduling]
                // trans_params_t last_bank_params = trans_params[last_bank];
                // mem_request_t req_c = last_bank_params.req_out; // request candidate
                // if (req_c.row == last_row) begin
                //     // technically we need to look at the entire array and if any request can be scheduled we pop it but 
                //     // I don't want to shift elements if you remove something thats not the first or last so pop off top for now
                //     last_bank_params.dequeue_in = 1'b1;
                //     if (req_c.write_in) begin
                //         write_params[last_bank].enqueue = 1'b1;
                //         write_params[last_bank].incoming = 1'b1;
                //         write_params[last_bank].req_in = req_c;
                //     end else begin
                //         read_params[last_bank].enqueue = 1'b1;
                //         read_params[last_bank].incoming = 1'b1;
                //         read_params[last_bank].req_in = req_c;
                //     end
                //     // last_bank doesnt change, this is still the bank of the last access scheduled
                // end else begin
                //     for (int i = 0; i < BANKS; i++) begin
                //         mem_request_t cur_req = trans_params[i].req_out;
                //         bank_state_params.request_data = i; // set request index to fetch active row
                //         if (cur_req.row == bank_state_params.active_row_out) begin
                //             // same thing as above, should check all requests but just too lazy
                //             if (req_c.write_in) begin
                //                 write_params[i].enqueue = 1'b1;
                //                 write_params[i].incoming = 1'b1;
                //                 write_params[i].req_in = req_c;
                //             end else begin
                //                 read_params[i].enqueue = 1'b1;
                //                 read_params[i].incoming = 1'b1;
                //                 read_params[i].req_in = req_c;
                //             end
                //             last_bank = i;
                //             break;
                //         end
                //     end
                // end
                bank_state_params.request_data = bank_idx;
                if (bank_state_params.ready_to_access[bank_idx]) begin
                    // precharged but not activated
                    // if its an incoming request prioritize that over the promotion. 
                    activation_params[bank_idx].enqueue = 1'b1;
                    activation_params[bank_idx].incoming = 1'b1;
                    activation_params[bank_idx].req_in = incoming_req;
                end else if (bank_state_params.active_bank[bank_idx] & bank_state_params.active_row_out == row) begin
                    // active bank, put it in its respective queue
                    if (write_in) begin
                        write_params[bank_idx].enqueue = 1'b1;
                        write_params[bank_idx].incoming = 1'b1;
                        write_params[bank_idx].req_in = incoming_req;
                    end else begin
                        read_params[bank_idx].enqueue = 1'b1;
                        read_params[bank_idx].incoming = 1'b1;
                        read_params[bank_idx].req_in = incoming_req;
                    end
                end else begin
                    precharge_params[bank_idx].enqueue = 1'b1;
                    precharge_params[bank_idx].req_in = incoming_req;
                end
                // now we need to decide the out_command
                mem_request_t params [4][BANKS] = {read_params, write_params, activation_params, precharge_params};
                logic [2:0] cmds [4] = {3'b000, 3'b001, 3'b010, 3'b011}; // Read, Write, Activate, Precharge
                logic done;
                for (int p = 0; p < 4 && !done; p++) begin
                    for (int i = 0; i < BANKS; i++) begin
                        bank_state_params.request_data = i;
                        if (!params[p][i].empty && params[p][i].ready_top_out.row_out == bank_state_params.active_row_out) begin
                            mem_request_t top = params[p][i].ready_top_out;
                            done = 1'b1;
                            valid_out = 1'b1;
                            cmd = cmds[p];
                            row_out = top.row;
                            col_out = top.col;
                            bank_out = top.bank;
                            bank_group_out = top.bank_group;
                            params[p][i].transfer_ready = 1'b1;
                            break;
                        end
                    end
                end
            end
        end
    end

endmodule: request_scheduler