// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    A_i = VL_RAND_RESET_I(8);
    B_i = VL_RAND_RESET_I(8);
    ALU_op_i = VL_RAND_RESET_I(3);
    clk_i = VL_RAND_RESET_I(1);
    ALU_RESULT_o = VL_RAND_RESET_I(8);
    ALU_FLAGS_o = VL_RAND_RESET_I(4);
    top__DOT__dut__DOT__ADD_RESULT_wire = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__SUB_RESULT_wire = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__ALU_RESULT_wire = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__cout_wire = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT__c_wire = VL_RAND_RESET_I(9);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__0__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__1__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__2__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__3__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__4__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__5__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__6__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__AddFunc__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__7__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire = VL_RAND_RESET_I(9);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__0__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__1__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__2__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__3__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__4__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__5__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__6__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT____Vcellout__GENERATED_FOR_LOOP__BRA__7__KET____DOT__add_1bit__cout = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top__DOT__dut__DOT__AddFunc__DOT__c_wire = VL_RAND_RESET_I(9);
    __Vchglast__TOP__top__DOT__dut__DOT__SubFunc__DOT__SUB_Operate__DOT__c_wire = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
