// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Conv.h"
#include "VTestbench__Syms.h"

void VTestbench_Conv___ctor_var_reset(VTestbench_Conv* vlSelf);

VTestbench_Conv::VTestbench_Conv(VTestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestbench_Conv___ctor_var_reset(this);
}

void VTestbench_Conv::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestbench_Conv::~VTestbench_Conv() {
}
