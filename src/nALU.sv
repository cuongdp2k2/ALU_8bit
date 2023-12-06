module nALU #(
    parameter BUS = 8 
) (
    // input
    input logic [BUS-1:0] A_i , B_i ,
    input logic [2:0]   ALU_op_i ,

    // output
    output logic [BUS-1:0] ALU_RESULT_o ,
    output logic [3:0]     ALU_FLAGS_o      // oVerflow , Carry, Negative, Zero
);
    logic [BUS-1:0] nB_wire ;
    logic [BUS-1:0] B_wire  ;
    logic [BUS-1:0] sum_wire;
    logic [BUS-1:0] ALU_RESULT_wire;
    logic           cout_wire    ;

    //B value selector
    assign nB_wire = ~B_i ;
    assign B_wire  = (ALU_op_i[0]) ? nB_wire : B_wire ;

    // Sum -> Add , Sub
    add ADDER(
        .cin(ALU_op_i[0]) ,
        .A_i (A_i) ,
        .B_i (B_wire) ,

        .cout(cout_wire) ,
        .ADD_RESULT_o(sum_wire)
    );


    always_comb begin : RESULT 
        case (ALU_op_i[2:1])
            2'b00,
            2'b01 : ALU_RESULT_wire = sum_wire  ;
            2'b10 : ALU_RESULT_wire = A_i & B_i ;
            2'b11 : ALU_RESULT_wire = A_i | B_i ; 
            default: ALU_RESULT_wire = 0 ;
        endcase
    end

    // OUTPUT
    assign ALU_RESULT_o = ALU_RESULT_wire ;
    assign ALU_FLAGS_o[0] = ((ALU_RESULT_wire ^ 8'b0) == 0) ? 1'b1 : 1'b0 ;
    assign ALU_FLAGS_o[1] = ALU_RESULT_wire[BUS-1] ;
    assign ALU_FLAGS_o[2] = ~ALU_op_i[1] & cout_wire ;
    assign ALU_FLAGS_o[3] = ~ALU_op_i[1] & ( A_i[BUS-1] ^ sum_wire[BUS-1] )
                             & ~( ALU_op_i[0] ^ A_i[BUS-1] ^ B_i[BUS-1] ) ;

endmodule : nALU
