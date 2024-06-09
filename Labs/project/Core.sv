`include "core_struct.vh"
module Core (
    input clk,
    input rst,

    Mem_ift.Master imem_ift,
    Mem_ift.Master dmem_ift,

    output cosim_valid,
    output CorePack::CoreInfo cosim_core_info
);
    import CorePack::*;
    inst_t inst;
    data_t pc, next_pc, read_data_1, read_data_2, wb_val, imm, mem, alu_a, alu_b, alu_res;
    reg_ind_t rs1, rs2, rd;
    logic npc_sel, we_reg, we_mem, re_mem, is_b, is_j, if_jump;
    imm_op_enum immgen_op;
    alu_asel_op_enum alu_asel;
    alu_bsel_op_enum alu_bsel;
    cmp_op_enum cmp_op;
    alu_op_enum alu_op;
    wb_sel_op_enum wb_sel;
    mem_op_enum mem_op;
    opcode_t opcode;

    assign opcode = inst[6:0];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = inst[11:7];
    assign npc_sel = (if_jump & is_b) | is_j;
    //Instruction selection
    always_comb begin
        if(pc[2] == 1'b1)begin
            inst = imem_ift.r_reply_bits.rdata[63:32];
        end else begin
            inst = imem_ift.r_reply_bits.rdata[31:0];
        end
    end
    //Decoder
    controller decoder(
        .inst(inst),
        .we_reg(we_reg),
        .we_mem(dmem_ift.w_request_valid),
        .re_mem(dmem_ift.r_request_valid),
        .is_b(is_b),
        .is_j(is_j),
        .immgen_op(immgen_op),
        .alu_op(alu_op),
        .cmp_op(cmp_op),
        .alu_asel(alu_asel),
        .alu_bsel(alu_bsel),
        .wb_sel(wb_sel),
        .mem_op(mem_op)
    );
    //Execution

    //get the data
    RegFile regfile1(
        .clk(clk),
        .rst(rst),
        .we(we_reg),
        .read_addr_1(rs1),
        .read_addr_2(rs2),
        .write_addr(rd),
        .write_data(wb_val),
        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );
    //Get the firest number
    always_comb begin
        case(alu_asel)
            ASEL_REG: alu_a = read_data_1;
            ASEL_PC: alu_a = pc;
            default: alu_a = 64'b0;
        endcase
    end
    //Generate immediate number and choose the second number
    //Extended from RV32i rules
    always_comb begin
        case(immgen_op)
            I_IMM: imm = {{53{inst[31]}}, inst[30:20]};
            S_IMM: imm = {{53{inst[31]}}, inst[30:25], inst[11:7]};
            B_IMM: imm = {{52{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
            U_IMM: imm = {{33{inst[31]}}, inst[30:12], 12'b0};
            UJ_IMM: imm = {{44{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
            default: imm = 64'b0;
        endcase
    end
    always_comb begin
        case(alu_bsel)
            BSEL_REG: alu_b = read_data_2;
            BSEL_IMM: alu_b = imm;
            default: alu_b = 64'b0;
        endcase        
    end
    //ALU Unit
    ALU alu1(
        .a(alu_a),
        .b(alu_b),
        .alu_op(alu_op),
        .res(alu_res)
    );
    //Cmp Unit for b
    Cmp cmp1(
        .a(read_data_1),
        .b(read_data_2),
        .cmp_op(cmp_op),
        .cmp_res(if_jump)
    );

    
    //data package 
    always_comb begin
        case(mem_op)
            MEM_B: begin
                dmem_ift.w_request_bits.wdata[7:0] = read_data_2[7:0];
                dmem_ift.w_request_bits.wdata = dmem_ift.w_request_bits.wdata << {alu_res[2:0], 3'b0};
            end
            MEM_H: begin
                dmem_ift.w_request_bits.wdata[15:0] = read_data_2[15:0];
                dmem_ift.w_request_bits.wdata = dmem_ift.w_request_bits.wdata << {alu_res[2:1], 4'b0};
            end
            MEM_W: begin
                dmem_ift.w_request_bits.wdata[31:0] = read_data_2[31:0];
                dmem_ift.w_request_bits.wdata = dmem_ift.w_request_bits.wdata << {alu_res[2], 5'b0};
            end
            MEM_D: dmem_ift.w_request_bits.wdata = read_data_2;
            default: dmem_ift.w_request_bits.wdata = 64'b0;
        endcase
    end
    
    //data trunction
    data_t temp;
    always_comb begin
        case(mem_op)
            MEM_B:  begin
                temp = dmem_ift.r_reply_bits.rdata >> {alu_res[2:0],3'b0};
                mem = {{56{temp[7]}}, temp[7:0]};
            end
            MEM_UB: begin
                temp = dmem_ift.r_reply_bits.rdata >> {alu_res[2:0],3'b0};
                mem = {{56{1'b0}}, temp[7:0]};
            end
            MEM_H:  begin
                temp = dmem_ift.r_reply_bits.rdata >> {alu_res[2:1],4'b0};
                mem = {{48{temp[15]}}, temp[15:0]};
            end
            MEM_UH: begin
                temp = dmem_ift.r_reply_bits.rdata >> {alu_res[2:1],4'b0};
                mem = {{48{1'b0}}, temp[15:0]};
            end
            MEM_W:  begin
                temp = dmem_ift.r_reply_bits.rdata >> {alu_res[2],5'b0};
                mem = {{32{temp[31]}}, temp[31:0]};
            end
            MEM_UW: begin
                case (alu_res[2])
                    1'b0: mem = {{32{1'b0}}, dmem_ift.r_reply_bits.rdata[31:0]};
                    1'b1: mem = {{32{1'b0}}, dmem_ift.r_reply_bits.rdata[63:32]};
                    default: mem = 64'b0;
                endcase
            end
            MEM_D:  mem = dmem_ift.r_reply_bits.rdata;
            MEM_NO: mem = dmem_ift.r_reply_bits.rdata;
        endcase
    end
    //mask generation
       always_comb begin
        case(mem_op)
            MEM_B: begin
                dmem_ift.w_request_bits.wmask = {7'b0,1'b1};
                dmem_ift.w_request_bits.wmask = dmem_ift.w_request_bits.wmask << alu_res[2:0];
            end
            MEM_H: begin
                dmem_ift.w_request_bits.wmask = {6'b0,2'b11};
                dmem_ift.w_request_bits.wmask = dmem_ift.w_request_bits.wmask << {alu_res[2:1], 1'b0};
            end
            MEM_W: begin
                dmem_ift.w_request_bits.wmask = {4'b0,4'b1111};
                dmem_ift.w_request_bits.wmask = dmem_ift.w_request_bits.wmask << {alu_res[2], 2'b0};
            end
            MEM_D: dmem_ift.w_request_bits.wmask = 8'b11111111;
            default: dmem_ift.w_request_bits.wmask = 8'b00000000;
        endcase
    end

    //choose type of write back data
    always_comb begin
        case(wb_sel)
            WB_SEL_ALU: wb_val = alu_res;
            WB_SEL_MEM: wb_val = mem;
            WB_SEL_PC: wb_val = pc + 4;
            default: wb_val = 64'b0;
        endcase
    end

    //update next_pc and pc
    always @(posedge clk or posedge rst) begin
        if(rst)begin
            pc <= 64'b0;
        end else begin
            pc <= next_pc;
        end
    end

    assign next_pc = npc_sel ?  alu_res : pc + 4;

    //mem connections
    assign dmem_ift.r_request_bits.raddr = alu_res;
    assign dmem_ift.w_request_bits.waddr = alu_res;
    assign imem_ift.r_request_bits.raddr = pc;
    assign cosim_valid = 1'b1;
    assign cosim_core_info.pc        = pc;
    assign cosim_core_info.inst      = {32'b0,inst};   
    assign cosim_core_info.rs1_id    = {59'b0, rs1};
    assign cosim_core_info.rs1_data  = read_data_1;
    assign cosim_core_info.rs2_id    = {59'b0, rs2};
    assign cosim_core_info.rs2_data  = read_data_2;
    assign cosim_core_info.alu       = alu_res;
    assign cosim_core_info.mem_addr  = dmem_ift.r_request_bits.raddr;
    assign cosim_core_info.mem_we    = {63'b0, dmem_ift.w_request_valid};
    assign cosim_core_info.mem_wdata = dmem_ift.w_request_bits.wdata;
    assign cosim_core_info.mem_rdata = dmem_ift.r_reply_bits.rdata;
    assign cosim_core_info.rd_we     = {63'b0, we_reg};
    assign cosim_core_info.rd_id     = {59'b0, rd}; 
    assign cosim_core_info.rd_data   = wb_val;
    assign cosim_core_info.br_taken  = {63'b0, npc_sel};
    assign cosim_core_info.npc       = next_pc;

endmodule

module MultiFSM(
    input clk,
    input rst,
    Mem_ift.Master imem_ift,
    Mem_ift.Master dmem_ift,
    input we_mem,
    input re_mem,
    input CorePack::addr_t pc,
    input CorePack::addr_t alu_res,
    input CorePack::data_t data_package,
    input CorePack::mask_t mask_package,
    output stall
);
    import CorePack::*;

    // fill your code for bonus

endmodule