// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__sum_module__DOT__get_sum;
    CData/*7:0*/ __Vdly__top__DOT__sum_module__DOT__counter;
    // Body
    __Vdly__top__DOT__sum_module__DOT__counter = vlSelf->top__DOT__sum_module__DOT__counter;
    __Vdly__top__DOT__sum_module__DOT__get_sum = vlSelf->top__DOT__sum_module__DOT__get_sum;
    if (vlSelf->rst_ni) {
        if ((((IData)(vlSelf->top__DOT__sum_module__DOT__counter) 
              < (IData)(vlSelf->top__DOT__sum_module__DOT__get_n)) 
             & (~ (IData)(vlSelf->done_o)))) {
            __Vdly__top__DOT__sum_module__DOT__get_sum 
                = (0xffffU & ((IData)(vlSelf->top__DOT__sum_module__DOT__get_sum) 
                              + (IData)(vlSelf->data_i)));
            __Vdly__top__DOT__sum_module__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sum_module__DOT__counter)));
            vlSelf->top__DOT__sum_wire = (0xffffU & 
                                          ((IData)(vlSelf->top__DOT__sum_module__DOT__get_sum) 
                                           + (IData)(vlSelf->data_i)));
            vlSelf->done_o = ((IData)(vlSelf->top__DOT__sum_module__DOT__counter) 
                              == ((IData)(vlSelf->top__DOT__sum_module__DOT__get_n) 
                                  - (IData)(1U)));
            vlSelf->top__DOT__sum_module__DOT__get_n 
                = vlSelf->n_i;
        } else {
            vlSelf->done_o = 1U;
            vlSelf->top__DOT__sum_wire = vlSelf->top__DOT__sum_module__DOT__get_sum;
        }
    } else {
        __Vdly__top__DOT__sum_module__DOT__get_sum = 0U;
        vlSelf->top__DOT__sum_module__DOT__get_n = vlSelf->n_i;
        __Vdly__top__DOT__sum_module__DOT__counter = 0U;
        vlSelf->done_o = 0U;
        vlSelf->top__DOT__sum_wire = 0U;
    }
    vlSelf->top__DOT__sum_module__DOT__counter = __Vdly__top__DOT__sum_module__DOT__counter;
    vlSelf->top__DOT__sum_module__DOT__get_sum = __Vdly__top__DOT__sum_module__DOT__get_sum;
    vlSelf->top__DOT__hex2dec_module__DOT__wire_1[0U] 
        = (0xffffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__sum_wire), (IData)(0xaU)));
    vlSelf->top__DOT__hex2dec_module__DOT__wire_1[1U] 
        = (0xffffU & VL_MODDIV_III(32, VL_DIV_III(32, (IData)(vlSelf->top__DOT__sum_wire), (IData)(0xaU)), (IData)(0xaU)));
    vlSelf->top__DOT__hex2dec_module__DOT__wire_1[2U] 
        = (0xffffU & VL_MODDIV_III(32, VL_DIV_III(32, (IData)(vlSelf->top__DOT__sum_wire), (IData)(0x64U)), (IData)(0xaU)));
    vlSelf->top__DOT__hex2dec_module__DOT__wire_1[3U] 
        = (0xffffU & VL_MODDIV_III(32, VL_DIV_III(32, (IData)(vlSelf->top__DOT__sum_wire), (IData)(0x3e8U)), (IData)(0xaU)));
    vlSelf->top__DOT__hex2dec_module__DOT__wire_1[4U] 
        = (0xffffU & VL_MODDIV_III(32, VL_DIV_III(32, (IData)(vlSelf->top__DOT__sum_wire), (IData)(0x2710U)), (IData)(0xaU)));
    vlSelf->top__DOT____Vcellout__hex2dec_module__dec[4U] 
        = vlSelf->top__DOT__hex2dec_module__DOT__wire_1
        [4U];
    vlSelf->top__DOT____Vcellout__hex2dec_module__dec[3U] 
        = vlSelf->top__DOT__hex2dec_module__DOT__wire_1
        [3U];
    vlSelf->top__DOT____Vcellout__hex2dec_module__dec[2U] 
        = vlSelf->top__DOT__hex2dec_module__DOT__wire_1
        [2U];
    vlSelf->top__DOT____Vcellout__hex2dec_module__dec[1U] 
        = vlSelf->top__DOT__hex2dec_module__DOT__wire_1
        [1U];
    vlSelf->top__DOT____Vcellout__hex2dec_module__dec[0U] 
        = vlSelf->top__DOT__hex2dec_module__DOT__wire_1
        [0U];
    vlSelf->dec[4U] = vlSelf->top__DOT____Vcellout__hex2dec_module__dec
        [4U];
    vlSelf->dec[3U] = vlSelf->top__DOT____Vcellout__hex2dec_module__dec
        [3U];
    vlSelf->dec[2U] = vlSelf->top__DOT____Vcellout__hex2dec_module__dec
        [2U];
    vlSelf->dec[1U] = vlSelf->top__DOT____Vcellout__hex2dec_module__dec
        [1U];
    vlSelf->dec[0U] = vlSelf->top__DOT____Vcellout__hex2dec_module__dec
        [0U];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->start_i) & (~ (IData)(vlSelf->__Vclklast__TOP__start_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__start_i = vlSelf->start_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->start_i & 0xfeU))) {
        Verilated::overWidthError("start_i");}
}
#endif  // VL_DEBUG
