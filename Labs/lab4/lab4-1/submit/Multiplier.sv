`include"conv_struct.vh"
module Multiplier #(
    parameter LEN = Conv::LEN
) (
    input clk,
    input rst,
    input [LEN-1:0] multiplicand,
    input [LEN-1:0] multiplier,
    input start,
    
    output [LEN*2-1:0] product,
    output finish
);

    localparam PRODUCT_LEN = LEN*2;
    logic [LEN-1:0] multiplicand_reg;
    logic [PRODUCT_LEN:0] product_reg;
    logic finish_reg;
    localparam CNT_LEN = $clog2(LEN);
    localparam CNT_NUM = LEN - 1;
    typedef enum [1:0] {IDLE, WORK, FINAL} fsm_state;
    fsm_state fsm_state_reg;
    logic [CNT_LEN+1:0] Count;
    logic [LEN:0] high_product_temp;

    always @(posedge clk or negedge rst) begin
        if(~rst) begin
            fsm_state_reg<=IDLE;
        end else begin
            case(fsm_state_reg)
                IDLE:begin 
                    finish_reg<=1'b0;
                    if(start)begin
                        product_reg={(PRODUCT_LEN+1){1'b0}};
                        multiplicand_reg<=multiplicand;
                        product_reg[CNT_NUM:0]=multiplier;
                        product_reg[PRODUCT_LEN-1:LEN]={LEN{1'b0}};
                        Count<=0;
                        fsm_state_reg<=WORK;
                        high_product_temp={(LEN+1){1'b0}};
                    end else begin
                        fsm_state_reg<=IDLE;
                    end
                end
                WORK:begin
                    if(Count==LEN)begin
                        fsm_state_reg<=FINAL;
                    end else begin
                        if(product_reg[0] & 1)begin
                            high_product_temp={1'b0,product_reg[PRODUCT_LEN-1:LEN]}+{1'b0,multiplicand_reg};
                        end else begin
                            high_product_temp={1'b0,product_reg[PRODUCT_LEN-1:LEN]};
                        end
                        {product_reg[PRODUCT_LEN:LEN],product_reg[CNT_NUM:0]}={high_product_temp,product_reg[CNT_NUM:0]}>>1;
                        Count<=Count+1;
                    end
                
                end
                FINAL:begin
                    finish_reg<=1'b1;
                    fsm_state_reg<=IDLE;
                    Count<=0;
                end
                default:;
            endcase
        end
    end
    assign product=product_reg[PRODUCT_LEN-1:0];
    assign finish=finish_reg;
endmodule