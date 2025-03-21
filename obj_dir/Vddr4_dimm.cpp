// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vddr4_dimm__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vddr4_dimm::Vddr4_dimm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vddr4_dimm__Syms(contextp(), _vcname__, this)}
    , clk_in{vlSymsp->TOP.clk_in}
    , rst_N_in{vlSymsp->TOP.rst_N_in}
    , cs_N_in{vlSymsp->TOP.cs_N_in}
    , cke_in{vlSymsp->TOP.cke_in}
    , act_in{vlSymsp->TOP.act_in}
    , bg_in{vlSymsp->TOP.bg_in}
    , ba_in{vlSymsp->TOP.ba_in}
    , addr_in{vlSymsp->TOP.addr_in}
    , dqm_in{vlSymsp->TOP.dqm_in}
    , dqs{vlSymsp->TOP.dqs}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vddr4_dimm::Vddr4_dimm(const char* _vcname__)
    : Vddr4_dimm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vddr4_dimm::~Vddr4_dimm() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vddr4_dimm___024root___eval_debug_assertions(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG
void Vddr4_dimm___024root___eval_static(Vddr4_dimm___024root* vlSelf);
void Vddr4_dimm___024root___eval_initial(Vddr4_dimm___024root* vlSelf);
void Vddr4_dimm___024root___eval_settle(Vddr4_dimm___024root* vlSelf);
void Vddr4_dimm___024root___eval(Vddr4_dimm___024root* vlSelf);

void Vddr4_dimm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vddr4_dimm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vddr4_dimm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vddr4_dimm___024root___eval_static(&(vlSymsp->TOP));
        Vddr4_dimm___024root___eval_initial(&(vlSymsp->TOP));
        Vddr4_dimm___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vddr4_dimm___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vddr4_dimm::eventsPending() { return false; }

uint64_t Vddr4_dimm::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vddr4_dimm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vddr4_dimm___024root___eval_final(Vddr4_dimm___024root* vlSelf);

VL_ATTR_COLD void Vddr4_dimm::final() {
    Vddr4_dimm___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vddr4_dimm::hierName() const { return vlSymsp->name(); }
const char* Vddr4_dimm::modelName() const { return "Vddr4_dimm"; }
unsigned Vddr4_dimm::threads() const { return 1; }
void Vddr4_dimm::prepareClone() const { contextp()->prepareClone(); }
void Vddr4_dimm::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vddr4_dimm::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vddr4_dimm___024root__trace_decl_types(VerilatedVcd* tracep);

void Vddr4_dimm___024root__trace_init_top(Vddr4_dimm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vddr4_dimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vddr4_dimm___024root*>(voidSelf);
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vddr4_dimm___024root__trace_decl_types(tracep);
    Vddr4_dimm___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_register(Vddr4_dimm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vddr4_dimm::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vddr4_dimm::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vddr4_dimm___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
