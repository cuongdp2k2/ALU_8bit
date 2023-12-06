// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+23,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+25,"ALU_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+26,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+27,"ALU_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+28,"ALU_FLAGS_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+23,"top A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+25,"top ALU_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+26,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+27,"top ALU_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+28,"top ALU_FLAGS_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+95,"top dut OP_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+96,"top dut OP_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+97,"top dut OP_LSL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+98,"top dut OP_LSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+99,"top dut OP_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+100,"top dut OP_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+101,"top dut OP_NOT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+102,"top dut OP_FWA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+23,"top dut A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top dut B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+25,"top dut ALU_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+27,"top dut ALU_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+28,"top dut ALU_FLAGS_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1,"top dut ADD_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+2,"top dut SUB_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+29,"top dut LSL_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+30,"top dut LSR_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+31,"top dut AND_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+32,"top dut OR_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+33,"top dut NOT_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+3,"top dut ALU_RESULT_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+34,"top dut sum_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+4,"top dut cout_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+35,"top dut AddFunc cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"top dut AddFunc A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top dut AddFunc B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+4,"top dut AddFunc cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1,"top dut AddFunc ADD_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+5,"top dut AddFunc c_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBit(c+36,"top dut AddFunc GENERATED_FOR_LOOP[0] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"top dut AddFunc GENERATED_FOR_LOOP[0] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+6,"top dut AddFunc GENERATED_FOR_LOOP[0] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+38,"top dut AddFunc GENERATED_FOR_LOOP[0] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+39,"top dut AddFunc GENERATED_FOR_LOOP[0] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+40,"top dut AddFunc GENERATED_FOR_LOOP[1] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"top dut AddFunc GENERATED_FOR_LOOP[1] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+7,"top dut AddFunc GENERATED_FOR_LOOP[1] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+42,"top dut AddFunc GENERATED_FOR_LOOP[1] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+43,"top dut AddFunc GENERATED_FOR_LOOP[1] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+44,"top dut AddFunc GENERATED_FOR_LOOP[2] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"top dut AddFunc GENERATED_FOR_LOOP[2] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"top dut AddFunc GENERATED_FOR_LOOP[2] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"top dut AddFunc GENERATED_FOR_LOOP[2] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"top dut AddFunc GENERATED_FOR_LOOP[2] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+48,"top dut AddFunc GENERATED_FOR_LOOP[3] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+49,"top dut AddFunc GENERATED_FOR_LOOP[3] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top dut AddFunc GENERATED_FOR_LOOP[3] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+50,"top dut AddFunc GENERATED_FOR_LOOP[3] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+51,"top dut AddFunc GENERATED_FOR_LOOP[3] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"top dut AddFunc GENERATED_FOR_LOOP[4] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"top dut AddFunc GENERATED_FOR_LOOP[4] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"top dut AddFunc GENERATED_FOR_LOOP[4] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"top dut AddFunc GENERATED_FOR_LOOP[4] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top dut AddFunc GENERATED_FOR_LOOP[4] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"top dut AddFunc GENERATED_FOR_LOOP[5] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"top dut AddFunc GENERATED_FOR_LOOP[5] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+11,"top dut AddFunc GENERATED_FOR_LOOP[5] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+58,"top dut AddFunc GENERATED_FOR_LOOP[5] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+59,"top dut AddFunc GENERATED_FOR_LOOP[5] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"top dut AddFunc GENERATED_FOR_LOOP[6] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"top dut AddFunc GENERATED_FOR_LOOP[6] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"top dut AddFunc GENERATED_FOR_LOOP[6] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+62,"top dut AddFunc GENERATED_FOR_LOOP[6] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"top dut AddFunc GENERATED_FOR_LOOP[6] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+64,"top dut AddFunc GENERATED_FOR_LOOP[7] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"top dut AddFunc GENERATED_FOR_LOOP[7] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"top dut AddFunc GENERATED_FOR_LOOP[7] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"top dut AddFunc GENERATED_FOR_LOOP[7] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"top dut AddFunc GENERATED_FOR_LOOP[7] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"top dut SubFunc A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top dut SubFunc B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+35,"top dut SubFunc cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+4,"top dut SubFunc cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+2,"top dut SubFunc SUB_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+68,"top dut SubFunc not_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+35,"top dut SubFunc SUB_Operate cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"top dut SubFunc SUB_Operate A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+68,"top dut SubFunc SUB_Operate B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+4,"top dut SubFunc SUB_Operate cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+2,"top dut SubFunc SUB_Operate ADD_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+14,"top dut SubFunc SUB_Operate c_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBit(c+36,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[0] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+69,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[0] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[0] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+70,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[0] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[0] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+40,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[1] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+72,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[1] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[1] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[1] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[1] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+44,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[2] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+75,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[2] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[2] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+76,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[2] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[2] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+48,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[3] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[3] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[3] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[3] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+80,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[3] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[4] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+81,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[4] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[4] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+82,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[4] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+83,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[4] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[5] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+84,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[5] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[5] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+85,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[5] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+86,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[5] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[6] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[6] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[6] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+88,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[6] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+89,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[6] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+64,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[7] add_1bit a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+90,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[7] add_1bit b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[7] add_1bit cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+91,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[7] add_1bit sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"top dut SubFunc SUB_Operate GENERATED_FOR_LOOP[7] add_1bit cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"top dut SllFunc data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+93,"top dut SllFunc shamt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+29,"top dut SllFunc data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+94,"top dut SllFunc limited_shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+23,"top dut SrlFunc data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+93,"top dut SrlFunc shamt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+30,"top dut SrlFunc data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+94,"top dut SrlFunc limited_shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+23,"top dut AndFunc A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top dut AndFunc B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+31,"top dut AndFunc AND_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+23,"top dut OrFunc A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top dut OrFunc B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+32,"top dut OrFunc OR_RESULT_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+23,"top dut NotFunc data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+33,"top dut NotFunc ndata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    }
}

