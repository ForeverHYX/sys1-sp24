// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelf->Testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 
        = vlSelf->Testbench__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__out_valid__0 
        = vlSelf->Testbench__DOT__out_valid;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Testbench__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       19);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__rst = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 4U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 5U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 6U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 7U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 8U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 9U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xaU;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xbU;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xcU;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xdU;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xeU;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xfU;
    vlSelf->Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 1U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 2U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 3U;
    vlSelf->Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__j = 4U;
    vlSelf->Testbench__DOT__in_data = (((QData)((IData)(
                                                        VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed))));
    vlSelf->Testbench__DOT__in_valid = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ba35b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.out_valid)", 
                                                       "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0x10U;
    VL_WRITEF("success!!!\n");
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 33, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 
                                           37);
        vlSelf->Testbench__DOT__clk = (1U & (~ (IData)(vlSelf->Testbench__DOT__clk)));
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->Testbench__DOT__error)) {
        VL_WRITEF("fail!!!\n");
        VL_FINISH_MT("/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 81, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg = 0;
    CData/*7:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = 0;
    QData/*63:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg = 0;
    CData/*7:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = 0;
    QData/*63:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg = 0;
    CData/*7:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = 0;
    QData/*63:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg = 0;
    CData/*7:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<5>/*159:0*/ __Vtemp_48;
    // Body
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg;
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg;
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__ex_ready 
        = vlSelf->Testbench__DOT__conv_unit__DOT__ex_ready;
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2;
    if (vlSelf->Testbench__DOT__rst) {
        if ((0U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg = 0U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid) {
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[4U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg 
                    = vlSelf->Testbench__DOT__kernel
                    .__PVT__data[3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U] 
                    = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[3U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U] 
                    = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__data
                               .__PVT__data[3U] >> 0x20U));
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = 1U;
            } else {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            }
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg))) {
            if ((0x40U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = 2U;
            } else {
                __Vtemp_3[0U] = (IData)((((QData)((IData)(
                                                          vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U]))));
                __Vtemp_3[1U] = (IData)(((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                         >> 0x20U));
                __Vtemp_3[2U] = 0U;
                __Vtemp_4[0U] = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg);
                __Vtemp_4[1U] = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg 
                                         >> 0x20U));
                __Vtemp_4[2U] = 0U;
                VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
                if ((1U & vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U])) {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = __Vtemp_5[0U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = __Vtemp_5[1U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[2U] 
                        = (1U & __Vtemp_5[2U]);
                } else {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U]))));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                   >> 0x20U));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                }
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count)));
                __Vtemp_11[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U]))));
                __Vtemp_11[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U]))) 
                                          >> 0x20U));
                __Vtemp_11[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[0U];
                __Vtemp_11[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[1U];
                __Vtemp_11[4U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp[2U];
                VL_SHIFTR_WWI(129,129,32, __Vtemp_12, __Vtemp_11, 1U);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U] 
                    = __Vtemp_12[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U] 
                    = __Vtemp_12[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U] 
                    = __Vtemp_12[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U] 
                    = __Vtemp_12[3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[4U] 
                    = (1U & __Vtemp_12[4U]);
            }
        } else if ((2U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg = 1U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count = 0U;
        }
        if ((0U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg = 0U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid) {
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[4U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg 
                    = vlSelf->Testbench__DOT__kernel
                    .__PVT__data[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U] 
                    = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[2U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U] 
                    = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__data
                               .__PVT__data[2U] >> 0x20U));
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = 1U;
            } else {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            }
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg))) {
            if ((0x40U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = 2U;
            } else {
                __Vtemp_15[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U]))));
                __Vtemp_15[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                          >> 0x20U));
                __Vtemp_15[2U] = 0U;
                __Vtemp_16[0U] = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg);
                __Vtemp_16[1U] = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg 
                                          >> 0x20U));
                __Vtemp_16[2U] = 0U;
                VL_ADD_W(3, __Vtemp_17, __Vtemp_15, __Vtemp_16);
                if ((1U & vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U])) {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = __Vtemp_17[0U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = __Vtemp_17[1U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[2U] 
                        = (1U & __Vtemp_17[2U]);
                } else {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U]))));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                   >> 0x20U));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                }
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count)));
                __Vtemp_23[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U]))));
                __Vtemp_23[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U]))) 
                                          >> 0x20U));
                __Vtemp_23[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[0U];
                __Vtemp_23[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[1U];
                __Vtemp_23[4U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp[2U];
                VL_SHIFTR_WWI(129,129,32, __Vtemp_24, __Vtemp_23, 1U);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U] 
                    = __Vtemp_24[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U] 
                    = __Vtemp_24[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U] 
                    = __Vtemp_24[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U] 
                    = __Vtemp_24[3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[4U] 
                    = (1U & __Vtemp_24[4U]);
            }
        } else if ((2U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg = 1U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count = 0U;
        }
        if ((0U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg = 0U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid) {
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[4U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg 
                    = vlSelf->Testbench__DOT__kernel
                    .__PVT__data[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U] 
                    = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[1U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U] 
                    = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__data
                               .__PVT__data[1U] >> 0x20U));
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = 1U;
            } else {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            }
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg))) {
            if ((0x40U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = 2U;
            } else {
                __Vtemp_27[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U]))));
                __Vtemp_27[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                          >> 0x20U));
                __Vtemp_27[2U] = 0U;
                __Vtemp_28[0U] = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg);
                __Vtemp_28[1U] = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg 
                                          >> 0x20U));
                __Vtemp_28[2U] = 0U;
                VL_ADD_W(3, __Vtemp_29, __Vtemp_27, __Vtemp_28);
                if ((1U & vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U])) {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = __Vtemp_29[0U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = __Vtemp_29[1U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[2U] 
                        = (1U & __Vtemp_29[2U]);
                } else {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U]))));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                   >> 0x20U));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                }
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count)));
                __Vtemp_35[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U]))));
                __Vtemp_35[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U]))) 
                                          >> 0x20U));
                __Vtemp_35[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[0U];
                __Vtemp_35[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[1U];
                __Vtemp_35[4U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp[2U];
                VL_SHIFTR_WWI(129,129,32, __Vtemp_36, __Vtemp_35, 1U);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U] 
                    = __Vtemp_36[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U] 
                    = __Vtemp_36[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U] 
                    = __Vtemp_36[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U] 
                    = __Vtemp_36[3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[4U] 
                    = (1U & __Vtemp_36[4U]);
            }
        } else if ((2U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg = 1U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count = 0U;
        }
        if ((0U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg = 0U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid) {
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[4U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[0U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[1U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg 
                    = vlSelf->Testbench__DOT__kernel
                    .__PVT__data[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U] 
                    = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__data
                              .__PVT__data[0U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U] 
                    = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__data
                               .__PVT__data[0U] >> 0x20U));
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U] = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U] = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = 1U;
            } else {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            }
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg))) {
            if ((0x40U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = 2U;
            } else {
                __Vtemp_39[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U]))));
                __Vtemp_39[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                          >> 0x20U));
                __Vtemp_39[2U] = 0U;
                __Vtemp_40[0U] = (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg);
                __Vtemp_40[1U] = (IData)((vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg 
                                          >> 0x20U));
                __Vtemp_40[2U] = 0U;
                VL_ADD_W(3, __Vtemp_41, __Vtemp_39, __Vtemp_40);
                if ((1U & vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U])) {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = __Vtemp_41[0U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = __Vtemp_41[1U];
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[2U] 
                        = (1U & __Vtemp_41[2U]);
                } else {
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U]))));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[1U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U]))) 
                                   >> 0x20U));
                    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[2U] = 0U;
                }
                __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count)));
                __Vtemp_47[0U] = (IData)((((QData)((IData)(
                                                           vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U]))));
                __Vtemp_47[1U] = (IData)(((((QData)((IData)(
                                                            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U]))) 
                                          >> 0x20U));
                __Vtemp_47[2U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[0U];
                __Vtemp_47[3U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[1U];
                __Vtemp_47[4U] = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp[2U];
                VL_SHIFTR_WWI(129,129,32, __Vtemp_48, __Vtemp_47, 1U);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U] 
                    = __Vtemp_48[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U] 
                    = __Vtemp_48[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U] 
                    = __Vtemp_48[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U] 
                    = __Vtemp_48[3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[4U] 
                    = (1U & __Vtemp_48[4U]);
            }
        } else if ((2U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg))) {
            vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg = 1U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
            __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count = 0U;
        }
    } else {
        __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = 0U;
    }
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    // Body
    if (vlSelf->Testbench__DOT__judge__DOT__request) {
        __Vtemp_1[0U] = (IData)(vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(0U));
        __Vtemp_1[1U] = (IData)((vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(0U) 
                                 >> 0x20U));
        __Vtemp_1[2U] = 0U;
        __Vtemp_1[3U] = 0U;
        __Vtemp_2[0U] = (IData)(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[0U]);
        __Vtemp_2[1U] = (IData)((vlSelf->Testbench__DOT__kernel
                                 .__PVT__data[0U] >> 0x20U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_MUL_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelf->Testbench__DOT__judge__DOT__mid[0U][0U] 
            = __Vtemp_3[0U];
        vlSelf->Testbench__DOT__judge__DOT__mid[0U][1U] 
            = __Vtemp_3[1U];
        vlSelf->Testbench__DOT__judge__DOT__mid[0U][2U] 
            = __Vtemp_3[2U];
        vlSelf->Testbench__DOT__judge__DOT__mid[0U][3U] 
            = __Vtemp_3[3U];
        vlSelf->Testbench__DOT__judge__DOT__i = 4U;
        __Vtemp_4[0U] = (IData)(vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(1U));
        __Vtemp_4[1U] = (IData)((vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(1U) 
                                 >> 0x20U));
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_5[0U] = (IData)(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[1U]);
        __Vtemp_5[1U] = (IData)((vlSelf->Testbench__DOT__kernel
                                 .__PVT__data[1U] >> 0x20U));
        __Vtemp_5[2U] = 0U;
        __Vtemp_5[3U] = 0U;
        VL_MUL_W(4, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        vlSelf->Testbench__DOT__judge__DOT__mid[1U][0U] 
            = __Vtemp_6[0U];
        vlSelf->Testbench__DOT__judge__DOT__mid[1U][1U] 
            = __Vtemp_6[1U];
        vlSelf->Testbench__DOT__judge__DOT__mid[1U][2U] 
            = __Vtemp_6[2U];
        vlSelf->Testbench__DOT__judge__DOT__mid[1U][3U] 
            = __Vtemp_6[3U];
        __Vtemp_7[0U] = (IData)(vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(2U));
        __Vtemp_7[1U] = (IData)((vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(2U) 
                                 >> 0x20U));
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_8[0U] = (IData)(vlSelf->Testbench__DOT__kernel
                                .__PVT__data[2U]);
        __Vtemp_8[1U] = (IData)((vlSelf->Testbench__DOT__kernel
                                 .__PVT__data[2U] >> 0x20U));
        __Vtemp_8[2U] = 0U;
        __Vtemp_8[3U] = 0U;
        VL_MUL_W(4, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        vlSelf->Testbench__DOT__judge__DOT__mid[2U][0U] 
            = __Vtemp_9[0U];
        vlSelf->Testbench__DOT__judge__DOT__mid[2U][1U] 
            = __Vtemp_9[1U];
        vlSelf->Testbench__DOT__judge__DOT__mid[2U][2U] 
            = __Vtemp_9[2U];
        vlSelf->Testbench__DOT__judge__DOT__mid[2U][3U] 
            = __Vtemp_9[3U];
        __Vtemp_10[0U] = (IData)(vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(3U));
        __Vtemp_10[1U] = (IData)((vlSelf->Testbench__DOT__judge__DOT__dataQueue.at(3U) 
                                  >> 0x20U));
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_11[0U] = (IData)(vlSelf->Testbench__DOT__kernel
                                 .__PVT__data[3U]);
        __Vtemp_11[1U] = (IData)((vlSelf->Testbench__DOT__kernel
                                  .__PVT__data[3U] 
                                  >> 0x20U));
        __Vtemp_11[2U] = 0U;
        __Vtemp_11[3U] = 0U;
        VL_MUL_W(4, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        vlSelf->Testbench__DOT__judge__DOT__mid[3U][0U] 
            = __Vtemp_12[0U];
        vlSelf->Testbench__DOT__judge__DOT__mid[3U][1U] 
            = __Vtemp_12[1U];
        vlSelf->Testbench__DOT__judge__DOT__mid[3U][2U] 
            = __Vtemp_12[2U];
        vlSelf->Testbench__DOT__judge__DOT__mid[3U][3U] 
            = __Vtemp_12[3U];
        vlSelf->Testbench__DOT__judge__DOT__sum[0U] 
            = vlSelf->Testbench__DOT__judge__DOT__mid
            [0U][0U];
        vlSelf->Testbench__DOT__judge__DOT__sum[1U] 
            = vlSelf->Testbench__DOT__judge__DOT__mid
            [0U][1U];
        vlSelf->Testbench__DOT__judge__DOT__sum[2U] 
            = vlSelf->Testbench__DOT__judge__DOT__mid
            [0U][2U];
        vlSelf->Testbench__DOT__judge__DOT__sum[3U] 
            = vlSelf->Testbench__DOT__judge__DOT__mid
            [0U][3U];
        VL_ADD_W(4, __Vtemp_13, vlSelf->Testbench__DOT__judge__DOT__sum, 
                 vlSelf->Testbench__DOT__judge__DOT__mid
                 [1U]);
        vlSelf->Testbench__DOT__judge__DOT__sum[0U] 
            = __Vtemp_13[0U];
        vlSelf->Testbench__DOT__judge__DOT__sum[1U] 
            = __Vtemp_13[1U];
        vlSelf->Testbench__DOT__judge__DOT__sum[2U] 
            = __Vtemp_13[2U];
        vlSelf->Testbench__DOT__judge__DOT__sum[3U] 
            = __Vtemp_13[3U];
        VL_ADD_W(4, __Vtemp_14, vlSelf->Testbench__DOT__judge__DOT__sum, 
                 vlSelf->Testbench__DOT__judge__DOT__mid
                 [2U]);
        vlSelf->Testbench__DOT__judge__DOT__sum[0U] 
            = __Vtemp_14[0U];
        vlSelf->Testbench__DOT__judge__DOT__sum[1U] 
            = __Vtemp_14[1U];
        vlSelf->Testbench__DOT__judge__DOT__sum[2U] 
            = __Vtemp_14[2U];
        vlSelf->Testbench__DOT__judge__DOT__sum[3U] 
            = __Vtemp_14[3U];
        VL_ADD_W(4, __Vtemp_15, vlSelf->Testbench__DOT__judge__DOT__sum, 
                 vlSelf->Testbench__DOT__judge__DOT__mid
                 [3U]);
        vlSelf->Testbench__DOT__judge__DOT__sum[0U] 
            = __Vtemp_15[0U];
        vlSelf->Testbench__DOT__judge__DOT__sum[1U] 
            = __Vtemp_15[1U];
        vlSelf->Testbench__DOT__judge__DOT__sum[2U] 
            = __Vtemp_15[2U];
        vlSelf->Testbench__DOT__judge__DOT__sum[3U] 
            = __Vtemp_15[3U];
        vlSelf->Testbench__DOT__judge__DOT__resultQueue.push_back(
                                                                  VL_CVT_W_A(vlSelf->Testbench__DOT__judge__DOT__sum, vlSelf->Testbench__DOT__judge__DOT__resultQueue
                                                                             .atDefault()));
    } else if (vlSelf->Testbench__DOT__out_valid) {
        VL_ASSIGN_W(128,vlSelf->Testbench__DOT__judge__DOT__simulate_result, vlSelf->Testbench__DOT__judge__DOT__resultQueue.pop_front());
        if ((0U == ((((vlSelf->Testbench__DOT__judge__DOT__simulate_result[0U] 
                       ^ vlSelf->Testbench__DOT__result[0U]) 
                      | (vlSelf->Testbench__DOT__judge__DOT__simulate_result[1U] 
                         ^ vlSelf->Testbench__DOT__result[1U])) 
                     | (vlSelf->Testbench__DOT__judge__DOT__simulate_result[2U] 
                        ^ vlSelf->Testbench__DOT__result[2U])) 
                    | (vlSelf->Testbench__DOT__judge__DOT__simulate_result[3U] 
                       ^ vlSelf->Testbench__DOT__result[3U])))) {
            VL_WRITEF("simulate result: %x\n",128,vlSelf->Testbench__DOT__judge__DOT__simulate_result.data());
            vlSelf->Testbench__DOT__error = 0U;
        } else {
            vlSelf->Testbench__DOT__error = 1U;
            VL_WRITEF("*************error**************\nsimulate result: %x\nhardware result: %x\n",
                      128,vlSelf->Testbench__DOT__judge__DOT__simulate_result.data(),
                      128,vlSelf->Testbench__DOT__result.data());
        }
    }
    if (((IData)(vlSelf->Testbench__DOT__in_valid) 
         & (IData)(vlSelf->Testbench__DOT__in_ready))) {
        vlSelf->Testbench__DOT__judge__DOT__dataQueue.push_back(vlSelf->Testbench__DOT__in_data);
        vlSelf->Testbench__DOT__judge__DOT__request = 1U;
        vlSelf->Testbench__DOT__judge__DOT__dataQueue.pop_front();
    } else {
        vlSelf->Testbench__DOT__judge__DOT__request = 0U;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    if (vlSelf->Testbench__DOT__rst) {
        if ((0U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg))) {
            vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2.__PVT__valid = 0U;
            vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__ex_ready = 1U;
            vlSelf->Testbench__DOT__out_valid = 0U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid) {
                vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg = 1U;
            }
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg))) {
            vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__ex_ready = 0U;
            vlSelf->Testbench__DOT__out_valid = 0U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1
                [3U].__PVT__valid) {
                VL_ADD_W(4, __Vtemp_1, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data
                         [2U], vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data
                         [3U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[3U][0U] 
                    = __Vtemp_1[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[3U][1U] 
                    = __Vtemp_1[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[3U][2U] 
                    = __Vtemp_1[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[3U][3U] 
                    = __Vtemp_1[3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__j = 0U;
                VL_ADD_W(4, __Vtemp_2, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data
                         [0U], vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data
                         [1U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[2U][0U] 
                    = __Vtemp_2[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[2U][1U] 
                    = __Vtemp_2[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[2U][2U] 
                    = __Vtemp_2[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[2U][3U] 
                    = __Vtemp_2[3U];
                vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg = 2U;
                VL_ADD_W(4, __Vtemp_3, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp
                         [2U], vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp
                         [3U]);
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[1U][0U] 
                    = __Vtemp_3[0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[1U][1U] 
                    = __Vtemp_3[1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[1U][2U] 
                    = __Vtemp_3[2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[1U][3U] 
                    = __Vtemp_3[3U];
                VL_ASSIGN_W(128,vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                            .__PVT__data, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp
                            [1U]);
                vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2.__PVT__valid = 1U;
            }
        } else if ((2U == (IData)(vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg))) {
            vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__ex_ready = 0U;
            vlSelf->Testbench__DOT__out_valid = 1U;
            if (vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                .__PVT__valid) {
                VL_ASSIGN_W(128,vlSelf->Testbench__DOT__result, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2
                            .__PVT__data);
                vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg = 0U;
            }
        }
        if (vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg) {
            if (vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg) {
                vlSelf->Testbench__DOT__conv_unit__DOT__data.__PVT__data[0U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [0U];
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__i = 4U;
                vlSelf->Testbench__DOT__in_ready = 0U;
                vlSelf->Testbench__DOT__conv_unit__DOT__data.__PVT__data[1U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid = 1U;
                if (vlSelf->Testbench__DOT__conv_unit__DOT__ex_ready) {
                    vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg = 0U;
                }
                vlSelf->Testbench__DOT__conv_unit__DOT__data.__PVT__data[2U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__data.__PVT__data[3U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [3U];
            }
        } else {
            vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid = 0U;
            vlSelf->Testbench__DOT__in_ready = 1U;
            if (vlSelf->Testbench__DOT__in_valid) {
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[0U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [1U];
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__i = 3U;
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[1U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [2U];
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg = 1U;
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[2U] 
                    = vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg
                    [3U];
                vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[3U] 
                    = vlSelf->Testbench__DOT__in_data;
            }
        }
    } else {
        vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg = 0U;
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[0U] = 0ULL;
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__i = 4U;
        vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid = 0U;
        vlSelf->Testbench__DOT__in_ready = 0U;
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg = 0U;
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[1U] = 0ULL;
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[2U] = 0ULL;
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[3U] = 0ULL;
    }
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2 
        = vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg 
        = vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[0U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[1U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[2U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[3U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__ex_ready 
        = vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__ex_ready;
}

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void VTestbench___024root___timing_commit(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_commit\n"); );
    // Body
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h74ba35b0__0.commit("@(posedge Testbench.out_valid)");
    }
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h74ba35b0__0.resume("@(posedge Testbench.out_valid)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    VTestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTestbench___024root___timing_resume(vlSelf);
        VTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestbench___024root___eval_phase__nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const VTestbench_Testbench__DOT__conv_unit__DOT__conv1__DOT__mid_vector__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{data:" + VL_TO_STRING_W(4, obj.__PVT__data);
        out += ", valid:" + VL_TO_STRING(obj.__PVT__valid);
        out += "}";
    return out;
}
