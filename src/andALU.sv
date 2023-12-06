module andALU(
    // input 
    input logic [7:0] A_i , B_i ,

    // output
    output logic [7:0] AND_RESULT_o
);
    assign AND_RESULT_o = A_i & B_i ;
    // genvar i;
    // generate
    //     for (i = 0; i < 8 ; i++ ) begin AND_GEN
    //         assign AND_RESULT_o[i] = A_i[i] & B_i[i] ; 
    //     end
    // endgenerate
endmodule : andALU
