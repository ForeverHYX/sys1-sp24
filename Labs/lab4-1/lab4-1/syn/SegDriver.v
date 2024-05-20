module SegDriver(
    input clk,
    input rstn,
    input [31:0] data,
    input point,
    input LE,
    output [7:0] cs,
    output [7:0] an
);

    reg [2:0] index;
    always@(posedge clk)begin
        if(~rstn) index<=3'b0;
        else index<=index+3'b1;
    end
    
    wire [7:0] an_array [7:0];
    assign an_array[0]=8'b11111110;
    assign an_array[1]=8'b11111101;
    assign an_array[2]=8'b11111011;
    assign an_array[3]=8'b11110111;
    assign an_array[4]=8'b11101111;
    assign an_array[5]=8'b11011111;
    assign an_array[6]=8'b10111111;
    assign an_array[7]=8'b01111111;
    assign an=an_array[index];

    wire [3:0] data_array [7:0];
    genvar i;
    generate
        for(i=0;i<8;i=i+1)begin
            assign data_array[i]=data[i*4+3:i*4];
        end
    endgenerate

    SegDecoder seg_decoder(
        .data(data_array[index]),
        .point(point),
        .LE(LE),

        .a(cs[0]),
        .b(cs[1]),
        .c(cs[2]),
        .d(cs[3]),
        .e(cs[4]),
        .f(cs[5]),
        .g(cs[6]),
        .p(cs[7])
    );
    
endmodule //SegDriver

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

    wire [7:0] seg;
    assign seg[7]=~point;
    
    wire [6:0] decoder [15:0];
    assign decoder[0]=7'b1000000;
    assign decoder[1]=7'b1111001;
    assign decoder[2]=7'b0100100;
    assign decoder[3]=7'b0110000;
    assign decoder[4]=7'b0011001;
    assign decoder[5]=7'b0010010;
    assign decoder[6]=7'b0000010;
    assign decoder[7]=7'b1111000;
    assign decoder[8]=7'b0000000;
    assign decoder[9]=7'b0010000;
    assign decoder[10]=7'b0001000;
    assign decoder[11]=7'b0000011;
    assign decoder[12]=7'b1000110;
    assign decoder[13]=7'b0100001;
    assign decoder[14]=7'b0000110;
    assign decoder[15]=7'b0001110;
    assign seg[6:0]=decoder[data];

    assign {p,g,f,e,d,c,b,a}={8{LE}}|seg;

endmodule //SegDecoder
