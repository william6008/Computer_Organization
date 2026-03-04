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
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->start)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__start__0))));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)) 
                                     | ((~ (IData)(vlSelf->start)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__start__0))));
    vlSelf->__VactTriggered.set(2U, ((vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                                      != vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0) 
                                     | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control_memRead) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__start__0 = vlSelf->start;
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0 
        = vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut;
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0 
        = vlSelf->SingleCycleCPU__DOT__m_Control_memRead;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
