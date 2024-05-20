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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data),8);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt) 
                                    >> 5U))));
        bufp->chgBit(oldp+2,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_endofpacket));
        bufp->chgCData(oldp+3,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state),4);
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                                    >> 0xcU))));
        bufp->chgCData(oldp+5,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync),2);
        bufp->chgCData(oldp+6,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt),2);
        bufp->chgBit(oldp+7,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit));
        bufp->chgCData(oldp+8,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt),3);
        bufp->chgBit(oldp+9,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow));
        bufp->chgCData(oldp+10,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt),6);
        bufp->chgSData(oldp+11,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc),13);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc) 
                                     >> 0xcU))));
        bufp->chgCData(oldp+13,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift),8);
        bufp->chgSData(oldp+14,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+15,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr),4);
        bufp->chgCData(oldp+16,((7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr))),3);
        bufp->chgCData(oldp+17,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0]),4);
        bufp->chgCData(oldp+18,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1]),4);
        bufp->chgBit(oldp+19,((1U & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)))));
        bufp->chgCData(oldp+20,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer),8);
        bufp->chgCData(oldp+21,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr),4);
        bufp->chgCData(oldp+22,((7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr))),3);
        bufp->chgBit(oldp+23,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid));
        bufp->chgCData(oldp+24,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0]),4);
        bufp->chgCData(oldp+25,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1]),4);
        bufp->chgBit(oldp+26,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid));
        bufp->chgCData(oldp+27,(vlSelf->Testbench__DOT__judge__DOT__baud_cnt),3);
        bufp->chgBit(oldp+28,(vlSelf->Testbench__DOT__judge__DOT__baud_clk));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+29,(vlSelf->Testbench__DOT__rxd));
        bufp->chgIData(oldp+30,(vlSelf->Testbench__DOT__judge__DOT__rdata_cnt),32);
        bufp->chgCData(oldp+31,(vlSelf->Testbench__DOT__judge__DOT__rdata_state_reg),2);
        bufp->chgCData(oldp+32,(vlSelf->Testbench__DOT__judge__DOT__rwork_cnt),3);
        bufp->chgCData(oldp+33,(vlSelf->Testbench__DOT__judge__DOT__rdata),8);
        bufp->chgIData(oldp+34,(vlSelf->Testbench__DOT__judge__DOT__next_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+35,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray),4);
        bufp->chgCData(oldp+36,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0]),4);
        bufp->chgCData(oldp+37,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1]),4);
        bufp->chgCData(oldp+38,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray),4);
        bufp->chgCData(oldp+39,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0]),4);
        bufp->chgCData(oldp+40,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+41,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[0]),8);
        bufp->chgCData(oldp+42,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[1]),8);
        bufp->chgCData(oldp+43,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[2]),8);
        bufp->chgCData(oldp+44,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[3]),8);
        bufp->chgCData(oldp+45,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[4]),8);
        bufp->chgCData(oldp+46,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[5]),8);
        bufp->chgCData(oldp+47,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[6]),8);
        bufp->chgCData(oldp+48,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[7]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+49,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready));
        bufp->chgBit(oldp+50,((0U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))));
        bufp->chgBit(oldp+51,((0U != (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))));
        bufp->chgCData(oldp+52,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+53,(vlSelf->Testbench__DOT__error));
        bufp->chgIData(oldp+54,(vlSelf->Testbench__DOT__judge__DOT__tdata_cnt),32);
        bufp->chgCData(oldp+55,(vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg),2);
        bufp->chgCData(oldp+56,(vlSelf->Testbench__DOT__judge__DOT__twork_cnt),3);
        bufp->chgCData(oldp+57,(vlSelf->Testbench__DOT__judge__DOT__tdata),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+58,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full));
        bufp->chgCData(oldp+59,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray),4);
        bufp->chgCData(oldp+60,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp),4);
        bufp->chgBit(oldp+61,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp));
        bufp->chgCData(oldp+62,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray),4);
        bufp->chgCData(oldp+63,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp),4);
        bufp->chgBit(oldp+64,((1U & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+65,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata),8);
        bufp->chgCData(oldp+66,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata),8);
        bufp->chgBit(oldp+67,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid));
        bufp->chgBit(oldp+68,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid));
        bufp->chgBit(oldp+69,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__debug));
        bufp->chgCData(oldp+70,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg),2);
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready));
        bufp->chgCData(oldp+73,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer),8);
        bufp->chgCData(oldp+74,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr),4);
        bufp->chgCData(oldp+75,((7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr))),3);
        bufp->chgBit(oldp+76,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid));
        bufp->chgBit(oldp+77,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp));
        bufp->chgCData(oldp+78,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp),4);
        bufp->chgBit(oldp+79,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.valid));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.data),8);
        bufp->chgCData(oldp+82,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr),4);
        bufp->chgCData(oldp+83,((7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr))),3);
        bufp->chgCData(oldp+84,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp),4);
        bufp->chgBit(oldp+85,((1U & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))));
        bufp->chgBit(oldp+86,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+87,(vlSelf->Testbench__DOT__txd));
        bufp->chgCData(oldp+88,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[0]),8);
        bufp->chgCData(oldp+89,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[1]),8);
        bufp->chgCData(oldp+90,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[2]),8);
        bufp->chgCData(oldp+91,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[3]),8);
        bufp->chgCData(oldp+92,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[4]),8);
        bufp->chgCData(oldp+93,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[5]),8);
        bufp->chgCData(oldp+94,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[6]),8);
        bufp->chgCData(oldp+95,(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[7]),8);
    }
    bufp->chgBit(oldp+96,(vlSelf->Testbench__DOT__clk));
    bufp->chgBit(oldp+97,(vlSelf->Testbench__DOT__rstn));
    bufp->chgIData(oldp+98,(vlSelf->Testbench__DOT__clk_div),32);
    bufp->chgBit(oldp+99,(vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk));
    bufp->chgBit(oldp+100,(((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
                            & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)))));
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
