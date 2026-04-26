// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___nba_comb__TOP__1(VSingleCycleCPU___024root* vlSelf);

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    // Body
    vlSelfRef.__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelfRef.__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelfRef.start) {
        if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))) {
            vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut));
            vlSelfRef.__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2 
                            >> 0x10U));
            vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut));
            vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2 
                            >> 8U));
            vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut));
            vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2);
            vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut);
        }
        vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o = vlSelfRef.SingleCycleCPU__DOT__m_Mux_PC_out;
    } else {
        vlSelfRef.__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o = 0U;
    }
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
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_2 
                        >> 0xfU));
        vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
            = __VdfgRegularize_hd87f99a1_0_3;
        vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_3 
                        >> 0x14U));
    }
    vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm = (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         ((((- (IData)(
                                                                       (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                        >> 0x1fU))) 
                                                            << 0x14U) 
                                                           | (0x80000U 
                                                              & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                 >> 0xcU))) 
                                                          | ((0x7f800U 
                                                              & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                 >> 1U)) 
                                                             | ((0x400U 
                                                                 & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                    >> 0xaU)) 
                                                                | (0x3ffU 
                                                                   & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                      >> 0x15U)))))
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (((0x800U 
                                                               & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                  >> 0x14U)) 
                                                              | (0x400U 
                                                                 & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                    << 3U))) 
                                                             | ((0x3f0U 
                                                                 & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                    >> 0x15U)) 
                                                                | (0xfU 
                                                                   & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                      >> 8U)))))
                                                          : 0U)
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | ((0xfe0U 
                                                              & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                   >> 7U))))
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U))))));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __VdlyVal__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __VdlyDim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelfRef.start) {
        if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))) {
            __VdlyVal__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))
                    ? 0U : vlSelfRef.SingleCycleCPU__DOT__m_Mux_WriteData_out);
            __VdlyDim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg;
            __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
        }
    } else {
        __VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[__VdlyDim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __VdlyVal__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__VdlySet__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
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
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.SingleCycleCPU__DOT__m_Control_memRead) {
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData 
            = ((0xffffffU & vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData) 
               | (vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                  [(0x7fU & ((IData)(3U) + vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut))] 
                  << 0x18U));
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData 
            = ((0xff00ffffU & vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData) 
               | (vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                  [(0x7fU & ((IData)(2U) + vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut))] 
                  << 0x10U));
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData 
            = ((0xffff00ffU & vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData) 
               | (vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                  [(0x7fU & ((IData)(1U) + vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut))] 
                  << 8U));
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData 
            = ((0xffffff00U & vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData) 
               | vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
               [(0x7fU & vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut)]);
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg 
        = ((0x80U <= vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)
            ? 0U : (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                             >> 7U)));
    if (vlSelfRef.__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelfRef.__VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelfRef.__VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x7fU)) {
            vlSelfRef.SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h05a20901_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            } else if ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
                    = ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                        ? ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                            ? ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                ? 0x282U : 0U) : 0U)
                        : 0U);
            } else if ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
                    = ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                        ? ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                            ? 0x486U : 0U) : 0U);
            } else if ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))) {
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
                    vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
                }
            } else {
                vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
            }
        } else {
            vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals = 0U;
        }
    } else {
        vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals 
            = ((0x20U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                    ? ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                 ? 0U : ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                              ? 0x32U
                                              : 0U)
                                          : 0U))) : 
                   ((8U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                     ? 0U : ((4U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                              ? 0U : ((2U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                       ? ((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                           ? 0xcU : 0U)
                                       : 0U)))) : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 7U
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 0x16U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode))
                                                        ? 0x146U
                                                        : 0U)
                                                       : 0U)))));
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
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);

bool VSingleCycleCPU___024root___eval_phase__act(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VSingleCycleCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSingleCycleCPU___024root___eval_phase__nba(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSingleCycleCPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VSingleCycleCPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VSingleCycleCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
