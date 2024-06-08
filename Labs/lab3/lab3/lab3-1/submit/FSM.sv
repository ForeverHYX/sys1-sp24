module FSM(
    input rstn,
    input clk,
    input a,
    input b,
    output [1:0] state
);

    typedef enum logic [1:0] {no,b1,a1,a2} Input;
    typedef enum logic [1:0] {s0,s1,s2,s3} Count;
    
    Count currentState;
    always@(posedge clk or negedge rstn)begin
    	if(~rstn) begin
            currentState<=s0;
        end else begin
    		case(state)
    			s0:case({a,b})
                    no:currentState<=currentState;
                    b1:currentState<=s0;
                    a1:currentState<=s1;
                    a2:currentState<=s1;
                endcase
                s1:case({a,b})
                    no:currentState<=currentState;
                    b1:currentState<=s0;
                    a1:currentState<=s2;
                    a2:currentState<=s2;
                endcase
                s2:case({a,b})
                    no:currentState<=currentState;
                    b1:currentState<=s0;
                    a1:currentState<=s3;
                    a2:currentState<=s3;
                endcase
                s3:case({a,b})
                    no:currentState<=currentState;
                    b1:currentState<=s3;
                    a1:currentState<=s3;
                    a2:currentState<=s3;
                endcase
    		endcase
    	end
    end
    assign state=currentState;
endmodule
