// Utility combinational logic for mem scheduler

// Address mapping strategy:
// Lower bits: Column address (for row buffer locality)
// Middle bits: Bank/Bank Group (for parallelism)
// Upper bits: Row address
module address_parser #(
    parameter int ROW_BITS = 8,
    parameter int COL_BITS = 4,
    parameter int PADDR_BITS = 64, // word size
    parameter int BANK_GROUPS = 4,
    parameter int BANKS_PER_GROUP = 2
) (
    input  logic [PADDR_BITS-1:0] mem_bus_addr_in,
    output logic [ROW_BITS-1:0] row_out,
    output logic [COL_BITS-1:0] col_out,
    output logic [$clog2(BANK_GROUPS)-1:0] bg_out,     // Bank group id
    output logic [$clog2(BANKS_PER_GROUP)-1:0] ba_out      // Bank id
);
    localparam BANK_BITS = $clog2(BANKS_PER_GROUP);
    localparam BANK_GRP_BITS = $clog2(BANK_GROUPS);
    localparam LOWER_BITS = COL_BITS+BANK_BITS+BANK_GRP_BITS;

    always_comb begin
        col_out = mem_bus_addr_in[COL_BITS-1:0];
        ba_out = mem_bus_addr_in[COL_BITS+BANK_BITS-1:COL_BITS];
        bg_out = mem_bus_addr_in[LOWER_BITS-1:COL_BITS+BANK_BITS];
        row_out = mem_bus_addr_in[LOWER_BITS+ROW_BITS-1:LOWER_BITS];
        // $display("%d %d %d %d", col_out, ba_out, bg_out, row_out);
    end
endmodule

module dimm_to_paddr #(
    parameter int ROW_BITS = 8,
    parameter int COL_BITS = 4,
    parameter int PADDR_BITS = 19, // word size
    parameter int BANK_GROUPS = 4,
    parameter int BANKS_PER_GROUP = 2
) (
    input logic [ROW_BITS-1:0] row_in,
    input logic [COL_BITS-1:0] col_in,
    input logic [$clog2(BANK_GROUPS)-1:0] bg_in,     // Bank group id
    input logic [$clog2(BANKS_PER_GROUP)-1:0] ba_in,      // Bank id
    output  logic [PADDR_BITS-1:0] mem_bus_addr_out
);
    localparam BANK_BITS = $clog2(BANKS_PER_GROUP);
    localparam BANK_GRP_BITS = $clog2(BANK_GROUPS);
    localparam LOWER_BITS = COL_BITS+BANK_BITS+BANK_GRP_BITS;

    always_comb begin
        mem_bus_addr_out = PADDR_BITS'({
            row_in, 
            bg_in[BANK_GRP_BITS-1:0], 
            ba_in[BANK_BITS-1:0], 
            col_in
        });
    end
endmodule

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

// // CLB to assemble commands from scheduler for DIMM
// module command_clb #(
//     parameter int ROW_BITS = 8,    // bits to address rows
//     parameter int COL_BITS = 4     // bits to address columns
// ) (
//     // Inputs from request_scheduler
//     input logic [ROW_BITS-1:0] row_in,
//     input logic [COL_BITS-1:0] col_in,
//     input logic [2:0] cmd_in, // 0 is read, 1 is write, 2 is activate, 3 is precharge; if valid_out is 0 then block
//     output logic act_out, // Command bit
//     output logic [16:0] dram_addr_out  // row/col or special bits.

// );

//     // Commands enum
//     typedef enum logic[2:0] {
//         READ = 3'b000,
//         WRITE = 3'b001,
//         ACTIVATE = 3'b010,
//         PRECHARGE = 3'b011
//     } commands;

//     logic ras, cas, we;

//     always_comb begin

//         // If row activation
//         if (cmd_in == ACTIVATE) begin
//             act_out = '0; // Deactivate command pin
//             ras = '0;
//           	cas = '0;
//           	we = '0;

