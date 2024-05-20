`timescale 1ns / 1ps

module SegDecoder (
    input wire [3:0] data,
    input wire point,
    input wire LE,

    output wire a,
    output wire b,
    output wire c,
    output wire d,
    output wire e,
    output wire f,
    output wire g,
    output wire p
);
 //fill your code

 reg ta,tb,tc,td,te,tf,tg;
 reg tp;

 always@(*) begin
    case({LE,data})
        5'b10000: begin ta=0;tb=0;tc=0;td=0;te=0;tf=0;tg=1; end
        5'b10001: begin ta=1;tb=0;tc=0;td=1;te=1;tf=1;tg=1; end
        5'b10010: begin ta=0;tb=0;tc=1;td=0;te=0;tf=1;tg=0; end
        5'b10011: begin ta=0;tb=0;tc=0;td=0;te=1;tf=1;tg=0; end
        5'b10100: begin ta=1;tb=0;tc=0;td=1;te=1;tf=0;tg=0; end
        5'b10101: begin ta=0;tb=1;tc=0;td=0;te=1;tf=0;tg=0; end
        5'b10110: begin ta=0;tb=1;tc=0;td=0;te=0;tf=0;tg=0; end
        5'b10111: begin ta=0;tb=0;tc=0;td=1;te=1;tf=1;tg=1; end
        5'b11000: begin ta=0;tb=0;tc=0;td=0;te=0;tf=0;tg=0; end
        5'b11001: begin ta=0;tb=0;tc=0;td=0;te=1;tf=0;tg=0; end
        5'b11010: begin ta=0;tb=0;tc=0;td=1;te=0;tf=0;tg=0; end
        5'b11011: begin ta=1;tb=1;tc=0;td=0;te=0;tf=0;tg=0; end
        5'b11100: begin ta=0;tb=1;tc=1;td=0;te=0;tf=0;tg=1; end
        5'b11101: begin ta=1;tb=0;tc=0;td=0;te=0;tf=1;tg=0; end
        5'b11110: begin ta=0;tb=1;tc=1;td=0;te=0;tf=0;tg=0; end
        5'b11111: begin ta=0;tb=1;tc=1;td=1;te=0;tf=0;tg=0; end
        default: begin ta=1;tb=1;tc=1;td=1;te=1;tf=1;tg=1; end
    endcase

    case(p)
        0: tp=1;
        1: tp=0;
    endcase

 end

assign a=ta, b=tb, c=tc, d=td, e=te, f=tf, g=tg, p=tp;

endmodule //SegDecoder