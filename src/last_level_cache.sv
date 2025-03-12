// The LLC (Last Level Cache) is not only the slowest and largest cache in the
// system, but it also communicates the memory controller, which dispatches
// requests to SDRAM controller.

// The memory controller communicates with the DDR4 SDRAM controller over
// the memory bus. The DDR4 SDRAM controller is aware of the structure of SDRAM
// and is responsible for getting data from SDRAM and sending it over the bus.
// Data is acquired over multiple cycles, since a single read from the row
// buffer will provide less than 64 bits.

// The memory bus is fundamentally a collection of wires. Only one bit can exist
// on a wire at a given time. As far as I, Nate, can tell, the DRAM controller
// does not have a queue. Thus, it is the sole-responsibility of the memory
// controller to make smart queueing policies and performance optimizations to
// minimize latency (if it chooses to). DDR4 is supposed to be pipelined
// however, which gives good throughput.

// A comment indicates that the ready-in on from the memory bus to the LLC may
// go unused. This is because DRAM is pipelined, and the synchronization is done
// via. known latency times, rather than through handshake protocols. Handshake
// protocols do not work well with bi-directional wires anyways.

module last_level_cache #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384,
    parameter int PADDR_BITS = 19
) (
    // Generic
    input logic clk_in,
    input logic rst_N_in,  // Resets cache without flushing
    input logic cs_in,  // Chip Select (aka. enable)
    input logic flush_in,  // Flush all of the cache to memory
    // Inputs from Higher-Level Cache
    input logic hc_valid_in,  // data is ready for either lsu or next level cache
    input logic hc_ready_in,  // ready to receive input from LLC. This is priority
    input logic [PADDR_BITS-1:0] hc_addr_in,  // This address being returned may cause an eviction!
    input logic [63:0] hc_value_in,  // The write to the lower-level cache
    input logic hc_we_in,  // Higher-level cache is requesting a read/write
    // Outputs to Higher-Level Caches (remember lower is slower with caches)
    output logic hc_ready_out,  // lower cache is ready (lower is slower)
    output logic hc_valid_out,  // lower cache is sending data to this module
    output logic [PADDR_BITS-1:0] hc_addr_out,  // Address being returned may cause an eviction!
    output logic [63:0] hc_value_out,  // lower
    // Inputs from Memory Bus (SDRAM controller)
    input logic mem_bus_ready_in,  // This might go unsused...
    input logic mem_bus_valid_in,  // DRAM data is valid for LLC to consume
    // InOut on Memory Bus (SDRAM controller)
    inout logic [63:0] mem_bus_value_io,  // Load / Store value for memory module
    // Outputs to Memory Bus (SDRAM controller)
    output logic [PADDR_BITS-1:0] mem_bus_addr_out,  // Load addr for memory module
    output logic mem_bus_ready_out,  // Should ALWAYS be ready to receive data from SDRAM controller
    output logic mem_bus_valid_out
);
    // You may reuse the cache module that the L1D team will work on
    // Your main task will be talking to the DIMM on an eviction or flush.
    
    //--------------------------------------------------------------------------
    // 1) Connect to an internal "cache" submodule to store lines & check hits.
    //    We assume it can tell us if there's a hit, and provide data.
    //--------------------------------------------------------------------------
    logic llc_valid_in, llc_ready_in, llc_valid_out, llc_ready_out;
    logic llc_hit_out;
    logic [PADDR_BITS-1:0] llc_addr;
    logic [63:0] llc_data_out;

    cache #(
        .A(3),      // Example ways, can differ
        .B(64),     // Line size
        .C(16384),  // Capacity
        .W(64)      // Data width
    ) llc_data_array (
        .rst_N_in   (rst_N_in),
        .clk_in     (clk_in),
        .cs_in      (cs_in),          
        .valid_in   (llc_valid_in),
        .ready_in   (llc_ready_in),
        .in_addr    (llc_addr),
        .valid_out  (llc_valid_out),
        .ready_out  (llc_ready_out),
        .hit_out    (llc_hit_out),
        .data_out   (llc_data_out)
    );

    //--------------------------------------------------------------------------
    // 2) Internal State + Registers
    //--------------------------------------------------------------------------
    typedef enum logic [3:0] {
        IDLE,
        CHECK_HIT,
        MISS_DRAM_READ,
        WAIT_DRAM_READ,
        FILL_LINE,
        DRAM_WRITE,
        WAIT_DRAM_WRITE,
        RESPOND_L1,
        FLUSH
    } llc_state_t;

    llc_state_t state, next_state;

    logic [PADDR_BITS-1:0] req_addr_reg;
    logic [63:0]           req_data_reg;
    logic                  req_we_reg;

    // Memory bus data direction: 1 => drive out, 0 => read in
    logic [63:0] mem_data_out;
    logic        mem_data_dir; 

    //--------------------------------------------------------------------------
    // 3) Tri-state for mem_bus_value_io
    //--------------------------------------------------------------------------
    assign mem_bus_value_io = (mem_data_dir) ? mem_data_out : 64'bz;

    //--------------------------------------------------------------------------
    // 4) State Register
    //--------------------------------------------------------------------------
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    //--------------------------------------------------------------------------
    // 5) Next-State Logic + Output Control
    //--------------------------------------------------------------------------
    always_comb begin
        // Defaults
        next_state         = state;

        hc_valid_out       = 1'b0;
        hc_ready_out       = 1'b0;
        hc_addr_out        = req_addr_reg;
        hc_value_out       = llc_data_out;  // By default, pass LLC data on read

        llc_valid_in       = 1'b0;
        llc_ready_in       = 1'b1;
        llc_addr           = req_addr_reg;

        mem_bus_valid_out  = 1'b0;  // not driving memory by default
        mem_bus_addr_out   = req_addr_reg;
        mem_bus_ready_out  = 1'b1;  // always can accept data in this example
        mem_data_dir       = 1'b0;  // 0 => input from DRAM
        mem_data_out       = req_data_reg;

        case (state)

            //--------------------------------------------------
            IDLE: begin
                hc_ready_out = 1'b1;  // we can accept a new request

                if (flush_in) begin
                    // trivial in write-through: no dirty lines to write back
                    next_state = FLUSH;
                end
                else if (hc_valid_in && cs_in) begin
                    // L1 has a request
                    next_state = CHECK_HIT;
                end
            end

            //--------------------------------------------------
            CHECK_HIT: begin
                // Provide the address to the LLC submodule for a tag check
                llc_valid_in = 1'b1;
                llc_addr     = req_addr_reg;

                // Suppose llc_valid_out, llc_hit_out are valid in this cycle
                if (llc_valid_out) begin
                    if (llc_hit_out) begin
                        // If we have a hit:
                        if (req_we_reg) begin
                            // It's a write => immediately push new data to DRAM
                            // (Write-through)
                            next_state = DRAM_WRITE;
                        end else begin
                            // It's a read => just return data from the LLC
                            next_state = RESPOND_L1;
                        end
                    end else begin
                        // Miss scenario
                        if (req_we_reg) begin
                            // NO-WRITE-ALLOCATE => If this is a write miss, 
                            // skip fetching the line from DRAM. 
                            // Write directly to DRAM, do NOT update LLC
                            next_state = DRAM_WRITE;
                        end else begin
                            // If read miss, do normal fetch
                            next_state = MISS_DRAM_READ;
                        end
                    end
                end
            end

            MISS_DRAM_READ: begin // Issue read request to DRAM
                mem_bus_valid_out = 1'b1;  // request DRAM read
                next_state        = WAIT_DRAM_READ;
            end

            //--------------------------------------------------
            WAIT_DRAM_READ: begin
                // Wait for DRAM to provide data (mem_bus_valid_in=1)
                if (mem_bus_valid_in) begin
                    next_state = FILL_LINE;
                end
            end

            //--------------------------------------------------
            FILL_LINE: begin
                // Put newly fetched data into the LLC submodule
                // In practice, you'd do something like:
                //  llc_valid_in = 1'b1;
                //  llc_addr     = req_addr_reg;
                //  (store mem_bus_value_io in the line)
                next_state = RESPOND_L1;
            end

            //--------------------------------------------------
            DRAM_WRITE: begin
                // Drive the bus with the data we want to store
                mem_bus_valid_out = 1'b1;
                mem_data_dir      = 1'b1;  // drive the bus with req_data_reg
                // If it's a write from a miss (no-write-allocate),
                // we do NOT fill the LLC with the data. 
                next_state        = WAIT_DRAM_WRITE;
            end

            //--------------------------------------------------
            WAIT_DRAM_WRITE: begin
                // Wait for DRAM to accept the write (mem_bus_valid_in=1 confirms)
                if (mem_bus_valid_in) begin
                    // Once done, if it was a write miss, we skip updating the LLC
                    next_state = RESPOND_L1;
                end
            end

            //--------------------------------------------------
            RESPOND_L1: begin
                // Provide data (or acknowledgment) to the higher-level cache
                // if it was a read, we have data from the LLC
                // if it was a write, we can just provide an ack
                hc_valid_out = 1'b1;
                if (hc_ready_in) begin
                    next_state = IDLE;
                end
            end

            //--------------------------------------------------
            FLUSH: begin
                // In a write-through design, flush is trivial because no dirty lines exist
                next_state = IDLE;
            end

            default: next_state = IDLE;
        endcase
    end

    //--------------------------------------------------------------------------
    // 6) Capture the L1 request in IDLE->CHECK_HIT
    //--------------------------------------------------------------------------
    always_ff @(posedge clk_in or negedge rst_N_in) begin
        if (!rst_N_in) begin
            req_addr_reg <= '0;
            req_data_reg <= '0;
            req_we_reg   <= 1'b0;
        end
        else begin
            if (state == IDLE && hc_valid_in && cs_in) begin
                req_addr_reg <= hc_addr_in;
                req_data_reg <= hc_value_in;
                req_we_reg   <= hc_we_in;
            end
        end
    end

