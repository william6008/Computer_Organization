// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplier__Syms.h"


VL_ATTR_COLD void VMultiplier___024root__trace_init_sub__TOP__0(VMultiplier___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+6,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("Multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+6,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMultiplier___024root__trace_init_top(VMultiplier___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_init_top\n"); );
    // Body
    VMultiplier___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMultiplier___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VMultiplier___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMultiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMultiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMultiplier___024root__trace_register(VMultiplier___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VMultiplier___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VMultiplier___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VMultiplier___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VMultiplier___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMultiplier___024root__trace_const_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMultiplier___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_const_0\n"); );
    // Init
    VMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiplier___024root*>(voidSelf);
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMultiplier___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMultiplier___024root__trace_const_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+8,(0x20U),32);
}

VL_ATTR_COLD void VMultiplier___024root__trace_full_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMultiplier___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_full_0\n"); );
    // Init
    VMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiplier___024root*>(voidSelf);
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMultiplier___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMultiplier___024root__trace_full_0_sub_0(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->Multiplier__DOT__acc),65);
    bufp->fullIData(oldp+4,(vlSelf->A),32);
    bufp->fullIData(oldp+5,(vlSelf->B),32);
    bufp->fullQData(oldp+6,(vlSelf->P),64);
}
