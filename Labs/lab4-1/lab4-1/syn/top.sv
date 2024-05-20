`include"conv_struct.vh"
module top(
  input clk,
  input rstn,
  input [1:0] sw,
  input [0:0] btn,
  output [7:0] cs,
  output [7:0] an
);

  wire [31:0] clk_div;
  ClkDiv clkdiv(
    .clk(clk),
    .rstn(rstn),
    .clk_div(clk_div)
  );

  wire [1:0] btn_dbnc;
  Debouncer bd0(clk_div[10], btn[0], btn_dbnc[0]);

  wire next_test;
  PosSample sample0(clk, btn_dbnc[0], next_test);

  wire in_valid;
  wire in_ready;
  wire [63:0] in_data;
  Conv::data_vector kernel;
  DataGenerator data_generator(
    .clk(clk),
    .rstn(rstn),
    .next_test(next_test),
    .valid(in_valid),
    .ready(in_ready),
    .in_data(in_data),
    .kernel(kernel)
  );

  wire [127:0] result;
  wire out_ready;
  wire out_valid;
  ConvUnit conv_unit (
      .clk(clk),
      .rst(~rstn),
      .in_data(in_data),
      .kernel(kernel),
      .in_valid(in_valid),
      .in_ready(in_ready),

      .result(result),
      .out_valid(out_valid),
      .out_ready(out_ready)
  );

  assign out_ready = 1'b1;
  reg [127:0] result_reg;
  always@(posedge clk or negedge rstn)begin
    if(~rstn) result_reg <= 128'b0;
    else if(out_valid & out_ready) result_reg <= result;
  end

  wire [31:0] data [3:0];
  generate
  for(genvar i=0;i<4;i=i+1)begin
    assign data[i] = result_reg[i*32+31:i*32];
  end
  endgenerate

  SegDriver segdriver(
    .clk(clk_div[10]),
    .rstn(rstn),
    .data(data[sw]),
    .point(1'b0),
    .LE(1'b0),
    .cs(cs),
    .an(an)
  );

endmodule