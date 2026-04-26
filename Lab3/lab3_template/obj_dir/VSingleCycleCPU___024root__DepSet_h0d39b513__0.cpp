// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU__Syms.h"
#include "VSingleCycleCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.start)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__start__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, (vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control_memRead) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__start__0 = vlSelfRef.start;
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0 
        = vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut;
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0 
        = vlSelfRef.SingleCycleCPU__DOT__m_Control_memRead;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
