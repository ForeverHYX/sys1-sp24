`include"conv_struct.vh"
module top_sim;

  reg clk;
  reg rstn;
  reg next_test;
  
  integer i;
  initial begin
    clk=1'b0;
    rstn=1'b0;
    next_test=1'b0;
    #20;
    rstn=1'b1;
    #20;
    for(i=0;i<16;i=i+1)begin
        next_test=1'b1;
        #10;
        next_test=1'b0;
        #800;
    end
  end
  
  always begin
    #5
    clk=~clk;
  end

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

endmodule