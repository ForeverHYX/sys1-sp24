module Cnt #(
    parameter BASE = 10,
    parameter INITIAL = 0
) (
    input en,
    input clk,
    input rstn,
    input low_co,
    input high_rst,
    output co,
    output reg [3:0] cnt
);

    always @(posedge clk or negedge rstn) begin
        if(en) begin
            if (~rstn) begin
               cnt <= INITIAL[3:0];
            end else if (high_rst) begin
                cnt <= 0;
            end else if (low_co && (cnt == BASE - 1)) begin
                cnt <= 0;
            end else if (low_co) begin
                cnt <= cnt + 1;
            end
        end
    end

    assign co = (cnt == BASE - 1) ? 1 : 0;


endmodule
