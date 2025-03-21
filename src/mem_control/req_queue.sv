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