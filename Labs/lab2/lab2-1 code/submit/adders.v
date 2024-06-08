module Adders #(
    parameter LENGTH = 32
)(
    input [LENGTH-1:0] a,
    input [LENGTH-1:0] b,
    input c_in,
    output [LENGTH-1:0] s,
    output c_out
);

    wire [LENGTH:0] carry;
    assign carry[0]=c_in;

    genvar i;
    generate
        for(i=0;i<LENGTH;i=i+1)begin
            Adder adder0(.a(a[i]), .b(b[i]), .c_in(carry[i]), .s(s[i]), .c_out(carry[i+1]));
        end
    endgenerate

    assign c_out=carry[LENGTH];

endmodule