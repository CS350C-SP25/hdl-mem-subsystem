`timescale 1ns/1ps
import types::*;

//=====================================================================
// Top-Level Load-Store Unit
//=====================================================================
module load_store_unit #(
    parameter int QUEUE_DEPTH = 32,
    parameter int TAG_WIDTH   = 10
) (
    // Generic inputs
    input  logic clk_in,
    input  logic rst_N_in,
    input  logic cs_N_in,  // Chip Select (enable signal)

    // Processor Instruction Interface
    input  logic proc_instr_valid_in,
    input  logic [TAG_WIDTH-1:0] proc_instr_tag_in,
    input  logic proc_instr_is_write_in,

    // Processor Data Interface
    input  logic proc_data_valid_in,
    input  logic [TAG_WIDTH-1:0] proc_data_tag_in,
    input  logic [63:0] proc_addr_in,
    input  logic [63:0] proc_value_in,

    // L1 Cache (L1D) Interface (inputs)
    input  logic l1d_valid_in,
    input  logic l1d_ready_in,
    input  logic [63:0] l1d_addr_in,
    input  logic [63:0] l1d_value_in,
    input  logic [TAG_WIDTH-1:0] l1d_tag_in,
    input  logic l1d_write_complete_in,
    input  logic l1d_tag_complete_in,

    // Processor Handshaking Outputs
    output logic proc_instr_ready_out,
    output logic proc_data_ready_out,

    // L1 Cache (L1D) Interface (outputs)
    output logic l1d_valid_out,
    output logic l1d_ready_out,
    output logic [63:0] l1d_addr_out,
    output logic [63:0] l1d_value_out,
    output logic l1d_we_out,
    output logic l1d_tag_complete_out,

    // Completion Interface Outputs
    output logic completion_valid_out,
    output logic [63:0] completion_value_out,
    output logic [TAG_WIDTH-1:0] completion_tag_out
);

    // Instantiate the LSU Control block (which integrates the queue and memory interface)
    lsu_control #(
        .QUEUE_DEPTH(QUEUE_DEPTH),
        .TAG_WIDTH(TAG_WIDTH)
    ) lsu_control_inst (
        .clk_in(clk_in),
        .rst_N_in(rst_N_in),
        .cs_N_in(cs_N_in),

        // Processor Instruction Interface
        .proc_instr_valid_in(proc_instr_valid_in),
        .proc_instr_tag_in(proc_instr_tag_in),
        .proc_instr_is_write_in(proc_instr_is_write_in),

        // Processor Data Interface
        .proc_data_valid_in(proc_data_valid_in),
        .proc_data_tag_in(proc_data_tag_in),
        .proc_addr_in(proc_addr_in),
        .proc_value_in(proc_value_in),

        // L1 Cache (L1D) Interface (inputs)
        .l1d_valid_in(l1d_valid_in),
        .l1d_ready_in(l1d_ready_in),
        .l1d_addr_in(l1d_addr_in),
        .l1d_value_in(l1d_value_in),
        .l1d_tag_in(l1d_tag_in),
        .l1d_write_complete_in(l1d_write_complete_in),
        .l1d_tag_complete_in(l1d_tag_complete_in),

        // Processor Handshaking Outputs
        .proc_instr_ready_out(proc_instr_ready_out),
        .proc_data_ready_out(proc_data_ready_out),

        // L1 Cache (L1D) Interface (outputs)
        .l1d_valid_out(l1d_valid_out),
        .l1d_ready_out(l1d_ready_out),
        .l1d_addr_out(l1d_addr_out),
        .l1d_value_out(l1d_value_out),
        .l1d_we_out(l1d_we_out),
        .l1d_tag_complete_out(l1d_tag_complete_out),

        // Completion Interface Outputs
        .completion_valid_out(completion_valid_out),
        .completion_value_out(completion_value_out),
        .completion_tag_out(completion_tag_out)
    );
  always_ff @(posedge clk_in) begin
    //$display("new cycle occurred at %0t", $time);
  end


endmodule : load_store_unit


 /*TODO handle when queue is full */
module lsu_queue #(
    parameter int QUEUE_DEPTH = 16,
    parameter int TAG_WIDTH   = 8
) (
    input  logic clk_in,
    input  logic rst_N_in,

    // Instruction Interface from Processor
    input  logic instr_valid_in,                
    input  logic [TAG_WIDTH-1:0] instr_tag_in,  
    input  logic instr_is_store_in,  // 1 => store, 0 => load

    // Data Interface from Processor (arrives later, matched by tag)
    input  logic data_valid_in,
    input  logic [TAG_WIDTH-1:0] data_tag_in,
    input  logic [63:0] addr_in,
    input  logic [63:0] value_in,  // used for stores

    // Stall if the queue is full
    output logic stall_out,

    // Dispatch handshake to Memory
    output logic dispatch_valid_out,
    input  logic dispatch_ready_in,   // <== Memory interface signals readiness
    output logic dispatch_is_store_out,
    output logic [63:0] dispatch_addr_out,
    output logic [63:0] dispatch_value_out,
    output logic [TAG_WIDTH-1:0] dispatch_tag_out,

    // Completion feedback from memory
    input  logic completion_valid_in,
    input  logic [TAG_WIDTH-1:0] completion_tag_in,
    input  logic [63:0] completion_data_in,

    // Status outputs
    output logic full_out,
    output logic empty_out,
    
    // output to lsu control:
    // Completion interface outputs
    output logic completion_valid_out,
    output logic [63:0] completion_value_out,
    output logic [TAG_WIDTH-1:0] completion_tag_out,
    output logic waiting_for_data_out
);

    // ----------------------------------------------------------------
    // 1) The Queue data structure
    // ----------------------------------------------------------------
    typedef enum logic {
        OP_LOAD,
        OP_STORE
    } op_e;

    typedef struct packed {
        logic valid;
        logic ea_resolved;   // Processor has provided address/data
        logic dispatched;    // Sent to memory
        logic complete;
        logic [TAG_WIDTH-1:0] tag;
        op_e op_type;
        logic [63:0] addr;
        logic [63:0] value;  // Store data or (eventually) load data
    } mem_entry_t;

    mem_entry_t queue[QUEUE_DEPTH];

    // ring buffer pointers
    logic [$clog2(QUEUE_DEPTH)-1:0] head_ptr, tail_ptr;
    logic [$clog2(QUEUE_DEPTH):0]   count;

    // full logic
    logic [$clog2(QUEUE_DEPTH):0]   waiting_for_data_count;
    assign waiting_for_data_out = waiting_for_data_count != 0;
    // ----------------------------------------------------------------
    // 2) Queue status logic
    // ----------------------------------------------------------------
    assign full_out  = (count == QUEUE_DEPTH[$clog2(QUEUE_DEPTH):0]);
    assign empty_out = (count == '0);
    assign stall_out = (full_out);

    // debugging display
    task automatic display_queue_status;
        $display("\n=== LSU Queue Status ===");
        $display("Head: %0d, Tail: %0d, Count: %0d", head_ptr, tail_ptr, count);
        for (int i = 0; i < QUEUE_DEPTH; i++) begin
            if (queue[i].valid) begin
                $display("Entry[%0d]: Tag=%h, %s, EA_Resolved=%b, Dispatched=%b, Addr=0x%h, Value=0x%h",
                         i, queue[i].tag,
                         (queue[i].op_type == OP_LOAD) ? "LOAD" : "STORE",
                         queue[i].ea_resolved,
                         queue[i].dispatched,
                         queue[i].addr,
                         queue[i].value);
            end
        end
        $display("=====================\n");
    endtask

    

    logic display_needed;
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            display_needed <= 1'b0;
        end else begin
            display_needed <= instr_valid_in && !stall_out;
            if (display_needed) begin
                display_queue_status();
            end
        end
    end

     task automatic forward_from_older_store(
    input logic [63:0] load_addr,
    input int          load_idx,
    input logic [TAG_WIDTH-1:0] load_tag
);
    int closest_store_idx = -1;
    int s = int'(head_ptr);  // Explicit cast to int (sign-extends if necessary)
    int iter_count = 0; // Prevent infinite looping

    $display("in forward_from_older_store");

    // Loop through the queue in order from head to load_idx
    while (s != load_idx && iter_count < QUEUE_DEPTH) begin
        // Must be a valid store
        if (queue[s].valid && (queue[s].op_type == OP_STORE)) begin
            // Must be older in ring buffer
            if (is_older(load_idx, s)) begin
                // Must have its EA resolved
                if (!queue[s].ea_resolved) begin
                    s = (s + 1) % QUEUE_DEPTH;
                    iter_count++;
                    continue;  // Skip if unresolved
                end
                // If same address => consider forwarding
                if (queue[s].addr == load_addr) begin
                    closest_store_idx = s;  // Update closest store
                end
            end
        end
        s = (s + 1) % QUEUE_DEPTH;
        iter_count++;
    end

    // If a closest store was found, perform forwarding
    if (closest_store_idx != -1) begin
        $display("Forward: load(tag=%h) idx=%0d from closest older store(tag=%h) idx=%0d with value: %x",
                 load_tag, load_idx, queue[closest_store_idx].tag, closest_store_idx, queue[closest_store_idx].value);

        // Mark the load as completed with the forwarded value
        queue[load_idx].valid   <= 1'b1; // still valid til we leave:(
        queue[load_idx].value   <= queue[closest_store_idx].value;
        queue[load_idx].complete <= 1'b1;
        

    end
endtask

task automatic check_for_younger_store(
    input logic [63:0] store_addr,
    input int          store_idx,
    input logic [TAG_WIDTH-1:0] store_tag
);
    for (int s = 0; s < QUEUE_DEPTH; s++) begin
        if (s == store_idx) continue;

        // Must be a valid store
        if (queue[s].valid && (queue[s].op_type == OP_STORE) && !queue[s].dispatched) begin 
            // Must be older in the ring buffer
            if (is_older(s, store_idx)) begin
                // Ensure there are NO loads in-between
                logic load_between = 1'b0;
                for (int mid = s + 1; mid < store_idx; mid++) begin
                    if (queue[mid].valid && queue[mid].op_type == OP_LOAD) begin
                        load_between = 1'b1;
                        break;
                    end
                end

                if (load_between) begin
                    $display("Blocked: Younger store(tag=%h) at idx=%0d exists, but a load is in between.",
                             store_tag, store_idx);
                    return;
                end

                // Older store must have its EA resolved
                if (!queue[s].ea_resolved) begin
                    // Can't forward if the older store is not resolved
                    return;
                end

                // If same address => Forward the value
                if (queue[s].addr == store_addr) begin
                    $display("Forward: younger store(tag=%h) idx=%0d from older store(tag=%h) idx=%0d",
                             store_tag, store_idx, queue[s].tag, s);

                    // Forward the value from older store
                    queue[store_idx].valid   <= 1'b1;
                    queue[store_idx].value   <= 0; // Forward store value
                    queue[store_idx].complete <= 1'b1;

                    $display("LSU: Store tag=%h completed via immediate forwarding from older store", store_tag);
                    break;
                end
            end
        end
    end
endtask



task automatic forward_to_younger_loads(
    input logic [63:0] store_addr,
    input logic [63:0] store_data,
    input int          store_idx,
    input logic [TAG_WIDTH-1:0] store_tag
);
    for (int l = 0; l < QUEUE_DEPTH; l++) begin
        if (l == store_idx) continue;
        // Must be a valid load
        if (queue[l].valid && (queue[l].op_type == OP_LOAD)) begin
            // Must be younger in ring buffer
            if (is_younger(l, store_idx)) begin
                if (queue[l].ea_resolved && (queue[l].addr == store_addr) && !queue[l].dispatched) begin
                    $display("Forward: younger load(tag=%h) idx=%0d from store(tag=%h) => data=0x%h",
                             queue[l].tag, l, store_tag, store_data);

                    // Mark the load done
                    queue[l].value <= store_data;
                    queue[l].valid <= 1'b1;
                    queue[l].complete <= 1'b1;
                    // current logic can only handle one forward done at a time :/
                end
            end
        end
    end
endtask

        // logic to send one of these to completion!
        always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            completion_valid_out  <= 1'b0;
            completion_value_out  <= 64'd0;
            completion_tag_out    <= '0;
        end else begin
            completion_valid_out  <= 1'b0;  // Default to invalid each cycle

            // Iterate through queue to find a completed instruction
            for (int i = 0; i < QUEUE_DEPTH; i++) begin
                if (queue[i].valid && queue[i].complete) begin
                    $display("should see me now");
                    // Send the completed instruction to lsu_control
                    completion_valid_out  <= 1'b1;
                    completion_value_out  <= queue[i].value;
                    completion_tag_out    <= queue[i].tag;

                    // Mark the entry as invalid (remove from queue)
                    queue[i].valid   <= 1'b0;
                    queue[i].complete <= 1'b0;
                    if (!queue[head_ptr].ea_resolved) begin
                        waiting_for_data_count <= waiting_for_data_count - 1;  // ✅ Only decrement if it was waiting for data
                    end
                    // Display debug message
                    $display("LSU Queue: Returning completed instruction (tag=%h, value=0x%h) to processor", 
                            queue[i].tag, queue[i].value);

                    break; // Return only **one** instruction per cycle
                end
            end
        end
    end

    // ----------------------------------------------------------------
    // 3) Enqueue logic
    // ----------------------------------------------------------------
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            head_ptr <= '0;
            tail_ptr <= '0;
            count    <= '0;
            for (int i = 0; i < QUEUE_DEPTH; i++) begin
                queue[i].valid       <= 1'b0;
                queue[i].ea_resolved <= 1'b0;
                queue[i].dispatched  <= 1'b0;
                queue[i].tag         <= '0;
                queue[i].op_type     <= OP_LOAD;
                queue[i].addr        <= 64'd0;
                queue[i].value       <= 64'd0;
            end
        end else begin
            // Insert new instruction if not stalled
            if (instr_valid_in && !stall_out) begin
                queue[tail_ptr].valid       <= 1'b1;
                queue[tail_ptr].ea_resolved <= 1'b0;
                queue[tail_ptr].dispatched  <= 1'b0;
                queue[tail_ptr].tag         <= instr_tag_in;
                queue[tail_ptr].op_type     <= (instr_is_store_in) ? OP_STORE : OP_LOAD;
                queue[tail_ptr].addr        <= 64'd0;
                queue[tail_ptr].value       <= 64'd0;

                tail_ptr <= tail_ptr + 1;
                count    <= count + 1;
                waiting_for_data_count <= waiting_for_data_count + 1;
            end

            // Address/data arrives
            if (data_valid_in) begin 
                for (int i = 0; i < QUEUE_DEPTH; i++) begin
                    if (queue[i].valid && !queue[i].ea_resolved && (queue[i].tag == data_tag_in)) begin
                        queue[i].addr <= addr_in;
                        if (queue[i].op_type == OP_STORE) begin
                            queue[i].value <= value_in;
                        end
                        queue[i].ea_resolved <= 1'b1;
                        waiting_for_data_count <= waiting_for_data_count - 1;
                        /*
                        If it's a load:
                          if an older store has the same EA, get the value, and
                          return to the processor (lsu control)
                        If it's a store:
                          IF there is a younger store w the same EA (no loads inbetween):
                            I terminate, and go to the lsu control
                          IF there is a younger load with the same EA
                            i give that load it's value, and go to lsu control

                        Effectively, in all cases, i must remove it from the queue.
                        */
                        // Now do immediate forwarding using the local address/data
                        if (queue[i].op_type == OP_LOAD) begin
                            // forward from older store => pass in load_addr, load_idx, load_tag
                            forward_from_older_store(addr_in, i, queue[i].tag);
                            
                        end else begin // Its a store!!!
                            // forward to younger loads => pass store_addr, store_data, store_idx, store_tag
                            forward_to_younger_loads(addr_in, value_in, i, queue[i].tag);
                            check_for_younger_store(addr_in, i, queue[i].tag);
                        end
                        break;
                        break;
                    end
                end

            end

            // On completion, mark entry invalid
            // forwarding to be handled here too. 
            // what tactics can we employ

            if (completion_valid_in) begin
                $display("LSU Queue: Received completion for tag %h with value 0x%h",
                         completion_tag_in, completion_data_in);
                for (int i = 0; i < QUEUE_DEPTH; i++) begin
                    if (queue[i].valid && queue[i].dispatched && (queue[i].tag == completion_tag_in)) begin
                        // For loads, store the returned data, if needed
                        if (queue[i].op_type == OP_LOAD) begin
                            queue[i].value <= completion_data_in;
                        end
                        // Then free the entry
                        queue[i].valid <= 1'b0;
                        $display("LSU Queue: Completing %s for tag %h at index %0d",
                                (queue[i].op_type == OP_LOAD) ? "LOAD" : "STORE",
                                queue[i].tag, i);
                        display_queue_status();

                        break;
                    end
                end

            end

            // Pop exactly one completed entry each cycle
            if (count > 0 && !queue[head_ptr].valid) begin
              head_ptr <= head_ptr + 1'b1;
              count    <= count    - 1'b1;
            end

        end
    end

    // ----------------------------------------------------------------
    // 4) Dispatch logic
    // ----------------------------------------------------------------
    // We'll look for one candidate (load or store) at a time to dispatch.
    // The memory interface can only handle one outstanding transaction.

    typedef enum logic [1:0] {
        DISPATCH_NONE,
        DISPATCH_FORWARD,
        DISPATCH_MEMORY
    } dispatch_kind_e;

    // Helper function: is entry i older than j in ring buffer
    function automatic logic is_older(input int i, input int j);
        int idx;
        if (i == j) return 0;
        idx = i;
        for (int step = 0; step < QUEUE_DEPTH; step++) begin
            idx = (idx == 0) ? (QUEUE_DEPTH-1) : (idx-1);
            if (idx == j) return 1;
        end
        return 0;
    endfunction

    // Helper function: is entry i younger than j
    function automatic logic is_younger(input int i, input int j);
        int idx;
        if (i == j) return 0;
        idx = i;
        for (int step = 0; step < QUEUE_DEPTH; step++) begin
            idx = (idx + 1) % QUEUE_DEPTH;
            if (idx == j) return 1;
        end
        return 0;
    endfunction

    // Decide if an entry is dispatchable
    function dispatch_kind_e check_dispatchable(int i);
        if (!queue[i].valid || !queue[i].ea_resolved || queue[i].dispatched)
            return DISPATCH_NONE;

        if (queue[i].op_type == OP_LOAD) begin
            // Look for older stores that might forward
            for (int s = 0; s < QUEUE_DEPTH; s++) begin
                if (s == i) continue;
                if (queue[s].valid && (queue[s].op_type == OP_STORE) && is_older(i,s) && !queue[s].complete) begin
                    // if (queue[s].ea_resolved && (queue[s].addr == queue[i].addr)) begin
                    //     return DISPATCH_FORWARD;
                    // end
                    if (!queue[s].ea_resolved)
                        return DISPATCH_NONE;
                end
            end
            return DISPATCH_MEMORY;
        end
        else begin
            // For stores, ensure no younger (after) store or load conflicts
            for (int j = 0; j < QUEUE_DEPTH; j++) begin

                if (j == i) continue;
                if (queue[j].valid && is_younger(i,j)) begin
                    if (queue[j].op_type == OP_STORE) begin
                        if (!queue[j].ea_resolved) return DISPATCH_NONE;
                        if (queue[j].addr == queue[i].addr)
                            return DISPATCH_NONE;
                    end 
                    //else begin
                        // If there's a load to the same address, we might need to forward
                      //  if (queue[j].addr == queue[i].addr)
                     //       return DISPATCH_FORWARD;
                   // end
                end
            end
            return DISPATCH_MEMORY;
        end
    endfunction

    // Combinational search for a dispatch candidate
    logic candidate_found;
    int candidate_index;
    dispatch_kind_e candidate_kind;

    always_comb begin
        logic [$clog2(QUEUE_DEPTH)-1:0] idx;
        dispatch_kind_e dk;
        
        // Initialize outputs
        candidate_found = 1'b0;
        candidate_index = -1;
        candidate_kind  = DISPATCH_NONE;
        dk = DISPATCH_NONE;

        // Start search from head pointer
        idx = head_ptr;
        
        // First, search for a load
        for (int k = 0; k < count; k++) begin
            if (queue[idx].valid && queue[idx].ea_resolved && !queue[idx].dispatched &&
                (queue[idx].op_type == OP_LOAD) && !queue[idx].complete) begin // needed to add complete field to ensure it hasnt been forwarded to
                dk = check_dispatchable(int'(idx));  // Cast idx to int for function call
                if (dk != DISPATCH_NONE) begin
                    candidate_found = 1'b1;
                    candidate_index = int'(idx);  // Cast idx to int for assignment
                    candidate_kind  = dk;
                    $display("Time %0t: LSU Queue: Found load for tag %h at index %0d", $time, queue[idx].tag, idx);
                    break;
                end
            end
            idx = idx + 1'b1;
        end

        // If no load found, search for a store
        if (!candidate_found) begin
            idx = head_ptr;
            for (int k = 0; k < count; k++) begin
                if (queue[idx].valid && queue[idx].ea_resolved && !queue[idx].dispatched &&
                    queue[idx].op_type == OP_STORE && !queue[idx].complete) begin // needed to add complete field to ensure it hasnt been forwarded to
                    dk = check_dispatchable(int'(idx));  // Cast idx to int for function call
                    if (dk != DISPATCH_NONE) begin
                        candidate_found = 1'b1;
                        candidate_index = int'(idx);  // Cast idx to int for assignment
                        candidate_kind  = dk;
                        break;
                    end
                end
                idx = (idx + $clog2(QUEUE_DEPTH)'(1)) % $clog2(QUEUE_DEPTH)'(QUEUE_DEPTH);  // Proper width arithmetic
            end
        end
    end

    // Registered dispatch signals (with handshake)
    logic reg_dispatch_valid;
    logic reg_dispatch_is_store;
    logic [63:0] reg_dispatch_addr, reg_dispatch_value;
    logic [TAG_WIDTH-1:0] reg_dispatch_tag;

    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            reg_dispatch_valid     <= 1'b0;
            reg_dispatch_is_store  <= 1'b0;
            reg_dispatch_addr      <= 64'd0;
            reg_dispatch_value     <= 64'd0;
            reg_dispatch_tag       <= '0;
        end else begin
            // If we do NOT currently have a valid dispatch, and we found a candidate
            // then we start a new dispatch
            if (!reg_dispatch_valid && candidate_found && dispatch_ready_in) begin
                reg_dispatch_valid    <= 1'b1;
                reg_dispatch_is_store <= (queue[candidate_index].op_type == OP_STORE);
                reg_dispatch_addr     <= queue[candidate_index].addr;
                reg_dispatch_value    <= queue[candidate_index].value;
                reg_dispatch_tag      <= queue[candidate_index].tag;

                if (candidate_kind == DISPATCH_FORWARD) begin
                    // Mark that entry done
                    queue[candidate_index].valid <= 1'b0;
                end else begin
                    // Mark it as dispatched
                    queue[candidate_index].dispatched <= 1'b1;
                end
            end 
            // **Important**: ONLY drop reg_dispatch_valid after the memory interface is "ready" (it latched us)
            else if (reg_dispatch_valid && dispatch_ready_in) begin
                reg_dispatch_valid <= 1'b0;
            end
        end
    end

    // Drive the handshake outputs
    assign dispatch_valid_out    = reg_dispatch_valid;
    assign dispatch_is_store_out = reg_dispatch_is_store;
    assign dispatch_addr_out     = reg_dispatch_addr;
    assign dispatch_value_out    = reg_dispatch_value;
    assign dispatch_tag_out      = reg_dispatch_tag;

endmodule : lsu_queue

module memory_interface #(
    parameter int QUEUE_DEPTH = 32,
    parameter int TAG_WIDTH   = 10
) (
    // Clock/Reset
    input  logic clk_in,
    input  logic rst_N_in,
    input  logic cs_N_in,

    //=== Dispatch handshake (from LSU Queue) ===
    input  logic              dispatch_valid_in,   // Producer's "Valid"
    output logic              dispatch_ready_out,  // Our "Ready"
    input  logic              dispatch_is_store_in,
    input  logic [63:0]       dispatch_addr_in,
    input  logic [63:0]       dispatch_value_in,
    input  logic [TAG_WIDTH-1:0] dispatch_tag_in,

    //=== L1 Cache Interface (inputs) ===
    input  logic              l1d_valid_in,       // L1D says "I've got a response"
    input  logic              l1d_ready_in,       // L1D can accept new commands
    input  logic [63:0]       l1d_addr_in,
    input  logic [63:0]       l1d_value_in,
    input  logic [TAG_WIDTH-1:0] l1d_tag_in,
    input  logic              l1d_write_complete_in,
    input  logic              l1d_tag_complete_in,

    //=== L1 Cache Interface (outputs) ===
    output logic              l1d_valid_out,       // Valid request to L1D
    output logic              l1d_ready_out,       // Not used heavily in this example
    output logic [63:0]       l1d_addr_out,
    output logic [63:0]       l1d_value_out,
    output logic              l1d_we_out,
    output logic              l1d_tag_complete_out,

    //=== Completion back to LSU Queue ===
    output logic              completion_valid_out,
    output logic [63:0]       completion_value_out,
    output logic [TAG_WIDTH-1:0] completion_tag_out
);

    // ----------------------------------------------------------------
    // Simple handshake state machine
    // ----------------------------------------------------------------
    typedef enum logic [1:0] {
        S_IDLE = 2'd0,         // Waiting for a new dispatch
        S_DISPATCH = 2'd1,     // Holding valid request high to L1D until it sees "ready"
        S_WAIT_RESP = 2'd2     // Waiting for L1D to return completion
    } state_e;

    state_e             curr_state, next_state;

    // Latched dispatch fields
    logic              lat_is_store;
    logic [63:0]       lat_addr, lat_value;
    logic [TAG_WIDTH-1:0] lat_tag;

    // We also keep track of whether we've launched a request to L1D
    // and are awaiting a response.
    // 
    // The L1D handshake:
    //  - We drive l1d_valid_out until L1D asserts l1d_ready_in in the S_DISPATCH state.
    //  - After that handshake, we go to S_WAIT_RESP and wait for l1d_valid_in (the response).
    //

    // ----------------------------------------------------------------
    // 1) State register
    // ----------------------------------------------------------------
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            curr_state <= S_IDLE;
        end
        else begin
            curr_state <= next_state;
        end
    end

    // ----------------------------------------------------------------
    // 2) Next-state logic
    // ----------------------------------------------------------------
    always_comb begin
        // Default “stay in the same state”
        next_state = curr_state;

        case (curr_state)
            //----------------------------------------------------------
            S_IDLE: begin
                // We are idle, so we assert dispatch_ready_out to accept a new request
                // If the producer is valid, we latch it and move to S_DISPATCH
                if (dispatch_valid_in) begin
                    next_state = S_DISPATCH;
                end
            end

            //----------------------------------------------------------
            S_DISPATCH: begin
                // We are driving a valid request to L1D (l1d_valid_out=1).
                // We remain here until L1D says "ready".
                if (l1d_ready_in) begin
                    // Once L1D “consumes” this request, we move to WAIT_RESP
                    next_state = S_WAIT_RESP;
                end
            end

            //----------------------------------------------------------
            S_WAIT_RESP: begin
                // We have sent the request to L1D. Wait for L1D to send a valid response
                // (load data or store completion). Then we go back to IDLE.
                if (l1d_valid_in) begin
                    next_state = S_IDLE;
                end
            end
            default: begin end

        endcase
    end

    // ----------------------------------------------------------------
    // 3) Output Logic & Latching
    // ----------------------------------------------------------------

    // By the Valid/Ready handshake rule:
    //    dispatch_ready_out can be combinationally 1 only if we are in a state to accept a new request (S_IDLE).
    assign dispatch_ready_out = (curr_state == S_IDLE);

    // For convenience, also pass L1D’s “ready” out (not used much here)
    assign l1d_ready_out = l1d_ready_in;

    // By the handshake rule, in S_DISPATCH we keep l1d_valid_out = 1
    // until L1D raises l1d_ready_in. Then we go S_WAIT_RESP => l1d_valid_out=0
    
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            lat_is_store       <= 1'b0;
            lat_addr           <= 64'd0;
            lat_value          <= 64'd0;
            lat_tag            <= '0;

            l1d_valid_out      <= 1'b0;
            l1d_addr_out       <= 64'd0;
            l1d_value_out      <= 64'd0;
            l1d_we_out         <= 1'b0;
            l1d_tag_complete_out <= 1'b0;

            completion_valid_out <= 1'b0;
            completion_value_out <= 64'd0;
            completion_tag_out   <= '0;

        end 
        else begin
            // Default each cycle
            l1d_tag_complete_out  <= 1'b0;
            completion_valid_out  <= 1'b0;

            case (curr_state)

                //------------------------------------------------------
                S_IDLE: begin
                    // If the producer is valid, latch its data
                    l1d_valid_out <= 1'b0;  // Not yet driving a request
                    if (dispatch_valid_in) begin
                        lat_is_store  <= dispatch_is_store_in;
                        lat_addr      <= dispatch_addr_in;
                        lat_value     <= dispatch_value_in;
                        lat_tag       <= dispatch_tag_in;
                    end
                    if (l1d_valid_in) begin
                        $display("l1d was ready, now we can go back to idle and accept another instruction");
                        // On L1D’s response, produce completion
                        completion_valid_out <= 1'b1;
                        completion_tag_out   <= l1d_tag_in;

                        if (!l1d_write_complete_in) begin
                            // That means it's a load returning data
                            completion_value_out <= l1d_value_in;
                        end
                        else begin
                            // Store completion => no data
                            completion_value_out <= 64'd0;
                        end
                    end
                end

                //------------------------------------------------------
                S_DISPATCH: begin
                    // Now we hold the latched data on the L1D interface
                    l1d_valid_out       <= 1'b1;
                    l1d_tag_complete_out<= 1'b1;  // Example: we tell L1D "tag is complete"
                    l1d_addr_out        <= lat_addr;
                    l1d_value_out       <= lat_value;
                    l1d_we_out          <= lat_is_store;

                    // Wait for L1D to say “ready” => consumes our request
                    if (l1d_ready_in) begin
                        $display("l1d is ready in now!");
                        // Next cycle we drop l1d_valid_out in S_WAIT_RESP
                        l1d_valid_out <= 1'b0;
                    end else begin
                      $display("l1d is not ready in now!");
                    end
                end

                //------------------------------------------------------
                S_WAIT_RESP: begin // what this should do is wait until ready in goes low, then go back to idle
                    // We have sent a request and are waiting for L1D’s completion
                    l1d_valid_out <= 1'b0;  // No new request this cycle
                    if (!l1d_ready_in) begin
                      next_state = S_IDLE;
                    end
                    $display("i am in s_wait_resp, should see me more than once");
                    if (l1d_valid_in) begin
                        $display("l1d was ready, now we can go back to idle and accept another instruction");
                        // On L1D’s response, produce completion
                        completion_valid_out <= 1'b1;
                        completion_tag_out  <= l1d_tag_in;
                        if (!l1d_write_complete_in) begin
                            // That means it's a load returning data
                            completion_value_out <= l1d_value_in;
                        end
                        else begin
                            // Store completion => no data
                            completion_value_out <= 64'd0;
                        end
                    end
                end 
                default: begin end

            endcase
        end
    end

endmodule



module lsu_control #(
    parameter int QUEUE_DEPTH = 32,
    parameter int TAG_WIDTH   = 10
) (
    // Clock and control
    input  logic clk_in,
    input  logic rst_N_in,
    input  logic cs_N_in,
    
    // Processor Instruction Interface
    input  logic proc_instr_valid_in,
    input  logic [TAG_WIDTH-1:0] proc_instr_tag_in,
    input  logic proc_instr_is_write_in,
    
    // Processor Data Interface
    input  logic proc_data_valid_in,
    input  logic [TAG_WIDTH-1:0] proc_data_tag_in,
    input  logic [63:0] proc_addr_in,
    input  logic [63:0] proc_value_in,
    
    // L1 Cache Interface (inputs)
    input  logic l1d_valid_in,
    input  logic l1d_ready_in,
    input  logic [63:0] l1d_addr_in,
    input  logic [63:0] l1d_value_in,
    input  logic [TAG_WIDTH-1:0] l1d_tag_in,
    input  logic l1d_write_complete_in,
    input  logic l1d_tag_complete_in,
    
    // Processor handshake outputs
    output logic proc_instr_ready_out,
    output logic proc_data_ready_out,
    
    // L1 Cache Interface (outputs)
    output logic l1d_valid_out,
    output logic l1d_ready_out,
    output logic [63:0] l1d_addr_out,
    output logic [63:0] l1d_value_out,
    output logic l1d_we_out,
    output logic l1d_tag_complete_out,
    
    // Completion Interface (To Processor)
    output logic completion_valid_out,
    output logic [63:0] completion_value_out,
    output logic [TAG_WIDTH-1:0] completion_tag_out
);

    // LSU Queue Signals
    logic lsu_queue_stall;
    logic lsu_queue_dispatch_valid;
    logic lsu_queue_dispatch_is_store;
    logic [63:0] lsu_queue_dispatch_addr;
    logic [63:0] lsu_queue_dispatch_value;
    logic [TAG_WIDTH-1:0] lsu_queue_dispatch_tag;
    logic lsu_queue_full;
    logic lsu_queue_empty;
    logic lsu_queue_completion_valid;
    logic [63:0] lsu_queue_completion_value;
    logic [TAG_WIDTH-1:0] lsu_queue_completion_tag;

    // Memory Interface Signals
    logic mem_if_dispatch_ready;
    logic mem_completion_valid;
    logic [63:0] mem_completion_value;
    logic [TAG_WIDTH-1:0] mem_completion_tag;
    logic waiting_for_data;
    // Instantiate the LSU queue
    lsu_queue #(
        .QUEUE_DEPTH(QUEUE_DEPTH),
        .TAG_WIDTH(TAG_WIDTH)
    ) lsu_queue_inst (
        .clk_in(clk_in),
        .rst_N_in(rst_N_in),

        // Instruction Interface
        .instr_valid_in(proc_instr_valid_in),
        .instr_tag_in(proc_instr_tag_in),
        .instr_is_store_in(proc_instr_is_write_in),

        // Data Interface
        .data_valid_in(proc_data_valid_in),
        .data_tag_in(proc_data_tag_in),
        .addr_in(proc_addr_in),
        .value_in(proc_value_in),

        // Stall and Status
        .stall_out(lsu_queue_stall),
        .full_out(lsu_queue_full),
        .empty_out(lsu_queue_empty),

        // Dispatch handshake to memory interface
        .dispatch_valid_out(lsu_queue_dispatch_valid),
        .dispatch_ready_in(mem_if_dispatch_ready),
        .dispatch_is_store_out(lsu_queue_dispatch_is_store),
        .dispatch_addr_out(lsu_queue_dispatch_addr),
        .dispatch_value_out(lsu_queue_dispatch_value),
        .dispatch_tag_out(lsu_queue_dispatch_tag),

        // Completion feedback from memory
        .completion_valid_in(mem_completion_valid),
        .completion_tag_in(mem_completion_tag),
        .completion_data_in(mem_completion_value),

        // Completion output (generated inside queue)
        .completion_valid_out(lsu_queue_completion_valid),
        .completion_value_out(lsu_queue_completion_value),
        .completion_tag_out(lsu_queue_completion_tag),
        .waiting_for_data_out(waiting_for_data)
    );

    // Instantiate the Memory Interface
    memory_interface #(
        .QUEUE_DEPTH(QUEUE_DEPTH),
        .TAG_WIDTH(TAG_WIDTH)
    ) memory_interface_inst (
        .clk_in(clk_in),
        .rst_N_in(rst_N_in),
        .cs_N_in(cs_N_in),

        // Dispatch handshake from queue
        .dispatch_valid_in(lsu_queue_dispatch_valid),
        .dispatch_ready_out(mem_if_dispatch_ready),
        .dispatch_is_store_in(lsu_queue_dispatch_is_store),
        .dispatch_addr_in(lsu_queue_dispatch_addr),
        .dispatch_value_in(lsu_queue_dispatch_value),
        .dispatch_tag_in(lsu_queue_dispatch_tag),

        // L1 Cache inputs
        .l1d_valid_in(l1d_valid_in),
        .l1d_ready_in(l1d_ready_in),
        .l1d_addr_in(l1d_addr_in),
        .l1d_value_in(l1d_value_in),
        .l1d_tag_in(l1d_tag_in),
        .l1d_write_complete_in(l1d_write_complete_in),
        .l1d_tag_complete_in(l1d_tag_complete_in),

        // L1 Cache outputs
        .l1d_valid_out(l1d_valid_out),
        .l1d_ready_out(l1d_ready_out),
        .l1d_addr_out(l1d_addr_out),
        .l1d_value_out(l1d_value_out),
        .l1d_we_out(l1d_we_out),
        .l1d_tag_complete_out(l1d_tag_complete_out),

        // Completion outputs
        .completion_valid_out(mem_completion_valid),
        .completion_value_out(mem_completion_value),
        .completion_tag_out(mem_completion_tag)
    );

    // Completion Selection Logic
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            completion_valid_out  <= 1'b0;
            completion_value_out  <= 64'd0;
            completion_tag_out    <= '0;
        end else begin
            completion_valid_out <= 1'b0;  // Default: no completion

            // Prioritize LSU Queue completions first
            if (lsu_queue_completion_valid) begin
                completion_valid_out <= 1'b1;
                completion_value_out <= lsu_queue_completion_value;
                completion_tag_out   <= lsu_queue_completion_tag;

                $display("LSU Control: Completing instruction from QUEUE (tag=%h, value=0x%h)",
                         lsu_queue_completion_tag, lsu_queue_completion_value);

            end
            // If no queue completion, check Memory Interface
            else if (mem_completion_valid) begin
                completion_valid_out <= 1'b1;
                completion_value_out <= mem_completion_value;
                completion_tag_out   <= mem_completion_tag;

                $display("LSU Control: Completing instruction from MEMORY (tag=%h, value=0x%h)",
                         mem_completion_tag, mem_completion_value);
            end
           // $display("Time: %0t that signal is now: %d", $time, lsu_queue_stall);
        end
    end

    // Processor handshake signals
    assign proc_instr_ready_out = !lsu_queue_stall;
    assign proc_data_ready_out  = waiting_for_data;

endmodule : lsu_control
