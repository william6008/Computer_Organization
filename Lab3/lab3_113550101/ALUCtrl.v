module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

    
    // Example for addi instruction:
    // ALUOp = 2'b01, funct3 = 3'b000,
    always @(*) begin
        case(ALUOp)
            2'b11 : case({funct7,funct3})   //R-type
                        // TODO
                        {1'b0, 3'b000}:  // ADD
                            ALUCtl = 4'b0010;
                        {1'b1, 3'b000}:  // SUB
                            ALUCtl = 4'b0110;
                        {1'b0, 3'b110}:  // OR
                            ALUCtl = 4'b0001;
                        {1'b0, 3'b111}:  // AND
                            ALUCtl = 4'b0000;
                        {1'b0, 3'b010}:  // SLT
                            ALUCtl = 4'b0111;
                        {1'b0, 3'b100}:  // XOR
                            ALUCtl = 4'b1001;
                        {1'b0, 3'b001}:  // SLL
                            ALUCtl = 4'b1010;
                        {1'b0, 3'b101}:  // SRL
                            ALUCtl = 4'b1100;
                        {1'b1, 3'b101}:  // SRA
                            ALUCtl = 4'b1011;

                        default: ALUCtl = 4'bxxxx;
                    endcase
            2'b01 : case(funct3)            //I-type
                        // TODO
                        3'b000: ALUCtl = 4'b0010; // ADDI
                        3'b110: ALUCtl = 4'b0001; // ORI
                        3'b111: ALUCtl = 4'b0000; // ANDI
                        3'b010: ALUCtl = 4'b0111; // SLTI
                        3'b100: ALUCtl = 4'b1001; // XORI
                        3'b001: ALUCtl = 4'b1010; // SLLI
                        default: ALUCtl = 4'bxxxx;
                    endcase
            2'b00 : ALUCtl = 4'b0010; // lw, sw, jalr, auipc
            

            // Todo: implement other ALUOp cases
            default: ALUCtl = 4'bxxxx;
        endcase
    end


endmodule

