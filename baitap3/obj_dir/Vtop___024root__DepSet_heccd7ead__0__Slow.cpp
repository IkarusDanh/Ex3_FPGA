// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__sum_module__DOT__get_sum = 0U;
    vlSelf->top__DOT__sum_module__DOT__counter = 0U;
    vlSelf->top__DOT__sum_module__DOT__get_n = 0xffU;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__start_i = vlSelf->start_i;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->start_i = VL_RAND_RESET_I(1);
    vlSelf->data_i = VL_RAND_RESET_I(8);
    vlSelf->n_i = VL_RAND_RESET_I(8);
    vlSelf->done_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->dec[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top__DOT__sum_wire = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__hex2dec_module__dec[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top__DOT__sum_module__DOT__get_sum = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__sum_module__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sum_module__DOT__get_n = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__hex2dec_module__DOT__wire_1[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
