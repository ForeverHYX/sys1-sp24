// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Decoupled_ift__D8.h"

VL_ATTR_COLD void VTestbench_Decoupled_ift__D8___ctor_var_reset(VTestbench_Decoupled_ift__D8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestbench_Decoupled_ift__D8___ctor_var_reset\n"); );
    // Body
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ready = VL_RAND_RESET_I(1);
}
