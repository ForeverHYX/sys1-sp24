// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024unit.h"

extern "C" int fsm_judge(unsigned int a, unsigned int b, unsigned int rstn);

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_fsm_judge_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ rstn, IData/*31:0*/ &fsm_judge__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_fsm_judge_TOP____024unit\n"); );
    // Body
    unsigned int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned int b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    unsigned int rstn__Vcvt;
    for (size_t rstn__Vidx = 0; rstn__Vidx < 1; ++rstn__Vidx) rstn__Vcvt = rstn;
    int fsm_judge__Vfuncrtn__Vcvt;
    fsm_judge__Vfuncrtn__Vcvt = fsm_judge(a__Vcvt, b__Vcvt, rstn__Vcvt);
    fsm_judge__Vfuncrtn = fsm_judge__Vfuncrtn__Vcvt;
}
