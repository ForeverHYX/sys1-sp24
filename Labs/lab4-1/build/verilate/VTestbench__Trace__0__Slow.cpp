// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Conv__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("Conv", VerilatedTracePrefixType::SCOPE_MODULE);
    VTestbench___024root__trace_init_sub__TOP__Conv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+120,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+124,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+15,0,"seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+92,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("conv_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+120,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+124,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+125,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+127,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+129,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+131,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+133,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("conv1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+125,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+127,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+129,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+131,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+133,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+120,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+124,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"VECTOR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("add_tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+135+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("vector_stage1_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+151+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("vector_stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+167,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+171,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+172,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+176,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+177,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+181,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+182,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+186,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("vector_stage2", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+187,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+191,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+192,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+16,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+194,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+133,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+28,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+29,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+31,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBit(c+28,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+38,0,"high_product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+18,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+196,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+133,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+41,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+45,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+46,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+48,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBit(c+45,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+55,0,"high_product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+20,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+198,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+133,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+58,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+62,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+63,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+65,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBit(c+62,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+72,0,"high_product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+22,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+200,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+133,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+79,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"PRODUCT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+80,0,"multiplicand_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+82,0,"product_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBit(c+79,0,"finish_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"CNT_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"CNT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"fsm_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+89,0,"high_product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shift1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+125,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+127,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+129,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+131,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+133,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+203+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("judge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+4,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+12,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+120,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+124,0,"out_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+94+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+110,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+114,0,"simulate_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+118,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Conv__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__Conv__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+215,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VTestbench___024root__trace_init_top(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_top\n"); );
    // Body
    VTestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTestbench___024root__trace_register(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+213,(1U));
    bufp->fullIData(oldp+214,(0x80U),32);
    bufp->fullIData(oldp+215,(0x40U),32);
    bufp->fullIData(oldp+216,(6U),32);
    bufp->fullIData(oldp+217,(0x3fU),32);
    bufp->fullIData(oldp+218,(4U),32);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Testbench__DOT__rst));
    bufp->fullQData(oldp+2,(vlSelf->Testbench__DOT__in_data),64);
    bufp->fullQData(oldp+4,(vlSelf->Testbench__DOT__kernel
                            .__PVT__data[0U]),64);
    bufp->fullQData(oldp+6,(vlSelf->Testbench__DOT__kernel
                            .__PVT__data[1U]),64);
    bufp->fullQData(oldp+8,(vlSelf->Testbench__DOT__kernel
                            .__PVT__data[2U]),64);
    bufp->fullQData(oldp+10,(vlSelf->Testbench__DOT__kernel
                             .__PVT__data[3U]),64);
    bufp->fullBit(oldp+12,(vlSelf->Testbench__DOT__in_valid));
    bufp->fullIData(oldp+13,(vlSelf->Testbench__DOT__i),32);
    bufp->fullIData(oldp+14,(vlSelf->Testbench__DOT__j),32);
    bufp->fullIData(oldp+15,(vlSelf->Testbench__DOT__seed),32);
    bufp->fullQData(oldp+16,(vlSelf->Testbench__DOT__kernel
                             .__PVT__data[0U]),64);
    bufp->fullQData(oldp+18,(vlSelf->Testbench__DOT__kernel
                             .__PVT__data[1U]),64);
    bufp->fullQData(oldp+20,(vlSelf->Testbench__DOT__kernel
                             .__PVT__data[2U]),64);
    bufp->fullQData(oldp+22,(vlSelf->Testbench__DOT__kernel
                             .__PVT__data[3U]),64);
    __Vtemp_1[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U];
    __Vtemp_1[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U];
    __Vtemp_1[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U];
    __Vtemp_1[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U];
    bufp->fullWData(oldp+24,(__Vtemp_1),128);
    bufp->fullBit(oldp+28,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg));
    bufp->fullQData(oldp+29,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg),64);
    bufp->fullWData(oldp+31,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg),129);
    bufp->fullCData(oldp+36,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg),2);
    bufp->fullCData(oldp+37,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count),8);
    bufp->fullWData(oldp+38,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp),65);
    __Vtemp_2[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U];
    __Vtemp_2[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U];
    __Vtemp_2[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U];
    __Vtemp_2[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U];
    bufp->fullWData(oldp+41,(__Vtemp_2),128);
    bufp->fullBit(oldp+45,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg));
    bufp->fullQData(oldp+46,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg),64);
    bufp->fullWData(oldp+48,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg),129);
    bufp->fullCData(oldp+53,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg),2);
    bufp->fullCData(oldp+54,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count),8);
    bufp->fullWData(oldp+55,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp),65);
    __Vtemp_3[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U];
    __Vtemp_3[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U];
    __Vtemp_3[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U];
    __Vtemp_3[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U];
    bufp->fullWData(oldp+58,(__Vtemp_3),128);
    bufp->fullBit(oldp+62,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg));
    bufp->fullQData(oldp+63,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg),64);
    bufp->fullWData(oldp+65,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg),129);
    bufp->fullCData(oldp+70,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg),2);
    bufp->fullCData(oldp+71,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count),8);
    bufp->fullWData(oldp+72,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp),65);
    __Vtemp_4[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U];
    __Vtemp_4[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U];
    __Vtemp_4[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U];
    __Vtemp_4[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U];
    bufp->fullWData(oldp+75,(__Vtemp_4),128);
    bufp->fullBit(oldp+79,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg));
    bufp->fullQData(oldp+80,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg),64);
    bufp->fullWData(oldp+82,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg),129);
    bufp->fullCData(oldp+87,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg),2);
    bufp->fullCData(oldp+88,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count),8);
    bufp->fullWData(oldp+89,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp),65);
    bufp->fullBit(oldp+92,(vlSelf->Testbench__DOT__error));
    bufp->fullBit(oldp+93,(vlSelf->Testbench__DOT__judge__DOT__request));
    bufp->fullWData(oldp+94,(vlSelf->Testbench__DOT__judge__DOT__mid[0]),128);
    bufp->fullWData(oldp+98,(vlSelf->Testbench__DOT__judge__DOT__mid[1]),128);
    bufp->fullWData(oldp+102,(vlSelf->Testbench__DOT__judge__DOT__mid[2]),128);
    bufp->fullWData(oldp+106,(vlSelf->Testbench__DOT__judge__DOT__mid[3]),128);
    bufp->fullWData(oldp+110,(vlSelf->Testbench__DOT__judge__DOT__sum),128);
    bufp->fullWData(oldp+114,(vlSelf->Testbench__DOT__judge__DOT__simulate_result),128);
    bufp->fullIData(oldp+118,(vlSelf->Testbench__DOT__judge__DOT__i),32);
    bufp->fullBit(oldp+119,(vlSelf->Testbench__DOT__in_ready));
    bufp->fullWData(oldp+120,(vlSelf->Testbench__DOT__result),128);
    bufp->fullBit(oldp+124,(vlSelf->Testbench__DOT__out_valid));
    bufp->fullQData(oldp+125,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[0U]),64);
    bufp->fullQData(oldp+127,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[1U]),64);
    bufp->fullQData(oldp+129,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[2U]),64);
    bufp->fullQData(oldp+131,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[3U]),64);
    bufp->fullBit(oldp+133,(vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid));
    bufp->fullBit(oldp+134,(vlSelf->Testbench__DOT__conv_unit__DOT__ex_ready));
    bufp->fullWData(oldp+135,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[0]),128);
    bufp->fullWData(oldp+139,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[1]),128);
    bufp->fullWData(oldp+143,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[2]),128);
    bufp->fullWData(oldp+147,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[3]),128);
    bufp->fullWData(oldp+151,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0]),128);
    bufp->fullWData(oldp+155,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1]),128);
    bufp->fullWData(oldp+159,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2]),128);
    bufp->fullWData(oldp+163,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3]),128);
    bufp->fullWData(oldp+167,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                              [0U].__PVT__data),128);
    bufp->fullBit(oldp+171,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                            [0U].__PVT__valid));
    bufp->fullWData(oldp+172,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                              [1U].__PVT__data),128);
    bufp->fullBit(oldp+176,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                            [1U].__PVT__valid));
    bufp->fullWData(oldp+177,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                              [2U].__PVT__data),128);
    bufp->fullBit(oldp+181,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                            [2U].__PVT__valid));
    bufp->fullWData(oldp+182,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                              [3U].__PVT__data),128);
    bufp->fullBit(oldp+186,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                            [3U].__PVT__valid));
    bufp->fullWData(oldp+187,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                              .__PVT__data),128);
    bufp->fullBit(oldp+191,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                            .__PVT__valid));
    bufp->fullCData(oldp+192,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg),2);
    bufp->fullIData(oldp+193,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__j),32);
    bufp->fullQData(oldp+194,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[0U]),64);
    bufp->fullQData(oldp+196,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[1U]),64);
    bufp->fullQData(oldp+198,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[2U]),64);
    bufp->fullQData(oldp+200,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[3U]),64);
    bufp->fullBit(oldp+202,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg));
    bufp->fullQData(oldp+203,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[0]),64);
    bufp->fullQData(oldp+205,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[1]),64);
    bufp->fullQData(oldp+207,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[2]),64);
    bufp->fullQData(oldp+209,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[3]),64);
    bufp->fullIData(oldp+211,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__i),32);
    bufp->fullBit(oldp+212,(vlSelf->Testbench__DOT__clk));
}
