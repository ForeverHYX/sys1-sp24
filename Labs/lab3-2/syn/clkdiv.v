module ClkDiv(
    input clk,
    input rstn,
    output reg [31:0] clk_div
);

    always@(posedge clk)begin
        if(~rstn)clk_div<=32'b0;
        else clk_div<=clk_div+32'b1;
    end

endmodule