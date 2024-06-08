`include"uart_struct.vh"
module UartLoop(
    input clk,
    input rstn,
    Decoupled_ift.Slave uart_rdata,
    Decoupled_ift.Master uart_tdata,
    input UartPack::uart_t debug_data,
    input logic debug_send,
    output UartPack::uart_t debug_rdata,
    output UartPack::uart_t debug_tdata
);
    import UartPack::*;

    uart_t rdata;
    logic rdata_valid;

    uart_t tdata;
    logic tdata_valid;

    logic debug;

    typedef enum logic [1:0] {RDATA,TDATA1,TDATA2} fsm_state;
    fsm_state state_reg;
    always @(posedge clk or negedge rstn) begin
        /*if(debug_send)begin
            debug<=1'b1;
        end else begin
            debug<=1'b0;
        end*/
        if(~rstn)begin
            rdata_valid<=1'b0;
            tdata_valid<=1'b0;
            rdata<=0;
            tdata<=0;
            debug<=1'b0;
            uart_rdata.ready<=1'b0;
            uart_tdata.valid<=1'b0;
            state_reg<=RDATA;
        end else begin
            case(state_reg)
                RDATA:begin
                    uart_rdata.ready<=1'b1;
                    uart_tdata.valid<=1'b0;
                    if(uart_rdata.valid && uart_rdata.ready)begin
                        rdata<=uart_rdata.data;
                        rdata_valid<=1'b1;
                        state_reg<=TDATA1;
                    end
                end
                TDATA1:begin
                    uart_rdata.ready<=1'b0;
                    if(debug)begin
                        rdata_valid<=1'b0;
                        tdata<=debug_data;
                        tdata_valid<=1'b1;
                        state_reg<=TDATA2;
                    end else if(rdata_valid)begin
                        tdata<=rdata;
                        tdata_valid<=1'b1;
                        state_reg<=TDATA2;
                    end
                end
                TDATA2:begin
                    if(tdata_valid && uart_tdata.ready)begin
                        uart_tdata.data<=tdata;
                        tdata_valid<=1'b0;
                        uart_tdata.valid<=1'b1;
                        state_reg<=RDATA;
                    end
                end
                default:state_reg<=RDATA;
            endcase
        end
    end

    assign debug_rdata = rdata;
    assign debug_tdata = tdata;

endmodule