void Vtop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->top__DOT__dut__DOT__ADD_RESULT_wire),8);
        tracep->fullCData(oldp+2,(vlTOPp->top__DOT__dut__DOT__SUB_RESULT_wire),8);
        tracep->fullCData(oldp+3,(vlTOPp->top__DOT__dut__DOT__ALU_RESULT_wire),8);
        tracep->fullBit(oldp+4,(vlTOPp->top__DOT__dut__DOT__cout_wire));
        tracep->fullSData(oldp+5,(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire),9);
        tracep->fullBit(oldp+6,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire))));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                       >> 1U))));
        tracep->fullBit(oldp+8,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                       >> 2U))));
        tracep->fullBit(oldp+9,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                       >> 3U))));
        tracep->fullBit(oldp+10,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                        >> 4U))));
        tracep->fullBit(oldp+11,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                        >> 5U))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                        >> 6U))));
        tracep->fullBit(oldp+13,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                        >> 7U))));
        tracep->fullSData(oldp+14,(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire),9);
        tracep->fullBit(oldp+15,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire))));
        tracep->fullBit(oldp+16,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 1U))));
        tracep->fullBit(oldp+17,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 2U))));
        tracep->fullBit(oldp+18,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 3U))));
        tracep->fullBit(oldp+19,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 4U))));
        tracep->fullBit(oldp+20,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 5U))));
        tracep->fullBit(oldp+21,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 6U))));
        tracep->fullBit(oldp+22,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                        >> 7U))));
        tracep->fullCData(oldp+23,(vlTOPp->A_i),8);
        tracep->fullCData(oldp+24,(vlTOPp->B_i),8);
        tracep->fullCData(oldp+25,(vlTOPp->ALU_op_i),3);
        tracep->fullBit(oldp+26,(vlTOPp->clk_i));
        tracep->fullCData(oldp+27,(vlTOPp->ALU_RESULT_o),8);
        tracep->fullCData(oldp+28,(vlTOPp->ALU_FLAGS_o),4);
        tracep->fullCData(oldp+29,((0xffU & ((IData)(vlTOPp->A_i) 
                                             << ((8U 
                                                  > (IData)(vlTOPp->A_i))
                                                  ? 
                                                 (7U 
                                                  & (IData)(vlTOPp->B_i))
                                                  : 7U)))),8);
        tracep->fullCData(oldp+30,((0xffU & ((IData)(vlTOPp->A_i) 
                                             >> ((8U 
                                                  > (IData)(vlTOPp->A_i))
                                                  ? 
                                                 (7U 
                                                  & (IData)(vlTOPp->B_i))
                                                  : 7U)))),8);
        tracep->fullCData(oldp+31,(((IData)(vlTOPp->A_i) 
                                    & (IData)(vlTOPp->B_i))),8);
        tracep->fullCData(oldp+32,(((IData)(vlTOPp->A_i) 
                                    | (IData)(vlTOPp->B_i))),8);
        tracep->fullCData(oldp+33,((0xffU & (~ (IData)(vlTOPp->A_i)))),8);
        tracep->fullBit(oldp+34,((1U & ((0U == (IData)(vlTOPp->ALU_op_i))
                                         ? (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__ADD_RESULT_wire) 
                                                  >> 7U))
                                         : ((1U == (IData)(vlTOPp->ALU_op_i))
                                             ? (1U 
                                                & ((IData)(vlTOPp->top__DOT__dut__DOT__SUB_RESULT_wire) 
                                                   >> 7U))
                                             : 0U)))));
        tracep->fullBit(oldp+35,((1U & (IData)(vlTOPp->ALU_op_i))));
        tracep->fullBit(oldp+36,((1U & (IData)(vlTOPp->A_i))));
        tracep->fullBit(oldp+37,((1U & (IData)(vlTOPp->B_i))));
        tracep->fullBit(oldp+38,((1U & (((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        ^ (IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire)))));
        tracep->fullBit(oldp+39,((1U & (((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        & (IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire)))));
        tracep->fullBit(oldp+40,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 1U))));
        tracep->fullBit(oldp+41,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 1U))));
        tracep->fullBit(oldp+42,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 1U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 1U)))));
        tracep->fullBit(oldp+43,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 1U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 1U)))));
        tracep->fullBit(oldp+44,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 2U))));
        tracep->fullBit(oldp+45,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 2U))));
        tracep->fullBit(oldp+46,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 2U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+47,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 2U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+48,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 3U))));
        tracep->fullBit(oldp+49,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 3U))));
        tracep->fullBit(oldp+50,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 3U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 3U)))));
        tracep->fullBit(oldp+51,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 3U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 3U)))));
        tracep->fullBit(oldp+52,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 4U))));
        tracep->fullBit(oldp+53,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 4U))));
        tracep->fullBit(oldp+54,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 4U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 4U)))));
        tracep->fullBit(oldp+55,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 4U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 4U)))));
        tracep->fullBit(oldp+56,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 5U))));
        tracep->fullBit(oldp+57,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 5U))));
        tracep->fullBit(oldp+58,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 5U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 5U)))));
        tracep->fullBit(oldp+59,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 5U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 5U)))));
        tracep->fullBit(oldp+60,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 6U))));
        tracep->fullBit(oldp+61,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 6U))));
        tracep->fullBit(oldp+62,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 6U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 6U)))));
        tracep->fullBit(oldp+63,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 6U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 6U)))));
        tracep->fullBit(oldp+64,((1U & ((IData)(vlTOPp->A_i) 
                                        >> 7U))));
        tracep->fullBit(oldp+65,((1U & ((IData)(vlTOPp->B_i) 
                                        >> 7U))));
        tracep->fullBit(oldp+66,((1U & ((((IData)(vlTOPp->A_i) 
                                          ^ (IData)(vlTOPp->B_i)) 
                                         >> 7U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 7U)))));
        tracep->fullBit(oldp+67,((1U & ((((((IData)(vlTOPp->A_i) 
                                            & (IData)(vlTOPp->B_i)) 
                                           | (IData)(vlTOPp->A_i)) 
                                          | (IData)(vlTOPp->B_i)) 
                                         >> 7U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                   >> 7U)))));
        tracep->fullCData(oldp+68,((0xffU & (~ (IData)(vlTOPp->B_i)))),8);
        tracep->fullBit(oldp+69,((1U & (~ (IData)(vlTOPp->B_i)))));
        tracep->fullBit(oldp+70,((1U & (((IData)(vlTOPp->A_i) 
                                         ^ (~ (IData)(vlTOPp->B_i))) 
                                        ^ (IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire)))));
        tracep->fullBit(oldp+71,((1U & (((((IData)(vlTOPp->A_i) 
                                           & (~ (IData)(vlTOPp->B_i))) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (~ (IData)(vlTOPp->B_i))) 
                                        & (IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire)))));
        tracep->fullBit(oldp+72,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 1U)))));
        tracep->fullBit(oldp+73,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 1U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 1U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 1U)))));
        tracep->fullBit(oldp+74,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 1U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 1U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 1U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 1U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 1U)))));
        tracep->fullBit(oldp+75,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 2U)))));
        tracep->fullBit(oldp+76,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 2U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 2U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 2U)))));
        tracep->fullBit(oldp+77,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 2U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 2U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 2U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 2U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 2U)))));
        tracep->fullBit(oldp+78,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 3U)))));
        tracep->fullBit(oldp+79,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 3U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 3U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 3U)))));
        tracep->fullBit(oldp+80,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 3U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 3U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 3U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 3U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 3U)))));
        tracep->fullBit(oldp+81,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 4U)))));
        tracep->fullBit(oldp+82,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 4U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 4U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 4U)))));
        tracep->fullBit(oldp+83,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 4U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 4U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 4U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 4U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 4U)))));
        tracep->fullBit(oldp+84,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 5U)))));
        tracep->fullBit(oldp+85,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 5U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 5U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 5U)))));
        tracep->fullBit(oldp+86,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 5U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 5U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 5U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 5U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 5U)))));
        tracep->fullBit(oldp+87,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 6U)))));
        tracep->fullBit(oldp+88,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 6U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 6U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 6U)))));
        tracep->fullBit(oldp+89,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 6U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 6U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 6U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 6U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 6U)))));
        tracep->fullBit(oldp+90,((1U & (~ ((IData)(vlTOPp->B_i) 
                                           >> 7U)))));
        tracep->fullBit(oldp+91,((1U & ((((IData)(vlTOPp->A_i) 
                                          >> 7U) ^ 
                                         (~ ((IData)(vlTOPp->B_i) 
                                             >> 7U))) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 7U)))));
        tracep->fullBit(oldp+92,((1U & ((((((IData)(vlTOPp->A_i) 
                                            >> 7U) 
                                           & (~ ((IData)(vlTOPp->B_i) 
                                                 >> 7U))) 
                                          | ((IData)(vlTOPp->A_i) 
                                             >> 7U)) 
                                         | (~ ((IData)(vlTOPp->B_i) 
                                               >> 7U))) 
                                        & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 7U)))));
        tracep->fullCData(oldp+93,((0xfU & (IData)(vlTOPp->B_i))),4);
        tracep->fullCData(oldp+94,(((8U > (IData)(vlTOPp->A_i))
                                     ? (7U & (IData)(vlTOPp->B_i))
                                     : 7U)),3);
        tracep->fullCData(oldp+95,(0U),3);
        tracep->fullCData(oldp+96,(1U),3);
        tracep->fullCData(oldp+97,(2U),3);
        tracep->fullCData(oldp+98,(3U),3);
        tracep->fullCData(oldp+99,(4U),3);
        tracep->fullCData(oldp+100,(5U),3);
        tracep->fullCData(oldp+101,(6U),3);
        tracep->fullCData(oldp+102,(7U),3);
    }
}
