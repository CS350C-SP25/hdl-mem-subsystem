// A priority mux. The first entry in the data array has the highest priority.
module priority_mux #(
    parameter int DATA_WIDTH = 64,
    parameter int SIGNALS = 2
) (
    input logic [DATA_WIDTH-1:0] data_in[SIGNALS],
    input logic [$clog2(SIGNALS)-1:0] select_in,
    output logic [DATA_WIDTH-1:0] data_out
);
    always_comb begin
        data_out = data_in[SIGNALS-1];
        for (int i = SIGNALS - 2; i >= 0; i--) begin
            if (select_in == i) data_out = data_in[i];
        end
    end
endmodule : priority_mux
