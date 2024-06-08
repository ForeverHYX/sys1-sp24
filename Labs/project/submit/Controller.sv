`include "core_struct.vh"
module controller (
    input CorePack::inst_t inst,
    output we_reg,
    output we_mem,
    output re_mem,
    output is_b,
    output is_j,
    output CorePack::imm_op_enum immgen_op,
    output CorePack::alu_op_enum alu_op,
    output CorePack::cmp_op_enum cmp_op,
    output CorePack::alu_asel_op_enum alu_asel,
    output CorePack::alu_bsel_op_enum alu_bsel,
    output CorePack::wb_sel_op_enum wb_sel,
    output CorePack::mem_op_enum mem_op
);

    import CorePack::*;
    logic ins_load,ins_imm,ins_auipc,ins_immw,ins_store,ins_reg,ins_lui,ins_regw,ins_branch,ins_jalr,ins_jal;
    assign ins_load = (inst[6:0]==7'b0000011);
    assign ins_imm = (inst[6:0]==7'b0010011);
    assign ins_auipc = (inst[6:0]==7'b0010111);
    assign ins_immw = (inst[6:0]==7'b0011011);
    assign ins_store = (inst[6:0]==7'b0100011);
    assign ins_reg = (inst[6:0]=== 7'b0110011);
    assign ins_lui = (inst[6:0]=== 7'b0110111);
    assign ins_regw = (inst[6:0]=== 7'b0111011);
    assign ins_branch = (inst[6:0]=== 7'b1100011);
    assign ins_jalr = (inst[6:0]=== 7'b1100111);
    assign ins_jal = (inst[6:0]=== 7'b1101111);

    assign we_reg = ins_reg | ins_imm | ins_load | ins_auipc | ins_lui | ins_regw | ins_immw | ins_jalr | ins_jal;
    assign we_mem = ins_store;
    assign re_mem = ins_load;
    assign is_b = ins_branch;
    assign is_j = ins_jalr | ins_jal;

    funct3_t func3=inst[14:12];
    funct7_t func7=inst[31:25];
    opcode_t opcode=inst[6:0];

    always_comb begin
        case(opcode)
            LOAD_OPCODE:begin
                immgen_op=I_IMM;
                alu_op=ALU_ADD;
                cmp_op=CMP_NO;
                alu_asel=ASEL_REG;
                alu_bsel=BSEL_IMM;
                wb_sel=WB_SEL_MEM;
                case(func3)
                    LB_FUNCT3:mem_op=MEM_B;
                    LH_FUNCT3:mem_op=MEM_H;
                    LW_FUNCT3:mem_op=MEM_W;
                    LD_FUNCT3:mem_op=MEM_D;
                    LBU_FUNCT3:mem_op=MEM_UB;
                    LHU_FUNCT3:mem_op=MEM_UH;
                    LWU_FUNCT3:mem_op=MEM_UW;
                    default: mem_op=MEM_NO;
                endcase
            end
            IMM_OPCODE:begin
                immgen_op=I_IMM;
                case(func3)
                    ADD_FUNCT3:alu_op=ALU_ADD;
                    SLL_FUNCT3:alu_op=ALU_SLL;
                    SLT_FUNCT3:alu_op=ALU_SLT;
                    SLTU_FUNCT3:alu_op=ALU_SLTU;
                    XOR_FUNCT3:alu_op=ALU_XOR;
                    SRL_FUNCT3:alu_op=(func7==7'b0000000)?ALU_SRL:ALU_SRA;
                    OR_FUNCT3:alu_op=ALU_OR;
                    AND_FUNCT3:alu_op=ALU_AND;
                    default:alu_op=ALU_DEFAULT;
                endcase
                cmp_op=CMP_NO;
                alu_asel=ASEL_REG;
                alu_bsel=BSEL_IMM;
                wb_sel=WB_SEL_ALU;
                mem_op=MEM_NO;
            end

            AUIPC_OPCODE:begin
                immgen_op=U_IMM;
                alu_op=ALU_ADD;
                cmp_op=CMP_NO;
                alu_asel=ASEL_PC;
                alu_bsel=BSEL_IMM;
                wb_sel=WB_SEL_ALU;
                mem_op=MEM_NO;
            end
            IMMW_OPCODE:begin
                immgen_op = I_IMM;
                case (func3)
                    ADDW_FUNCT3: alu_op = (func7 == 7'b0100000) ? ALU_SUBW : ALU_ADDW;
                    SLLW_FUNCT3: alu_op = ALU_SLLW;
                    SRLW_FUNCT3: alu_op = (func7 == 7'b0000000) ? ALU_SRLW : ALU_SRAW;
                    default: alu_op = ALU_DEFAULT;
                endcase
                cmp_op = CMP_NO;
                alu_asel = ASEL_REG;
                alu_bsel = BSEL_IMM;
                wb_sel = WB_SEL_ALU;
                mem_op = MEM_NO;
            end
            STORE_OPCODE:begin
                immgen_op = S_IMM;
                alu_op = ALU_ADD;
                cmp_op = CMP_NO;
                alu_asel = ASEL_REG;
                alu_bsel = BSEL_IMM;
                wb_sel = WB_SEL0;
                case (func3)
                    SB_FUNCT3: mem_op = MEM_B;
                    SH_FUNCT3: mem_op = MEM_H;
                    SW_FUNCT3: mem_op = MEM_W;
                    SD_FUNCT3: mem_op = MEM_D;
                    default: mem_op = MEM_NO;
                endcase
            end
            REG_OPCODE:begin
                immgen_op = IMM0;
                case(func3)
                    ADD_FUNCT3:alu_op=(func7==7'b0000000)?ALU_ADD:ALU_SUB;
                    SLL_FUNCT3:alu_op=ALU_SLL;
                    SLT_FUNCT3:alu_op=ALU_SLT;
                    SLTU_FUNCT3:alu_op=ALU_SLTU;
                    XOR_FUNCT3:alu_op=ALU_XOR;
                    SRL_FUNCT3:alu_op=(func7==7'b0000000)?ALU_SRL:ALU_SRA;
                    OR_FUNCT3:alu_op=ALU_OR;
                    AND_FUNCT3:alu_op=ALU_AND;
                    default:alu_op=ALU_DEFAULT;
                endcase
                cmp_op = CMP_NO;
                alu_asel = ASEL_REG;
                alu_bsel = BSEL_REG;
                wb_sel = WB_SEL_ALU;
                mem_op = MEM_NO;
            end
            LUI_OPCODE:begin
                immgen_op = U_IMM;
                alu_op = ALU_ADD;
                cmp_op = CMP_NO;
                alu_asel = ASEL0;
                alu_bsel = BSEL_IMM;
                wb_sel = WB_SEL_ALU;
                mem_op = MEM_NO;
            end
            REGW_OPCODE:begin
                immgen_op = IMM0;
                case (func3)
                    ADDW_FUNCT3: alu_op = (func7 == 7'b0000000) ? ALU_ADDW : ALU_SUBW;
                    SLLW_FUNCT3: alu_op = ALU_SLLW;
                    SRLW_FUNCT3: alu_op = (func7 == 7'b0000000) ? ALU_SRLW : ALU_SRAW; 
                    default: alu_op = ALU_DEFAULT;
                endcase
                cmp_op = CMP_NO;
                alu_asel = ASEL_REG;
                alu_bsel = BSEL_REG;
                wb_sel = WB_SEL_ALU;
                mem_op = MEM_NO;
            end
            BRANCH_OPCODE:begin
                immgen_op = B_IMM;
                alu_op = ALU_ADD;
                case (func3)
                    BEQ_FUNCT3: cmp_op = CMP_EQ;
                    BNE_FUNCT3: cmp_op = CMP_NE;
                    BLT_FUNCT3: cmp_op = CMP_LT;
                    BGE_FUNCT3: cmp_op = CMP_GE;
                    BLTU_FUNCT3: cmp_op = CMP_LTU; 
                    BGEU_FUNCT3: cmp_op = CMP_GEU; 
                    default: cmp_op = CMP_NO;
                endcase
                alu_asel = ASEL_PC;
                alu_bsel = BSEL_IMM;
            end
            JALR_OPCODE:begin
                immgen_op = I_IMM;
                alu_op = ALU_ADD;
                cmp_op = CMP_NO;
                alu_asel = ASEL_REG;
                alu_bsel = BSEL_IMM;
                wb_sel = WB_SEL_PC;
                mem_op = MEM_NO;
            end
            JAL_OPCODE:begin
                immgen_op = UJ_IMM;
                alu_op = ALU_ADD;
                cmp_op = CMP_NO;
                alu_asel = ASEL_PC;
                alu_bsel = BSEL_IMM;
                wb_sel = WB_SEL_PC;
                mem_op = MEM_NO;
            end
            default:begin
                immgen_op = IMM0;
                alu_op = ALU_DEFAULT;
                cmp_op = CMP_NO;
                alu_asel = ASEL0;
                alu_bsel = BSEL0;
                wb_sel = WB_SEL0;
                mem_op = MEM_NO;
            end
        endcase
    end

endmodule