module HazardDetection(
    input wire [6:0] id_opcode,   // Opcode of the instruction in ID
    input wire [4:0] id_R1,      // Source register 1 in ID stage
    input wire [4:0] id_R2,      // Source register 2 in ID stage
    input wire [4:0] ex_Rd,      // Destination register in EX stage
    input wire [4:0] mem_Rd,     // Destination register in MEM stage
    input wire ex_MemRead,
    input wire ex_RegWrite,
    input wire mem_MemRead,
    output reg RePC,             // re-fetch the flushed instruction
    output reg Flush_HD           // flush IF/ID reg & ID/EX reg
);

    // This unit checks for potential data hazards that cannot be resolved by forwarding.

    // TODO: implement your hazard detection unit here

    // Hint:
    // You can design your own inputs and outputs as needed, as long as everything functions
    // correctly in the end.
    // Refer to the textbook for scenarios where forwarding cannot resolve data hazards,
    // for example, where using a stall might be necessary.

    // Be mindful of data hazards that may occur with branch instructions.
    // Data hazards can arise when a branch instruction depends on the result of previous instructions,
    // such as when the values being compared in a branch are not yet computed.
    // In such cases, if forwarding cannot resolve the hazard, you may need to insert a stall to avoid incorrect execution.

    reg uses_rs1;
    reg uses_rs2;
    reg reads_operand_in_id;
    reg ex_dependency;
    reg mem_dependency;
    reg load_use_hazard;

    always @(*) begin
        uses_rs1 = 1'b0;
        uses_rs2 = 1'b0;
        reads_operand_in_id = 1'b0;

        case (id_opcode)
            7'b0110011: begin // R-type
                uses_rs1 = 1'b1;
                uses_rs2 = 1'b1;
            end
            7'b0010011,       // I-type ALU
            7'b0000011: begin // lw
                uses_rs1 = 1'b1;
            end
            7'b0100011: begin // sw
                uses_rs1 = 1'b1;
                uses_rs2 = 1'b1;
            end
            7'b1100011: begin // branch operands are compared in ID
                uses_rs1 = 1'b1;
                uses_rs2 = 1'b1;
                reads_operand_in_id = 1'b1;
            end
            7'b1100111: begin // jalr target uses rs1 in ID
                uses_rs1 = 1'b1;
                reads_operand_in_id = 1'b1;
            end
            default: begin
                uses_rs1 = 1'b0;
                uses_rs2 = 1'b0;
                reads_operand_in_id = 1'b0;
            end
        endcase

        // Ordinary load-use hazard: load data is not ready for the next EX
        // stage.  Ignore x0 and instruction fields which are not sources.
        load_use_hazard = ex_MemRead && (ex_Rd != 5'b0) &&
            ((uses_rs1 && (ex_Rd == id_R1)) ||
             (uses_rs2 && (ex_Rd == id_R2)));

        // Branch/JALR consume operands one stage earlier (in ID).  A result
        // still in EX is unavailable, and a load still in MEM cannot use the
        // ID forwarding path because reg3_ALUResult is only its address.
        ex_dependency = reads_operand_in_id && ex_RegWrite &&
            (ex_Rd != 5'b0) &&
            ((uses_rs1 && (ex_Rd == id_R1)) ||
             (uses_rs2 && (ex_Rd == id_R2)));
        mem_dependency = reads_operand_in_id && mem_MemRead &&
            (mem_Rd != 5'b0) &&
            ((uses_rs1 && (mem_Rd == id_R1)) ||
             (uses_rs2 && (mem_Rd == id_R2)));

        RePC = load_use_hazard || ex_dependency || mem_dependency;
        Flush_HD = RePC;
    end

endmodule
