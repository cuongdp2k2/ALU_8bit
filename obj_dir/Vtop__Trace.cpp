// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->top__DOT__dut__DOT__ADD_RESULT_wire),8);
            tracep->chgCData(oldp+1,(vlTOPp->top__DOT__dut__DOT__SUB_RESULT_wire),8);
            tracep->chgCData(oldp+2,(vlTOPp->top__DOT__dut__DOT__ALU_RESULT_wire),8);
            tracep->chgBit(oldp+3,(vlTOPp->top__DOT__dut__DOT__cout_wire));
            tracep->chgSData(oldp+4,(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire),9);
            tracep->chgBit(oldp+5,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire))));
            tracep->chgBit(oldp+6,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                          >> 1U))));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                          >> 2U))));
            tracep->chgBit(oldp+8,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                          >> 3U))));
            tracep->chgBit(oldp+9,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                          >> 4U))));
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                           >> 5U))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                           >> 6U))));
            tracep->chgBit(oldp+12,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                           >> 7U))));
            tracep->chgSData(oldp+13,(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire),9);
            tracep->chgBit(oldp+14,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire))));
            tracep->chgBit(oldp+15,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 1U))));
            tracep->chgBit(oldp+16,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 2U))));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 3U))));
            tracep->chgBit(oldp+18,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 4U))));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 5U))));
            tracep->chgBit(oldp+20,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 6U))));
            tracep->chgBit(oldp+21,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                           >> 7U))));
        }
        tracep->chgCData(oldp+22,(vlTOPp->A_i),8);
        tracep->chgCData(oldp+23,(vlTOPp->B_i),8);
        tracep->chgCData(oldp+24,(vlTOPp->ALU_op_i),3);
        tracep->chgBit(oldp+25,(vlTOPp->clk_i));
        tracep->chgCData(oldp+26,(vlTOPp->ALU_RESULT_o),8);
        tracep->chgCData(oldp+27,(vlTOPp->ALU_FLAGS_o),4);
        tracep->chgCData(oldp+28,((0xffU & ((IData)(vlTOPp->A_i) 
                                            << ((8U 
                                                 > (IData)(vlTOPp->A_i))
                                                 ? 
                                                (7U 
                                                 & (IData)(vlTOPp->B_i))
                                                 : 7U)))),8);
        tracep->chgCData(oldp+29,((0xffU & ((IData)(vlTOPp->A_i) 
                                            >> ((8U 
                                                 > (IData)(vlTOPp->A_i))
                                                 ? 
                                                (7U 
                                                 & (IData)(vlTOPp->B_i))
                                                 : 7U)))),8);
        tracep->chgCData(oldp+30,(((IData)(vlTOPp->A_i) 
                                   & (IData)(vlTOPp->B_i))),8);
        tracep->chgCData(oldp+31,(((IData)(vlTOPp->A_i) 
                                   | (IData)(vlTOPp->B_i))),8);
        tracep->chgCData(oldp+32,((0xffU & (~ (IData)(vlTOPp->A_i)))),8);
        tracep->chgBit(oldp+33,((1U & ((0U == (IData)(vlTOPp->ALU_op_i))
                                        ? (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__ADD_RESULT_wire) 
                                                 >> 7U))
                                        : ((1U == (IData)(vlTOPp->ALU_op_i))
                                            ? (1U & 
                                               ((IData)(vlTOPp->top__DOT__dut__DOT__SUB_RESULT_wire) 
                                                >> 7U))
                                            : 0U)))));
        tracep->chgBit(oldp+34,((1U & (IData)(vlTOPp->ALU_op_i))));
        tracep->chgBit(oldp+35,((1U & (IData)(vlTOPp->A_i))));
        tracep->chgBit(oldp+36,((1U & (IData)(vlTOPp->B_i))));
        tracep->chgBit(oldp+37,((1U & (((IData)(vlTOPp->A_i) 
                                        ^ (IData)(vlTOPp->B_i)) 
                                       ^ (IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire)))));
        tracep->chgBit(oldp+38,((1U & (((((IData)(vlTOPp->A_i) 
                                          & (IData)(vlTOPp->B_i)) 
                                         | (IData)(vlTOPp->A_i)) 
                                        | (IData)(vlTOPp->B_i)) 
                                       & (IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire)))));
        tracep->chgBit(oldp+39,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 1U))));
        tracep->chgBit(oldp+40,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 1U))));
        tracep->chgBit(oldp+41,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 1U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 1U)))));
        tracep->chgBit(oldp+42,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 1U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 1U)))));
        tracep->chgBit(oldp+43,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 2U))));
        tracep->chgBit(oldp+44,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 2U))));
        tracep->chgBit(oldp+45,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 2U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 2U)))));
        tracep->chgBit(oldp+46,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 2U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 2U)))));
        tracep->chgBit(oldp+47,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 3U))));
        tracep->chgBit(oldp+48,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 3U))));
        tracep->chgBit(oldp+49,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 3U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 3U)))));
        tracep->chgBit(oldp+50,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 3U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 3U)))));
        tracep->chgBit(oldp+51,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 4U))));
        tracep->chgBit(oldp+52,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 4U))));
        tracep->chgBit(oldp+53,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 4U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 4U)))));
        tracep->chgBit(oldp+54,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 4U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 4U)))));
        tracep->chgBit(oldp+55,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 5U))));
        tracep->chgBit(oldp+56,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 5U))));
        tracep->chgBit(oldp+57,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 5U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 5U)))));
        tracep->chgBit(oldp+58,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 5U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 5U)))));
        tracep->chgBit(oldp+59,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 6U))));
        tracep->chgBit(oldp+60,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 6U))));
        tracep->chgBit(oldp+61,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 6U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 6U)))));
        tracep->chgBit(oldp+62,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 6U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 6U)))));
        tracep->chgBit(oldp+63,((1U & ((IData)(vlTOPp->A_i) 
                                       >> 7U))));
        tracep->chgBit(oldp+64,((1U & ((IData)(vlTOPp->B_i) 
                                       >> 7U))));
        tracep->chgBit(oldp+65,((1U & ((((IData)(vlTOPp->A_i) 
                                         ^ (IData)(vlTOPp->B_i)) 
                                        >> 7U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 7U)))));
        tracep->chgBit(oldp+66,((1U & ((((((IData)(vlTOPp->A_i) 
                                           & (IData)(vlTOPp->B_i)) 
                                          | (IData)(vlTOPp->A_i)) 
                                         | (IData)(vlTOPp->B_i)) 
                                        >> 7U) & ((IData)(vlTOPp->top__DOT__dut__DOT__AddFunc__DOT__c_wire) 
                                                  >> 7U)))));
        tracep->chgCData(oldp+67,((0xffU & (~ (IData)(vlTOPp->B_i)))),8);
        tracep->chgBit(oldp+68,((1U & (~ (IData)(vlTOPp->B_i)))));
        tracep->chgBit(oldp+69,((1U & (((IData)(vlTOPp->A_i) 
                                        ^ (~ (IData)(vlTOPp->B_i))) 
                                       ^ (IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire)))));
        tracep->chgBit(oldp+70,((1U & (((((IData)(vlTOPp->A_i) 
                                          & (~ (IData)(vlTOPp->B_i))) 
                                         | (IData)(vlTOPp->A_i)) 
                                        | (~ (IData)(vlTOPp->B_i))) 
                                       & (IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire)))));
        tracep->chgBit(oldp+71,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 1U)))));
        tracep->chgBit(oldp+72,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 1U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 1U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 1U)))));
        tracep->chgBit(oldp+73,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 1U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 1U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 1U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 1U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 1U)))));
        tracep->chgBit(oldp+74,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 2U)))));
        tracep->chgBit(oldp+75,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 2U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 2U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 2U)))));
        tracep->chgBit(oldp+76,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 2U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 2U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 2U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 2U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 2U)))));
        tracep->chgBit(oldp+77,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 3U)))));
        tracep->chgBit(oldp+78,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 3U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 3U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 3U)))));
        tracep->chgBit(oldp+79,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 3U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 3U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 3U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 3U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 3U)))));
        tracep->chgBit(oldp+80,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 4U)))));
        tracep->chgBit(oldp+81,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 4U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 4U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 4U)))));
        tracep->chgBit(oldp+82,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 4U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 4U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 4U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 4U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 4U)))));
        tracep->chgBit(oldp+83,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 5U)))));
        tracep->chgBit(oldp+84,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 5U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 5U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 5U)))));
        tracep->chgBit(oldp+85,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 5U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 5U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 5U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 5U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 5U)))));
        tracep->chgBit(oldp+86,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 6U)))));
        tracep->chgBit(oldp+87,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 6U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 6U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 6U)))));
        tracep->chgBit(oldp+88,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 6U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 6U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 6U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 6U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 6U)))));
        tracep->chgBit(oldp+89,((1U & (~ ((IData)(vlTOPp->B_i) 
                                          >> 7U)))));
        tracep->chgBit(oldp+90,((1U & ((((IData)(vlTOPp->A_i) 
                                         >> 7U) ^ (~ 
                                                   ((IData)(vlTOPp->B_i) 
                                                    >> 7U))) 
                                       ^ ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 7U)))));
        tracep->chgBit(oldp+91,((1U & ((((((IData)(vlTOPp->A_i) 
                                           >> 7U) & 
                                          (~ ((IData)(vlTOPp->B_i) 
                                              >> 7U))) 
                                         | ((IData)(vlTOPp->A_i) 
                                            >> 7U)) 
                                        | (~ ((IData)(vlTOPp->B_i) 
                                              >> 7U))) 
                                       & ((IData)(vlTOPp->top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire) 
                                          >> 7U)))));
        tracep->chgCData(oldp+92,((0xfU & (IData)(vlTOPp->B_i))),4);
        tracep->chgCData(oldp+93,(((8U > (IData)(vlTOPp->A_i))
                                    ? (7U & (IData)(vlTOPp->B_i))
                                    : 7U)),3);
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
