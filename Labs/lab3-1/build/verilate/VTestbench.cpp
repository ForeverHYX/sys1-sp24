// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTestbench__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTestbench::VTestbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTestbench__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTestbench::VTestbench(const char* _vcname__)
    : VTestbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTestbench::~VTestbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
void VTestbench___024root___eval_static(VTestbench___024root* vlSelf);
void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf);
void VTestbench___024root___eval_settle(VTestbench___024root* vlSelf);
void VTestbench___024root___eval(VTestbench___024root* vlSelf);

void VTestbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTestbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTestbench___024root___eval_static(&(vlSymsp->TOP));
        VTestbench___024root___eval_initial(&(vlSymsp->TOP));
        VTestbench___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTestbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTestbench::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VTestbench::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VTestbench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTestbench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTestbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTestbench___024root___eval_final(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench::final() {
    VTestbench___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTestbench::hierName() const { return vlSymsp->name(); }
const char* VTestbench::modelName() const { return "VTestbench"; }
unsigned VTestbench::threads() const { return 1; }
void VTestbench::prepareClone() const { contextp()->prepareClone(); }
void VTestbench::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTestbench::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTestbench___024root__trace_decl_types(VerilatedVcd* tracep);

void VTestbench___024root__trace_init_top(VTestbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTestbench___024root__trace_decl_types(tracep);
    VTestbench___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_register(VTestbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestbench::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTestbench::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTestbench___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
