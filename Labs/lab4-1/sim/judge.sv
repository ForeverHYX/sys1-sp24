`include"conv_struct.vh"

module Judge (
    input clk,
    input rst,
    input Conv::data_t in_data,
    input Conv::data_vector kernel,
    input in_valid,
    input in_ready,

    input Conv::result_t result,
    input out_valid,
    input out_ready,

    output error
);

    Conv::data_t dataQueue[$] = {0,0,0,0};
    logic request;
    always_ff@(posedge clk)begin
        if(in_valid & in_ready)begin
            request <= 1'b1;
            dataQueue.push_back(in_data);
            dataQueue.pop_front();
        end else begin
            request <= 1'b0;
        end
    end

    Conv::result_t mid [Conv::LEN-1:0];
    Conv::result_t sum;
    Conv::result_t simulate_result;
    integer i;
    Conv::result_t resultQueue[$];
    always_ff@(posedge clk)begin
        if(request)begin
            for(i=0;i<Conv::LEN;i=i+1)begin
                mid[i] = {{Conv::WIDTH{1'b0}},dataQueue[i]}*{{Conv::WIDTH{1'b0}},kernel.data[i]};
            end
            sum = mid[0];
            for(i=1;i<Conv::LEN;i=i+1)begin
                sum = sum + mid[i];
            end
            resultQueue.push_back(sum);
        end else if(out_ready & out_valid)begin
            simulate_result = resultQueue.pop_front();
            if(simulate_result == result)begin
                error = 1'b0;
                $display("simulate result: %x", simulate_result);
            end else begin
                error = 1'b1;
                $display("*************error**************");
                $display("simulate result: %x", simulate_result);
                $display("hardware result: %x", result);
            end
        end
    end

endmodule
