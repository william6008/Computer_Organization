// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_0_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_0_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.PipelineCPU__DOT__pc_out),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelfRef.PipelineCPU__DOT__pc_out)),32);
        bufp->chgIData(oldp+2,(((0x80U <= vlSelfRef.PipelineCPU__DOT__pc_out)
                                 ? 0U : (((vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelfRef.PipelineCPU__DOT__pc_out)] 
                                           << 0x18U) 
                                          | (vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                             [(0x7fU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.PipelineCPU__DOT__pc_out))] 
                                             << 0x10U)) 
                                         | ((vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                             [(0x7fU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.PipelineCPU__DOT__pc_out))] 
                                             << 8U) 
                                            | vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(3U) 
                                                 + vlSelfRef.PipelineCPU__DOT__pc_out))])))),32);
        bufp->chgIData(oldp+3,(vlSelfRef.PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+4,(VL_SHIFTL_III(32,32,32, vlSelfRef.PipelineCPU__DOT__imm, 1U)),32);
        bufp->chgIData(oldp+5,((vlSelfRef.PipelineCPU__DOT__imm 
                                + vlSelfRef.PipelineCPU__DOT__reg1_pc_o)),32);
        bufp->chgIData(oldp+6,(vlSelfRef.PipelineCPU__DOT__ALUmux_out),32);
        bufp->chgIData(oldp+7,(vlSelfRef.PipelineCPU__DOT__ALUOut),32);
        bufp->chgCData(oldp+8,(vlSelfRef.PipelineCPU__DOT__ALUCtrl),4);
        bufp->chgBit(oldp+9,(vlSelfRef.PipelineCPU__DOT__zero));
        bufp->chgIData(oldp+10,(vlSelfRef.PipelineCPU__DOT__reg1_pc_o),32);
        bufp->chgIData(oldp+11,(vlSelfRef.PipelineCPU__DOT__reg1_pc_4_o),32);
        bufp->chgIData(oldp+12,(vlSelfRef.PipelineCPU__DOT__reg1_inst_out),32);
        bufp->chgIData(oldp+13,(vlSelfRef.PipelineCPU__DOT__reg2_pc_4),32);
        bufp->chgIData(oldp+14,(vlSelfRef.PipelineCPU__DOT__reg2_pc),32);
        bufp->chgIData(oldp+15,(vlSelfRef.PipelineCPU__DOT__reg2_rd1),32);
        bufp->chgIData(oldp+16,(vlSelfRef.PipelineCPU__DOT__reg2_rd2),32);
        bufp->chgIData(oldp+17,(vlSelfRef.PipelineCPU__DOT__reg2_imm),32);
        bufp->chgIData(oldp+18,(vlSelfRef.PipelineCPU__DOT__reg3_pc_4),32);
        bufp->chgIData(oldp+19,(vlSelfRef.PipelineCPU__DOT__reg3_rd2),32);
        bufp->chgCData(oldp+20,(vlSelfRef.PipelineCPU__DOT__reg2_writeReg),5);
        bufp->chgCData(oldp+21,(vlSelfRef.PipelineCPU__DOT__reg3_writeReg),5);
        bufp->chgCData(oldp+22,(vlSelfRef.PipelineCPU__DOT__reg2_mem_to_reg),2);
        bufp->chgCData(oldp+23,(vlSelfRef.PipelineCPU__DOT__reg2_ALUop),2);
        bufp->chgCData(oldp+24,(vlSelfRef.PipelineCPU__DOT__reg3_mem_to_reg),2);
        bufp->chgCData(oldp+25,(vlSelfRef.PipelineCPU__DOT__reg2_funct3),3);
        bufp->chgBit(oldp+26,(vlSelfRef.PipelineCPU__DOT__reg2_memWrite));
        bufp->chgBit(oldp+27,(vlSelfRef.PipelineCPU__DOT__reg2_memRead));
        bufp->chgBit(oldp+28,(vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc));
        bufp->chgBit(oldp+29,(vlSelfRef.PipelineCPU__DOT__reg2_regWrite));
        bufp->chgBit(oldp+30,(vlSelfRef.PipelineCPU__DOT__reg2_funct7));
        bufp->chgBit(oldp+31,(vlSelfRef.PipelineCPU__DOT__reg2_isU));
        bufp->chgBit(oldp+32,(vlSelfRef.PipelineCPU__DOT__reg3_memWrite));
        bufp->chgBit(oldp+33,(vlSelfRef.PipelineCPU__DOT__reg3_regWrite));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+35,((7U & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                          >> 7U))),5);
        bufp->chgCData(oldp+37,((0x7fU & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)),7);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+40,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+72,(((0U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg))
                                  ? vlSelfRef.PipelineCPU__DOT__reg4_ALUResult
                                  : ((1U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg))
                                      ? vlSelfRef.PipelineCPU__DOT__reg4_readDataResult
                                      : vlSelfRef.PipelineCPU__DOT__reg4_pc_4))),32);
        bufp->chgIData(oldp+73,(vlSelfRef.PipelineCPU__DOT__reg3_ALUResult),32);
        bufp->chgIData(oldp+74,(vlSelfRef.PipelineCPU__DOT__reg4_pc_4),32);
        bufp->chgIData(oldp+75,(vlSelfRef.PipelineCPU__DOT__reg4_ALUResult),32);
        bufp->chgIData(oldp+76,(vlSelfRef.PipelineCPU__DOT__reg4_readDataResult),32);
        bufp->chgCData(oldp+77,(vlSelfRef.PipelineCPU__DOT__reg4_writeReg),5);
        bufp->chgCData(oldp+78,(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg),2);
        bufp->chgBit(oldp+79,(vlSelfRef.PipelineCPU__DOT__reg3_memRead));
        bufp->chgBit(oldp+80,(vlSelfRef.PipelineCPU__DOT__reg4_regWrite));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+81,((3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 6U))),2);
        bufp->chgCData(oldp+82,((3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+83,((3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 9U))),2);
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 8U))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 3U))));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 2U))));
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 1U))));
        bufp->chgBit(oldp+88,((1U & (IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl))));
        bufp->chgSData(oldp+89,(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl),11);
    }
    bufp->chgBit(oldp+90,(vlSelfRef.clk));
    bufp->chgBit(oldp+91,(vlSelfRef.start));
    bufp->chgIData(oldp+92,(vlSelfRef.r[0]),32);
    bufp->chgIData(oldp+93,(vlSelfRef.r[1]),32);
    bufp->chgIData(oldp+94,(vlSelfRef.r[2]),32);
    bufp->chgIData(oldp+95,(vlSelfRef.r[3]),32);
    bufp->chgIData(oldp+96,(vlSelfRef.r[4]),32);
    bufp->chgIData(oldp+97,(vlSelfRef.r[5]),32);
    bufp->chgIData(oldp+98,(vlSelfRef.r[6]),32);
    bufp->chgIData(oldp+99,(vlSelfRef.r[7]),32);
    bufp->chgIData(oldp+100,(vlSelfRef.r[8]),32);
    bufp->chgIData(oldp+101,(vlSelfRef.r[9]),32);
    bufp->chgIData(oldp+102,(vlSelfRef.r[10]),32);
    bufp->chgIData(oldp+103,(vlSelfRef.r[11]),32);
    bufp->chgIData(oldp+104,(vlSelfRef.r[12]),32);
    bufp->chgIData(oldp+105,(vlSelfRef.r[13]),32);
    bufp->chgIData(oldp+106,(vlSelfRef.r[14]),32);
    bufp->chgIData(oldp+107,(vlSelfRef.r[15]),32);
    bufp->chgIData(oldp+108,(vlSelfRef.r[16]),32);
    bufp->chgIData(oldp+109,(vlSelfRef.r[17]),32);
    bufp->chgIData(oldp+110,(vlSelfRef.r[18]),32);
    bufp->chgIData(oldp+111,(vlSelfRef.r[19]),32);
    bufp->chgIData(oldp+112,(vlSelfRef.r[20]),32);
    bufp->chgIData(oldp+113,(vlSelfRef.r[21]),32);
    bufp->chgIData(oldp+114,(vlSelfRef.r[22]),32);
    bufp->chgIData(oldp+115,(vlSelfRef.r[23]),32);
    bufp->chgIData(oldp+116,(vlSelfRef.r[24]),32);
    bufp->chgIData(oldp+117,(vlSelfRef.r[25]),32);
    bufp->chgIData(oldp+118,(vlSelfRef.r[26]),32);
    bufp->chgIData(oldp+119,(vlSelfRef.r[27]),32);
    bufp->chgIData(oldp+120,(vlSelfRef.r[28]),32);
    bufp->chgIData(oldp+121,(vlSelfRef.r[29]),32);
    bufp->chgIData(oldp+122,(vlSelfRef.r[30]),32);
    bufp->chgIData(oldp+123,(vlSelfRef.r[31]),32);
    bufp->chgIData(oldp+124,(((0U == (3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                            >> 9U)))
                               ? ((IData)(4U) + vlSelfRef.PipelineCPU__DOT__pc_out)
                               : ((1U == (3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                >> 9U)))
                                   ? (vlSelfRef.PipelineCPU__DOT__imm 
                                      + vlSelfRef.PipelineCPU__DOT__reg1_pc_o)
                                   : vlSelfRef.PipelineCPU__DOT__ALUOut))),32);
    bufp->chgIData(oldp+125,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+126,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+127,(vlSelfRef.PipelineCPU__DOT__memRead_out),32);
    bufp->chgBit(oldp+128,(VL_LTS_III(32, vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                                      [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                 >> 0xfU))], 
                                      vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                                      [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                 >> 0x14U))])));
    bufp->chgBit(oldp+129,((vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                            [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                       >> 0xfU))] == 
                            vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                            [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                       >> 0x14U))])));
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
