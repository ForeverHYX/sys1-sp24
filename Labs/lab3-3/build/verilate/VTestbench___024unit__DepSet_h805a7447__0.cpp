// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024unit.h"

extern "C" unsigned int mul_judge(unsigned int multiplicand, unsigned int multiplier, unsigned long long product);

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_mul_judge_TOP____024unit(IData/*31:0*/ multiplicand, IData/*31:0*/ multiplier, QData/*63:0*/ product, IData/*31:0*/ &mul_judge__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_mul_judge_TOP____024unit\n"); );
    // Body
    unsigned int multiplicand__Vcvt;
    for (size_t multiplicand__Vidx = 0; multiplicand__Vidx < 1; ++multiplicand__Vidx) multiplicand__Vcvt = multiplicand;
    unsigned int multiplier__Vcvt;
    for (size_t multiplier__Vidx = 0; multiplier__Vidx < 1; ++multiplier__Vidx) multiplier__Vcvt = multiplier;
    unsigned long long product__Vcvt;
    for (size_t product__Vidx = 0; product__Vidx < 1; ++product__Vidx) product__Vcvt = product;
    unsigned int mul_judge__Vfuncrtn__Vcvt;
    mul_judge__Vfuncrtn__Vcvt = mul_judge(multiplicand__Vcvt, multiplier__Vcvt, product__Vcvt);
    mul_judge__Vfuncrtn = mul_judge__Vfuncrtn__Vcvt;
}