//             // Left-pad row address with 0's if row width is smaller than address width
//             dram_addr_out = {{(17-ROW_BITS){1'b0}}, row_in};

//         // If command
//         end else begin
//             act_out = '1; // Activate command pin

//             // Set command pins
//             case (cmd_in)
//                 READ: begin
//                     ras = '1;
//                     cas = '0;
//                     we = '1;
//                 end
//                 WRITE: begin
//                     ras = '1;
//                     cas = '0;
//                     we = '0;
//                 end
//                 PRECHARGE: begin
//                     ras = '0;
//                     cas = '1;
//                     we = '0;
//                 end
//               	default: begin // Should not get here
//                   ras = 'x;
//                   cas = 'x;
//                   we = 'x;
//                 end
//             endcase
//             // A10 is unused for commands, but could be used to indicate auto-precharge
//             // Set command pins, set unused bits to 0
//             dram_addr_out = {ras, cas, we, {(17-3-COL_BITS){1'b0}}, col_in};
//         end

//     end

// endmodule

// module dimm_addr_assembler #(
//     parameter int ROW_BITS = 8,    // bits to address rows
//     parameter int COL_BITS = 4
// ) (
//     input logic [2:0] cmd_in,
//     input logic [ROW_BITS-1:0] row_in,
//     input logic [COL_BITS-1:0] col_in,
//     output logic [16:0] addr
// );
//     typedef enum logic[2:0] {
//         READ = 3'b000,
//         WRITE = 3'b001,
//         ACTIVATE = 3'b010,
//         PRECHARGE = 3'b011
//     } commands;

    // always_comb begin
    //     case (cmd_in)
    //         READ: begin
    //             addr = {1'b1, 1'b0, 1'b1, 3'bz, 1'b0, {(10-COL_BITS){1'bz}}, col_in};
    //         end
    //         WRITE: begin
    //             addr = {1'b1, 1'b0, 1'b0, 3'bz, 1'b0, {(10-COL_BITS){1'bz}}, col_in};
    //         end
    //         ACTIVATE: begin
    //             addr = {{(17-ROW_BITS){1'b0}}, row_in};
    //         end
    //         PRECHARGE: begin
    //             addr = {1'b0, 1'b1, 1'b0, 3'bz, 1'b0, {(10-COL_BITS){1'bz}}, col_in};
    //         end
    //         default:
    //             addr = 17'bz;
    //     endcase
    // end
// 
// endmodule


