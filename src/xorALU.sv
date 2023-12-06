module xorALU(
    // input 
    input logic [7:0] A_i , B_i ,

    // output
    output logic [7:0] XOR_RESULT_o
);
    genvar i;
    generate
        for (i = 0; i < 8 ; i++ ) begin XOR_GEN
            assign XOR_RESULT_o[i] = A_i[i] ^ B_i[i] ; 
        end
    endgenerate
endmodule : xorALU
