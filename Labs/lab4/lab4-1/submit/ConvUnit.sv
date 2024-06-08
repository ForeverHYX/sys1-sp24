`include"conv_struct.vh"
module ConvUnit (
    input clk,
    input rst,
    input Conv::data_t in_data,
    input Conv::data_vector kernel,
    input in_valid,
    output in_ready,

    output Conv::result_t result,
    output out_valid,
    input out_ready
);
    Conv::data_vector data;
    logic ex_valid;
    logic ex_ready;
    Shift shift1(
        .clk(clk),
        .rst(rst),
        .in_data(in_data),
        .in_valid(in_valid),
        .in_ready(in_ready),
        .data(data),
        .out_valid(ex_valid),
        .out_ready(ex_ready)
    );
    ConvOperator conv1(
        .clk(clk),
        .rst(rst),
        .kernel(kernel),
        .data(data),
        .in_valid(ex_valid),
        .in_ready(ex_ready),
        .result(result),
        .out_ready(out_ready),
        .out_valid(out_valid)
    );
endmodule