// Module to send commands to DIMM and receive responses
module command_sender #(
    parameter int CAS_LATENCY = 22,
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int BANK_GROUPS = 4,
    parameter int BANKS_PER_GROUP = 4,       // banks per group
    parameter int ROW_BITS = 8,    // bits to address rows
    parameter int COL_BITS = 4,     // bits to address columns
    parameter int PADDR_BITS = 64 // word size
) (
    input logic clk_in,
    input logic rst_N_in,
    input logic [$clog2(BANK_GROUPS)-1:0] bank_group_in,
    input logic [$clog2(BANKS_PER_GROUP)-1:0] bank_in,
    input logic [ROW_BITS-1:0] row_in,
    input logic [COL_BITS-1:0] col_in,
    input logic valid_in, // if not valid ignore
    input logic [7:0][63:0] val_in, // val to write if write
    input logic [2:0] cmd_in,

    output logic act_out, // Command bit
    output logic [7:0][63:0] val_out,
    output logic [PADDR_BITS-1:0] paddr_out,
    output logic bursting, // set to HI when receiving/sending a burst to/from the DIMM
    inout logic [63:0] mem_bus_value_io  // Load / Store value for memory module
);
    
    // Trust the scheduler to not send commands that conflict with incoming data
    logic [3:0] burst_counter;
    // Commands enum
    typedef enum logic[2:0] {
        READ = 3'b000,
        WRITE = 3'b001,
        ACTIVATE = 3'b010,
        PRECHARGE = 3'b011
    } commands;

    // Module for queueing memory requests
    typedef struct packed {
        logic [PADDR_BITS-1:0] paddr;
        logic [31:0] cycle_counter; 
        logic [COL_BITS-1:0] col;
    } read_request_t;

    logic   enqueue_in,
            dequeue_in,
            empty,
            full;
    logic [31:0] cycle_counter;
    read_request_t req_in, req_out;

    mem_req_queue #(
        .QUEUE_SIZE(32),
        .mem_request_t(read_request_t) // default placeholder
    ) read_queue(
        .clk_in(clk_in),
        .rst_in(!rst_N_in),
        .enqueue_in(enqueue_in),
        .dequeue_in(dequeue_in),
        .req_in(req_in),
        .cycle_count(cycle_counter),
        .req_out(req_out),
        .empty(empty),
        .full(full)
    );
    logic read_burst_ready;
    logic [COL_BITS-1:0] read_col_start;

    logic [PADDR_BITS-1:0] read_paddr;
    dimm_to_paddr #(
        .ROW_BITS(ROW_BITS),
        .COL_BITS(COL_BITS),
        .PADDR_BITS(PADDR_BITS) // word size
        ) paddr_converter (
        .row_in(row_in),
        .col_in(col_in),
        .bg_in(bank_group_in[1:0]),     // Bank group id
        .ba_in(bank_in[0:0]),      // Bank id
        .mem_bus_addr_out(read_paddr)
    );

    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            cycle_counter <= 0;
        end else begin
            if (cmd_in == READ) begin
                req_in.paddr <= read_paddr;
                req_in.cycle_counter <= cycle_counter;
                req_in.col <= col_in;
                enqueue_in <= 1'b1;
            end else begin
                enqueue_in <= 1'b0;
            end

            if ((!empty && req_out.cycle_counter + CAS_LATENCY - 5 >= cycle_counter && req_out.cycle_counter + CAS_LATENCY <= cycle_counter) 
                || (read_burst_ready && burst_counter < 6)) begin
                bursting <= 1'b1;
            end else begin
                bursting <= 1'b0;
            end

            if (!empty && req_out.cycle_counter + CAS_LATENCY - 1 == cycle_counter) begin
                read_burst_ready = 1'b1;
                dequeue_in <= 1'b1;
                //set the read addy out on next cock cycle
                paddr_out <= req_out.paddr;
                read_col_start <= req_out.col;
            end else begin
                dequeue_in <= 1'b0;
            end

            if (!empty && req_out.cycle_counter + CAS_LATENCY + 3 == cycle_counter) begin
                act_out <= 1'b1;
            end else begin
                act_out <= 1'b0;
            end
            cycle_counter <= cycle_counter + 1;
        end

    end

    // Increment counter
    logic read_bursting;
    logic write_bursting;
    always_ff @(negedge rst_N_in or posedge clk_in or negedge clk_in)
        if (!rst_N_in) begin
            burst_counter <= '0;
        end else begin
            if (read_burst_ready) begin
                read_bursting <= 1'b1;
            end else if (read_bursting) begin
<<<<<<< HEAD
                /* verilator lint_off NULLPORT */
                val_out[(burst_counter + read_col_start)][2:0] = mem_bus_value_io;
                /* verilator lint_off NULLPORT */
=======
                val_out[{(burst_counter + read_col_start)}[2:0]] = mem_bus_value_io;
>>>>>>> 2a1e7a2cea3c95816d7bcb122f05845092237f4b
                burst_counter <= burst_counter == 7 ? 0 : burst_counter + 1;
                read_burst_ready = burst_counter != 7;
                read_bursting <= burst_counter != 7;
            end else if ((cmd_in == WRITE && valid_in) || write_bursting) begin
                burst_counter <= burst_counter == 7 ? 0 : burst_counter + 1;
                write_bursting <= burst_counter != 7;
            end else begin
                burst_counter <= 'b0;
            end
        end
        assign mem_bus_value_io = ((cmd_in == WRITE && valid_in) || write_bursting) ? val_in[burst_counter] : {(64){1'bz}};
endmodule