endmodule : last_level_cache

// A signal is expected to be sent to multiple DDR4 SDRAM chips at a time. You
// do need to consider this, it is done transparently by the DIMM.

// There may be more latencies that aren't accounted for in these parameters,
// but which are needed for communication with the DIMM. Please post on Ed if
// you notice this.

// An SDRAM dimm has no valid/ready information. Data is expected exactly
// CAS_LATENCY signals after it is requested.

module ddr4_sdram_controller #(
    parameter int CAS_LATENCY = 22,  // latency in cycles to get a response from DRAM
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int ROW_BITS = 8,  // log2(ROWS)
    parameter int COL_BITS = 4,  // log2(COLS)
    parameter int PADDR_BITS = 19

    // Following parameters added by us
    parameter int BUS_WIDTH = 16,  // bus width per chip
    parameter int BANK_GROUPS = 8,
    parameter int BANKS_PER_GROUP = 8
) (
    // Generic
    input clk_in,
    input rst_N_in,
    input cs_N_in,
    // Inputs from memory bus
    input logic mem_bus_ready_in,  // DRAM is ready to receive info (unused)
    input logic mem_bus_valid_in,  // DRAM data is ready for LLC to consume (unused)
    input logic [PADDR_BITS-1:0] mem_bus_addr_in,  // Address from the last-level cache
    // Inout on memory bus
    inout logic [63:0] mem_bus_value_io,  //
    // Outputs to DDR4 SDRAM
    output logic act_out,  // Activate sdram, when this is high, we need to set RAS,CAS,WE
    output logic [16:0] dram_addr_out,  // row/col or special bits.
    output logic [1:0] bg_out,  // Bank group id
    output logic [1:0] ba_out,  // Bank id
    output logic [63:0] dqm_out,  // Data mask in. Set to one to block masks
    output logic mem_bus_ready_out,  // Ready to receive info from LLC
    output logic mem_bus_valid_out,  // DRAM info is ready for LLC
    // Inouts to DDR4 SDRAM
    inout logic [63:0] dqs  // Data ins/outs from all dram chips
);

    assign dqm_out = '0;

    typedef enum logic [3:0] {
        IDLE,
        ROW_ACT,
        COL_ACT,
        READING,
        WRITING,
        PRECHARGING,
        REFRESHING,
        INIT
    } sdram_state_t;

    // TODO: add functionality for chip select?

    logic mem_bus_ready, mem_bus_valid;

    // CLB. Parse address from LLC
    logic [16:0] parsed_addr;
    logic [1:0] parsed_bg, parsed_ba;

    address_parser #(
        .ROW_BITS(ROW_BITS),  // log2(ROWS)
        .COL_BITS(COL_BITS),  // log2(COLS)
        .PADDR_BITS(PADDR_BITS)
        )
    _address_parser (
        .mem_bus_addr_in(mem_bus_addr_in),
        .addr_out(parsed_addr),  
        .bg_out(parsed_bg),     // Bank group id
        .ba_out(parsed_ba)      // Bank id
    );


    // TODO: add input to receive bursting output from command_sender module
    logic schedule_valid_out;
    request_scheduler #(
        .BUS_WIDTH(BUS_WIDTH),  // bus width per chip
        .BANK_GROUPS(BANK_GROUPS),
        .BANKS_PER_GROUP(BANKS_PER_GROUP),       // banks per group
        .ROW_BITS(ROW_BITS),    // bits to address rows
        .COL_BITS(COL_BITS)     // bits to address columns
        )
    _request_scheduler (
        .clk_in(clk_in),
        .rst_in(rst_in),
        .bank_group_in(parsed_bg), // bank group from LLC
        .bank_in(parsed_ba), // bank from LLC
        .row_in(parsed_addr[ROW_BITS+COL_BITS:COL_BITS]),
        .col_in(parsed_addr[COL_BITS-1:0]),
        .valid_in(), // if not valid ignore
        .write_in(), // if val is ok to write (basically write request)
        .val_in(), // val to write if write
        .cmd_ready(), // is controller ready to receive command TODO verify this will work
        .bank_group_out(bg_out),
        .bank_out(ba_out),
        .val_out(dqs), // TODO: Does this need need intermediate?
        .valid_out(schedule_valid_out)
    );

    command_clb #(
        .ROW_BITS(ROW_BITS),    // bits to address rows
        .COL_BITS(COL_BITS)    // bits to address columns
        )
    command (
        .row_in(row_temp),
        .col_in(col_temp),
        .cmd_in(cmd_temp),
        .act_out(act_out),
        .dram_addr_out(dram_addr_out)
    );

    // Set default values
    always_ff @(posedge clk_in or posedge rst_N_in) begin
        if (rst_N_in) begin
            mem_bus_ready <= '0;
            mem_bus_valid <= '0;

        end else begin
            mem_bus_valid <= schedule_valid_out;
            
        end



        mem_bus_ready_out <= mem_bus_ready;
        mem_bus_valid_out <= mem_bus_valid;
    end

