// submodule for handling memory request queues
module mem_req_queue #(
    parameter QUEUE_SIZE=16,
    type mem_request_t = logic // default placeholder
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
    logic [$clog2(QUEUE_SIZE):0] next_size;
    logic [$clog2(QUEUE_SIZE)-1:0] head;
    logic [$clog2(QUEUE_SIZE):0] size;
    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            head <= 0;
            size <= 0;
        end else begin
            queue <= next_queue;
            size <= next_size;
            head <= next_head;
        end
        // $display("Size %d", size);
    end

    always_comb begin
        next_queue = queue;
        next_size = size;
        next_head = head;
        
        if (enqueue_in && !full) begin
            next_queue[(head + size) % QUEUE_SIZE] = req_in;
            next_size = size + 1;
        end
        if (dequeue_in && !empty) begin
            next_size = size - 1;
            next_head = (head + 4'b1) & {$clog2(QUEUE_SIZE){1'b1}}; // % QUEUE_SIZE
            $display("dequeuing \n");
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
    parameter LATENCY = 0, 
    type mem_request_t = logic
) (
    input logic clk_in,
    input logic rst_in,
    input logic enqueue_in,
    input logic transfer_ready, 
    input mem_request_t req_in,
    input logic [31:0] cycle_count,
    input logic promote_ready, 

    output mem_request_t ready_top_out,
    output mem_request_t pending_top_out,
    output logic ready_empty_out,
    output logic pending_empty_out,
    output logic promote
);
    logic ready_empty, ready_full;
    logic pending_empty, pending_full;
    mem_request_t ready_top, pending_top;

    // Instantiate memory request queues
    mem_req_queue #(.QUEUE_SIZE(QUEUE_SIZE), .mem_request_t(mem_request_t)) ready(
        .clk_in(clk_in), 
        .rst_in(rst_in), 
        .enqueue_in(enqueue_in), 
        .dequeue_in(transfer_ready), 
        .req_in(req_in), 
        .cycle_count(cycle_count), 
        .req_out(ready_top), 
        .empty(ready_empty), 
        .full(ready_full)
    );

    mem_req_queue #(.QUEUE_SIZE(QUEUE_SIZE), .mem_request_t(mem_request_t)) pending(
        .clk_in(clk_in), 
        .rst_in(rst_in), 
        .enqueue_in(transfer_ready), 
        .dequeue_in(promote_ready), 
        .req_in(ready_top), 
        .cycle_count(cycle_count), 
        .req_out(pending_top), 
        .empty(pending_empty), 
        .full(pending_full)
    );

    // **Output assignments**
    assign ready_top_out = ready_top;
    assign pending_top_out = pending_top;
    assign ready_empty_out = ready_empty;
    assign pending_empty_out = pending_empty;
    assign promote = !pending_empty & (pending_top.cycle_count + LATENCY <= cycle_count);

endmodule: mem_cmd_queue;

