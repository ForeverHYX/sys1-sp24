module Testbench;
    parameter LENGTH=32;
    reg [31:0] a;
    reg [31:0] b;
    reg do_sub;
    wire [31:0] s;
    wire c;

    integer i;
    initial begin
        integer i;
        for(i=0;i<10;i=i+1)begin
            a=$random();
            b=$random();
            do_sub=1'b0;
            #20;
        end
        for(i=0;i<10;i=i+1)begin
            a=$random();
            b=$random();
            do_sub=1'b1;
            #20;
        end
        $finish;
    end

    AddSubers #(
        .LENGTH(32)
    ) add_sub (
        .a(a),
        .b(b),
        .do_sub(do_sub),
        .s(s),
        .c(c)
    );

    `ifdef VERILATE
        reg clk;
        initial begin
            clk=1'b0;
        end
        always begin
            clk=~clk;
            #5;
        end
        
        wire error;
        Judge judge(
            .a(a),
            .b(b),
            .do_sub(do_sub),
            .s(s),
            .c(c),
            .error(error)
        );
        wire temp1,temp2;
        Adder adder1(
            .a(1),
            .b(1),
            .c_in(0),
            .c_out(temp1),
            .s(temp2)
        );

        always@(posedge clk)begin
            if(error)begin
                $display("a=%d, b=%d, do_sub=%d, s=%d, c=%d, error, c_out=%d, s=%d", a, b, do_sub, s, c, temp1, temp2);
            end
        end

		initial begin
			$dumpfile({`TOP_DIR,"/Testbench.vcd"});
			$dumpvars(0,dut);
			$dumpon;
		end
    `endif
    
endmodule
