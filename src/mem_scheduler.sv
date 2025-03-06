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
    type bank_row_t = logic
)(
    input logic clk,               // Clock
    input logic rst,               // Reset
    input logic [BANKS-1:0] bank_enable,  // Enable signal for each bank (1: enabled, 0: disabled)
    input logic [BANKS-1:0] precharge,    // Precharge signal for each bank (1: precharge, 0: no precharge)
    input logic [BANKS-1:0] activate,     // Activate signal for each bank (1: activate, 0: no activate)
    input bank_row_t row_address, // Row address to activate
    input logic [$clog2(BANKS)-1:0] request_data,  // Request data signal for a bank
    output bank_row_t [BANKS-1:0] active_row_out,  // Active row for a selected bank
    output logic [BANKS-1:0] ready_to_access, // Bank ready to access (not in precharge)
    output logic [BANKS-1:0] active_bank      // Bank currently active (activated but not precharged)
);

    // States for each bank
    bank_row_t [BANKS-1:0] active_row;  // Active row address for each bank
    logic [BANKS-1:0] active; // Active flag for each bank
    logic [BANKS-1:0] ready; // Ready flag for each bank (not in precharge)
    
    // Bank grouping logic
    // reg [NUM_GROUPS-1:0] group_active [BANKS_PER_GROUP-1:0]; // Keeps track of group activations
    // reg [BANKS_PER_GROUP-1:0] group_ready [NUM_GROUPS-1:0];  // Ready state for each group

    // Handle bank state updates on each clock cycle
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            // Reset all states to initial values
            // active_row <= {ROW_WIDTH * BANKS{1'b0}};
            active <= {BANKS{1'b0}};
            ready <= {BANKS{1'b1}}; // All banks are initially ready (not in precharge)
            // group_active <= '{default: 0};
            // group_ready <= '{default: 1}; // All groups are initially ready (not in precharge)
        end else begin
            // For each bank, handle precharge, activation, and data request
            for (int i = 0; i < BANKS; i++) begin
                if (bank_enable[i]) begin
                    if (precharge[i]) begin
                        // Precharge operation: bank is not active and ready
                        active[i] <= 0;
                        ready[i] <= 1;  // Bank is ready after precharge
                    end else if (activate[i]) begin
                        // Activate operation: store the row address and mark the bank as active
                        active_row[i] <= row_address;
                        active[i] <= 1; // Bank is active
                        ready[i] <= 0;  // Bank is not ready during activation
                    end else if (request_data[i] && active[i]) begin
                        // Data request: The bank must be active
                        // Here, you can add logic to fetch the requested data from the active row
                    end
                end
            end
        end
    end

    // Group management
    // always_ff @(posedge clk) begin
    //     for (int g = 0; g < NUM_GROUPS; g++) begin
    //         // If any bank in the group is activated, mark the group as active
    //         group_active[g] <= |(activate[g*BANKS_PER_GROUP +: BANKS_PER_GROUP]);
            
    //         // If all banks in the group are in ready state, mark the group as ready
    //         group_ready[g] <= &ready[g*BANKS_PER_GROUP +: BANKS_PER_GROUP];
    //     end
    // end

    // Outputs for each bank and group
    assign active_row_out = active_row; // Example output, can modify based on the active bank/group selection
    assign ready_to_access = ready;        // Ready to access signals for each bank
    assign active_bank = active;          // Active bank signals
    
    // Example: Optionally, you can assign the group-ready state or active state
    // based on a specific bank or group.
    // You can also output the active row of a specific group by selecting which
    // bank or group is relevant at any given time.

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
        mem_request_t ready_top_out;
        mem_request_t pending_top_out;
        logic ready_empty_out; // if empty then top doesnt matter
        logic pending_empty_out;
        logic promote;
        logic incoming; // if theres an incoming request into the scheduler and it needs to be placed in the queue, it takes priority over a promotion
    } mem_queue_params;

    typedef struct packed {
        logic [ROW_BITS-1:0] row_out;
    } bank_row_t;

    typedef struct packed {
        logic [BANKS-1:0] bank_enable;  // Enable signal for each bank (1: enabled, 0: disabled)
        logic [BANKS-1:0] precharge;    // Precharge signal for each bank (1: precharge, 0: no precharge)
        logic [BANKS-1:0] activate;     // Activate signal for each bank (1: activate, 0: no activate)
        bank_row_t row_address; // Row address to activate
        logic [$clog2(BANKS)-1:0] request_data;  // Request data signal for each bank
        bank_row_t [BANKS-1:0] active_row_out;  // Active row for a selected bank
        logic [BANKS-1:0] ready_to_access; // Bank ready to access (not in precharge)
        logic [BANKS-1:0] active_bank;
    } bank_state_params_t;

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

    logic [31:0] cycle_counter;
    logic [$clog2(BANK_GROUPS) + $clog2(BANKS_PER_GROUP) - 1:0] bank_idx;
    bank_state_params_t bank_state_params;
    mem_queue_params [BANKS-1:0] read_params;
    mem_queue_params [BANKS-1:0] write_params;
    mem_queue_params [BANKS-1:0] precharge_params;
    mem_queue_params [BANKS-1:0] activation_params;
    mem_queue_params [BANKS-1:0] params [3:0]; 
    logic [2:0] cmds [4] = {3'b000, 3'b001, 3'b010, 3'b011}; // Read, Write, Activate, Precharge
    logic done;
    mem_request_t incoming_req;
    
    assign bank_idx = bank_group_in * bank_in;

    sdram_bank_state #(
        .ROW_WIDTH(ROW_BITS),
        .NUM_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP),
        .bank_row_t(bank_row_t)
    ) bank_state(
        clk_in, 
        rst_in,
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
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(1), .mem_request_t(mem_request_t)) read_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(read_params[i].incoming || (activation_params[i].promote & !activation_params[i].pending_top_out.write)),
                .transfer_ready(read_params[i].transfer_ready),
                .req_in(read_params[i].incoming ? read_params[i].req_in : activation_params[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(1'b1),
                .ready_top_out(read_params[i].ready_top_out),
                .pending_top_out(read_params[i].pending_top_out),
                .ready_empty_out(read_params[i].ready_empty_out),
                .pending_empty_out(read_params[i].pending_empty_out),
                .promote(read_params[i].promote)
            );

            // Write Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(1), .mem_request_t(mem_request_t)) write_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(write_params[i].incoming || (activation_params[i].promote & activation_params[i].pending_top_out.write)),
                .transfer_ready(write_params[i].transfer_ready),
                .req_in(write_params[i].incoming ? write_params[i].req_in : activation_params[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(1'b1),
                .ready_top_out(write_params[i].ready_top_out),
                .pending_top_out(write_params[i].pending_top_out),
                .ready_empty_out(write_params[i].ready_empty_out),
                .pending_empty_out(write_params[i].pending_empty_out),
                .promote(write_params[i].promote)
            );

            // Precharge Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(PRECHARGE_LATENCY), .mem_request_t(mem_request_t)) precharge_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(precharge_params[i].enqueue_in),
                .transfer_ready(precharge_params[i].transfer_ready),
                .req_in(precharge_params[i].req_in),
                .cycle_count(cycle_counter),
                .promote_ready(!activation_params[i].incoming),
                .ready_top_out(precharge_params[i].ready_top_out),
                .pending_top_out(precharge_params[i].pending_top_out),
                .ready_empty_out(precharge_params[i].ready_empty_out),
                .pending_empty_out(precharge_params[i].pending_empty_out),
                .promote(precharge_params[i].promote)
            );

            // Activation Queue
            mem_cmd_queue #(.QUEUE_SIZE(16), .LATENCY(ACTIVATION_LATENCY), .mem_request_t(mem_request_t)) activation_queue (
                .clk_in(clk_in),
                .rst_in(rst_in),
                .enqueue_in(activation_params[i].incoming || precharge_params[i].promote),
                .transfer_ready(activation_params[i].transfer_ready),
                .req_in(activation_params[i].incoming ? activation_params[i].req_in : precharge_params[i].pending_top_out),
                .cycle_count(cycle_counter),
                .promote_ready(activation_params[i].pending_top_out.write ? !write_params[i].incoming : !read_params[i].incoming),
                .ready_top_out(activation_params[i].ready_top_out),
                .pending_top_out(activation_params[i].pending_top_out),
                .ready_empty_out(activation_params[i].ready_empty_out),
                .pending_empty_out(activation_params[i].pending_empty_out),
                .promote(activation_params[i].promote)
            );
        end
    endgenerate

    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            cycle_counter <= 0;
            // Reset other variables to prevent inferred latches
            done <= 1'b0;
            valid_out <= 1'b0;
            cmd_out <= '0;
            row_out <= '0;
            col_out <= '0;
            val_out <= '0;
            bank_out <= '0;
            bank_group_out <= '0;
        end else begin
            cycle_counter <= cycle_counter + 1;
            
            if (valid_in) begin
                // Access enter queue algorithm
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
                
                // Queue selection logic
                if (bank_state_params.ready_to_access[bank_idx]) begin
                    // Precharged but not activated
                    $display("adding to activation queue idx %d\n", bank_idx);
                    activation_params[bank_idx].enqueue_in = 1'b1;
                    activation_params[bank_idx].incoming = 1'b1;
                    activation_params[bank_idx].req_in = incoming_req;
                end else if (bank_state_params.active_bank[bank_idx] && 
                            bank_state_params.active_row_out[bank_idx] == row_in) begin
                    $display("adding to r/w queue\n");
                    // Active bank, put in respective queue
                    if (write_in) begin
                        write_params[bank_idx].enqueue_in = 1'b1;
                        write_params[bank_idx].incoming = 1'b1;
                        write_params[bank_idx].req_in = incoming_req;
                    end else begin
                        read_params[bank_idx].enqueue_in = 1'b1;
                        read_params[bank_idx].incoming = 1'b1;
                        read_params[bank_idx].req_in = incoming_req;
                    end
                end else begin
                    $display("adding to precharge queue\n");
                    precharge_params[bank_idx].enqueue_in = 1'b1;
                    precharge_params[bank_idx].req_in = incoming_req;
                end
            end
            if (cmd_ready) begin
                // Update params array
                params[0] = read_params;
                params[1] = write_params;
                params[2] = activation_params;
                params[3] = precharge_params;
                done <= 1'b0;
                valid_out <= 1'b0;
                
                // Command selection logic
                for (int p = 0; p < 4 && !done; p++) begin
                    for (int i = 0; i < BANKS; i++) begin
                        // bank_state_params.request_data = i[$clog2(BANKS)-1:0];
                        // if p == 0 or p == 1, read/write, the active_row needs to be the same row
                        if (!params[p][i].ready_empty_out && 
                            (
                                p == 2 || p == 3 || 
                                params[p][i].ready_top_out.row == bank_state_params.active_row_out[i[$clog2(BANKS)-1:0]]
                            )) begin
                            mem_request_t top = params[p][i].ready_top_out;
                            $display("considering cmd %d", cmds[p]);
                            
                            done <= 1'b1;
                            valid_out <= 1'b1;
                            cmd_out <= cmds[p];
                            row_out <= top.row;
                            col_out <= top.col;
                            
                            if (p == 1) begin
                                val_out <= top.val_in;
                            end else if (p == 2) begin
                                bank_state_params.activate = bank_state_params.active_bank;
                                bank_state_params[i] <= 1'b1; // active
                                bank_state_params.row_address <= top.row;
                            end else if (p == 3) begin
                                bank_state_params.precharge = bank_state_params.ready_to_access;
                                bank_state_params.precharge[i] <= 1'b1;
                            end
                            
                            bank_out <= top.bank;
                            bank_group_out <= top.bank_group;
                            
                            params[p][i].transfer_ready = 1'b1;
                            break;
                        end
                    end
                end
                
                // Final fallback if no command selected
                if (!done) begin
                    valid_out <= 1'b0;
                end
            end else begin
                valid_out <= 1'b0;
            end
        end
    end

endmodule: request_scheduler