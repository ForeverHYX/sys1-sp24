`include"core_struct.vh"
module Cmp (
    input CorePack::data_t a,
    input CorePack::data_t b,
    input CorePack::cmp_op_enum cmp_op,
    output logic cmp_res
);

    import CorePack::*;
    always_comb begin
        case (cmp_op)
            CMP_NO: cmp_res = 0;
            CMP_EQ: cmp_res = (a == b);
            CMP_NE: cmp_res = (a != b);
            CMP_LT: cmp_res = ($signed(a) < $signed(b));
            CMP_GE: cmp_res = ($signed(a) >= $signed(b));
            CMP_LTU: cmp_res = (a < b);
            CMP_GEU: cmp_res = (a >= b);
            CMP7: cmp_res = 0;
        endcase
    end

endmodule