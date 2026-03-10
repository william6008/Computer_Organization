// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU___024root.h"

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial\n"); );
    // Body
    VSingleCycleCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__start__0 = vlSelf->start;
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0 
        = vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut;
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0 
        = vlSelf->SingleCycleCPU__DOT__m_Control_memRead;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x494f4e53U;
    __Vtemp_1[2U] = 0x52554354U;
    __Vtemp_1[3U] = 0x494e5354U;
    __Vtemp_1[4U] = 0x4553545fU;
    __Vtemp_1[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSingleCycleCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_hee451926_0;

VL_ATTR_COLD void VSingleCycleCPU___024root___stl_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h15a8539f__0;
    __VdfgTmp_h15a8539f__0 = 0;
    CData/*7:0*/ __VdfgTmp_h15a7a04c__0;
    __VdfgTmp_h15a7a04c__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    vlSelf->__VdfgTmp_h97e7b328__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & vlSelf->SingleCycleCPU__DOT__m_PC_pc_o)];
    __VdfgTmp_h15a7a04c__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__m_PC_pc_o))];
    __VdfgTmp_h15a8539f__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__m_PC_pc_o))];
    vlSelf->__VdfgTmp_hcc8674fb__0 = (((IData)(__VdfgTmp_h15a7a04c__0) 
                                       << 8U) | (IData)(__VdfgTmp_h15a8539f__0));
    vlSelf->__VdfgTmp_h86e2f243__0 = ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(1U) 
                                                  + vlSelf->SingleCycleCPU__DOT__m_PC_pc_o))] 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_hcc8674fb__0));
    vlSelf->SingleCycleCPU__DOT__m_Register_readData1 
        = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [((0x80U <= vlSelf->SingleCycleCPU__DOT__m_PC_pc_o)
           ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h86e2f243__0 
                            >> 0xfU)))];
    vlSelf->__VdfgTmp_hedd66a4b__0 = (((IData)(vlSelf->__VdfgTmp_h97e7b328__0) 
                                       << 0x18U) | vlSelf->__VdfgTmp_h86e2f243__0);
    if ((0x80U <= vlSelf->SingleCycleCPU__DOT__m_PC_pc_o)) {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = 0U;
        vlSelf->SingleCycleCPU__DOT__m_InstMem_inst = 0U;
    } else {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 
            = (7U & ((IData)(__VdfgTmp_h15a7a04c__0) 
                     >> 4U));
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode 
            = (0x7fU & (IData)(__VdfgTmp_h15a8539f__0));
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg 
            = (0x1fU & ((IData)(vlSelf->__VdfgTmp_hcc8674fb__0) 
                        >> 7U));
        vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
            = vlSelf->__VdfgTmp_hedd66a4b__0;
    }
    vlSelf->SingleCycleCPU__DOT__m_Register_readData2 
        = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [((0x80U <= vlSelf->SingleCycleCPU__DOT__m_PC_pc_o)
           ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hedd66a4b__0 
                            >> 0x14U)))];
    vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrEq 
        = ((vlSelf->SingleCycleCPU__DOT__m_Register_readData1 
            == vlSelf->SingleCycleCPU__DOT__m_Register_readData2)
            ? 1U : 0U);
    vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrLT 
        = (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__m_Register_readData1, vlSelf->SingleCycleCPU__DOT__m_Register_readData2)
            ? 1U : 0U);
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__branch = 0U;
    if ((0x40U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        if ((0x20U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            if ((0x10U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            } else if ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                    if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                        if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                                = (((- (IData)((vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0x80000U 
                                                  & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                     >> 0xcU)) 
                                                 | ((0x7f800U 
                                                     & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                        >> 1U)) 
                                                    | ((0x400U 
                                                        & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                           >> 0xaU)) 
                                                       | (0x3ffU 
                                                          & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                             >> 0x15U))))));
                            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x282U;
                        } else {
                            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                        }
                    } else {
                        vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                    }
                } else {
                    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                    if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                        vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                            = (((- (IData)((vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                            >> 0x14U));
                        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x486U;
                    } else {
                        vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                    }
                } else {
                    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                        = (((- (IData)((vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                   >> 0x14U)) 
                                        | ((0x400U 
                                            & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                               << 3U)) 
                                           | ((0x3f0U 
                                               & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                  >> 0x15U)) 
                                              | (0xfU 
                                                 & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                    >> 8U))))));
                    if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))) {
                        if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))) {
                            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                        } else {
                            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__branch 
                                = (1U & ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                          ? (~ (IData)(vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrLT))
                                          : (IData)(vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrLT)));
                        }
                    } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))) {
                        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                    } else {
                        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__branch 
                            = (1U & ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                      ? (~ (IData)(vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrEq))
                                      : (IData)(vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrEq)));
                    }
                    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
                        = ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__branch)
                            ? 0x200U : 0U);
                } else {
                    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        if ((0x10U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
                = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                    ? 0U : ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                             ? 0U : ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                      ? ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                          ? 0x32U : 0U)
                                      : 0U)));
        } else if ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        } else if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                    = (((- (IData)((vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                                      >> 7U))));
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0xcU;
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        if ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        } else if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                        = (0xfffff000U & vlSelf->SingleCycleCPU__DOT__m_InstMem_inst);
                    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 7U;
                } else {
                    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                    = (((- (IData)((vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                          >> 0x14U));
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x16U;
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else if ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
    } else if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
    } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm 
                = (((- (IData)((vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->SingleCycleCPU__DOT__m_InstMem_inst 
                      >> 0x14U));
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x146U;
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else {
        vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__m_Control_memRead 
        = (1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                 >> 8U));
    vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A = 
        ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))
          ? vlSelf->SingleCycleCPU__DOT__m_PC_pc_o : vlSelf->SingleCycleCPU__DOT__m_Register_readData1);
    vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B = 
        ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))
          ? vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm
          : vlSelf->SingleCycleCPU__DOT__m_Register_readData2);
    __Vtableidx1 = (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3) 
                     << 3U) | ((0xffffffcU & (((0x80U 
                                                > vlSelf->SingleCycleCPU__DOT__m_PC_pc_o) 
                                               << 2U) 
                                              & ((IData)(vlSelf->__VdfgTmp_h97e7b328__0) 
                                                 >> 4U))) 
                               | (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                        >> 4U))));
    vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl = 
        VSingleCycleCPU__ConstPool__TABLE_hee451926_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__m_ALU_zero = 0U;
    if ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero = 0U;
            } else if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero = 0U;
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                       >> (0x1fU & vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B));
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            }
        } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = VL_SHIFTRS_III(32,32,5, vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A, 
                                     (0x1fU & vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B));
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                       << (0x1fU & vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B));
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            }
        } else if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                = (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                   ^ vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B);
            vlSelf->SingleCycleCPU__DOT__m_ALU_zero 
                = ((0U == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                    ? 1U : 0U);
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
            vlSelf->SingleCycleCPU__DOT__m_ALU_zero = 0U;
        }
    } else if ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A, vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B)
                        ? 1U : 0U);
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            } else {
                vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                       - vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B);
                vlSelf->SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            }
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
            vlSelf->SingleCycleCPU__DOT__m_ALU_zero = 0U;
        }
    } else if ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
            vlSelf->SingleCycleCPU__DOT__m_ALU_zero = 0U;
        } else {
            vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut 
                = (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                   + vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B);
        }
    } else if ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 
            (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
             | vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B);
        vlSelf->SingleCycleCPU__DOT__m_ALU_zero = (
                                                   (0U 
                                                    == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                                                    ? 1U
                                                    : 0U);
    } else {
        vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = 
            (vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A 
             & vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B);
        vlSelf->SingleCycleCPU__DOT__m_ALU_zero = (
                                                   (0U 
                                                    == vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut)
                                                    ? 1U
                                                    : 0U);
    }
    vlSelf->SingleCycleCPU__DOT__m_Mux_PC_out = ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                                      >> 9U)))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->SingleCycleCPU__DOT__m_PC_pc_o)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                                       >> 9U)))
                                                   ? 
                                                  (vlSelf->SingleCycleCPU__DOT__m_PC_pc_o 
                                                   + 
                                                   VL_SHIFTL_III(32,32,32, vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm, 1U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                                        >> 9U)))
                                                    ? vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut
                                                    : 0U)));
    vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData_out 
        = ((0U == (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                         >> 6U))) ? vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut
            : ((1U == (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                             >> 6U))) ? vlSelf->SingleCycleCPU__DOT__m_DataMemory_readData
                : ((2U == (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                 >> 6U))) ? ((IData)(4U) 
                                             + vlSelf->SingleCycleCPU__DOT__m_PC_pc_o)
                    : 0U)));
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSingleCycleCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_triggers__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCycleCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSingleCycleCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] SingleCycleCPU.m_ALU_ALUOut or [changed] SingleCycleCPU.m_Control_memRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] SingleCycleCPU.m_ALU_ALUOut or [changed] SingleCycleCPU.m_Control_memRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleCPU___024root___ctor_var_reset(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SingleCycleCPU__DOT__m_PC_pc_o = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_InstMem_inst = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_Control_memRead = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__m_Register_readData1 = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_Register_readData2 = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrEq = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__m_BranchComp_BrLT = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__m_ImmGen_imm = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_Mux_PC_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_A = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_Mux_ALU_out_B = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->SingleCycleCPU__DOT__m_ALU_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_ALU_zero = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__m_DataMemory_readData = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 = VL_RAND_RESET_I(3);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode = VL_RAND_RESET_I(7);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = VL_RAND_RESET_I(11);
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__branch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgTmp_hedd66a4b__0 = 0;
    vlSelf->__VdfgTmp_h86e2f243__0 = 0;
    vlSelf->__VdfgTmp_hcc8674fb__0 = 0;
    vlSelf->__VdfgTmp_h97e7b328__0 = 0;
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__start__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
