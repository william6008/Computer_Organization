// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplier__Syms.h"


void VMultiplier___024root__trace_chg_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMultiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_chg_0\n"); );
    // Init
    VMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiplier___024root*>(voidSelf);
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMultiplier___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMultiplier___024root__trace_chg_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->Multiplier__DOT__acc),65);
    }
    bufp->chgIData(oldp+3,(vlSelf->A),32);
    bufp->chgIData(oldp+4,(vlSelf->B),32);
    bufp->chgQData(oldp+5,(vlSelf->P),64);
}

void VMultiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_cleanup\n"); );
    // Init
    VMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiplier___024root*>(voidSelf);
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
