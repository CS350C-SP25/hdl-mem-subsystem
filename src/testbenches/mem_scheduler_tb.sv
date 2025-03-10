module request_scheduler_tb;

    // Testbench signals
    logic clk_in;
    logic rst_in;
    logic [$clog2(8)-1:0] bank_group_in;  // BANK_GROUPS = 8
    logic [$clog2(8)-1:0] bank_in;        // BANKS_PER_GROUP = 8
    logic [8-1:0] row_in;                 // ROW_BITS = 8
    logic [4-1:0] col_in;                 // COL_BITS = 4
    logic valid_in;
    logic write_in;
    logic [511:0] val_in;
    logic cmd_ready;
    
    logic [$clog2(8)-1:0] bank_group_out; // BANK_GROUPS = 8
    logic [$clog2(8)-1:0] bank_out;       // BANKS_PER_GROUP = 8
    logic [8-1:0] row_out;                // ROW_BITS = 8
    logic [4-1:0] col_out;                // COL_BITS = 4
    logic [511:0] val_out;
    logic [2:0] cmd_out; 
    logic valid_out;

    // Instantiate the request_scheduler module
    request_scheduler #(
        .A(8),
        .B(64),
        .C(16384),
        .BUS_WIDTH(16),
        .BANK_GROUPS(8),
        .BANKS_PER_GROUP(8),
        .ROW_BITS(8),
        .COL_BITS(4),
        .QUEUE_SIZE(16),
        .ACTIVATION_LATENCY(8),
        .PRECHARGE_LATENCY(5),
        .BANKS(64)
    ) uut (
        .clk_in(clk_in),
        .rst_in(rst_in),
        .bank_group_in(bank_group_in),
        .bank_in(bank_in),
        .row_in(row_in),
        .col_in(col_in),
        .valid_in(valid_in),
        .write_in(write_in),
        .val_in(val_in),
        .cmd_ready(cmd_ready),
        .bank_group_out(bank_group_out),
        .bank_out(bank_out),
        .row_out(row_out),
        .col_out(col_out),
        .val_out(val_out),
        .cmd_out(cmd_out),
        .valid_out(valid_out)
    );

    // Clock generation
    always begin
        #5 clk_in = ~clk_in;  // 100MHz clock (10ns period)
    end

    // Test stimulus generation
    initial begin
        // Initialize inputs
        clk_in = 0;
        rst_in = 0;
        bank_group_in = 0;
        bank_in = 0;
        row_in = 0;
        col_in = 0;
        valid_in = 0;
        write_in = 0;
        val_in = 0;
        cmd_ready = 0;

        // Apply reset
        $display("Applying Reset...");
        rst_in = 1;
        #10;
        rst_in = 0;
        #10;
        #10;

        // Test Case 1: Write Request
        $display("Test Case 1: Write Request...");
        valid_in = 1;
        write_in = 1;
        bank_group_in = 3;
        bank_in = 2;
        row_in = 8'b01010101;
        col_in = 4'b1010;
        val_in = 512'hA5A5A5A5A5A5A5A5;
        cmd_ready = 1;  // Controller is ready
        #10;
        valid_in = 0;  // Deassert valid_in

        // Test Case 2: Read Request
        $display("Test Case 2: Read Request...");
        write_in = 0;
        valid_in = 1;
        bank_group_in = 2;
        bank_in = 1;
        row_in = 8'b11110000;
        col_in = 4'b0110;
        cmd_ready = 1;  // Controller is ready
        #10;
        valid_in = 0;  // Deassert valid_in

        // Test Case 3: Activate Command
        $display("Test Case 3: Read Request to the same bank/row...");
        write_in = 0;
        valid_in = 1;
        row_in = 8'b11110000;
        col_in = 4'b0001;
        cmd_ready = 1;  // Controller is ready
        #10;
        valid_in = 0;  // Deassert valid_in

        // Test Case 4: Precharge Command
        $display("Test Case 4: Precharge Command...");
        write_in = 0;
        valid_in = 1;
        row_in = 8'b00001111;
        col_in = 4'b1000;
        cmd_ready = 1;  // Controller is ready
        #10;
        valid_in = 0;  // Deassert valid_in

        // Test Case 5: Invalid Command (when cmd_ready is 0)
        $display("Test Case 5: Invalid Command (cmd_ready = 0)...");
        valid_in = 1;
        write_in = 1;
        bank_group_in = 1;
        bank_in = 1;
        row_in = 8'b11111111;
        col_in = 4'b0011;
        cmd_ready = 1;  // Controller is not ready
        #10;
        valid_in = 0;  // Deassert valid_in
        #200; // wait for everything to finish

        // Finish the simulation
        $finish;
    end

    // Monitor the outputs
    initial begin
        $monitor("Time: %t, cmd_out: %b, valid_out: %b, bank_group_out: %d, bank_out: %d, row_out: %b, col_out: %b, val_out: %h", 
                 $time, cmd_out, valid_out, bank_group_out, bank_out, row_out, col_out, val_out);
    end

endmodule
