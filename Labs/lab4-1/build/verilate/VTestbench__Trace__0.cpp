// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->Testbench__DOT__rst));
        bufp->chgQData(oldp+1,(vlSelf->Testbench__DOT__in_data),64);
        bufp->chgQData(oldp+3,(vlSelf->Testbench__DOT__kernel
                               .__PVT__data[0U]),64);
        bufp->chgQData(oldp+5,(vlSelf->Testbench__DOT__kernel
                               .__PVT__data[1U]),64);
        bufp->chgQData(oldp+7,(vlSelf->Testbench__DOT__kernel
                               .__PVT__data[2U]),64);
        bufp->chgQData(oldp+9,(vlSelf->Testbench__DOT__kernel
                               .__PVT__data[3U]),64);
        bufp->chgBit(oldp+11,(vlSelf->Testbench__DOT__in_valid));
        bufp->chgIData(oldp+12,(vlSelf->Testbench__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelf->Testbench__DOT__j),32);
        bufp->chgIData(oldp+14,(vlSelf->Testbench__DOT__seed),32);
        bufp->chgQData(oldp+15,(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[0U]),64);
        bufp->chgQData(oldp+17,(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[1U]),64);
        bufp->chgQData(oldp+19,(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[2U]),64);
        bufp->chgQData(oldp+21,(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[3U]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        __Vtemp_1[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U];
        __Vtemp_1[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U];
        __Vtemp_1[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U];
        __Vtemp_1[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U];
        bufp->chgWData(oldp+23,(__Vtemp_1),128);
        bufp->chgBit(oldp+27,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg));
        bufp->chgQData(oldp+28,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg),64);
        bufp->chgWData(oldp+30,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg),129);
        bufp->chgCData(oldp+35,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg),2);
        bufp->chgCData(oldp+36,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count),8);
        bufp->chgWData(oldp+37,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp),65);
        __Vtemp_2[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U];
        __Vtemp_2[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U];
        __Vtemp_2[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U];
        __Vtemp_2[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U];
        bufp->chgWData(oldp+40,(__Vtemp_2),128);
        bufp->chgBit(oldp+44,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg));
        bufp->chgQData(oldp+45,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg),64);
        bufp->chgWData(oldp+47,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg),129);
        bufp->chgCData(oldp+52,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg),2);
        bufp->chgCData(oldp+53,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count),8);
        bufp->chgWData(oldp+54,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp),65);
        __Vtemp_3[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U];
        __Vtemp_3[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U];
        __Vtemp_3[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U];
        __Vtemp_3[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U];
        bufp->chgWData(oldp+57,(__Vtemp_3),128);
        bufp->chgBit(oldp+61,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg));
        bufp->chgQData(oldp+62,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg),64);
        bufp->chgWData(oldp+64,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg),129);
        bufp->chgCData(oldp+69,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg),2);
        bufp->chgCData(oldp+70,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count),8);
        bufp->chgWData(oldp+71,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp),65);
        __Vtemp_4[0U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U];
        __Vtemp_4[1U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U];
        __Vtemp_4[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U];
        __Vtemp_4[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U];
        bufp->chgWData(oldp+74,(__Vtemp_4),128);
        bufp->chgBit(oldp+78,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg));
        bufp->chgQData(oldp+79,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg),64);
        bufp->chgWData(oldp+81,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg),129);
        bufp->chgCData(oldp+86,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg),2);
        bufp->chgCData(oldp+87,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count),8);
        bufp->chgWData(oldp+88,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp),65);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+91,(vlSelf->Testbench__DOT__error));
        bufp->chgBit(oldp+92,(vlSelf->Testbench__DOT__judge__DOT__request));
        bufp->chgWData(oldp+93,(vlSelf->Testbench__DOT__judge__DOT__mid[0]),128);
        bufp->chgWData(oldp+97,(vlSelf->Testbench__DOT__judge__DOT__mid[1]),128);
        bufp->chgWData(oldp+101,(vlSelf->Testbench__DOT__judge__DOT__mid[2]),128);
        bufp->chgWData(oldp+105,(vlSelf->Testbench__DOT__judge__DOT__mid[3]),128);
        bufp->chgWData(oldp+109,(vlSelf->Testbench__DOT__judge__DOT__sum),128);
        bufp->chgWData(oldp+113,(vlSelf->Testbench__DOT__judge__DOT__simulate_result),128);
        bufp->chgIData(oldp+117,(vlSelf->Testbench__DOT__judge__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+118,(vlSelf->Testbench__DOT__in_ready));
        bufp->chgWData(oldp+119,(vlSelf->Testbench__DOT__result),128);
        bufp->chgBit(oldp+123,(vlSelf->Testbench__DOT__out_valid));
        bufp->chgQData(oldp+124,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[0U]),64);
        bufp->chgQData(oldp+126,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[1U]),64);
        bufp->chgQData(oldp+128,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[2U]),64);
        bufp->chgQData(oldp+130,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[3U]),64);
        bufp->chgBit(oldp+132,(vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid));
        bufp->chgBit(oldp+133,(vlSelf->Testbench__DOT__conv_unit__DOT__ex_ready));
        bufp->chgWData(oldp+134,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[0]),128);
        bufp->chgWData(oldp+138,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[1]),128);
        bufp->chgWData(oldp+142,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[2]),128);
        bufp->chgWData(oldp+146,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[3]),128);
        bufp->chgWData(oldp+150,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0]),128);
        bufp->chgWData(oldp+154,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1]),128);
        bufp->chgWData(oldp+158,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2]),128);
        bufp->chgWData(oldp+162,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3]),128);
        bufp->chgWData(oldp+166,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                                 [0U].__PVT__data),128);
        bufp->chgBit(oldp+170,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                               [0U].__PVT__valid));
        bufp->chgWData(oldp+171,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                                 [1U].__PVT__data),128);
        bufp->chgBit(oldp+175,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                               [1U].__PVT__valid));
        bufp->chgWData(oldp+176,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                                 [2U].__PVT__data),128);
        bufp->chgBit(oldp+180,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                               [2U].__PVT__valid));
        bufp->chgWData(oldp+181,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                                 [3U].__PVT__data),128);
        bufp->chgBit(oldp+185,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                               [3U].__PVT__valid));
        bufp->chgWData(oldp+186,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                                 .__PVT__data),128);
        bufp->chgBit(oldp+190,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                               .__PVT__valid));
        bufp->chgCData(oldp+191,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg),2);
        bufp->chgIData(oldp+192,(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__j),32);
        bufp->chgQData(oldp+193,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[0U]),64);
        bufp->chgQData(oldp+195,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[1U]),64);
        bufp->chgQData(oldp+197,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[2U]),64);
        bufp->chgQData(oldp+199,(vlSelf->Testbench__DOT__conv_unit__DOT__data
                                 .__PVT__data[3U]),64);
        bufp->chgBit(oldp+201,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg));
        bufp->chgQData(oldp+202,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[0]),64);
        bufp->chgQData(oldp+204,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[1]),64);
        bufp->chgQData(oldp+206,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[2]),64);
        bufp->chgQData(oldp+208,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[3]),64);
        bufp->chgIData(oldp+210,(vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__i),32);
    }
    bufp->chgBit(oldp+211,(vlSelf->Testbench__DOT__clk));
}

void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_cleanup\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
