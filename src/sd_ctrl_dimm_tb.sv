`timescale 1ns/1ps

module sd_ctrl_dimm_tb;
    // Clock and reset
    logic clk;
    logic rst_N;
    
    // Signals connecting LLC to DIMM
    logic cs_N;
    logic cke;
    logic act;
    logic [16:0] addr;
    logic [1:0] bg;
    logic [1:0] ba;
    logic [63:0] dqm;
    logic [63:0] dqs;
    
    // LLC input signals
    logic cs_in;
    logic flush_in;
    logic hc_valid_in;
    logic hc_ready_in;
    logic [18:0] hc_addr_in;
    logic [63:0] hc_value_in;
    logic hc_we_in;
    
    // LLC output signals
    logic hc_ready_out;
    logic hc_valid_out;
    logic [18:0] hc_addr_out;
    logic [63:0] hc_value_out;
    
    // Memory bus signals
    logic mem_bus_ready_in;
    logic mem_bus_valid_in;
    logic [63:0] mem_bus_value_io;
    logic [19:0] mem_bus_addr_out;
    logic mem_bus_ready_out;
    logic mem_bus_valid_out;
    
    // Cache signals
    logic [511:0] cache_line_in;  // 64 bytes = 512 bits
    logic cl_in;
    
    // Test control
    bit test_done;
    int test_count;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100MHz clock
    end
    
    // DUT instances
    last_level_cache #(
        .A(8),
        .B(64),
        .C(16384),
        .PADDR_BITS(19),
        .W(64),
        .CAS_LATENCY(22),
        .ACTIVATION_LATENCY(8),
        .PRECHARGE_LATENCY(5),
        .ROW_BITS(8),
        .COL_BITS(4),
        .BUS_WIDTH(16),
        .BANK_GROUPS(8),
        .BANKS_PER_GROUP(8)
    ) llc (
        .clk_in(clk),
        .rst_N_in(rst_N),
        .cs_in(cs_in),
        .flush_in(flush_in),
        .hc_valid_in(hc_valid_in),
        .hc_ready_in(hc_ready_in),
        .hc_addr_in(hc_addr_in),
        .hc_value_in(hc_value_in),
        .hc_we_in(hc_we_in),
        .hc_ready_out(hc_ready_out),
        .hc_valid_out(hc_valid_out),
        .hc_addr_out(hc_addr_out),
        .hc_value_out(hc_value_out),
        .mem_bus_ready_in(mem_bus_ready_in),
        .mem_bus_valid_in(mem_bus_valid_in),
        .mem_bus_value_io(mem_bus_value_io),
        .mem_bus_addr_out(mem_bus_addr_out),
        .mem_bus_ready_out(mem_bus_ready_out),
        .mem_bus_valid_out(mem_bus_valid_out)
    );
    
    ddr4_dimm #(
        .CAS_LATENCY(22),
        .ACTIVATION_LATENCY(8),
        .PRECHARGE_LATENCY(5),
        .ROW_BITS(8),
        .COL_BITS(4),
        .WIDTH(16),
        .REFRESH_CYCLE(5120)
    ) dimm (
        .clk_in(clk),
        .rst_N_in(rst_N),
        .cs_N_in(cs_N),
        .cke_in(cke),
        .act_in(act),
        .addr_in(addr),
        .bg_in(bg),
        .ba_in(ba),
        .dqm_in(dqm),
        .dqs(dqs)
    );
    
    // Test stimulus
    initial begin
        // Initialize signals
        rst_N = 1'b1;
        cs_N = 1'b1;
        cke = 1'b1;
        act = 1'b0;
        addr = 17'h0;
        bg = 2'h0;
        ba = 2'h0;
        dqm = 64'h0;
        dqs = 64'h0;
        cs_in = 1'b1;
        flush_in = 1'b0;
        hc_valid_in = 1'b0;
        hc_ready_in = 1'b1;
        hc_addr_in = 19'h0;
        hc_value_in = 64'h0;
        hc_we_in = 1'b0;
        mem_bus_ready_in = 1'b1;
        mem_bus_valid_in = 1'b0;
        mem_bus_value_io = 64'h0;
        cache_line_in = 512'h0;
        cl_in = 1'b0;
        test_done = 1'b0;
        test_count = 0;
        
        // Reset sequence
        #5 rst_N = 1'b0;
        #10 rst_N = 1'b1;
        #5;
        
        // Test 1: Simple write and read
        $display("Starting Test 1: Write and Read");
        
        // Write sequence
        @(posedge clk);
        hc_valid_in = 1'b1;
        hc_we_in = 1'b1;
        hc_addr_in = 19'h1000;
        hc_value_in = 64'hDEADBEEF;
        
        @(posedge clk);
        while (!hc_ready_out) @(posedge clk);
        
        hc_valid_in = 1'b0;
        #100;  // Wait for write to complete
        
        // Read sequence
        @(posedge clk);
        hc_valid_in = 1'b1;
        hc_we_in = 1'b0;
        hc_addr_in = 19'h1000;
        
        @(posedge clk);
        while (!hc_valid_out) @(posedge clk);
        
        if (hc_value_out == 64'hDEADBEEF) begin
            $display("Test 1 PASSED: Read value matches written value");
        end else begin
            $display("Test 1 FAILED: Read value %h doesn't match written value 0xDEADBEEF", hc_value_out);
        end
        
        hc_valid_in = 1'b0;
        #100;
        
        // Test 2: Burst write and read
        $display("Starting Test 2: Burst Write and Read");
        
        // Write 8 consecutive addresses
        for (int i = 0; i < 8; i++) begin
            @(posedge clk);
            hc_valid_in = 1'b1;
            hc_we_in = 1'b1;
            hc_addr_in = 19'h2000 + i[18:0];  // Fix width mismatch
            hc_value_in = 64'hABCD0000 + {32'h0, i[31:0]};  // Fix width mismatch
            
            @(posedge clk);
            while (!hc_ready_out) @(posedge clk);
            
            hc_valid_in = 1'b0;
            #10;
        end
        
        // Read back the 8 addresses
        for (int i = 0; i < 8; i++) begin
            @(posedge clk);
            hc_valid_in = 1'b1;
            hc_we_in = 1'b0;
            hc_addr_in = 19'h2000 + i[18:0];  // Fix width mismatch
            
            @(posedge clk);
            while (!hc_valid_out) @(posedge clk);
            
            if (hc_value_out == (64'hABCD0000 + {32'h0, i[31:0]})) begin  // Fix width mismatch
                $display("Test 2 PASSED for address %h: Read value matches written value", 19'h2000 + i[18:0]);
            end else begin
                $display("Test 2 FAILED for address %h: Read value %h doesn't match written value %h",
                        19'h2000 + i[18:0], hc_value_out, 64'hABCD0000 + {32'h0, i[31:0]});
            end
            
            hc_valid_in = 1'b0;
            #10;
        end
        
        // Test 3: Test cache flush
        $display("Starting Test 3: Cache Flush");
        
        @(posedge clk);
        flush_in = 1'b1;
        #10;
        flush_in = 1'b0;
        
        // Wait for flush to complete
        while (hc_valid_out) @(posedge clk);
        #100;
        
        // Test 4: Test bank group and bank selection
        $display("Starting Test 4: Bank Group and Bank Selection");
        
        // Write to different bank groups and banks
        for (int bg = 0; bg < 4; bg++) begin
            for (int ba = 0; ba < 4; ba++) begin
                @(posedge clk);
                hc_valid_in = 1'b1;
                hc_we_in = 1'b1;
                hc_addr_in = {2'b00, bg[1:0], ba[1:0], 13'h3000};  // Fix width mismatch
                hc_value_in = 64'hF0000000 + {32'h0, bg[1:0], ba[1:0]};  // Fix width mismatch
                
                @(posedge clk);
                while (!hc_ready_out) @(posedge clk);
                
                hc_valid_in = 1'b0;
                #10;
            end
        end
        
        // Read back and verify
        for (int bg = 0; bg < 4; bg++) begin
            for (int ba = 0; ba < 4; ba++) begin
                @(posedge clk);
                hc_valid_in = 1'b1;
                hc_we_in = 1'b0;
                hc_addr_in = {2'b00, bg[1:0], ba[1:0], 13'h3000};  // Fix width mismatch
                
                @(posedge clk);
                while (!hc_valid_out) @(posedge clk);
                
                if (hc_value_out == (64'hF0000000 + {32'h0, bg[1:0], ba[1:0]})) begin  // Fix width mismatch
                    $display("Test 4 PASSED for bank group %d, bank %d", bg, ba);
                end else begin
                    $display("Test 4 FAILED for bank group %d, bank %d: Read value %h doesn't match written value %h",
                            bg, ba, hc_value_out, 64'hF0000000 + {32'h0, bg[1:0], ba[1:0]});
                end
                
                hc_valid_in = 1'b0;
                #10;
            end
        end
        
        test_done = 1'b1;
        #100;
        $display("All tests completed");
        $finish;
    end
    
    // Optional: Add waveform dumping
    initial begin
        $dumpfile("sd_ctrl_dimm_tb.vcd");
        $dumpvars(0, sd_ctrl_dimm_tb);
    end
    
endmodule
