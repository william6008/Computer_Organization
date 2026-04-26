// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU___024root.h"

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf);
VL_ATTR_COLD void VSingleCycleCPU___024root____Vm_traceActivitySetAll(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSingleCycleCPU___024root___eval_initial__TOP(vlSelf);
    VSingleCycleCPU___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__start__0 = vlSelfRef.start;
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0 
        = vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut;
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0 
        = vlSelfRef.SingleCycleCPU__DOT__m_Control_memRead;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x494f4e53U;
    __Vtemp_1[2U] = 0x52554354U;
    __Vtemp_1[3U] = 0x494e5354U;
    __Vtemp_1[4U] = 0x4553545fU;
    __Vtemp_1[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_settle\n"); );
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
            VSingleCycleCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSingleCycleCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void VSingleCycleCPU___024root___stl_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_stl(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VSingleCycleCPU___024root___stl_sequent__TOP__0(vlSelf);
        VSingleCycleCPU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h05a20901_0;

VL_ATTR_COLD void VSingleCycleCPU___024root___stl_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.r[0U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelfRef.r[1U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelfRef.r[2U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelfRef.r[3U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelfRef.r[4U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelfRef.r[5U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelfRef.r[6U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelfRef.r[7U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelfRef.r[8U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelfRef.r[9U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelfRef.r[0xaU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelfRef.r[0xbU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelfRef.r[0xcU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelfRef.r[0xdU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelfRef.r[0xeU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelfRef.r[0xfU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelfRef.r[0x10U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelfRef.r[0x11U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelfRef.r[0x12U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelfRef.r[0x13U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelfRef.r[0x14U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelfRef.r[0x15U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelfRef.r[0x16U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelfRef.r[0x17U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelfRef.r[0x18U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelfRef.r[0x19U] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelfRef.r[0x1aU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelfRef.r[0x1bU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelfRef.r[0x1cU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelfRef.r[0x1dU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelfRef.r[0x1eU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelfRef.r[0x1fU] = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = ((vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o))] 
                                                 << 8U) 
                                                | vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o))]);
    __VdfgRegularize_hd87f99a1_0_2 = ((vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(1U) 
                                                  + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o))] 
                                       << 0x10U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1));
    __VdfgRegularize_hd87f99a1_0_3 = ((vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)] 
                                       << 0x18U) | __VdfgRegularize_hd87f99a1_0_2);
    if ((0x80U <= vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)) {
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode = 0U;
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = 0U;
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1 = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst = 0U;
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2 = 0U;
    } else {
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 
            = (7U & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                     [(0x7fU & ((IData)(2U) + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o))] 
                     >> 4U));
        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode 
            = (0x7fU & vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
               [(0x7fU & ((IData)(3U) + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o))]);
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg 
            = (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                        >> 7U));
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_2 
                        >> 0xfU));
        vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
            = __VdfgRegularize_hd87f99a1_0_3;
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_3 
                        >> 0x14U));
    }
    vlSelfRef.SingleCycleCPU__DOT__m_Register_readData1 
        = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1];
    vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2 
        = vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
        [vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2];
    vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrEq 
        = ((vlSelfRef.SingleCycleCPU__DOT__m_Register_readData1 
            == vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2)
            ? 1U : 0U);
    vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrLT 
        = (VL_LTS_III(32, vlSelfRef.SingleCycleCPU__DOT__m_Register_readData1, vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2)
            ? 1U : 0U);
    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__branch = 0U;
    if ((0x40U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            } else if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                                = ((((- (IData)((vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                 >> 0x1fU))) 
                                     << 0x14U) | (0x80000U 
                                                  & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                     >> 0xcU))) 
                                   | ((0x7f800U & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                   >> 1U)) 
                                      | ((0x400U & 
                                          (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                               >> 0x15U)))));
                            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x282U;
                        } else {
                            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                        }
                    } else {
                        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                    }
                } else {
                    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                            = (((- (IData)((vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                            >> 0x14U));
                        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x486U;
                    } else {
                        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                    }
                } else {
                    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                        = (((- (IData)((vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (((0x800U & 
                                          (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                           >> 0x14U)) 
                                         | (0x400U 
                                            & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                               << 3U))) 
                                        | ((0x3f0U 
                                            & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                 >> 8U)))));
                    if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))) {
                        if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))) {
                            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                        } else {
                            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__branch 
                                = (1U & ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                          ? (~ (IData)(vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrLT))
                                          : (IData)(vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrLT)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))) {
                        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                    } else {
                        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__branch 
                            = (1U & ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                      ? (~ (IData)(vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrEq))
                                      : (IData)(vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrEq)));
                    }
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
                        = ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__branch)
                            ? 0x200U : 0U);
                } else {
                    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
                = ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                      ? ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                          ? 0x32U : 0U)
                                      : 0U)));
        } else if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        } else if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                    = (((- (IData)((vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                      >> 7U))));
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0xcU;
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        } else if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                        = (0xfffff000U & vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst);
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 7U;
                } else {
                    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                    = (((- (IData)((vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                          >> 0x14U));
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x16U;
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
    } else if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
    } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm 
                = (((- (IData)((vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                      >> 0x14U));
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0x146U;
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else {
        vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
    }
    vlSelfRef.SingleCycleCPU__DOT__m_Control_memRead 
        = (1U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                 >> 8U));
    vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
        = ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))
            ? vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o
            : vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
           [vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1]);
    vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B 
        = ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))
            ? vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm
            : vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs
           [vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2]);
    __Vtableidx1 = (((IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3) 
                     << 3U) | ((0xffffffcU & (((0x80U 
                                                > vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o) 
                                               << 2U) 
                                              & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)] 
                                                 >> 4U))) 
                               | (3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                        >> 4U))));
    vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl 
        = VSingleCycleCPU__ConstPool__TABLE_h05a20901_0
        [__Vtableidx1];
    vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 0U;
    if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 0U;
            } else if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 0U;
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                       >> (0x1fU & vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B));
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            }
        } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = VL_SHIFTRS_III(32,32,5, vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A, 
                                     (0x1fU & vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B));
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                       << (0x1fU & vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B));
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            }
        } else if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                   ^ vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B);
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero 
                = ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
                    ? 1U : 0U);
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (VL_LTS_III(32, vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A, vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B)
                        ? 1U : 0U);
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                    = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                       - vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B);
                vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero 
                    = ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
                        ? 1U : 0U);
            }
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut = 0U;
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 0U;
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
                = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
                   + vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B);
        }
    } else if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl))) {
        vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
            = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
               | vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B);
        vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 
            ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
              ? 1U : 0U);
    } else {
        vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut 
            = (vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A 
               & vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B);
        vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero = 
            ((0U == vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)
              ? 1U : 0U);
    }
    vlSelfRef.SingleCycleCPU__DOT__m_Mux_PC_out = (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                                        >> 9U)))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                                         >> 9U)))
                                                     ? 
                                                    (vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o 
                                                     + 
                                                     VL_SHIFTL_III(32,32,32, vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm, 1U))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                                          >> 9U)))
                                                      ? vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut
                                                      : 0U)));
    vlSelfRef.SingleCycleCPU__DOT__m_Mux_WriteData_out 
        = ((0U == (3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                         >> 6U))) ? vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut
            : ((1U == (3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                             >> 6U))) ? vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData
                : ((2U == (3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                 >> 6U))) ? ((IData)(4U) 
                                             + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)
                    : 0U)));
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_triggers__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCycleCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VSingleCycleCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__act\n"); );
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
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] SingleCycleCPU.m_ALU_ALUOut)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] SingleCycleCPU.m_Control_memRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__nba\n"); );
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
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] SingleCycleCPU.m_ALU_ALUOut)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] SingleCycleCPU.m_Control_memRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleCPU___024root____Vm_traceActivitySetAll(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___ctor_var_reset(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2 = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = VL_RAND_RESET_I(11);
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__branch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SingleCycleCPU__DOT__m_ImmGen__DOT__opcode = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__start__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
