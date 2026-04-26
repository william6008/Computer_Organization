// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_0_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_0_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)),32);
        bufp->chgIData(oldp+2,(vlSelfRef.SingleCycleCPU__DOT__m_InstMem_inst),32);
        bufp->chgIData(oldp+3,(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm),32);
        bufp->chgIData(oldp+4,(VL_SHIFTL_III(32,32,32, vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm, 1U)),32);
        bufp->chgIData(oldp+5,((vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o 
                                + VL_SHIFTL_III(32,32,32, vlSelfRef.SingleCycleCPU__DOT__m_ImmGen_imm, 1U))),32);
        bufp->chgBit(oldp+6,(((0x80U > vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o) 
                              & (vlSelfRef.SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                 [(0x7fU & vlSelfRef.SingleCycleCPU__DOT__m_PC_pc_o)] 
                                 >> 6U))));
        bufp->chgCData(oldp+7,(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Control__funct3),3);
        bufp->chgCData(oldp+8,(vlSelfRef.SingleCycleCPU__DOT__m_ImmGen__DOT__opcode),7);
        bufp->chgCData(oldp+9,(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1),5);
        bufp->chgCData(oldp+10,(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+11,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+43,(vlSelfRef.SingleCycleCPU__DOT__m_Control_memRead));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                     >> 3U))));
        bufp->chgBit(oldp+45,((1U & (IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                     >> 2U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                     >> 1U))));
        bufp->chgCData(oldp+48,((3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                       >> 6U))),2);
        bufp->chgCData(oldp+49,((3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+50,((3U & ((IData)(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals) 
                                       >> 9U))),2);
        bufp->chgIData(oldp+51,(vlSelfRef.SingleCycleCPU__DOT__m_Register_readData1),32);
        bufp->chgIData(oldp+52,(vlSelfRef.SingleCycleCPU__DOT__m_Register_readData2),32);
        bufp->chgBit(oldp+53,(vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrEq));
        bufp->chgBit(oldp+54,(vlSelfRef.SingleCycleCPU__DOT__m_BranchComp_BrLT));
        bufp->chgIData(oldp+55,(vlSelfRef.SingleCycleCPU__DOT__m_Mux_PC_out),32);
        bufp->chgIData(oldp+56,(vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_A),32);
        bufp->chgIData(oldp+57,(vlSelfRef.SingleCycleCPU__DOT__m_Mux_ALU_out_B),32);
        bufp->chgCData(oldp+58,(vlSelfRef.SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl),4);
        bufp->chgIData(oldp+59,(vlSelfRef.SingleCycleCPU__DOT__m_ALU_ALUOut),32);
        bufp->chgBit(oldp+60,(vlSelfRef.SingleCycleCPU__DOT__m_ALU_zero));
        bufp->chgSData(oldp+61,(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals),11);
        bufp->chgBit(oldp+62,(vlSelfRef.SingleCycleCPU__DOT__m_Control__DOT__branch));
    }
    bufp->chgBit(oldp+63,(vlSelfRef.clk));
    bufp->chgBit(oldp+64,(vlSelfRef.start));
    bufp->chgIData(oldp+65,(vlSelfRef.r[0]),32);
    bufp->chgIData(oldp+66,(vlSelfRef.r[1]),32);
    bufp->chgIData(oldp+67,(vlSelfRef.r[2]),32);
    bufp->chgIData(oldp+68,(vlSelfRef.r[3]),32);
    bufp->chgIData(oldp+69,(vlSelfRef.r[4]),32);
    bufp->chgIData(oldp+70,(vlSelfRef.r[5]),32);
    bufp->chgIData(oldp+71,(vlSelfRef.r[6]),32);
    bufp->chgIData(oldp+72,(vlSelfRef.r[7]),32);
    bufp->chgIData(oldp+73,(vlSelfRef.r[8]),32);
    bufp->chgIData(oldp+74,(vlSelfRef.r[9]),32);
    bufp->chgIData(oldp+75,(vlSelfRef.r[10]),32);
    bufp->chgIData(oldp+76,(vlSelfRef.r[11]),32);
    bufp->chgIData(oldp+77,(vlSelfRef.r[12]),32);
    bufp->chgIData(oldp+78,(vlSelfRef.r[13]),32);
    bufp->chgIData(oldp+79,(vlSelfRef.r[14]),32);
    bufp->chgIData(oldp+80,(vlSelfRef.r[15]),32);
    bufp->chgIData(oldp+81,(vlSelfRef.r[16]),32);
    bufp->chgIData(oldp+82,(vlSelfRef.r[17]),32);
    bufp->chgIData(oldp+83,(vlSelfRef.r[18]),32);
    bufp->chgIData(oldp+84,(vlSelfRef.r[19]),32);
    bufp->chgIData(oldp+85,(vlSelfRef.r[20]),32);
    bufp->chgIData(oldp+86,(vlSelfRef.r[21]),32);
    bufp->chgIData(oldp+87,(vlSelfRef.r[22]),32);
    bufp->chgIData(oldp+88,(vlSelfRef.r[23]),32);
    bufp->chgIData(oldp+89,(vlSelfRef.r[24]),32);
    bufp->chgIData(oldp+90,(vlSelfRef.r[25]),32);
    bufp->chgIData(oldp+91,(vlSelfRef.r[26]),32);
    bufp->chgIData(oldp+92,(vlSelfRef.r[27]),32);
    bufp->chgIData(oldp+93,(vlSelfRef.r[28]),32);
    bufp->chgIData(oldp+94,(vlSelfRef.r[29]),32);
    bufp->chgIData(oldp+95,(vlSelfRef.r[30]),32);
    bufp->chgIData(oldp+96,(vlSelfRef.r[31]),32);
    bufp->chgIData(oldp+97,(vlSelfRef.SingleCycleCPU__DOT__m_DataMemory_readData),32);
    bufp->chgIData(oldp+98,(vlSelfRef.SingleCycleCPU__DOT__m_Mux_WriteData_out),32);
    bufp->chgCData(oldp+99,(vlSelfRef.SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
