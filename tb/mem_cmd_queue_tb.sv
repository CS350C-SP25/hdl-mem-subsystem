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
            $display("Enqueue in \n");
            next_queue[(head + size) % QUEUE_SIZE] = req_in;
            next_size = size + 1;
        end
        if (dequeue_in && !empty) begin
            $display("Dequeue in \n");
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
        .dequeue_in(promote & promote_ready), 
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


module tb_mem_cmd_queue;

    // Parameters for the module
    parameter QUEUE_SIZE = 16;
    parameter LATENCY = 5;
    typedef struct packed {
        logic [$clog2(8)-1:0] bank_group;
        logic [$clog2(8)-1:0] bank;
        logic [8-1:0] row;
        logic [8-1:0] col;
        logic [63:0] val_in;
        logic [2:0] state; // 000 nothing (needs everything), 001 precharge pending, 010 activate ready, 011 activate pending, 100 r/w ready, 101 r/w pending, 110 r/w done
        logic [31:0] cycle_count; // cycle counter of when the last state was set
        logic write;
        logic valid; // do we need this?
    } mem_request_t;

    // Inputs
    logic clk_in;
    logic rst_in;
    logic enqueue_in;
    logic transfer_ready;
    logic promote_ready;
    logic [31:0] cycle_count;
    mem_request_t req_in;
    logic enqueue_in_1;
    logic transfer_ready_1;
    logic promote_ready_1;
    mem_request_t req_in_1;

    // Outputs
    mem_request_t ready_top_out;
    mem_request_t pending_top_out;
    logic ready_empty_out;
    logic pending_empty_out;
    logic promote;

    mem_request_t ready_top_out_1;
    mem_request_t pending_top_out_1;
    logic ready_empty_out_1;
    logic pending_empty_out_1;
    logic promote_1;

    // Instantiate the mem_cmd_queue module
    mem_cmd_queue #(
        .QUEUE_SIZE(QUEUE_SIZE),
        .LATENCY(LATENCY),
        .mem_request_t(mem_request_t)
    ) uut1 (
        .clk_in(clk_in),
        .rst_in(rst_in),
        .enqueue_in(enqueue_in),
        .transfer_ready(transfer_ready),
        .req_in(req_in),
        .cycle_count(cycle_count),
        .promote_ready(promote_ready),
        .ready_top_out(ready_top_out),
        .pending_top_out(pending_top_out),
        .ready_empty_out(ready_empty_out),
        .pending_empty_out(pending_empty_out),
        .promote(promote)
    );

    mem_cmd_queue #(
        .QUEUE_SIZE(QUEUE_SIZE),
        .LATENCY(LATENCY),
        .mem_request_t(mem_request_t)
    ) uut2 (
        .clk_in(clk_in),
        .rst_in(rst_in),
        .enqueue_in(promote & promote_ready),
        .transfer_ready(transfer_ready_1),
        .req_in(pending_top_out),
        .cycle_count(cycle_count),
        .promote_ready(promote_ready_1),
        .ready_top_out(ready_top_out_1),
        .pending_top_out(pending_top_out_1),
        .ready_empty_out(ready_empty_out_1),
        .pending_empty_out(pending_empty_out_1),
        .promote(promote_1)
    );

    // Clock Generation
    always begin
        #5 clk_in = ~clk_in;  // 100MHz clock, adjust as needed
    end

    // Test Sequence
    initial begin
        // Initialize signals
        clk_in = 0;
        rst_in = 0;
        enqueue_in = 0;
        transfer_ready = 0;
        promote_ready = 0;
        cycle_count = 0;
        req_in.bank_group = '0;  // example initial request
        req_in.bank = '0;
        req_in.row = '0; 
        req_in.col = '0;
        req_in.val_in = '0;
        req_in.state = '0; 
        req_in.cycle_count = '0;
        req_in.write = '0;    
        req_in.valid = '0;  
        
        enqueue_in_1 = 0;
        transfer_ready_1 = 0;
        promote_ready_1 = 0;
        req_in_1.bank_group = '0;  // example initial request
        req_in_1.bank = '0;
        req_in_1.row = '0; 
        req_in_1.col = '0;
        req_in_1.val_in = '0;
        req_in_1.state = '0; 
        req_in_1.cycle_count = '0;
        req_in_1.write = '0;    
        req_in_1.valid = '0;  
        #10;

        // Reset the system
        rst_in = 1;
        #10;
        rst_in = 0;
        #10;
        cycle_count = 10;

        // Test Case 1: Enqueueing a request
        enqueue_in = 1;
        req_in.bank_group = '0;  // example initial request
        req_in.bank = '0;
        req_in.row = '0; 
        req_in.col = '0;
        req_in.val_in = 'hDEADBEEFCAFEBABE;
        req_in.state = '0; 
        req_in.cycle_count = cycle_count;
        req_in.write = '0;    
        req_in.valid = '0;  
        transfer_ready = 0;
        #10;  // Wait for a clock cycle
        enqueue_in = 0;
        transfer_ready = 1;
        $display("ready_top_out=%h, pending_top_out=%h, ready_empty_out=%h, pending_empty_out=%h, promote=%h, ready_empty_out_1=%h, ready_top_out_1=%h\n", 
                  ready_top_out.val_in, pending_top_out.val_in, ready_empty_out, pending_empty_out, 
                  promote, ready_empty_out_1, ready_top_out_1);
        #10;
        transfer_ready = 0;
        
        // Test Case 2: Transfer and promotion
        cycle_count = 10;
        promote_ready = 1;
        $display("ready_top_out=%h, pending_top_out=%h, ready_empty_out=%h, pending_empty_out=%h, promote=%h, ready_empty_out_1=%h, ready_top_out_1=%h\n", 
                  ready_top_out.val_in, pending_top_out.val_in, ready_empty_out, pending_empty_out, 
                  promote, ready_empty_out_1, ready_top_out_1);
        #10;
        // promote_ready = 0;
        $display("ready_top_out=%h, pending_top_out=%h, ready_empty_out=%h, pending_empty_out=%h, promote=%h, ready_empty_out_1=%h, ready_top_out_1=%h\n", 
                  ready_top_out.val_in, pending_top_out.val_in, ready_empty_out, pending_empty_out, 
                  promote, ready_empty_out_1, ready_top_out_1);
        
        // Test Case 3: Simulate promotion logic
        cycle_count = 15;  // After the latency
        #10;
        $display("ready_top_out=%h, pending_top_out=%h, ready_empty_out=%h, pending_empty_out=%h, promote=%h, ready_empty_out_1=%h, ready_top_out_1=%h\n", 
                  ready_top_out.val_in, pending_top_out.val_in, ready_empty_out, pending_empty_out, 
                  promote, ready_empty_out_1, ready_top_out_1);
        #10;
        
        // Check values
        $display("ready_top_out: %h", ready_top_out);
        $display("ready_top_out_1: %h", ready_top_out_1);
        $display("pending_top_out: %h", pending_top_out);
        $display("ready_empty_out: %b", ready_empty_out);
        $display("ready_empty_out_1: %h", ready_empty_out_1);
        $display("pending_empty_out: %b", pending_empty_out);
        $display("promote: %b", promote);

        // Add more test cases as needed for various edge cases

        $finish;
    end

endmodule

