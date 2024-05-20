module Adder(
    input a,
    input b,
    input c_in,
    output s,
    output c_out
);
<<<<<<< Updated upstream
    //fill your code here
    
=======
    assign s = a^b^c_in;
    assign c_out = ((a^b)&c_in) | (a&b);
>>>>>>> Stashed changes
endmodule 
