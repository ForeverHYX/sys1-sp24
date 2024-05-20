// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024unit.h"

extern "C" void cnt_init(unsigned int init);

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_cnt_init_TOP____024unit(IData/*31:0*/ init) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_cnt_init_TOP____024unit\n"); );
    // Body
    unsigned int init__Vcvt;
    for (size_t init__Vidx = 0; init__Vidx < 1; ++init__Vidx) init__Vcvt = init;
    cnt_init(init__Vcvt);
}

extern "C" int cnt_judge(unsigned int rstn, unsigned int high_rst, unsigned int low_co, unsigned int co, unsigned int cnt, unsigned int base, unsigned int init);

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit(IData/*31:0*/ rstn, IData/*31:0*/ high_rst, IData/*31:0*/ low_co, IData/*31:0*/ co, IData/*31:0*/ cnt, IData/*31:0*/ base, IData/*31:0*/ init, IData/*31:0*/ &cnt_judge__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit\n"); );
    // Body
    unsigned int rstn__Vcvt;
    for (size_t rstn__Vidx = 0; rstn__Vidx < 1; ++rstn__Vidx) rstn__Vcvt = rstn;
    unsigned int high_rst__Vcvt;
    for (size_t high_rst__Vidx = 0; high_rst__Vidx < 1; ++high_rst__Vidx) high_rst__Vcvt = high_rst;
    unsigned int low_co__Vcvt;
    for (size_t low_co__Vidx = 0; low_co__Vidx < 1; ++low_co__Vidx) low_co__Vcvt = low_co;
    unsigned int co__Vcvt;
    for (size_t co__Vidx = 0; co__Vidx < 1; ++co__Vidx) co__Vcvt = co;
    unsigned int cnt__Vcvt;
    for (size_t cnt__Vidx = 0; cnt__Vidx < 1; ++cnt__Vidx) cnt__Vcvt = cnt;
    unsigned int base__Vcvt;
    for (size_t base__Vidx = 0; base__Vidx < 1; ++base__Vidx) base__Vcvt = base;
    unsigned int init__Vcvt;
    for (size_t init__Vidx = 0; init__Vidx < 1; ++init__Vidx) init__Vcvt = init;
    int cnt_judge__Vfuncrtn__Vcvt;
    cnt_judge__Vfuncrtn__Vcvt = cnt_judge(rstn__Vcvt, high_rst__Vcvt, low_co__Vcvt, co__Vcvt, cnt__Vcvt, base__Vcvt, init__Vcvt);
    cnt_judge__Vfuncrtn = cnt_judge__Vfuncrtn__Vcvt;
}
