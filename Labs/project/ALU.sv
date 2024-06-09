`include "core_struct.vh"
module ALU (
  input  CorePack::data_t a,
  input  CorePack::data_t b,
  input  CorePack::alu_op_enum  alu_op,
  output CorePack::data_t res
);

  import CorePack::*;
  logic [31:0] extension1, extension2, extension3, extension4, extension5;
  assign extension1 = a[31:0] + b[31:0];
  assign extension2 = a[31:0] - b[31:0];
  assign extension3 = a[31:0] << b[4:0];
  assign extension4 = a[31:0] >> b[4:0];
  assign extension5 = $signed(a[31:0]) >>> b[4:0];

  always_comb begin
    case (alu_op)
      ALU_ADD: res = a + b;
      ALU_SUB: res = a - b;
      ALU_AND: res = a & b;
      ALU_OR: res = a | b;
      ALU_XOR: res = a ^ b;
      ALU_SLT: res = $signed(a) < $signed(b) ? 1 : 0;
      ALU_SLTU: res = a < b ? 1 : 0;
      ALU_SLL: res = a << b[5:0];
      ALU_SRL: res = a >> b[5:0];
      ALU_SRA: res = $signed(a) >>> b[5:0];
      ALU_ADDW: res = {{32{extension1[31]}}, a[31:0] + b[31:0]};
      ALU_SUBW: res = {{32{extension2[31]}}, a[31:0] - b[31:0]};
      ALU_SLLW: res = {{32{extension3[31]}}, a[31:0] << b[4:0]};
      ALU_SRLW: res = {{32{extension4[31]}}, a[31:0] >> b[4:0]};
      ALU_SRAW: res = {{32{extension5[31]}}, $signed(a[31:0]) >>> b[4:0]};
      ALU_DEFAULT: res = 0;
    endcase
  end
  

endmodule
