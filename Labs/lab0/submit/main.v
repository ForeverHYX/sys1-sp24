module main( 
   input I0,
   input I1,
   input I2,
   input I3,
   output O 
);

//define wires,0-3 for input,13 for output
wire s_logisimNet0;
wire s_logisimNet1;
wire s_logisimNet2;
wire s_logisimNet3;
wire s_logisimNet4;
wire s_logisimNet5;
wire s_logisimNet6;
wire s_logisimNet7;
wire s_logisimNet8;
wire s_logisimNet9;
wire s_logisimNet10;
wire s_logisimNet11;
wire s_logisimNet12;
wire s_logisimNet13;

//connect input
assign s_logisimNet0 = I0;
assign s_logisimNet1 = I1;
assign s_logisimNet2 = I2;
assign s_logisimNet3 = I3;

//connect output
assign O = s_logisimNet13;

// inverter parts
assign s_logisimNet4 = ~s_logisimNet0;
assign s_logisimNet5 = ~s_logisimNet1;
assign s_logisimNet6 = ~s_logisimNet2;
assign s_logisimNet7 = ~s_logisimNet3;

// all gates part
assign s_logisimNet8 = s_logisimNet5 & s_logisimNet6 & s_logisimNet7;
assign s_logisimNet9 = s_logisimNet4 & s_logisimNet5 & s_logisimNet2;
assign s_logisimNet10 = s_logisimNet4 & s_logisimNet1 & s_logisimNet3;
assign s_logisimNet11 = s_logisimNet2 & s_logisimNet3;
assign s_logisimNet12 = s_logisimNet0 & s_logisimNet2;
assign s_logisimNet13 = s_logisimNet8 | s_logisimNet9 | s_logisimNet10 | s_logisimNet11 | s_logisimNet12; 

endmodule
