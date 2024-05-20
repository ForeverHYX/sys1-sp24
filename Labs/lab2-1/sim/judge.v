function unsigned add_judge(
    input [31:0] a,
    input [31:0] b,
    input do_sub,
    input [31:0] s,
    input c
);

    reg [31:0] s_result;
    reg c_result;

    begin
        if(do_sub)begin
            {c_result,s_result}={1'b0,a}-{1'b1,b};
        end else begin
            {c_result,s_result}={1'b0,a}+{1'b0,b};
        end
        add_judge=(c_result==c)&(s_result==s);
    end

endfunction

module Judge(
    input [31:0] a,
    input [31:0] b,
    input do_sub,
    input [31:0] s,
    input c,
    output error
);

    assign error=~add_judge(a,b,do_sub,s,c);
    
endmodule //Judge