module sdram_bank_state #(
    parameter ROW_WIDTH = 14, // Number of bits to address rows (e.g., 14 bits for 16k rows)
    parameter NUM_GROUPS = 2, // Number of bank groups
    parameter BANKS_PER_GROUP = 2, // Number of banks per group
    parameter BANKS = NUM_GROUPS * BANKS_PER_GROUP, // Total number of banks
    parameter ACTIVATION_LATENCY = 8,
    parameter PRECHARGE_LATENCY = 5,
    type bank_row_t = logic
)(
    input logic clk,               // Clock
    input logic rst,               // Reset
    input logic [BANKS-1:0] precharge,    // Precharge signal for each bank (1: precharge, 0: no precharge)
    input logic [BANKS-1:0] activate,     // Activate signal for each bank (1: activate, 0: no activate)
    input bank_row_t row_address, // Row address to activate
    output bank_row_t [BANKS-1:0] active_row_out,  // Active row for a selected bank
    output logic [BANKS-1:0] ready_to_access, // Bank ready to access (not in precharge)
    output logic [BANKS-1:0] active_bank,      // Bank currently active (activated but not precharged)
    output logic [BANKS-1:0] blocked          // Bank is blocked (precharging)
);

    // States for each bank
    bank_row_t [BANKS-1:0] active_row;  // Active row address for each bank
    logic [BANKS-1:0] active; // Active flag for each bank
    logic [BANKS-1:0] ready; // Ready flag for each bank (not in precharge)
    logic [BANKS-1:0] blocked_reg; // Internal flag for blocked banks (precharging)
    logic [BANKS-1:0] [31:0] cycle_count; // Cycle count for each bank

    // Handle bank state updates on each clock cycle
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            // Reset all states to initial values
            active <= {BANKS{1'b0}};
            ready <= {BANKS{1'b1}}; // All banks are initially ready (not in precharge)
            blocked_reg <= {BANKS{1'b0}}; // No banks are blocked initially
            cycle_count <= {BANKS{32'b0}}; // Initialize cycle counts to 0
        end else begin
            // For each bank, handle precharge, activation, and data request
            for (int i = 0; i < BANKS; i++) begin
                if (blocked_reg[i]) begin
                    // If the bank is blocked (precharging), check if latency is expired
                    if (cycle_count[i] == 0) begin
                        // Unblock the bank after the latency period has passed
                        blocked_reg[i] <= 0;
                        ready[i] <= 1; // Bank is now ready
                    end else begin
                        // Keep the bank blocked and increment the cycle count
                        cycle_count[i] <= cycle_count[i] - 1;
                    end
                end else if (precharge[i]) begin
                    // Precharge operation: block the bank and reset cycle count
                    blocked_reg[i] <= 1;
                    cycle_count[i] <= PRECHARGE_LATENCY; // Start counting cycles for precharge latency
                    active[i] <= 0;
                    ready[i] <= 0; // Bank is not ready during precharge
                end else if (activate[i]) begin
                    // Activate operation: store the row address and mark the bank as active
                    active_row[i] <= row_address;
                    blocked_reg[i] <= 1;
                    cycle_count[i] <= ACTIVATION_LATENCY;
                    active[i] <= 1; // Bank is active
                    ready[i] <= 0;  // Bank is not ready during activation
                end
            end
        end
    end

    // Outputs for each bank and group
    assign active_row_out = active_row; // Example output, can modify based on the active bank/group selection
    assign ready_to_access = ready;        // Ready to access signals for each bank
    assign active_bank = active;          // Active bank signals
    assign blocked = blocked_reg;         // Output the blocked state for each bank

endmodule


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
    parameter int BANKS = BANK_GROUPS * BANKS_PER_GROUP
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
    input logic cmd_ready, // is controller ready to receive command

    output logic [$clog2(BANK_GROUPS)-1:0] bank_group_out,
    output logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out,
    output logic [ROW_BITS-1:0] row_out,
    output logic [COL_BITS-1:0] col_out,
    output logic [63:0] val_out,
    output logic [2:0] cmd_out, // 0 is read, 1 is write, 2 is activate, 3 is precharge; if valid_out is 0 then block
    output logic valid_out
);
    typedef struct packed {
        logic [$clog2(BANK_GROUPS)-1:0] bank_group;
        logic [$clog2(BANKS_PER_GROUP)-1:0] bank;
        logic [ROW_BITS-1:0] row;
        logic [COL_BITS-1:0] col;
        logic [63:0] val_in;
        logic [2:0] state; // 000 nothing (needs everything), 001 precharge pending, 010 activate ready, 011 activate pending, 100 r/w ready, 101 r/w pending, 110 r/w done
        logic [31:0] cycle_count; // cycle counter of when the last state was set
        logic write;
        logic valid; // do we need this?
    } mem_request_t;

    typedef struct packed {
        logic enqueue_in;
        logic dequeue_in;
        logic transfer_ready; // command is available 
        mem_request_t req_in;
        logic incoming; // if theres an incoming request into the scheduler and it needs to be placed in the queue, it takes priority over a promotion
    } mem_queue_params_in_t;

    typedef struct packed {
        mem_request_t ready_top_out;
        mem_request_t pending_top_out;
        logic ready_empty_out; // if empty then top doesnt matter
        logic pending_empty_out;
        logic promote;
    } mem_queue_params_out_t;

    typedef struct packed {
        logic [ROW_BITS-1:0] row_out;
    } bank_row_t;

    typedef struct packed {
        logic [BANKS-1:0] precharge;    // Precharge signal for each bank (1: precharge, 0: no precharge)
        logic [BANKS-1:0] activate;     // Activate signal for each bank (1: activate, 0: no activate)
        bank_row_t row_address; // Row address to activate
    } bank_state_params_in_t;

    typedef struct packed {
        bank_row_t [BANKS-1:0] active_row_out;  // Active row for a selected bank
        logic [BANKS-1:0] ready_to_access; // Bank ready to access (not in precharge)
        logic [BANKS-1:0] active_bank;
        logic [BANKS-1:0] blocked;
    } bank_state_params_out_t;

    // Function to set fields of a write request
    function automatic void init_mem_req(
        output mem_request_t req,
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
    function automatic void process_bank_commands(
        input int unsigned p,
        ref mem_queue_params_in_t [BANKS-1:0] params_in,
        mem_queue_params_out_t [BANKS-1:0] params_out, // pass by value
        ref bank_state_params_in_t bank_state_params_in,
        ref bank_state_params_out_t bank_state_params_out,
        input logic [2:0] cmds[4],
        output logic done,
        output logic valid_out_t,
        output logic [2:0] cmd_out_t,
        output logic [ROW_BITS-1:0] row_out_t,
        output logic [COL_BITS-1:0] col_out_t,
        output logic [63:0] val_out_t,
        output logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out_t,
        output logic [$clog2(BANK_GROUPS)-1:0] bank_group_out_t
    );
        done = 1'b0;
        valid_out_t = 1'b0;
        
        for (int i = 0; i < BANKS; i++) begin
            if (!params_out[i].ready_empty_out && 
                !bank_state_params_out.blocked[i[$clog2(BANKS)-1:0]] && 
                (p == 2 || p == 3 || 
                params_out[i].ready_top_out.row == bank_state_params_out.active_row_out[i[$clog2(BANKS)-1:0]])) begin
                
                mem_request_t top = params_out[i].ready_top_out;
                $display("considering cmd %d for p %d and bank idx %d", cmds[p], p, i);
                
                done = 1'b1;
                valid_out_t = 1'b1;
                cmd_out_t = cmds[p];
                row_out_t = top.row;
                col_out_t = top.col;
                
                if (p == 1) begin
                    val_out_t = top.val_in;
                end else if (p == 2) begin
                    bank_state_params_in.activate = bank_state_params_out.active_bank;
                    bank_state_params_in.activate[i] = 1'b1;
                    bank_state_params_in.row_address = top.row;
                    val_out_t = 'b0;
                end else if (p == 3) begin
                    bank_state_params_in.precharge = bank_state_params_out.ready_to_access;
                    bank_state_params_in.precharge[i] = 1'b1;
                    val_out_t = 'b0;
                end else begin
                    val_out_t = 'b0;
                end
                
                bank_out_t = top.bank;
                bank_group_out_t = top.bank_group;
                
                params_in[i].transfer_ready = 1'b1;
                break;
            end
        end
    endfunction

    function automatic void reset_mem_queue_params (
        output mem_queue_params_in_t [BANKS-1:0] params
    );
        for (int i = 0; i < BANKS; i++) begin
            params[i].enqueue_in = 'b0;
            params[i].dequeue_in = 'b0;
            params[i].transfer_ready = 'b0;
            params[i].req_in = incoming_req;
            params[i].incoming = 'b0;
        end
    endfunction

    logic [31:0] cycle_counter;
    logic [$clog2(BANK_GROUPS) + $clog2(BANKS_PER_GROUP) - 1:0] bank_idx;
    bank_state_params_in_t bank_state_params_in;
    bank_state_params_out_t bank_state_params_out;
    bank_state_params_out_t bank_state;

    mem_queue_params_in_t [BANKS-1:0] read_params_in;
    mem_queue_params_in_t [BANKS-1:0] write_params_in;
    mem_queue_params_in_t [BANKS-1:0] precharge_params_in;
    mem_queue_params_in_t [BANKS-1:0] activation_params_in;

    mem_queue_params_out_t [BANKS-1:0] read_params_out;
    mem_queue_params_out_t [BANKS-1:0] write_params_out;
    mem_queue_params_out_t [BANKS-1:0] precharge_params_out;
    mem_queue_params_out_t [BANKS-1:0] activation_params_out;

    logic [2:0] cmds [4] = {3'b000, 3'b001, 3'b010, 3'b011}; // Read, Write, Activate, Precharge
    logic done;
    mem_request_t incoming_req;

    // tmp holding regs
    logic [$clog2(BANK_GROUPS)-1:0] bank_group_out_t;
    logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out_t;
    logic [ROW_BITS-1:0] row_out_t;
    logic [COL_BITS-1:0] col_out_t;
    logic [63:0] val_out_t;
    logic [2:0] cmd_out_t; // 0 is read, 1 is write, 2 is activate, 3 is precharge; if valid_out is 0 then block
    logic valid_out_t;
    
    assign bank_idx = bank_group_in * bank_in;

    sdram_bank_state #(
        .ROW_WIDTH(ROW_BITS),
        .NUM_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP),
        .bank_row_t(bank_row_t)
    ) bank_state_reg(
        clk_in, 
        rst_in,
        bank_state_params_in.precharge, 
        bank_state_params_in.activate, 
        bank_state_params_in.row_address, 
        bank_state_params_out.active_row_out,  
        bank_state_params_out.ready_to_access, 
        bank_state_params_out.active_bank,
        bank_state_params_out.blocked 
    );

    // step 3b. enqueues if activation_queue is promoting its top element and not a write request. dequeues when promote is active
    genvar i;
    generate
        for (i = 0; i < BANKS; i = i + 1) begin : bank_queues
            // Read Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(1), .mem_request_t(mem_request_t)) read_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(read_params_in[i].incoming || (activation_params_out[i].promote & !activation_params_out[i].pending_top_out.write)),
                .transfer_ready(read_params_in[i].transfer_ready),
                .req_in(read_params_in[i].incoming ? read_params_in[i].req_in : activation_params_out[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(1'b1),
                .ready_top_out(read_params_out[i].ready_top_out),
                .pending_top_out(read_params_out[i].pending_top_out),
                .ready_empty_out(read_params_out[i].ready_empty_out),
                .pending_empty_out(read_params_out[i].pending_empty_out),
                .promote(read_params_out[i].promote)
            );

            // Write Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(1), .mem_request_t(mem_request_t)) write_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(write_params_in[i].incoming || (activation_params_out[i].promote & activation_params_out[i].pending_top_out.write)),
                .transfer_ready(write_params_in[i].transfer_ready),
                .req_in(write_params_in[i].incoming ? write_params_in[i].req_in : activation_params_out[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(1'b1),
                .ready_top_out(write_params_out[i].ready_top_out),
                .pending_top_out(write_params_out[i].pending_top_out),
                .ready_empty_out(write_params_out[i].ready_empty_out),
                .pending_empty_out(write_params_out[i].pending_empty_out),
                .promote(write_params_out[i].promote)
            );

            // Precharge Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(PRECHARGE_LATENCY), .mem_request_t(mem_request_t)) precharge_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(precharge_params_in[i].enqueue_in),
                .transfer_ready(precharge_params_in[i].transfer_ready),
                .req_in(precharge_params_in[i].req_in),
                .cycle_count(cycle_counter),
                .promote_ready(!activation_params_in[i].incoming),
                .ready_top_out(precharge_params_out[i].ready_top_out),
                .pending_top_out(precharge_params_out[i].pending_top_out),
                .ready_empty_out(precharge_params_out[i].ready_empty_out),
                .pending_empty_out(precharge_params_out[i].pending_empty_out),
                .promote(precharge_params_out[i].promote)
            );

            // Activation Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(ACTIVATION_LATENCY), .mem_request_t(mem_request_t)) activation_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(activation_params_in[i].incoming || precharge_params_out[i].promote),
                .transfer_ready(activation_params_in[i].transfer_ready),
                .req_in(activation_params_in[i].incoming ? activation_params_in[i].req_in : precharge_params_out[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(activation_params_out[i].pending_top_out.write ? !write_params_in[i].incoming : !read_params_in[i].incoming),
                .ready_top_out(activation_params_out[i].ready_top_out),
                .pending_top_out(activation_params_out[i].pending_top_out),
                .ready_empty_out(activation_params_out[i].ready_empty_out),
                .pending_empty_out(activation_params_out[i].pending_empty_out),
                .promote(activation_params_out[i].promote)
            );
        end
    endgenerate

    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            cycle_counter <= 0;
            // Reset other variables to prevent inferred latches
            valid_out <= 1'b0;
            cmd_out <= '0;
            row_out <= '0;
            col_out <= '0;
            val_out <= '0;
            bank_out <= '0;
            bank_group_out <= '0;
            $display("Precharge Queue 6 empty: %b", precharge_params_out[6].ready_empty_out);
        end else begin
            cycle_counter <= cycle_counter + 1;
            bank_group_out <= bank_group_out_t;
            bank_out <= bank_out_t;
            row_out <= row_out_t;
            col_out <= col_out_t;
            val_out <= val_out_t;
            cmd_out <= cmd_out_t;
            valid_out <= valid_out_t;
            $display("Precharge Queue 6 empty: %b", precharge_params_out[6].ready_empty_out);
        end
    end

    /*
    typedef struct packed {
        logic enqueue_in;
        logic dequeue_in;
        logic transfer_ready; // command is available 
        mem_request_t req_in;
        mem_request_t ready_top_out;
        mem_request_t pending_top_out;
        logic ready_empty_out; // if empty then top doesnt matter
        logic pending_empty_out;
        logic promote;
        logic incoming; // if theres an incoming request into the scheduler and it needs to be placed in the queue, it takes priority over a promotion
    } mem_queue_params;
    */
    always_comb begin
        done = 1'b0;
        valid_out_t = 1'b0;
        cmd_out_t = 'b0;
        row_out_t = 'b0;
        col_out_t = 'b0;
        val_out_t = 'b0;
        bank_out_t = 'b0;
        bank_group_out_t = 'b0;
        bank_state_params_in.activate = bank_state_params_out.active_bank;
        bank_state_params_in.precharge = bank_state_params_out.ready_to_access;
        bank_state = bank_state_params_out;
        init_mem_req(
            incoming_req,
            bank_group_in,
            bank_in,
            row_in,
            col_in,
            val_in,
            cycle_counter,
            write_in,
            3'b000
        );
        bank_state_params_in.row_address = 'b0;
        reset_mem_queue_params(read_params_in);
        reset_mem_queue_params(write_params_in);
        reset_mem_queue_params(precharge_params_in);
        reset_mem_queue_params(activation_params_in);
        
        if (valid_in) begin
            // Access enter queue algorithm
            
            // Queue selection logic
            if (bank_state_params_out.ready_to_access[bank_idx]) begin
                // Precharged but not activated
                $display("adding to activation queue idx %d\n", bank_idx);
                activation_params_in[bank_idx].enqueue_in = 1'b1;
                activation_params_in[bank_idx].incoming = 1'b1;
                activation_params_in[bank_idx].req_in = incoming_req;
            end else if (bank_state_params_out.active_bank[bank_idx] && 
                        bank_state_params_out.active_row_out[bank_idx] == row_in) begin
                $display("adding to r/w queue\n");
                // Active bank, put in respective queue
                if (write_in) begin
                    write_params_in[bank_idx].enqueue_in = 1'b1;
                    write_params_in[bank_idx].incoming = 1'b1;
                    write_params_in[bank_idx].req_in = incoming_req;
                end else begin
                    read_params_in[bank_idx].enqueue_in = 1'b1;
                    read_params_in[bank_idx].incoming = 1'b1;
                    read_params_in[bank_idx].req_in = incoming_req;
                end
            end else begin
                $display("adding to precharge queue %d\n", incoming_req.bank_group * incoming_req.bank);
                precharge_params_in[bank_idx].enqueue_in = 1'b1;
                precharge_params_in[bank_idx].req_in = incoming_req;
            end
        end
        if (cmd_ready) begin
            // Update params array
            
            process_bank_commands(
                0,
                read_params_in,
                read_params_out,
                bank_state_params_in,
                bank_state,
                cmds,
                done,
                valid_out_t,
                cmd_out_t,
                row_out_t,
                col_out_t,
                val_out_t,
                bank_out_t,
                bank_group_out_t
            );
            process_bank_commands(
                0,
                write_params_in,
                write_params_out,
                bank_state_params_in,
                bank_state,
                cmds,
                done,
                valid_out_t,
                cmd_out_t,
                row_out_t,
                col_out_t,
                val_out_t,
                bank_out_t,
                bank_group_out_t
            );
            process_bank_commands(
                0,
                activation_params_in,
                activation_params_out,
                bank_state_params_in,
                bank_state,
                cmds,
                done,
                valid_out_t,
                cmd_out_t,
                row_out_t,
                col_out_t,
                val_out_t,
                bank_out_t,
                bank_group_out_t
            );
            process_bank_commands(
                0,
                precharge_params_in,
                precharge_params_out,
                bank_state_params_in,
                bank_state,
                cmds,
                done,
                valid_out_t,
                cmd_out_t,
                row_out_t,
                col_out_t,
                val_out_t,
                bank_out_t,
                bank_group_out_t
            );
        end
    end

endmodule: request_scheduler