endmodule : ddr4_sdram_controller

module address_parser #(
    parameter int ROW_BITS = 8,  // log2(ROWS)
    parameter int COL_BITS = 4,  // log2(COLS)
    parameter int PADDR_BITS = 19
) (
    input  logic [PADDR_BITS-1:0] mem_bus_addr_in,
    output logic [ROW_BITS-1:0] row_out,
    output logic [COL_BITS-1:0] col_out,
    output logic [1:0] bg_out,     // Bank group id
    output logic [1:0] ba_out      // Bank id
);

    // Address mapping strategy:
    // Lower bits: Column address (for row buffer locality)
    // Middle bits: Bank/Bank Group (for parallelism)
    // Upper bits: Row address

    always_comb begin
        // Extract column bits (lowest order)
        col_out = mem_bus_addr_in[COL_BITS-1:0];
        
        // It is assumed that the # of bank groups AND # of banks
        //  per group are 4, since they each take 2 bits to index into
        ba_out = mem_bus_addr_in[COL_BITS+1:COL_BITS];
        bg_out = mem_bus_addr_in[COL_BITS+3:COL_BITS+2];
        
        // Row address takes the remaining upper bits
        // Note: We might not use all available row bits
        row_out = mem_bus_addr_in[COL_BITS + 4 + ROW_BITS - 1:COL_BITS+4];
    end

