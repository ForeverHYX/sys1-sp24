`include"conv_struct.vh"
module ConvOperator(
    input clk,
    input rst,
    input Conv::data_vector kernel,
    input Conv::data_vector data,
    input in_valid,
    output reg in_ready,

    output Conv::result_t result,
    output reg out_valid,
    input out_ready
);

    localparam VECTOR_WIDTH = 2*Conv::WIDTH;
    typedef struct {
        Conv::result_t data;
        logic valid;
    } mid_vector;
    Conv::result_t add_tmp[Conv::LEN-1:0];
    Conv::result_t vector_stage1_data[Conv::LEN-1:0];
    mid_vector vector_stage1 [Conv::LEN-1:0];
    mid_vector vector_stage2;

    typedef enum logic [1:0] {RDATA, WORK, TDATA} fsm_state;
    fsm_state state_reg;
    integer j;
    always @(posedge clk or negedge rst) begin
        if(~rst)begin
            state_reg<=RDATA;
        end else begin
            case(state_reg)
                RDATA:begin
                    vector_stage2.valid <= 0;
                    in_ready<=1'b1;
                    out_valid<=1'b0;
                    if(in_valid)begin
                        state_reg<=WORK;
                    end
                end
                WORK:begin
                    in_ready<=1'b0;
                    out_valid<=1'b0;
                    if(vector_stage1[Conv::LEN-1].valid)begin
                        for(j=Conv::LEN-1;j>=1;j=j-1)begin
                            if(j<Conv::LEN/2)begin
                                add_tmp[j]=add_tmp[j*2]+add_tmp[j*2+1];
                            end else begin
                                add_tmp[j]=vector_stage1_data[(j-Conv::LEN/2)*2]+vector_stage1_data[(j-Conv::LEN/2)*2+1];
                            end
                        end
                        vector_stage2.data<=add_tmp[1];
                        vector_stage2.valid<=1'b1;
                        state_reg<=TDATA;
                    end
                end
                TDATA:begin
                    in_ready<=1'b0;
                    out_valid<=1'b1;
                    if(out_ready && vector_stage2.valid)begin
                        result<=vector_stage2.data;
                        state_reg<=RDATA;
                    end
                end
                default:;
            endcase
        end
    end
    genvar i;
    generate
        for(i=0;i<Conv::LEN;i=i+1)begin
            Multiplier #(
                .LEN(Conv::WIDTH)
            )mult1(
                .clk(clk),
                .rst(rst),
                .multiplicand(kernel.data[i]),
                .multiplier(data.data[i]),
                .product(vector_stage1_data[i]),
                .finish(vector_stage1[i].valid),
                .start(in_valid)
            );
        end
    endgenerate

endmodule