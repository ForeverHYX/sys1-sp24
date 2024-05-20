module Mux8T1_1( 
   input [7:0] I,
   input [2:0] S,
   output O 
);
//your verilog code
wire [1:0] temp;//temp outputs for MUX4T1

MUX4T1_1 mux4_1(I[4],I[5],I[6],I[7],temp[1],S[1:0]);
MUX4T1_1 mux4_2( I[0],I[1],I[2],I[3],temp[0],S[1:0]);

assign O=S[2] ? temp[1] : temp[0];//use ?: as an MUX2T1, O is the output

endmodule
