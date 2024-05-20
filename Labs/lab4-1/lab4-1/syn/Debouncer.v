module Debouncer (
    input  wire  clk,//100Mhz 2^10
    input  wire  btn,
    output wire  btn_dbnc
);

    reg [7:0] shift = 0;

    always @ (posedge clk) begin
        shift <= {shift[6:0], btn};
    end

    assign btn_dbnc = &shift;
endmodule

module PosSample (
    input clk,
    input data,
    output sample
);

    reg old_data;
    always@(posedge clk)begin
        old_data <= data;
    end

    assign sample = ~old_data & data;

endmodule

module NegSample (
    input clk,
    input data,
    output sample
);

    reg old_data;
    always@(posedge clk)begin
        old_data <= data;
    end

    assign sample = old_data & ~data;

endmodule