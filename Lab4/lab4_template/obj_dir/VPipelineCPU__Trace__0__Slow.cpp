// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PipelineCPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+125,0,"pc_mux_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ins_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"readData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"readData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"imm_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"adder2_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"ALUmux_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"memRead_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"ALUOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"ALUCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"memtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"PCSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+129,0,"Brlt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"Breq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"reg1_pc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"reg1_pc_4_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"reg1_inst_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"reg2_pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"reg2_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"reg2_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"reg2_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"reg2_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"reg3_pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"reg3_ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"reg3_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"reg4_pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"reg4_ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"reg4_readDataResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"reg2_writeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"reg3_writeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"reg4_writeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"reg2_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"reg2_ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"reg3_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"reg4_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"reg2_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+27,0,"reg2_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"reg2_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reg2_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"reg2_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"reg2_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"reg2_isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"reg3_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"reg3_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"reg3_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"reg4_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("EX_MEM_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_to_reg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"memWrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"memRead_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"regWrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"pc_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"writeReg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"ALU_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"mem_to_reg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+33,0,"memWrite_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"memRead_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"regWrite_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"pc_4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"writeReg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"ALU_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ID_EX_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"mem_to_reg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"ALUop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"memWrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"memRead_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"ALUSrc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"regWrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"isU_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"pc_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"writeReg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"rd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"rd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"mem_to_reg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"ALUop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"memWrite_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"memRead_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"ALUSrc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"regWrite_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"funct7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"isU_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"funct3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"pc_4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"writeReg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"rd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("IF_ID_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"pc_4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM_WB_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"mem_to_reg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"regWrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"pc_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"writeReg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"ALU_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"readDataResult_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"mem_to_reg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"regWrite_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"pc_4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"writeReg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"ALU_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"readDataResult_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"ALUctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"isUtype",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"ALUOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("m_ALUCtrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"ALUCtl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_Adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_Adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_BranchComp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"BrEq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"BrLT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("m_Control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+130,0,"BrEq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"BrLT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"memtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"PCSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+89,0,"isUtype",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_DataMemory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"readData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_ImmGen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_InstMem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"readAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_Mux_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"s0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"s1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_Mux_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"s0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"s1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"s2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_Mux_WriteData", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"s0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"s1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"s2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_Register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"readReg1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"readReg2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"writeReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"readData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"readData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_ShiftLeftOne", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VPipelineCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VPipelineCPU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_const_0_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_const_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_const_0_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+131,(4U),32);
    bufp->fullIData(oldp+132,(0x20U),32);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_0_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_0_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.PipelineCPU__DOT__pc_out),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelfRef.PipelineCPU__DOT__pc_out)),32);
    bufp->fullIData(oldp+3,(((0x80U <= vlSelfRef.PipelineCPU__DOT__pc_out)
                              ? 0U : (((vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelfRef.PipelineCPU__DOT__pc_out)] 
                                        << 0x18U) | 
                                       (vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelfRef.PipelineCPU__DOT__pc_out))] 
                                        << 0x10U)) 
                                      | ((vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                          [(0x7fU & 
                                            ((IData)(2U) 
                                             + vlSelfRef.PipelineCPU__DOT__pc_out))] 
                                          << 8U) | 
                                         vlSelfRef.PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(3U) 
                                            + vlSelfRef.PipelineCPU__DOT__pc_out))])))),32);
    bufp->fullIData(oldp+4,(vlSelfRef.PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+5,(VL_SHIFTL_III(32,32,32, vlSelfRef.PipelineCPU__DOT__imm, 1U)),32);
    bufp->fullIData(oldp+6,((vlSelfRef.PipelineCPU__DOT__imm 
                             + vlSelfRef.PipelineCPU__DOT__reg1_pc_o)),32);
    bufp->fullIData(oldp+7,(vlSelfRef.PipelineCPU__DOT__ALUmux_out),32);
    bufp->fullIData(oldp+8,(vlSelfRef.PipelineCPU__DOT__ALUOut),32);
    bufp->fullCData(oldp+9,(vlSelfRef.PipelineCPU__DOT__ALUCtrl),4);
    bufp->fullBit(oldp+10,(vlSelfRef.PipelineCPU__DOT__zero));
    bufp->fullIData(oldp+11,(vlSelfRef.PipelineCPU__DOT__reg1_pc_o),32);
    bufp->fullIData(oldp+12,(vlSelfRef.PipelineCPU__DOT__reg1_pc_4_o),32);
    bufp->fullIData(oldp+13,(vlSelfRef.PipelineCPU__DOT__reg1_inst_out),32);
    bufp->fullIData(oldp+14,(vlSelfRef.PipelineCPU__DOT__reg2_pc_4),32);
    bufp->fullIData(oldp+15,(vlSelfRef.PipelineCPU__DOT__reg2_pc),32);
    bufp->fullIData(oldp+16,(vlSelfRef.PipelineCPU__DOT__reg2_rd1),32);
    bufp->fullIData(oldp+17,(vlSelfRef.PipelineCPU__DOT__reg2_rd2),32);
    bufp->fullIData(oldp+18,(vlSelfRef.PipelineCPU__DOT__reg2_imm),32);
    bufp->fullIData(oldp+19,(vlSelfRef.PipelineCPU__DOT__reg3_pc_4),32);
    bufp->fullIData(oldp+20,(vlSelfRef.PipelineCPU__DOT__reg3_rd2),32);
    bufp->fullCData(oldp+21,(vlSelfRef.PipelineCPU__DOT__reg2_writeReg),5);
    bufp->fullCData(oldp+22,(vlSelfRef.PipelineCPU__DOT__reg3_writeReg),5);
    bufp->fullCData(oldp+23,(vlSelfRef.PipelineCPU__DOT__reg2_mem_to_reg),2);
    bufp->fullCData(oldp+24,(vlSelfRef.PipelineCPU__DOT__reg2_ALUop),2);
    bufp->fullCData(oldp+25,(vlSelfRef.PipelineCPU__DOT__reg3_mem_to_reg),2);
    bufp->fullCData(oldp+26,(vlSelfRef.PipelineCPU__DOT__reg2_funct3),3);
    bufp->fullBit(oldp+27,(vlSelfRef.PipelineCPU__DOT__reg2_memWrite));
    bufp->fullBit(oldp+28,(vlSelfRef.PipelineCPU__DOT__reg2_memRead));
    bufp->fullBit(oldp+29,(vlSelfRef.PipelineCPU__DOT__reg2_ALUSrc));
    bufp->fullBit(oldp+30,(vlSelfRef.PipelineCPU__DOT__reg2_regWrite));
    bufp->fullBit(oldp+31,(vlSelfRef.PipelineCPU__DOT__reg2_funct7));
    bufp->fullBit(oldp+32,(vlSelfRef.PipelineCPU__DOT__reg2_isU));
    bufp->fullBit(oldp+33,(vlSelfRef.PipelineCPU__DOT__reg3_memWrite));
    bufp->fullBit(oldp+34,(vlSelfRef.PipelineCPU__DOT__reg3_regWrite));
    bufp->fullBit(oldp+35,((1U & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+36,((7U & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                       >> 7U))),5);
    bufp->fullCData(oldp+38,((0x7fU & vlSelfRef.PipelineCPU__DOT__reg1_inst_out)),7);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+41,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+73,(((0U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg))
                               ? vlSelfRef.PipelineCPU__DOT__reg4_ALUResult
                               : ((1U == (IData)(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg))
                                   ? vlSelfRef.PipelineCPU__DOT__reg4_readDataResult
                                   : vlSelfRef.PipelineCPU__DOT__reg4_pc_4))),32);
    bufp->fullIData(oldp+74,(vlSelfRef.PipelineCPU__DOT__reg3_ALUResult),32);
    bufp->fullIData(oldp+75,(vlSelfRef.PipelineCPU__DOT__reg4_pc_4),32);
    bufp->fullIData(oldp+76,(vlSelfRef.PipelineCPU__DOT__reg4_ALUResult),32);
    bufp->fullIData(oldp+77,(vlSelfRef.PipelineCPU__DOT__reg4_readDataResult),32);
    bufp->fullCData(oldp+78,(vlSelfRef.PipelineCPU__DOT__reg4_writeReg),5);
    bufp->fullCData(oldp+79,(vlSelfRef.PipelineCPU__DOT__reg4_mem_to_reg),2);
    bufp->fullBit(oldp+80,(vlSelfRef.PipelineCPU__DOT__reg3_memRead));
    bufp->fullBit(oldp+81,(vlSelfRef.PipelineCPU__DOT__reg4_regWrite));
    bufp->fullCData(oldp+82,((3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 6U))),2);
    bufp->fullCData(oldp+83,((3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+84,((3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 9U))),2);
    bufp->fullBit(oldp+85,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 8U))));
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 2U))));
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 1U))));
    bufp->fullBit(oldp+89,((1U & (IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullSData(oldp+90,(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl),11);
    bufp->fullBit(oldp+91,(vlSelfRef.clk));
    bufp->fullBit(oldp+92,(vlSelfRef.start));
    bufp->fullIData(oldp+93,(vlSelfRef.r[0]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.r[1]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.r[2]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.r[3]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.r[4]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.r[5]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.r[6]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.r[7]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.r[8]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.r[9]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.r[10]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.r[11]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.r[12]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.r[13]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.r[14]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.r[15]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.r[16]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.r[17]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.r[18]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.r[19]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.r[20]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.r[21]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.r[22]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.r[23]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.r[24]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.r[25]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.r[26]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.r[27]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.r[28]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.r[29]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.r[30]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.r[31]),32);
    bufp->fullIData(oldp+125,(((0U == (3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                             >> 9U)))
                                ? ((IData)(4U) + vlSelfRef.PipelineCPU__DOT__pc_out)
                                : ((1U == (3U & ((IData)(vlSelfRef.PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                 >> 9U)))
                                    ? (vlSelfRef.PipelineCPU__DOT__imm 
                                       + vlSelfRef.PipelineCPU__DOT__reg1_pc_o)
                                    : vlSelfRef.PipelineCPU__DOT__ALUOut))),32);
    bufp->fullIData(oldp+126,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.PipelineCPU__DOT__memRead_out),32);
    bufp->fullBit(oldp+129,(VL_LTS_III(32, vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                                       [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                  >> 0xfU))], 
                                       vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                                       [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                                  >> 0x14U))])));
    bufp->fullBit(oldp+130,((vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                        >> 0xfU))] 
                             == vlSelfRef.PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelfRef.PipelineCPU__DOT__reg1_inst_out 
                                        >> 0x14U))])));
}
