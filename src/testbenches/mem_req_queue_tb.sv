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

module tb_mem_req_queue;

    // Parameters
    parameter QUEUE_SIZE = 16;
    
    // Signals
    logic clk_in;
    logic rst_in;
    logic enqueue_in;
    logic dequeue_in;
    logic [31:0] cycle_count;
    logic [31:0] req_in;
    logic [31:0] req_out;
    logic empty;
    logic full;

    // Instantiate the mem_req_queue module
    mem_req_queue #(
        .QUEUE_SIZE(QUEUE_SIZE),
        .mem_request_t(logic [31:0]) // Adjust type of req_in and req_out accordingly
    ) uut (
        .clk_in(clk_in),
        .rst_in(rst_in),
        .enqueue_in(enqueue_in),
        .dequeue_in(dequeue_in),
        .req_in(req_in),
        .cycle_count(cycle_count),
        .req_out(req_out),
        .empty(empty),
        .full(full)
    );

    // Clock generation
    always begin
        #5 clk_in = ~clk_in; // Generate clock with period 10
    end

    // Test procedure
    initial begin
        // Initialize signals
        clk_in = 0;
        rst_in = 0;
        enqueue_in = 0;
        dequeue_in = 0;
        cycle_count = 0;
        req_in = 32'hA5A5A5A5; // Example request data
        
        // Apply reset
        $display("Applying reset...");
        rst_in = 1;
        #10;
        rst_in = 0;
        
        // Test Enqueue
        $display("Testing enqueue operation...");
        enqueue_in = 1;
        #10; // Wait one clock cycle
        $display("Top element %h, empty %b", req_out, empty);
        enqueue_in = 0;
        #10;

        // Test Dequeue (empty should be false, full should be false)
        $display("Testing dequeue operation...");
        dequeue_in = 1;
        #10; // Wait one clock cycle
        dequeue_in = 0;
        #10;

        // Check empty/full flags
        $display("Checking empty/full flags...");
        $display("empty: %b, full: %b", empty, full);

        // Enqueue multiple items to fill the queue
        $display("Enqueuing multiple items...");
        for (int i = 0; i < QUEUE_SIZE; i++) begin
            req_in = 32'hA5A5A5A5 + i; // Different data each time
            enqueue_in = 1;
            #10;
            enqueue_in = 0;
            #10;
        end

        // Check full flag
        $display("After filling, full: %b", full);

        // Test Dequeue until empty
        $display("Dequeueing all items...");
        while (!empty) begin
            dequeue_in = 1;
            #10;
            dequeue_in = 0;
            #10;
        end

        // Final check of empty/full flags
        $display("After dequeueing all, empty: %b, full: %b", empty, full);
        
        $finish;
    end
endmodule
