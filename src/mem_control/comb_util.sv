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
    end
endmodule

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


// // Module to send commands to DIMM and receive responses
// module command_sender #(
//     parameter int CAS_LATENCY = 22,
//     parameter int BANK_GROUPS = 8,
//     parameter int BANKS_PER_GROUP = 8,       // banks per group
//     parameter int ROW_BITS = 8,    // bits to address rows
//     parameter int COL_BITS = 4     // bits to address columns
// ) (
//     input logic clk_in,
//     input logic rst_in,
//     input logic [$clog2(BANK_GROUPS)-1:0] bank_group_in,
//     input logic [$clog2(BANKS_PER_GROUP)-1:0] bank_in,
//     input logic [ROW_BITS-1:0] row_in,
//     input logic [COL_BITS-1:0] col_in,
//     input logic valid_in, // if not valid ignore
//     input logic write_in, // if val is ok to write (basically write request)
//     input logic [7:0][63:0] val_in, // val to write if write
//     input logic [2:0] cmd_in,

//     output logic [$clog2(BANK_GROUPS)-1:0] bank_group_out,
//     output logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out,
//     output logic act_out, // Command bit
//     output logic [16:0] dram_addr_out,  // row/col or special bits.
//     output logic [7:0][63:0] val_out,
//     output logic bursting, // set to HI when receiving/sending a burst to/from the DIMM
//     inout logic [63:0] mem_bus_value_io  // Load / Store value for memory module
// );
    
//     // Trust the scheduler to not send commands that conflict with incoming data
//     logic [31:0] counter;
//     logic [4:0] cycle_counter;

//     // Commands enum
//     typedef enum logic[2:0] {
//         READ = 3'b000,
//         WRITE = 3'b001,
//         ACTIVATE = 3'b010,
//         PRECHARGE = 3'b011
//     } commands;

//     // Module for queueing memory requests
//     typedef struct packed {
//         logic [$clog2(BANK_GROUPS)-1:0] bank_group;
//         logic [$clog2(BANKS_PER_GROUP)-1:0] bank;
//         logic [ROW_BITS-1:0] row;
//         logic [COL_BITS-1:0] col;
//         logic [31:0] cycle_counter; 
//     } read_request_t;

//     logic   enqueue_in,
//             dequeue_in,
//             empty,
//             full;
//     logic [31:0] cycle_counter;
//     read_request_t req_in, req_out;

//     mem_req_queue #(
//         .QUEUE_SIZE(32),
//         .mem_request_t(read_request_t) // default placeholder
//     ) read_queue(
//         .clk_in(clk_in),
//         .rst_in(rst_in),
//         .enqueue_in(enqueue_in),
//         .dequeue_in(dequeue_in),
//         .req_in(req_in),
//         .cycle_count(cycle_counter),
//         .req_out(req_out),
//         .empty(empty),
//         .full(full)
//     );
//     logic read_burst_ready;
//     // Check if command from scheduler is valid
//     if (valid_in) begin
//         // Accept command from scheduler (CLB)
//         // Encode command info to be sent to DIMM
//         command_clb #(
//             .ROW_BITS(ROW_BITS),    // bits to address rows
//             .COL_BITS(COL_BITS)    // bits to address columns
//         )
//         _command_clb (
//             .row_in(row_in),
//             .col_in(col_in),
//             .cmd_in(cmd_in),
//             .act_out(act_out),
//             .dram_addr_out(dram_addr_out)
//         );
        
//     end

//     always_ff @(posedge clk_in or posedge reset) begin
//         if (reset) begin
//             cycle_counter = 0;
//         end else begin
//             if (cmd_in == READ) begin
//                 req_in.bank_group = bank_group_in;
//                 req_in.bank = bank_in;
//                 req_in.row = row_in;
//                 req_in.col = col_in;
//                 req_in.cycle_counter = cycle_counter;
//                 enqueue_in = 1'b1;
//             end else begin
//                 enqueue_in = 1'b0;
//             end

//             if (!empty && req_out.cycle_counter + CAS_LATENCY - 4 >= cycle_counter && req_out.cycle_counter + CAS_LATENCY + 4 < cycle_counter) begin
//                 bursting <= 1'b1;
//             end else begin
//                 bursting <= 1'b0;
//             end

//             if (!empty && req_out.cycle_counter + CAS_LATENCY == cycle_counter) begin
//                 read_burst_ready = 1'b1;
//             end

//             if (!empty && req_out.cycle_counter + CAS_LATENCY + 3 == cycle_counter) begin
//                 dequeue_in = 1'b1;
//             end else begin
//                 dequeue_in=1'b0;
//             end
//             cycle_counter <= cycle_counter + 1;
//         end

//     end

//     // Increment counter
//     logic read_bursting;
//     logic write_bursting;
//     always_ff @(posedge reset or posedge clk_in or negedge clk_in)
//         if (reset) begin
//             counter <= '0;
//             clk_in <= 0;
//             enqueue_in <= 0;
//             dequeue_in <= 0;

//         end else begin
//             if (read_burst_ready) begin
//                 read_bursting <= 1'b1;
//             end else if (read_bursting) begin
//                 val_out[counter] = mem_bus_value_io;
//                 counter <= counter == 7 ? 0 : counter + 1;
//                 read_burst_ready = counter != 7;
//                 read_bursting <= counter != 7;
//             end else if ((cmd_in == WRITE && valid_in) || write_bursting) begin
//                 counter <= counter == 7 ? 0 : counter + 1;
//                 write_bursting <= counter != 7;
//             end else begin
//                 counter = 1'b0;
//             end
//         end
//         assign mem_bus_value_io = ((cmd_in == WRITE && valid_in) || write_bursting) ? val_in[counter] : {(63){1'bz}};
// endmodule