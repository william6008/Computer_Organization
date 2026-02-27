// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiplier.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER___024ROOT_H_
#define VERILATED_VMULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"


class VMultiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMultiplier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    VlWide<3>/*64:0*/ Multiplier__DOT__acc;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(P,63,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMultiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMultiplier___024root(VMultiplier__Syms* symsp, const char* v__name);
    ~VMultiplier___024root();
    VL_UNCOPYABLE(VMultiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
