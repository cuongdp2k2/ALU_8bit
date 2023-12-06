#define MAX_SIM 200
// Cuong own function
// void TestBench(Vtop *dut, vluint64_t sim_unit){
// 	static int stage = dut->State_o ;
// 	static int count = 0 ; 
// 	if( sim_unit >3 ){
// 		printf("%d: %d -> %d \n",count,stage,dut->State_o) ;
// 		stage = dut->State_o ;
// 		count++ ;
// 	}
// 	return ;
// }

// void TestBench_EX2(Vtop *dut, vluint64_t sim_unit){

// }

/*--------- MAIN TEST BENCH HERE -------------------------------------*/ 
void set_random(Vtop *dut, vluint64_t sim_unit) {
	int A[] = {0b00000000,0b11111111,0b00101010};
	int B[] = {0b01010101,0b01100110,0b10011111};
	static char op = 0 ;
	static char queueAB = 0  ;
	static FILE *report;
	report = fopen("report.csv","a") ;
	if(report == NULL) {
		printf("EROR");
		return ;
	}
	dut->ALU_op_i = op % 8;
	dut->A_i  = A[queueAB] ;  
	dut->B_i  = B[queueAB] ;
	op++ ;
	queueAB = (op % 8 != 0) ? queueAB : (queueAB == 2) ? 0 : queueAB + 1 ;
	fprintf(report,"Test %ld,OPCODE,A_i,B_i,RESULT,FLAGS \n",sim_unit);
	fprintf(report,",0x%x,0x%x,0x%x,0x%x,0x%x\n",dut->ALU_op_i,dut->A_i,dut->B_i,dut->ALU_RESULT_o,dut->ALU_FLAGS_o) ;
	fclose(report) ;
	
	//TestBench_EX1(dut,sim_unit) ;
}

