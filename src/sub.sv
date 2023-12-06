module sub(
    // input 
    input logic [7:0] A_i , B_i ,
    input logic       cin ,
    // output
    output logic       cout,
    output logic [7:0] SUB_RESULT_o
);
    logic [7:0] not_B ;
    assign not_B = ~B_i;
    
    add SUB_Operate (
        .cin(cin),
        .A_i(A_i) ,
        .B_i(not_B) ,

        .ADD_RESULT_o(SUB_RESULT_o) ,
        .cout(cout)
    );
endmodule : sub