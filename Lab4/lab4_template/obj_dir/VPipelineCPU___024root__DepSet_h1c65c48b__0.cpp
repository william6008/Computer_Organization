// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "VPipelineCPU__pch.h"
#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf);
void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf);

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_h6b60acea_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg1_inst_out;
    __Vdly__PipelineCPU__DOT__reg1_inst_out = 0;
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg2_pc_4;
    __Vdly__PipelineCPU__DOT__reg2_pc_4 = 0;
    CData/*1:0*/ __Vdly__PipelineCPU__DOT__reg3_mem_to_reg;
    __Vdly__PipelineCPU__DOT__reg3_mem_to_reg = 0;
    CData/*0:0*/ __Vdly__PipelineCPU__DOT__reg3_memWrite;
    __Vdly__PipelineCPU__DOT__reg3_memWrite = 0;
    CData/*0:0*/ __Vdly__PipelineCPU__DOT__reg3_regWrite;
    __Vdly__PipelineCPU__DOT__reg3_regWrite = 0;
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg3_pc_4;
    __Vdly__PipelineCPU__DOT__reg3_pc_4 = 0;
    CData/*4:0*/ __Vdly__PipelineCPU__DOT__reg3_writeReg;
    __Vdly__PipelineCPU__DOT__reg3_writeReg = 0;
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg3_rd2;
    __Vdly__PipelineCPU__DOT__reg3_rd2 = 0;
    // Body
    __Vdly__PipelineCPU__DOT__reg2_pc_4 = vlSelfRef.PipelineCPU__DOT__reg2_pc_4;
    __Vdly__PipelineCPU__DOT__reg3_mem_to_reg = vlSelfRef.PipelineCPU__DOT__reg3_mem_to_reg;
    __Vdly__PipelineCPU__DOT__reg3_memWrite = vlSelfRef.PipelineCPU__DOT__reg3_memWrite;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_memRead 
        = vlSelfRef.PipelineCPU__DOT__reg3_memRead;
    __Vdly__PipelineCPU__DOT__reg3_regWrite = vlSelfRef.PipelineCPU__DOT__reg3_regWrite;
    __Vdly__PipelineCPU__DOT__reg3_pc_4 = vlSelfRef.PipelineCPU__DOT__reg3_pc_4;
    __Vdly__PipelineCPU__DOT__reg3_writeReg = vlSelfRef.PipelineCPU__DOT__reg3_writeReg;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_mem_to_reg 
        = vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_regWrite 
        = vlSelfRef.PipelineCPU__DOT__reg4_regWrite;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_pc_4 = vlSelfRef.PipelineCPU__DOT__reg4_pc_4;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_writeReg 
        = vlSelfRef.PipelineCPU__DOT__reg4_writeReg;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_ALUResult 
        = vlSelfRef.PipelineCPU__DOT__reg4_ALUResult;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_ALUResult 
        = vlSelfRef.PipelineCPU__DOT__reg3_ALUResult;
    __Vdly__PipelineCPU__DOT__reg3_rd2 = vlSelfRef.PipelineCPU__DOT__reg3_rd2;
    vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_readDataResult 
        = vlSelfRef.PipelineCPU__DOT__reg4_readDataResult;
    vlSelfRef.__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelfRef.__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    __Vdly__PipelineCPU__DOT__reg1_inst_out = vlSelfRef.PipelineCPU__DOT__reg1_inst_out;
    if (vlSelfRef.start) {
        __Vdly__PipelineCPU__DOT__reg2_pc_4 = vlSelfRef.PipelineCPU__DOT__reg1_pc_4_o;
        __Vdly__PipelineCPU__DOT__reg3_mem_to_reg = vlSelfRef.PipelineCPU__DOT__reg2_mem_to_reg;
        __Vdly__PipelineCPU__DOT__reg3_memWrite = vlSelfRef.PipelineCPU__DOT__reg2_memWrite;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_memRead 
            = vlSelfRef.PipelineCPU__DOT__reg2_memRead;
        __Vdly__PipelineCPU__DOT__reg3_regWrite = vlSelfRef.PipelineCPU__DOT__reg2_regWrite;
        __Vdly__PipelineCPU__DOT__reg3_pc_4 = vlSelfRef.PipelineCPU__DOT__reg2_pc_4;
        __Vdly__PipelineCPU__DOT__reg3_writeReg = vlSelfRef.PipelineCPU__DOT__reg2_writeReg;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_mem_to_reg 
            = vlSelfRef.PipelineCPU__DOT__reg3_mem_to_reg;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_regWrite 
            = vlSelfRef.PipelineCPU__DOT__reg3_regWrite;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_pc_4 
            = vlSelfRef.PipelineCPU__DOT__reg3_pc_4;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_writeReg 
            = vlSelfRef.PipelineCPU__DOT__reg3_writeReg;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_ALUResult 
            = vlSelfRef.PipelineCPU__DOT__reg3_ALUResult;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_ALUResult 
            = vlSelfRef.PipelineCPU__DOT__ALUOut;
        vlSelfRef.PipelineCPU__DOT__reg2_regWrite = 
            (1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                   >> 1U));
        vlSelfRef.PipelineCPU__DOT__reg2_memRead = 
            (1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                   >> 8U));
        vlSelfRef.PipelineCPU__DOT__reg2_memWrite = 
            (1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                   >> 3U));
        vlSelfRef.PipelineCPU__DOT__reg2_mem_to_reg 
            = (3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                     >> 6U));
        __Vdly__PipelineCPU__DOT__reg3_rd2 = vlSelfRef.PipelineCPU__DOT__reg2_rd2;
        vlSelfRef.PipelineCPU__DOT__reg2_writeReg = 
            (0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                      >> 7U));
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_readDataResult 
            = vlSelfRef.PipelineCPU__DOT__memRead_out;
        vlSelfRef.PipelineCPU__DOT__reg2_pc = vlSelfRef.PipelineCPU__DOT__reg1_pc_o;
        vlSelfRef.PipelineCPU__DOT__reg2_imm = vlSelfRef.PipelineCPU__DOT__imm;
        vlSelfRef.PipelineCPU__DOT__reg2_isU = (1U 
                                                & (IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl));
        vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc = (1U 
                                                   & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 2U));
        vlSelfRef.PipelineCPU__DOT__reg2_ALUop = (3U 
                                                  & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                     >> 4U));
        vlSelfRef.PipelineCPU__DOT__reg2_funct3 = (7U 
                                                   & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                      >> 0xcU));
        vlSelfRef.PipelineCPU__DOT__reg2_funct7 = (1U 
                                                   & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                      >> 0x1eU));
        vlSelfRef.PipelineCPU__DOT__reg1_pc_4_o = ((IData)(4U) 
                                                   + vlSelfRef.PipelineCPU__DOT__pc_out);
        vlSelfRef.PipelineCPU__DOT__reg1_pc_o = vlSelfRef.PipelineCPU__DOT__pc_out;
        if (vlSelfRef.PipelineCPU__DOT__reg3_memWrite) {
            vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelfRef.PipelineCPU__DOT__reg3_rd2 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelfRef.PipelineCPU__DOT__reg3_ALUResult));
            vlSelfRef.__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelfRef.PipelineCPU__DOT__reg3_rd2 
                            >> 0x10U));
            vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelfRef.PipelineCPU__DOT__reg3_ALUResult));
            vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelfRef.PipelineCPU__DOT__reg3_rd2 
                            >> 8U));
            vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelfRef.PipelineCPU__DOT__reg3_ALUResult));
            vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelfRef.PipelineCPU__DOT__reg3_rd2);
            vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelfRef.PipelineCPU__DOT__reg3_ALUResult);
        }
        __Vdly__PipelineCPU__DOT__reg1_inst_out = (
                                                   (0x80U 
                                                    <= vlSelfRef.PipelineCPU__DOT__pc_out)
                                                    ? 0U
                                                    : 
                                                   (((vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                                      [
                                                      (0x7fU 
                                                       & vlSelfRef.PipelineCPU__DOT__pc_out)] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.PipelineCPU__DOT__pc_out))] 
                                                        << 0x10U)) 
                                                    | ((vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(2U) 
                                                            + vlSelfRef.PipelineCPU__DOT__pc_out))] 
                                                        << 8U) 
                                                       | vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(3U) 
                                                           + vlSelfRef.PipelineCPU__DOT__pc_out))])));
        vlSelfRef.PipelineCPU__DOT__reg2_rd1 = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                       >> 0xfU))];
        vlSelfRef.PipelineCPU__DOT__reg2_rd2 = vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                       >> 0x14U))];
        vlSelfRef.PipelineCPU__DOT__pc_out = vlSelfRef.PipelineCPU__DOT__pc_mux_out;
    } else {
        __Vdly__PipelineCPU__DOT__reg2_pc_4 = vlSelfRef.PipelineCPU__DOT__reg2_pc_4;
        __Vdly__PipelineCPU__DOT__reg3_mem_to_reg = vlSelfRef.PipelineCPU__DOT__reg3_mem_to_reg;
        __Vdly__PipelineCPU__DOT__reg3_memWrite = vlSelfRef.PipelineCPU__DOT__reg3_memWrite;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_memRead 
            = vlSelfRef.PipelineCPU__DOT__reg3_memRead;
        __Vdly__PipelineCPU__DOT__reg3_regWrite = vlSelfRef.PipelineCPU__DOT__reg3_regWrite;
        __Vdly__PipelineCPU__DOT__reg3_pc_4 = vlSelfRef.PipelineCPU__DOT__reg3_pc_4;
        __Vdly__PipelineCPU__DOT__reg3_writeReg = vlSelfRef.PipelineCPU__DOT__reg3_writeReg;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_mem_to_reg 
            = vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_regWrite 
            = vlSelfRef.PipelineCPU__DOT__reg4_regWrite;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_pc_4 
            = vlSelfRef.PipelineCPU__DOT__reg4_pc_4;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_writeReg 
            = vlSelfRef.PipelineCPU__DOT__reg4_writeReg;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_ALUResult 
            = vlSelfRef.PipelineCPU__DOT__reg4_ALUResult;
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_ALUResult 
            = vlSelfRef.PipelineCPU__DOT__reg3_ALUResult;
        vlSelfRef.PipelineCPU__DOT__reg2_regWrite = 
            (1U & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_regWrite));
        vlSelfRef.PipelineCPU__DOT__reg2_memRead = 
            (1U & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_memRead));
        vlSelfRef.PipelineCPU__DOT__reg2_memWrite = 
            (1U & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_memWrite));
        vlSelfRef.PipelineCPU__DOT__reg2_mem_to_reg 
            = (3U & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_mem_to_reg));
        __Vdly__PipelineCPU__DOT__reg3_rd2 = vlSelfRef.PipelineCPU__DOT__reg3_rd2;
        vlSelfRef.PipelineCPU__DOT__reg2_writeReg = 
            (0x1fU & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_writeReg));
        vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_readDataResult 
            = vlSelfRef.PipelineCPU__DOT__reg4_readDataResult;
        vlSelfRef.PipelineCPU__DOT__reg2_pc = vlSelfRef.PipelineCPU__DOT__reg2_pc;
        vlSelfRef.PipelineCPU__DOT__reg2_imm = vlSelfRef.PipelineCPU__DOT__reg2_imm;
        vlSelfRef.PipelineCPU__DOT__reg2_isU = (1U 
                                                & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_isU));
        vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc = (1U 
                                                   & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc));
        vlSelfRef.PipelineCPU__DOT__reg2_ALUop = (3U 
                                                  & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_ALUop));
        vlSelfRef.PipelineCPU__DOT__reg2_funct3 = (7U 
                                                   & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_funct3));
        vlSelfRef.PipelineCPU__DOT__reg2_funct7 = (1U 
                                                   & (IData)(vlSelfRef.PipelineCPU__DOT__reg2_funct7));
        vlSelfRef.PipelineCPU__DOT__reg1_pc_4_o = vlSelfRef.PipelineCPU__DOT__reg1_pc_4_o;
        vlSelfRef.PipelineCPU__DOT__reg1_pc_o = vlSelfRef.PipelineCPU__DOT__reg1_pc_o;
        vlSelfRef.__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        __Vdly__PipelineCPU__DOT__reg1_inst_out = vlSelfRef.PipelineCPU__DOT__reg1_inst_out;
        vlSelfRef.PipelineCPU__DOT__reg2_rd1 = vlSelfRef.PipelineCPU__DOT__reg2_rd1;
        vlSelfRef.PipelineCPU__DOT__reg2_rd2 = vlSelfRef.PipelineCPU__DOT__reg2_rd2;
        vlSelfRef.PipelineCPU__DOT__pc_out = 0U;
    }
    vlSelfRef.PipelineCPU__DOT__reg2_pc_4 = __Vdly__PipelineCPU__DOT__reg2_pc_4;
    vlSelfRef.PipelineCPU__DOT__reg3_mem_to_reg = __Vdly__PipelineCPU__DOT__reg3_mem_to_reg;
    vlSelfRef.PipelineCPU__DOT__reg3_regWrite = __Vdly__PipelineCPU__DOT__reg3_regWrite;
    vlSelfRef.PipelineCPU__DOT__reg3_pc_4 = __Vdly__PipelineCPU__DOT__reg3_pc_4;
    vlSelfRef.PipelineCPU__DOT__reg3_writeReg = __Vdly__PipelineCPU__DOT__reg3_writeReg;
    vlSelfRef.PipelineCPU__DOT__reg3_memWrite = __Vdly__PipelineCPU__DOT__reg3_memWrite;
    vlSelfRef.PipelineCPU__DOT__reg3_rd2 = __Vdly__PipelineCPU__DOT__reg3_rd2;
    vlSelfRef.PipelineCPU__DOT__reg1_inst_out = __Vdly__PipelineCPU__DOT__reg1_inst_out;
    __Vtableidx2 = (((IData)(vlSelfRef.PipelineCPU__DOT__reg2_funct7) 
                     << 5U) | (((IData)(vlSelfRef.PipelineCPU__DOT__reg2_funct3) 
                                << 2U) | (IData)(vlSelfRef.PipelineCPU__DOT__reg2_ALUop)));
    vlSelfRef.PipelineCPU__DOT__ALUCtrl = VPipelineCPU__ConstPool__TABLE_h6b60acea_0
        [__Vtableidx2];
    vlSelfRef.PipelineCPU__DOT__ALUmux_out = ((IData)(vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc)
                                               ? vlSelfRef.PipelineCPU__DOT__reg2_imm
                                               : vlSelfRef.PipelineCPU__DOT__reg2_rd2);
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
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __VdlyVal__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __VdlyDim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelfRef.start) {
        if (vlSelfRef.PipelineCPU__DOT__reg4_regWrite) {
            __VdlyVal__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_writeReg))
                    ? 0U : ((0U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg))
                             ? vlSelfRef.PipelineCPU__DOT__reg4_ALUResult
                             : ((1U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg))
                                 ? vlSelfRef.PipelineCPU__DOT__reg4_readDataResult
                                 : vlSelfRef.PipelineCPU__DOT__reg4_pc_4)));
            __VdlyDim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelfRef.PipelineCPU__DOT__reg4_writeReg;
            __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
        }
    } else {
        __VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[__VdlyDim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __VdlyVal__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__VdlySet__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
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
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PipelineCPU__DOT__reg3_memRead) {
        vlSelfRef.PipelineCPU__DOT__memRead_out = (
                                                   (0xffffffU 
                                                    & vlSelfRef.PipelineCPU__DOT__memRead_out) 
                                                   | (vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + vlSelfRef.PipelineCPU__DOT__reg3_ALUResult))] 
                                                      << 0x18U));
        vlSelfRef.PipelineCPU__DOT__memRead_out = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.PipelineCPU__DOT__memRead_out) 
                                                   | (vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.PipelineCPU__DOT__reg3_ALUResult))] 
                                                      << 0x10U));
        vlSelfRef.PipelineCPU__DOT__memRead_out = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.PipelineCPU__DOT__memRead_out) 
                                                   | (vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.PipelineCPU__DOT__reg3_ALUResult))] 
                                                      << 8U));
        vlSelfRef.PipelineCPU__DOT__memRead_out = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.PipelineCPU__DOT__memRead_out) 
                                                   | vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & vlSelfRef.PipelineCPU__DOT__reg3_ALUResult)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PipelineCPU__DOT__reg4_regWrite = vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_regWrite;
    vlSelfRef.PipelineCPU__DOT__reg4_writeReg = vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_writeReg;
    vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg = vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_mem_to_reg;
    vlSelfRef.PipelineCPU__DOT__reg4_ALUResult = vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_ALUResult;
    vlSelfRef.PipelineCPU__DOT__reg4_readDataResult 
        = vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_readDataResult;
    vlSelfRef.PipelineCPU__DOT__reg4_pc_4 = vlSelfRef.__Vdly__PipelineCPU__DOT__reg4_pc_4;
    vlSelfRef.PipelineCPU__DOT__reg3_memRead = vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_memRead;
    vlSelfRef.PipelineCPU__DOT__reg3_ALUResult = vlSelfRef.__Vdly__PipelineCPU__DOT__reg3_ALUResult;
    if (vlSelfRef.__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelfRef.__VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelfRef.__VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelfRef.__VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x7fU)) {
            vlSelfRef.PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
}

extern const VlUnpacked<SData/*10:0*/, 4096> VPipelineCPU__ConstPool__TABLE_h92d9ad87_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);

bool VPipelineCPU___024root___eval_phase__act(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPipelineCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VPipelineCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPipelineCPU___024root___eval_phase__nba(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPipelineCPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
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
            VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VPipelineCPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VPipelineCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
