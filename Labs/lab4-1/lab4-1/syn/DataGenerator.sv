`include"conv_struct.vh"
module DataGenerator(
    input clk,
    input rstn,
    input next_test,
    output reg valid,
    input ready,
    output [63:0] in_data,
    output Conv::data_vector kernel
);
    `include"initial_file.vh"
    reg [63:0] data [7:0];
    initial begin
        $readmemh(DATA_FILE_PATH, data);
    end
    
    assign kernel.data[0]=64'h0040942c797673c4;
    assign kernel.data[1]=64'hf10010250b1e5d9c;
    assign kernel.data[2]=64'hed57acb99efdd502;
    assign kernel.data[3]=64'hc11de29c48c2e0e4;

    reg [2:0] index;
    always@(posedge clk or negedge rstn)begin
        if(~rstn) index <= 3'b111;
        else if(next_test) index <= index+3'b001;
    end

    always@(posedge clk or negedge rstn)begin
        if(~rstn) valid <= 1'b0;
        else if(next_test) valid <= 1'b1;
        else if(valid & ready) valid <= 1'b0;
    end

    assign in_data = data[index];

endmodule