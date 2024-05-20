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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->Testbench__DOT__I),8);
        bufp->chgCData(oldp+1,(vlSelf->Testbench__DOT__S),3);
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                    >> 4U))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                    >> 5U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                    >> 6U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                    >> 7U))));
        bufp->chgCData(oldp+6,((3U & (IData)(vlSelf->Testbench__DOT__S))),2);
        bufp->chgBit(oldp+7,((1U & (~ ((IData)(vlSelf->Testbench__DOT__S) 
                                       >> 1U)))));
        bufp->chgBit(oldp+8,((1U & (~ (IData)(vlSelf->Testbench__DOT__S)))));
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelf->Testbench__DOT__S))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->Testbench__DOT__S) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & (IData)(vlSelf->Testbench__DOT__I))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                     >> 1U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                     >> 2U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->Testbench__DOT__I) 
                                     >> 3U))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [3U]) | vlSelf->__Vm_traceActivity
                     [4U]))) {
        bufp->chgBit(oldp+15,(((4U & (IData)(vlSelf->Testbench__DOT__S))
                                ? (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                                    & ((IData)(vlSelf->Testbench__DOT__I) 
                                       >> 4U)) | (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                                                   & ((IData)(vlSelf->Testbench__DOT__I) 
                                                      >> 5U)) 
                                                  | ((((IData)(vlSelf->Testbench__DOT__I) 
                                                       >> 6U) 
                                                      & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2)) 
                                                     | ((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                                                        & ((IData)(vlSelf->Testbench__DOT__I) 
                                                           >> 7U)))))
                                : (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                                    & (IData)(vlSelf->Testbench__DOT__I)) 
                                   | (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                                       & ((IData)(vlSelf->Testbench__DOT__I) 
                                          >> 1U)) | 
                                      ((((IData)(vlSelf->Testbench__DOT__I) 
                                         >> 2U) & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2)) 
                                       | ((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                                          & ((IData)(vlSelf->Testbench__DOT__I) 
                                             >> 3U))))))));
        bufp->chgCData(oldp+16,((((0x1ffffffeU & (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->Testbench__DOT__I) 
                                                     >> 3U))) 
                                  | ((0xffffffeU & 
                                      (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                                        << 1U) & ((IData)(vlSelf->Testbench__DOT__I) 
                                                  >> 4U))) 
                                     | ((0x7fffffeU 
                                         & (((IData)(vlSelf->Testbench__DOT__I) 
                                             >> 5U) 
                                            & ((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2) 
                                               << 1U))) 
                                        | (0x3fffffeU 
                                           & (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                                               << 1U) 
                                              & ((IData)(vlSelf->Testbench__DOT__I) 
                                                 >> 6U)))))) 
                                 | (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                                     & (IData)(vlSelf->Testbench__DOT__I)) 
                                    | (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                                        & ((IData)(vlSelf->Testbench__DOT__I) 
                                           >> 1U)) 
                                       | ((((IData)(vlSelf->Testbench__DOT__I) 
                                            >> 2U) 
                                           & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2)) 
                                          | ((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                                             & ((IData)(vlSelf->Testbench__DOT__I) 
                                                >> 3U))))))),2);
        bufp->chgBit(oldp+17,((((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                                & ((IData)(vlSelf->Testbench__DOT__I) 
                                   >> 4U)) | (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                                               & ((IData)(vlSelf->Testbench__DOT__I) 
                                                  >> 5U)) 
                                              | ((((IData)(vlSelf->Testbench__DOT__I) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2)) 
                                                 | ((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                                                    & ((IData)(vlSelf->Testbench__DOT__I) 
                                                       >> 7U)))))));
        bufp->chgBit(oldp+18,(((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                               & ((IData)(vlSelf->Testbench__DOT__I) 
                                  >> 5U))));
        bufp->chgBit(oldp+19,(((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                               & ((IData)(vlSelf->Testbench__DOT__I) 
                                  >> 4U))));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                               & ((IData)(vlSelf->Testbench__DOT__I) 
                                  >> 7U))));
        bufp->chgBit(oldp+21,((((IData)(vlSelf->Testbench__DOT__I) 
                                >> 6U) & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2))));
        bufp->chgBit(oldp+22,((((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                                & (IData)(vlSelf->Testbench__DOT__I)) 
                               | (((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                                   & ((IData)(vlSelf->Testbench__DOT__I) 
                                      >> 1U)) | ((((IData)(vlSelf->Testbench__DOT__I) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2)) 
                                                 | ((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                                                    & ((IData)(vlSelf->Testbench__DOT__I) 
                                                       >> 3U)))))));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1) 
                               & ((IData)(vlSelf->Testbench__DOT__I) 
                                  >> 1U))));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1) 
                               & (IData)(vlSelf->Testbench__DOT__I))));
        bufp->chgBit(oldp+25,(((IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1) 
                               & ((IData)(vlSelf->Testbench__DOT__I) 
                                  >> 3U))));
        bufp->chgBit(oldp+26,((((IData)(vlSelf->Testbench__DOT__I) 
                                >> 2U) & (IData)(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2))));
    }
    bufp->chgBit(oldp+27,(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2));
    bufp->chgBit(oldp+28,(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1));
    bufp->chgBit(oldp+29,(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1));
    bufp->chgBit(oldp+30,(vlSelf->Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1));
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
}
