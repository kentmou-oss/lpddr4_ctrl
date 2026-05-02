// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlpddr4_sim_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vlpddr4_sim_tb::Vlpddr4_sim_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlpddr4_sim_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vlpddr4_sim_tb::Vlpddr4_sim_tb(const char* _vcname__)
    : Vlpddr4_sim_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlpddr4_sim_tb::~Vlpddr4_sim_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlpddr4_sim_tb___024root___eval_debug_assertions(Vlpddr4_sim_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vlpddr4_sim_tb___024root___eval_static(Vlpddr4_sim_tb___024root* vlSelf);
void Vlpddr4_sim_tb___024root___eval_initial(Vlpddr4_sim_tb___024root* vlSelf);
void Vlpddr4_sim_tb___024root___eval_settle(Vlpddr4_sim_tb___024root* vlSelf);
void Vlpddr4_sim_tb___024root___eval(Vlpddr4_sim_tb___024root* vlSelf);

void Vlpddr4_sim_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlpddr4_sim_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlpddr4_sim_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlpddr4_sim_tb___024root___eval_static(&(vlSymsp->TOP));
        Vlpddr4_sim_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vlpddr4_sim_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlpddr4_sim_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vlpddr4_sim_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vlpddr4_sim_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vlpddr4_sim_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vlpddr4_sim_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vlpddr4_sim_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlpddr4_sim_tb___024root___eval_final(Vlpddr4_sim_tb___024root* vlSelf);

VL_ATTR_COLD void Vlpddr4_sim_tb::final() {
    contextp()->executingFinal(true);
    Vlpddr4_sim_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlpddr4_sim_tb::hierName() const { return vlSymsp->name(); }
const char* Vlpddr4_sim_tb::modelName() const { return "Vlpddr4_sim_tb"; }
unsigned Vlpddr4_sim_tb::threads() const { return 1; }
void Vlpddr4_sim_tb::prepareClone() const { contextp()->prepareClone(); }
void Vlpddr4_sim_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlpddr4_sim_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vlpddr4_sim_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vlpddr4_sim_tb___024root__trace_init_top(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlpddr4_sim_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlpddr4_sim_tb___024root*>(voidSelf);
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vlpddr4_sim_tb___024root__trace_decl_types(tracep);
    Vlpddr4_sim_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root__trace_register(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vlpddr4_sim_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlpddr4_sim_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 717);
    Vlpddr4_sim_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
