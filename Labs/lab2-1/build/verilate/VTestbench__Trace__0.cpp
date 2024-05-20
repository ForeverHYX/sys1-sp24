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
        bufp->chgIData(oldp+0,(vlSelf->Testbench__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelf->Testbench__DOT__b),32);
        bufp->chgBit(oldp+2,(vlSelf->Testbench__DOT__do_sub));
        bufp->chgIData(oldp+3,((- (IData)((IData)(vlSelf->Testbench__DOT__do_sub)))),32);
        bufp->chgBit(oldp+4,((1U & vlSelf->Testbench__DOT__a)));
        bufp->chgBit(oldp+5,((1U & (vlSelf->Testbench__DOT__a 
                                    >> 0xaU))));
        bufp->chgBit(oldp+6,((1U & (vlSelf->Testbench__DOT__a 
                                    >> 0xbU))));
        bufp->chgBit(oldp+7,((1U & (vlSelf->Testbench__DOT__a 
                                    >> 0xcU))));
        bufp->chgBit(oldp+8,((1U & (vlSelf->Testbench__DOT__a 
                                    >> 0xdU))));
        bufp->chgBit(oldp+9,((1U & (vlSelf->Testbench__DOT__a 
                                    >> 0xeU))));
        bufp->chgBit(oldp+10,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+11,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+12,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+13,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+14,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+15,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 1U))));
        bufp->chgBit(oldp+16,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x14U))));
        bufp->chgBit(oldp+17,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x15U))));
        bufp->chgBit(oldp+18,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x16U))));
        bufp->chgBit(oldp+19,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x17U))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x18U))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x19U))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 2U))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+28,((vlSelf->Testbench__DOT__a 
                               >> 0x1fU)));
        bufp->chgBit(oldp+29,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 3U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 4U))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 5U))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 6U))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 7U))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 8U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->Testbench__DOT__a 
                                     >> 9U))));
        bufp->chgIData(oldp+36,((IData)((0x1ffffffffULL 
                                         & ((IData)(vlSelf->Testbench__DOT__do_sub)
                                             ? ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                - (0x100000000ULL 
                                                   | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                             : ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                + (QData)((IData)(vlSelf->Testbench__DOT__b))))))),32);
        bufp->chgBit(oldp+37,((1U & (IData)((1ULL & 
                                             (((IData)(vlSelf->Testbench__DOT__do_sub)
                                                ? ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                   - 
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                                : ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                   + (QData)((IData)(vlSelf->Testbench__DOT__b)))) 
                                              >> 0x20U))))));
        bufp->chgIData(oldp+38,(vlSelf->Testbench__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [3U]) | vlSelf->__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+39,(((0x80000000U & ((0x80000000U 
                                                  & (vlSelf->Testbench__DOT__a 
                                                     ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                 ^ 
                                                 ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                                  << 0x1fU))) 
                                 | ((0x40000000U & 
                                     ((0xc0000000U 
                                       & (vlSelf->Testbench__DOT__a 
                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                      ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                         << 0x1eU))) 
                                    | ((0x20000000U 
                                        & ((0xe0000000U 
                                            & (vlSelf->Testbench__DOT__a 
                                               ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                           ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                              << 0x1dU))) 
                                       | ((0x10000000U 
                                           & ((0xf0000000U 
                                               & (vlSelf->Testbench__DOT__a 
                                                  ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                              ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                                 << 0x1cU))) 
                                          | ((0x8000000U 
                                              & ((0xf8000000U 
                                                  & (vlSelf->Testbench__DOT__a 
                                                     ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                 ^ 
                                                 ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                  << 0x1bU))) 
                                             | ((0x4000000U 
                                                 & ((0xfc000000U 
                                                     & (vlSelf->Testbench__DOT__a 
                                                        ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                    ^ 
                                                    ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                                     << 0x1aU))) 
                                                | ((0x2000000U 
                                                    & ((0xfe000000U 
                                                        & (vlSelf->Testbench__DOT__a 
                                                           ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                       ^ 
                                                       ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                                        << 0x19U))) 
                                                   | ((0x1000000U 
                                                       & ((0xff000000U 
                                                           & (vlSelf->Testbench__DOT__a 
                                                              ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                          ^ 
                                                          ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
                                                           << 0x18U))) 
                                                      | ((0x800000U 
                                                          & ((0xff800000U 
                                                              & (vlSelf->Testbench__DOT__a 
                                                                 ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                             ^ 
                                                             ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in) 
                                                              << 0x17U))) 
                                                         | ((0x400000U 
                                                             & ((0xffc00000U 
                                                                 & (vlSelf->Testbench__DOT__a 
                                                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                ^ 
                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in) 
                                                                 << 0x16U))) 
                                                            | ((0x200000U 
                                                                & ((0xffe00000U 
                                                                    & (vlSelf->Testbench__DOT__a 
                                                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in) 
                                                                    << 0x15U))) 
                                                               | ((0x100000U 
                                                                   & ((0xfff00000U 
                                                                       & (vlSelf->Testbench__DOT__a 
                                                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in) 
                                                                       << 0x14U))) 
                                                                  | ((0x80000U 
                                                                      & ((0xfff80000U 
                                                                          & (vlSelf->Testbench__DOT__a 
                                                                             ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in) 
                                                                          << 0x13U))) 
                                                                     | ((0x40000U 
                                                                         & ((0xfffc0000U 
                                                                             & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                            ^ 
                                                                            ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in) 
                                                                             << 0x12U))) 
                                                                        | ((0x20000U 
                                                                            & ((0xfffe0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                               ^ 
                                                                               ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in) 
                                                                                << 0x11U))) 
                                                                           | ((0x10000U 
                                                                               & ((0xffff0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in) 
                                                                                << 0x10U))) 
                                                                              | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in) 
                                                                                << 0xfU))) 
                                                                                | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                                                ^ (IData)(vlSelf->Testbench__DOT__do_sub))))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+40,((1U & ((((vlSelf->Testbench__DOT__a 
                                        ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                       >> 0x1fU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                                     | ((vlSelf->Testbench__DOT__a 
                                         & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                        >> 0x1fU)))));
        bufp->chgBit(oldp+41,((1U & (~ (((1U & (IData)(
                                                       (1ULL 
                                                        & (((IData)(vlSelf->Testbench__DOT__do_sub)
                                                             ? 
                                                            ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                             - 
                                                             (0x100000000ULL 
                                                              | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                                             : 
                                                            ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                             + (QData)((IData)(vlSelf->Testbench__DOT__b)))) 
                                                           >> 0x20U)))) 
                                         == (1U & (
                                                   (((vlSelf->Testbench__DOT__a 
                                                      ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                     >> 0x1fU) 
                                                    & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                                                   | ((vlSelf->Testbench__DOT__a 
                                                       & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                      >> 0x1fU)))) 
                                        & ((IData)(
                                                   (0x1ffffffffULL 
                                                    & ((IData)(vlSelf->Testbench__DOT__do_sub)
                                                        ? 
                                                       ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                        - 
                                                        (0x100000000ULL 
                                                         | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                                        : 
                                                       ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                        + (QData)((IData)(vlSelf->Testbench__DOT__b)))))) 
                                           == ((0x80000000U 
                                                & ((0x80000000U 
                                                    & (vlSelf->Testbench__DOT__a 
                                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                   ^ 
                                                   ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                                    << 0x1fU))) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & (vlSelf->Testbench__DOT__a 
                                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & (vlSelf->Testbench__DOT__a 
                                                             ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                         ^ 
                                                         ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & (vlSelf->Testbench__DOT__a 
                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                            ^ 
                                                            ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                                             << 0x1cU))) 
                                                        | ((0x8000000U 
                                                            & ((0xf8000000U 
                                                                & (vlSelf->Testbench__DOT__a 
                                                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                               ^ 
                                                               ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                                << 0x1bU))) 
                                                           | ((0x4000000U 
                                                               & ((0xfc000000U 
                                                                   & (vlSelf->Testbench__DOT__a 
                                                                      ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                                                   << 0x1aU))) 
                                                              | ((0x2000000U 
                                                                  & ((0xfe000000U 
                                                                      & (vlSelf->Testbench__DOT__a 
                                                                         ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                     ^ 
                                                                     ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                                                      << 0x19U))) 
                                                                 | ((0x1000000U 
                                                                     & ((0xff000000U 
                                                                         & (vlSelf->Testbench__DOT__a 
                                                                            ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                        ^ 
                                                                        ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
                                                                         << 0x18U))) 
                                                                    | ((0x800000U 
                                                                        & ((0xff800000U 
                                                                            & (vlSelf->Testbench__DOT__a 
                                                                               ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                           ^ 
                                                                           ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in) 
                                                                            << 0x17U))) 
                                                                       | ((0x400000U 
                                                                           & ((0xffc00000U 
                                                                               & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                              ^ 
                                                                              ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in) 
                                                                               << 0x16U))) 
                                                                          | ((0x200000U 
                                                                              & ((0xffe00000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in) 
                                                                                << 0x15U))) 
                                                                             | ((0x100000U 
                                                                                & ((0xfff00000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in) 
                                                                                << 0x14U))) 
                                                                                | ((0x80000U 
                                                                                & ((0xfff80000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in) 
                                                                                << 0x13U))) 
                                                                                | ((0x40000U 
                                                                                & ((0xfffc0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in) 
                                                                                << 0x12U))) 
                                                                                | ((0x20000U 
                                                                                & ((0xfffe0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in) 
                                                                                << 0x11U))) 
                                                                                | ((0x10000U 
                                                                                & ((0xffff0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in) 
                                                                                << 0x10U))) 
                                                                                | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in) 
                                                                                << 0xfU))) 
                                                                                | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                                                ^ (IData)(vlSelf->Testbench__DOT__do_sub))))))))))))))))))))))))))))))))))))))));
        bufp->chgQData(oldp+42,((((QData)((IData)((1U 
                                                   & ((((vlSelf->Testbench__DOT__a 
                                                         ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                        >> 0x1fU) 
                                                       & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                                                      | ((vlSelf->Testbench__DOT__a 
                                                          & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                         >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Testbench__DOT__do_sub)))))))))))))))))))))))))))))))))))),33);
        bufp->chgBit(oldp+44,((1U & ((vlSelf->Testbench__DOT__a 
                                      ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                     ^ (IData)(vlSelf->Testbench__DOT__do_sub)))));
        bufp->chgBit(oldp+45,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0xaU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+46,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0xbU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+47,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0xcU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+48,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0xdU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+49,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0xeU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+50,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0xfU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+51,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x10U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+52,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x11U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+53,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x12U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+54,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x13U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+55,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 1U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+56,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x14U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+57,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x15U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+58,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x16U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+59,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x17U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+60,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x18U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+61,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x19U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+62,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x1aU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+63,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x1bU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+64,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x1cU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+65,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x1dU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+66,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 2U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+67,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x1eU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+68,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 0x1fU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+69,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 3U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+70,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 4U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+71,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 5U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+72,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 6U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+73,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 7U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+74,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 8U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in)))));
        bufp->chgBit(oldp+75,((1U & (((vlSelf->Testbench__DOT__a 
                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                      >> 9U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+76,(vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b),32);
        bufp->chgBit(oldp+77,((1U & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)));
        bufp->chgBit(oldp+78,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+79,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+80,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+81,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+82,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+83,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+84,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+85,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+86,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+87,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+88,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+89,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+90,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+91,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+92,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+93,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+94,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+95,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+96,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0x12U))));
        bufp->chgBit(oldp+97,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+98,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                     >> 0x13U))));
        bufp->chgBit(oldp+99,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+100,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 1U))));
        bufp->chgBit(oldp+101,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+102,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+103,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+104,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+105,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+106,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+107,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+108,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+109,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+110,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+111,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+112,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+113,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+114,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+115,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+116,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+117,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+118,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+119,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+120,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+121,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+122,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 2U))));
        bufp->chgBit(oldp+123,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+124,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+125,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+126,((vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+127,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 3U))));
        bufp->chgBit(oldp+128,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+129,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 4U))));
        bufp->chgBit(oldp+130,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+131,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 5U))));
        bufp->chgBit(oldp+132,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+133,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 6U))));
        bufp->chgBit(oldp+134,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+135,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 7U))));
        bufp->chgBit(oldp+136,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+137,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 8U))));
        bufp->chgBit(oldp+138,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in));
        bufp->chgBit(oldp+139,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                      >> 9U))));
    }
    bufp->chgBit(oldp+140,(vlSelf->Testbench__DOT__clk));
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