endmodule


// CLB to assemble commands from scheduler for DIMM
module command_clb #(
    parameter int ROW_BITS = 8,    // bits to address rows
    parameter int COL_BITS = 4     // bits to address columns
) (
    // Inputs from request_scheduler
    input logic [ROW_BITS-1:0] row_in,
    input logic [COL_BITS-1:0] col_in,
    input logic [2:0] cmd_in, // 0 is read, 1 is write, 2 is activate, 3 is precharge; if valid_out is 0 then block
    output logic act_out, // Command bit
    output logic [16:0] dram_addr_out  // row/col or special bits.

);

    // Commands enum
    typedef enum logic[2:0] {
        READ = 3'b000,
        WRITE = 3'b001,
        ACTIVATE = 3'b010,
        PRECHARGE = 3'b011
    } commands;

    logic ras, cas, we;

    always_comb begin

        // If row activation
        if (cmd_in == ACTIVATE) begin
            act_out = '0; // Deactivate command pin
            ras = '0;
          	cas = '0;
          	we = '0;

            // Left-pad row address with 0's if row width is smaller than address width
            dram_addr_out = {{(17-ROW_BITS){1'b0}}, row_in};

        // If command
        end else begin
            act_out = '1; // Activate command pin

            // Set command pins
            case (cmd_in)
                READ: begin
                    ras = '1;
                    cas = '0;
                    we = '1;
                end
                WRITE: begin
                    ras = '1;
                    cas = '0;
                    we = '0;
                end
                PRECHARGE: begin
                    ras = '0;
                    cas = '1;
                    we = '0;
                end
              	default: begin // Should not get here
                  ras = 'x;
                  cas = 'x;
                  we = 'x;
                end
            endcase
            // A10 is unused for commands, but could be used to indicate auto-precharge
            // Set command pins, set unused bits to 0
            dram_addr_out = {ras, cas, we, {(17-3-COL_BITS){1'b0}}, col_in};
        end

    end

endmodule


// Module to send commands to DIMM and receive responses
module command_sender #(
    parameter int CAS_LATENCY = 22,
    parameter int BANK_GROUPS = 8,
    parameter int BANKS_PER_GROUP = 8,       // banks per group
    parameter int ROW_BITS = 8,    // bits to address rows
    parameter int COL_BITS = 4     // bits to address columns
) (
    input logic clk_in,
    input logic rst_in,
    input logic [$clog2(BANK_GROUPS)-1:0] bank_group_in,
    input logic [$clog2(BANKS_PER_GROUP)-1:0] bank_in,
    input logic [ROW_BITS-1:0] row_in,
    input logic [COL_BITS-1:0] col_in,
    input logic valid_in, // if not valid ignore
    input logic write_in, // if val is ok to write (basically write request)
    input logic [7:0][63:0] val_in, // val to write if write
    input logic [2:0] cmd_in,

    output logic [$clog2(BANK_GROUPS)-1:0] bank_group_out,
    output logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out,
    output logic act_out, // Command bit
    output logic [16:0] dram_addr_out,  // row/col or special bits.
    output logic [7:0][63:0] val_out,
    output logic bursting, // set to HI when receiving/sending a burst to/from the DIMM
    inout logic [63:0] mem_bus_value_io  // Load / Store value for memory module
);
    
    // Trust the scheduler to not send commands that conflict with incoming data
    logic [31:0] counter;
    logic [4:0] cycle_counter;

    // Commands enum
    typedef enum logic[2:0] {
        READ = 3'b000,
        WRITE = 3'b001,
        ACTIVATE = 3'b010,
        PRECHARGE = 3'b011
    } commands;

    // Module for queueing memory requests
    typedef struct packed {
        logic [$clog2(BANK_GROUPS)-1:0] bank_group;
        logic [$clog2(BANKS_PER_GROUP)-1:0] bank;
        logic [ROW_BITS-1:0] row;
        logic [COL_BITS-1:0] col;
        logic [31:0] cycle_counter; 
    } read_request_t;

    logic   enqueue_in,
            dequeue_in,
            empty,
            full;
    logic [31:0] cycle_counter;
    read_request_t req_in, req_out;

    mem_req_queue #(
        QUEUE_SIZE=32,
        read_request_t // default placeholder
    ) (
        .clk_in(clk_in),
        .rst_in(rst_in),
        .enqueue_in(enqueue_in),
        .dequeue_in(dequeue_in),
        .req_in(req_in),
        .cycle_count(cycle_counter),
        .req_out(req_out),
        .empty(empty),
        .full(full)
    ) read_queue;
    logic read_burst_ready;
    // Check if command from scheduler is valid
    if (valid_in) begin
        // Accept command from scheduler (CLB)
        // Encode command info to be sent to DIMM
        command_clb #(
            .ROW_BITS(ROW_BITS),    // bits to address rows
            .COL_BITS(COL_BITS)    // bits to address columns
        )
        command (
            .row_in(row_in),
            .col_in(col_in),
            .cmd_in(cmd_in),
            .act_out(act_out),
            .dram_addr_out(dram_addr_out)
        );
        
    end

    always_ff @(posedge clk_in or posedge reset) begin
        if (reset) begin
            cycle_counter = 0;
        end else begin
            if (cmd_in == READ) begin
                req_in.bank_group = bank_group_in;
                req_in.bank = bank_in;
                req_in.row = row_in;
                req_in.col = col_in;
                req_in.cycle_counter = cycle_counter;
                enqueue_in = 1'b1;
            end else begin
                enqueue_in = 1'b0;
            end

            if (!empty && req_out.cycle_counter + CAS_LATENCY - 4 >= cycle_counter && req_out.cycle_counter + CAS_LATENCY + 4 < cycle_counter) begin
                bursting <= 1'b1;
            end else begin
                bursting <= 1'b0;
            end

            if (!empty && req_out.cycle_counter + CAS_LATENCY == cycle_counter) begin
                read_burst_ready = 1'b1;
            end

            if (!empty && req_out.cycle_counter + CAS_LATENCY + 3 == cycle_counter) begin
                dequeue_in = 1'b1;
            end else begin
                dequeue_in=1'b0;
            end
            cycle_counter <= cycle_counter + 1;
        end

    end

    // Increment counter
    logic read_bursting;
    logic write_bursting;
    always_ff @(posedge reset or posedge clk_in or negedge clk_in)
        if (reset) begin
            counter <= '0;
            clk_in <= 0;
            enqueue_in <= 0;
            dequeue_in <= 0;

        end else begin
            if (read_burst_ready) begin
                read_bursting <= 1'b1;
            end else if (read_bursting) begin
                val_out[counter] = mem_bus_value_io;
                counter <= counter == 7 ? 0 : counter + 1;
                read_burst_ready = counter != 7;
                read_bursting <= counter != 7;
            end else if ((cmd_in == WRITE && valid_in) || write_bursting) begin
                counter <= counter == 7 ? 0 : counter + 1;
                write_bursting <= counter != 7;
            end else begin
                counter = 1'b0;
            end
        end
        assign mem_bus_value_io = ((cmd_in == WRITE && valid_in) || write_bursting) ? val_in[counter] : {(63){1'bz}};
endmodule

