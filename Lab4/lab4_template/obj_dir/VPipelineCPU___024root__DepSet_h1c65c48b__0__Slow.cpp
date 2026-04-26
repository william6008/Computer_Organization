// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "VPipelineCPU__pch.h"
#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);
VL_ATTR_COLD void VPipelineCPU___024root____Vm_traceActivitySetAll(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    VPipelineCPU___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__start__0 = vlSelfRef.start;
    vlSelfRef.__Vtrigprevexpr___TOP__PipelineCPU__DOT__reg3_ALUResult__0 
        = vlSelfRef.PipelineCPU__DOT__reg3_ALUResult;
    vlSelfRef.__Vtrigprevexpr___TOP__PipelineCPU__DOT__reg3_memRead__0 
        = vlSelfRef.PipelineCPU__DOT__reg3_memRead;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x494f4e53U;
    __Vtemp_1[2U] = 0x52554354U;
    __Vtemp_1[3U] = 0x494e5354U;
    __Vtemp_1[4U] = 0x4553545fU;
    __Vtemp_1[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPipelineCPU___024root___eval_phase__stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("PipelineCPU.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPipelineCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        VPipelineCPU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<SData/*10:0*/, 4096> VPipelineCPU__ConstPool__TABLE_h92d9ad87_0;
extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_h6b60acea_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.PipelineCPU__DOT__imm = ((0x40U & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                        ? ((0x20U & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                            ? ((0x10U 
                                                & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                    ? 
                                                   ((4U 
                                                     & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                       ? 
                                                      ((((- (IData)(
                                                                    (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | (0x100000U 
                                                           & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                              >> 0xbU))) 
                                                       | (((0xff000U 
                                                            & vlSelfRef.PipelineCPU__DOT__reg1_inst_out) 
                                                           | (0x800U 
                                                              & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                >> 0x14U))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | (((0x1000U 
                                                            & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                               >> 0x13U)) 
                                                           | (0x800U 
                                                              & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                 << 4U))) 
                                                          | ((0x7e0U 
                                                              & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                            : 0U) : 
                                       ((0x20U & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                         ? ((0x10U 
                                             & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                             ? 0U : 
                                            ((8U & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                              ? 0U : 
                                             ((4U & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                             >> 7U))))
                                                    : 0U)
                                                   : 0U))))
                                         : ((0x10U 
                                             & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                             ? ((8U 
                                                 & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U)))
                                             : ((8U 
                                                 & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U))))));
    __Vtableidx1 = (((vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                      [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                 >> 0xfU))] == vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                      [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                 >> 0x14U))]) << 0xbU) 
                    | ((VL_LTS_III(32, vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                                   [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                              >> 0xfU))], 
                                   vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                                   [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                              >> 0x14U))]) 
                        << 0xaU) | ((0x380U & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                               >> 5U)) 
                                    | (0x7fU & vlSelfRef.PipelineCPU__DOT__reg1_inst_out))));
    vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl 
        = VPipelineCPU__ConstPool__TABLE_h92d9ad87_0
        [__Vtableidx1];
    vlSelfRef.PipelineCPU__DOT__ALUmux_out = ((IData)(vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc)
                                               ? vlSelfRef.PipelineCPU__DOT__reg2_imm
                                               : vlSelfRef.PipelineCPU__DOT__reg2_rd2);
    __Vtableidx2 = (((IData)(vlSelfRef.PipelineCPU__DOT__reg2_funct7) 
                     << 5U) | (((IData)(vlSelfRef.PipelineCPU__DOT__reg2_funct3) 
                                << 2U) | (IData)(vlSelfRef.PipelineCPU__DOT__reg2_ALUop)));
    vlSelfRef.PipelineCPU__DOT__ALUCtrl = VPipelineCPU__ConstPool__TABLE_h6b60acea_0
        [__Vtableidx2];
    vlSelfRef.r[0U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelfRef.r[1U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelfRef.r[2U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelfRef.r[3U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelfRef.r[4U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelfRef.r[5U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelfRef.r[6U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelfRef.r[7U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelfRef.r[8U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelfRef.r[9U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelfRef.r[0xaU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelfRef.r[0xbU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelfRef.r[0xcU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelfRef.r[0xdU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelfRef.r[0xeU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelfRef.r[0xfU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelfRef.r[0x10U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelfRef.r[0x11U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelfRef.r[0x12U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelfRef.r[0x13U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelfRef.r[0x14U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelfRef.r[0x15U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelfRef.r[0x16U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelfRef.r[0x17U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelfRef.r[0x18U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelfRef.r[0x19U] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelfRef.r[0x1aU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelfRef.r[0x1bU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelfRef.r[0x1cU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelfRef.r[0x1dU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelfRef.r[0x1eU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelfRef.r[0x1fU] = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    if ((8U & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))) {
        vlSelfRef.PipelineCPU__DOT__ALUOut = 0U;
    } else if ((4U & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))) {
        vlSelfRef.PipelineCPU__DOT__ALUOut = ((2U & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))
                                                   ? 
                                                  (VL_LTS_III(32, vlSelfRef.PipelineCPU__DOT__reg2_rd1, vlSelfRef.PipelineCPU__DOT__ALUmux_out)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (vlSelfRef.PipelineCPU__DOT__reg2_rd1 
                                                   - vlSelfRef.PipelineCPU__DOT__ALUmux_out))
                                               : 0U);
    } else if ((2U & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))) {
        if ((1U & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))) {
            vlSelfRef.PipelineCPU__DOT__ALUOut = 0U;
        } else if (vlSelfRef.PipelineCPU__DOT__reg2_isU) {
            if (vlSelfRef.PipelineCPU__DOT__reg2_isU) {
                vlSelfRef.PipelineCPU__DOT__ALUOut 
                    = (vlSelfRef.PipelineCPU__DOT__reg2_pc 
                       + vlSelfRef.PipelineCPU__DOT__ALUmux_out);
            }
        } else {
            vlSelfRef.PipelineCPU__DOT__ALUOut = (vlSelfRef.PipelineCPU__DOT__reg2_rd1 
                                                  + vlSelfRef.PipelineCPU__DOT__ALUmux_out);
        }
    } else {
        vlSelfRef.PipelineCPU__DOT__ALUOut = ((1U & (IData)(vlSelfRef.PipelineCPU__DOT__ALUCtrl))
                                               ? (vlSelfRef.PipelineCPU__DOT__reg2_rd1 
                                                  | vlSelfRef.PipelineCPU__DOT__ALUmux_out)
                                               : (vlSelfRef.PipelineCPU__DOT__reg2_rd1 
                                                  & vlSelfRef.PipelineCPU__DOT__ALUmux_out));
    }
    vlSelfRef.PipelineCPU__DOT__zero = ((0U == vlSelfRef.PipelineCPU__DOT__ALUOut)
                                         ? 1U : 0U);
    vlSelfRef.PipelineCPU__DOT__pc_mux_out = ((0U == 
                                               (3U 
                                                & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                   >> 9U)))
                                               ? ((IData)(4U) 
                                                  + vlSelfRef.PipelineCPU__DOT__pc_out)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                       >> 9U)))
                                                   ? 
                                                  (vlSelfRef.PipelineCPU__DOT__imm 
                                                   + vlSelfRef.PipelineCPU__DOT__reg1_pc_o)
                                                   : vlSelfRef.PipelineCPU__DOT__ALUOut));
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD bool VPipelineCPU___024root___eval_phase__stl(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPipelineCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VPipelineCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge start)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] PipelineCPU.reg3_ALUResult)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] PipelineCPU.reg3_memRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge start)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] PipelineCPU.reg3_ALUResult)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] PipelineCPU.reg3_memRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root____Vm_traceActivitySetAll(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__pc_mux_out = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUmux_out = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__memRead_out = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUCtrl = VL_RAND_RESET_I(4);
    vlSelf->PipelineCPU__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg1_pc_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg1_pc_4_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg1_inst_out = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg2_pc_4 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg2_pc = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg2_rd1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg2_rd2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg2_imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg3_pc_4 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg3_ALUResult = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg3_rd2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg4_pc_4 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg4_ALUResult = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg4_readDataResult = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__reg2_writeReg = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__reg3_writeReg = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__reg4_writeReg = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__reg2_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__reg2_ALUop = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__reg3_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__reg4_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__reg2_funct3 = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__reg2_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg2_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg2_ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg2_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg2_funct7 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg2_isU = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg3_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg3_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg3_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg4_regWrite = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__PipelineCPU__DOT__reg3_ALUResult = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__PipelineCPU__DOT__reg3_memRead = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__PipelineCPU__DOT__reg4_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__PipelineCPU__DOT__reg4_regWrite = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__PipelineCPU__DOT__reg4_pc_4 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__PipelineCPU__DOT__reg4_writeReg = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__PipelineCPU__DOT__reg4_ALUResult = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__PipelineCPU__DOT__reg4_readDataResult = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__start__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__PipelineCPU__DOT__reg3_ALUResult__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__PipelineCPU__DOT__reg3_memRead__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
