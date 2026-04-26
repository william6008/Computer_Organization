// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPipelineCPU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPipelineCPU::VPipelineCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPipelineCPU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , r{vlSymsp->TOP.r}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VPipelineCPU::VPipelineCPU(const char* _vcname__)
    : VPipelineCPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPipelineCPU::~VPipelineCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf);

void VPipelineCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipelineCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPipelineCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPipelineCPU___024root___eval_static(&(vlSymsp->TOP));
        VPipelineCPU___024root___eval_initial(&(vlSymsp->TOP));
        VPipelineCPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPipelineCPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPipelineCPU::eventsPending() { return false; }

uint64_t VPipelineCPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPipelineCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU::final() {
    VPipelineCPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPipelineCPU::hierName() const { return vlSymsp->name(); }
const char* VPipelineCPU::modelName() const { return "VPipelineCPU"; }
unsigned VPipelineCPU::threads() const { return 1; }
void VPipelineCPU::prepareClone() const { contextp()->prepareClone(); }
void VPipelineCPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VPipelineCPU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPipelineCPU___024root__trace_decl_types(VerilatedVcd* tracep);

void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VPipelineCPU___024root__trace_decl_types(tracep);
    VPipelineCPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPipelineCPU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPipelineCPU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPipelineCPU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
