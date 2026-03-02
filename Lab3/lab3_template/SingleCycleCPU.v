module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

//m_PC
wire [31:0] m_PC_pc_o;

//m_Adder_1
wire [31:0] m_Adder_1_sum;

//m_InstMem
wire [31:0] m_InstMem_inst;

//m_Control
wire m_Control_memRead,
    m_Control_memWrite,
    m_Control_ALUSrc,
    m_Control_regWrite;
wire [1:0] m_Control_memtoReg,
            m_Control_ALUOp,
            m_Control_ALUSrc;

//m_Register
wire [31:0] m_Register_readData1,
            m_Register_readData2;

//m_BranchComp
wire m_BranchComp_BrEq,
    m_BranchComp_BrLT;

//m_ImmGen
wire [31:0] m_ImmGen_imm;

//m_ShiftLeftOne
wire [31:0] m_ShiftLeftOne_o;

//m_Adder2
wire [31:0] m_Adder2_sum;

//m_Mux_PC
wire [31:0] m_Mux_PC_out;

//m_Mux_ALU
wire [31:0] m_Mux_ALU_out;

//m_ALUCtrl
wire [3:0] m_ALUCtrl_ALUCtl;

//m_ALU
wire [31:0] m_ALU_ALUOut;
wire m_ALU_zero;

//m_DataMemory
wire [31:0] m_DataMemory_readData;

//m_Mux_WriteData
wire [31:0] m_Mux_WriteData_out;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(m_Mux_PC_out),
    .pc_o(m_PC_pc_o)
);

Adder m_Adder_1(
    .a(),
    .b(),
    .sum()
);


InstructionMemory m_InstMem(
    .readAddr(),
    .inst()
);

Control m_Control(
    .opcode(),
    .funct3(),
    .BrEq(),
    .BrLT(),
    .memRead(),
    .memtoReg(),
    .ALUOp(),
    .memWrite(),
    .ALUSrc(),
    .regWrite(),
    .PCSel()
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(),
    .rst(),
    .regWrite(),
    .readReg1(),
    .readReg2(),
    .writeReg(),
    .writeData(),
    .readData1(),
    .readData2()
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(),
    .B(),
    .BrEq(),
    .BrLT()
);

ImmGen m_ImmGen(
    .inst(),
    .imm()
);


ShiftLeftOne m_ShiftLeftOne(
    .i(),
    .o()
);

Adder m_Adder_2(
    .a(),
    .b(),
    .sum()
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(),
    .s0(),
    .s1(),
    .s2(),
    .out()
);


Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(),
    .s0(),
    .s1(),
    .out()
);

ALUCtrl m_ALUCtrl(
    .ALUOp(),
    .funct7(),
    .funct3(),
    .ALUCtl()
);

ALU m_ALU(
    .ALUctl(),
    .A(),
    .B(),
    .ALUOut(),
    .zero()
);


DataMemory m_DataMemory(
    .rst(),
    .clk(),
    .memWrite(),
    .memRead(),
    .address(),
    .writeData(),
    .readData()
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(),
    .s0(),
    .s1(),
    .s2(),
    .out()
);

endmodule
