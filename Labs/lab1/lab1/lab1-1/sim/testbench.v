module Testbench;

    reg [7:0] I;
    reg [2:0] S;
    wire O;

    initial begin
        //your test sample
        I = 8'b10000000; S = 3'b111;
        #5;
        I = 8'b11000000; S = 3'b110;
        #5;
        I = 8'b11100000; S = 3'b101;
        #5;
        I = 8'b10010000; S = 3'b100;
        #5;
        I = 8'b10001000; S = 3'b011;
        #5;
        I = 8'b10000100; S = 3'b010;
        #5;
        I = 8'b10000010; S = 3'b001;
        #5;
        I = 8'b10000001; S = 3'b000;
        #5;                                 
        $finish;
    end

    Mux8T1_1 dut( 
        .I(I),
        .S(S),
        .O(O) 
    );

    `ifdef VERILATE
        initial begin
            $dumpfile({`TOP_DIR,"/Testbench.vcd"});
            $dumpvars(0,dut);
            $dumpon;
            end
    `endif
    
endmodule
