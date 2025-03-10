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
            // $display("dequeuing \n");
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
        .dequeue_in(promote_ready & promote), 
        .req_in(ready_top), 
        .cycle_count(cycle_count), 
        .req_out(pending_top), 
        .empty(pending_empty), 
        .full(pending_full)
    );

    // always_comb begin
    //     if (transfer_ready) begin
    //         $display("Transfer ready");
    //     end
    // end

    // **Output assignments**
    assign ready_top_out = ready_top;
    assign pending_top_out = pending_top;
    assign ready_empty_out = ready_empty;
    assign pending_empty_out = pending_empty;
    assign promote = !pending_empty & (pending_top.cycle_count + LATENCY <= cycle_count);

endmodule: mem_cmd_queue;