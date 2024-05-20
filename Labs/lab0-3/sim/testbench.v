module Testbench;

    reg I0,I1,I2,I3;
    wire O;

    initial begin
        //your test sample
    end

    main dut( 
        .I0(I0),
        .I1(I1),
        .I2(I2),
        .I3(I3),
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
