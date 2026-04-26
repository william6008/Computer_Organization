module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    always @(*) begin
        case(ALUOp)
            2'b10 : case({funct7,funct3})   //R-type
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
            2'b11 : case(funct3)            //I-type
                        // TODO
                        3'b000: ALUCtl = 4'b0010;
                        3'b110: ALUCtl = 4'b0001;
                        3'b111: ALUCtl = 4'b0000;
                        3'b010: ALUCtl = 4'b0111;
                        3'b100: ALUCtl = 4'b1001;
                        3'b001: ALUCtl = 4'b1010;
                        3'b101: begin
                            case(funct7)
                                1'b0: ALUCtl = 4'b1100;
                                1'b1: ALUCtl = 4'b1011;
                                default: ALUCtl = 4'bxxxx;
                            endcase
                        end
                        default: ALUCtl = 4'bxxxx;
                    endcase
            2'b00 : case(funct3)            //lw, sw
                        // TODO
                        3'b010: ALUCtl = 4'b0010;
                        3'b000: ALUCtl = 4'b0010;
                        default: ALUCtl = 4'bxxxx;


                    endcase
            2'b01 : case(funct3)            //branch
                        // TODO
                        3'b000: ALUCtl = 4'b0010;
                        default: ALUCtl = 4'bxxxx;

                    endcase
            default : ALUCtl = 4'bxxxx;
        endcase
    end



    



endmodule
