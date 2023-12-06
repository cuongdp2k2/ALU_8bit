module alu #(
    parameter OP_ADD = 3'b000 ,
    parameter OP_SUB = 3'b001 ,
    parameter OP_LSL = 3'b010 ,
    parameter OP_LSR = 3'b011 ,
    parameter OP_AND = 3'b100 ,
    parameter OP_OR  = 3'b101 ,
    parameter OP_NOT = 3'b110 ,
    parameter OP_FWA = 3'b111 
) (
    // input
    input logic [7:0] A_i , B_i ,
    input logic [2:0] ALU_op_i ,

    // output
    output logic [7:0] ALU_RESULT_o ,
    output logic [3:0] ALU_FLAGS_o      // oVerflow , Carry, Negative, Zero
);
    logic [7:0] ADD_RESULT_wire ;
    logic [7:0] SUB_RESULT_wire ;
    logic [7:0] LSL_RESULT_wire ;
    logic [7:0] LSR_RESULT_wire ;
    logic [7:0] AND_RESULT_wire ;
    logic [7:0] OR_RESULT_wire  ;
    logic [7:0] NOT_RESULT_wire ;
    logic [7:0] ALU_RESULT_wire ;
    logic       sum_wire        ;
    logic [1:0] cout_wire       ;

    always_comb begin : ALU_Functions
        case (ALU_op_i)
            OP_ADD : ALU_RESULT_wire = ADD_RESULT_wire ;
            OP_SUB : ALU_RESULT_wire = SUB_RESULT_wire ;
            OP_LSL : ALU_RESULT_wire = LSL_RESULT_wire ; 
            OP_LSR : ALU_RESULT_wire = LSR_RESULT_wire ;
            OP_AND : ALU_RESULT_wire = AND_RESULT_wire ;
            OP_OR  : ALU_RESULT_wire = OR_RESULT_wire ;
            OP_NOT : ALU_RESULT_wire = NOT_RESULT_wire ;
            OP_FWA : ALU_RESULT_wire = A_i ;
            default: ALU_RESULT_wire = 0 ;
        endcase
    end

    add AddFunc(
        .cin(ALU_op_i[0]) ,
        .A_i(A_i) ,
        .B_i(B_i) ,

        .cout(cout_wire[0]) ,
        .ADD_RESULT_o(ADD_RESULT_wire)
    );

    sub SubFunc(
        .cin(ALU_op_i[0]) ,
        .A_i(A_i) ,
        .B_i(B_i) ,

        .cout(cout_wire[1]) ,
        .SUB_RESULT_o(SUB_RESULT_wire)
    );

    lsl SllFunc (
        .data_i(A_i) ,
        .shamt_i(B_i[3:0]) ,

        .data_o(LSL_RESULT_wire)
    );

    lsr SrlFunc(
        .data_i(A_i) ,
        .shamt_i(B_i[3:0]) ,

        .data_o(LSR_RESULT_wire)
    );

    andALU AndFunc(
        .A_i(A_i) ,
        .B_i(B_i) ,

        .AND_RESULT_o(AND_RESULT_wire)
    );

    orALU OrFunc(
        .A_i(A_i) ,
        .B_i(B_i) ,

        .OR_RESULT_o(OR_RESULT_wire)
    );

    notALU NotFunc(
        .data_i(A_i) ,

        .ndata_o(NOT_RESULT_wire)
    );
    assign sum_wire = (ALU_op_i == OP_ADD) ? ADD_RESULT_wire[7] : (ALU_op_i == OP_SUB) ? SUB_RESULT_wire[7] : 0 ;
    assign ALU_RESULT_o = ALU_RESULT_wire ;
    assign ALU_FLAGS_o[0] = (ADD_RESULT_wire == 0) ? 1'b1 : 1'b0 ;  // zero
    assign ALU_FLAGS_o[1] = ALU_RESULT_wire[7]                   ;  // negative          
    assign ALU_FLAGS_o[2] = cout_wire[ALU_op_i]                  ;  // carry  
    assign ALU_FLAGS_o[3] = (ALU_op_i == OP_ADD || ALU_op_i == OP_SUB ) ? ~ALU_op_i[1] & ( A_i[7] ^ sum_wire) & ~( ALU_op_i[0] ^ A_i[7] ^ B_i[7] ) : 0 ;

endmodule