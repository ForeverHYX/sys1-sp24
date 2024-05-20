// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024unit.h"

void VTestbench___024unit___ctor_var_reset(VTestbench___024unit* vlSelf);

VTestbench___024unit::VTestbench___024unit(VTestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestbench___024unit___ctor_var_reset(this);
}

void VTestbench___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestbench___024unit::~VTestbench___024unit() {
}
