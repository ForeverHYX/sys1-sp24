module AddSubers #(
    parameter LENGTH = 32
)(
    input [LENGTH-1:0] a,
    input [LENGTH-1:0] b,
    input do_sub,
    output [LENGTH-1:0] s,
    output c
);
    wire [LENGTH-1:0] temp;
    assign temp = {LENGTH{do_sub}};
    Adders #(
        .LENGTH(LENGTH)
    ) adders1( 
        .a(a),
        .b(b[LENGTH-1:0]^temp),
        .c_in(do_sub),
        .s(s),
        .c_out(c)
    );
endmodule
