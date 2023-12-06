module orALU(
    // input 
    input logic [7:0] A_i , B_i ,

    // output
    output logic [7:0] OR_RESULT_o
);
    assign OR_RESULT_o = A_i | B_i ; 
    // genvar i;
    // generate
    //     for (i = 0; i < 8 ; i++ ) begin OR_GEN
    //         assign OR_RESULT_o[i] = A_i[i] | B_i[i] ; 
    //     end
    // endgenerate
endmodule : orALU
