// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_id.h for the primary calling header

#include "Vysyx_22050243_id___024root.h"
#include "Vysyx_22050243_id__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22050243_id___024root___sequent__TOP__1(Vysyx_22050243_id___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_id___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0;
    // Body
    __Vdlyvset__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_id__DOT__flag = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        vlSelf->ysyx_22050243_id__DOT__flag = (IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->stall))));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_id__DOT__buf_id_pc = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        if ((4U & (IData)(vlSelf->stall))) {
            vlSelf->ysyx_22050243_id__DOT__buf_id_pc = 0ULL;
        } else if ((1U & (~ (IData)(vlSelf->stall)))) {
            if ((1U & (~ ((IData)(vlSelf->stall) >> 1U)))) {
                vlSelf->ysyx_22050243_id__DOT__buf_id_pc 
                    = ((0x20U & (IData)(vlSelf->stall))
                        ? (((QData)((IData)(vlSelf->if_2_id_bus[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->if_2_id_bus[2U])))
                        : (((QData)((IData)(vlSelf->if_2_id_bus[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->if_2_id_bus[2U]))));
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_id__DOT__buf_next_pc = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        if ((4U & (IData)(vlSelf->stall))) {
            vlSelf->ysyx_22050243_id__DOT__buf_next_pc = 0ULL;
        } else if ((1U & (~ (IData)(vlSelf->stall)))) {
            if ((1U & (~ ((IData)(vlSelf->stall) >> 1U)))) {
                vlSelf->ysyx_22050243_id__DOT__buf_next_pc 
                    = ((0x20U & (IData)(vlSelf->stall))
                        ? (((QData)((IData)(vlSelf->if_2_id_bus[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->if_2_id_bus[0U])))
                        : (((QData)((IData)(vlSelf->if_2_id_bus[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->if_2_id_bus[0U]))));
            }
        }
    }
    if (vlSelf->rst) {
        if (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & vlSelf->wb_2_gpr_bus[2U])))) {
            __Vdlyvval__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0 
                = (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])));
            __Vdlyvset__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0 
                = (0x1fU & vlSelf->wb_2_gpr_bus[2U]);
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_id__DOT__buf_inst = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        if ((4U & (IData)(vlSelf->stall))) {
            vlSelf->ysyx_22050243_id__DOT__buf_inst = 0U;
        } else if ((1U & (~ (IData)(vlSelf->stall)))) {
            if ((1U & (~ ((IData)(vlSelf->stall) >> 1U)))) {
                vlSelf->ysyx_22050243_id__DOT__buf_inst 
                    = vlSelf->isram_rdata;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_id__DOT__buf_ce = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        if ((4U & (IData)(vlSelf->stall))) {
            vlSelf->ysyx_22050243_id__DOT__buf_ce = 0U;
        } else if ((1U & (~ (IData)(vlSelf->stall)))) {
            if ((1U & (~ ((IData)(vlSelf->stall) >> 1U)))) {
                vlSelf->ysyx_22050243_id__DOT__buf_ce 
                    = (1U & ((0x20U & (IData)(vlSelf->stall))
                              ? vlSelf->if_2_id_bus[4U]
                              : vlSelf->if_2_id_bus[4U]));
            }
        }
    }
    if (__Vdlyvset__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0) {
        vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[__Vdlyvdim0__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0] 
            = __Vdlyvval__ysyx_22050243_id__DOT__gpr__DOT__gpr__v0;
    }
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0U] 
        = vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
        [0U];
    vlSelf->ysyx_22050243_id__DOT__inst_i = ((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                              ? vlSelf->ysyx_22050243_id__DOT__buf_inst
                                              : 0U);
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xfffffff8U 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (((2U 
                                                        == 
                                                        (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                         >> 0x19U)) 
                                                       << 2U) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                             >> 0x19U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xffffffc7U 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xfffffff8U 
                                                      & (((5U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 5U) 
                                                         | (((4U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 4U) 
                                                            | ((3U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 3U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xfffffe3fU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xffffffc0U 
                                                      & (((8U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 8U) 
                                                         | (((7U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 7U) 
                                                            | ((6U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 6U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xfffff1ffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xfffffe00U 
                                                      & (((0xbU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xbU) 
                                                         | (((0xaU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xaU) 
                                                            | ((9U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 9U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xffff8fffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xfffff000U 
                                                      & (((0xeU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xeU) 
                                                         | (((0xdU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xdU) 
                                                            | ((0xcU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xcU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xfffc7fffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xffff8000U 
                                                      & (((0x11U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x11U) 
                                                         | (((0x10U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x10U) 
                                                            | ((0xfU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xfU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xffe3ffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xfffc0000U 
                                                      & (((0x14U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x14U) 
                                                         | (((0x13U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x13U) 
                                                            | ((0x12U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x12U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xff1fffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xffe00000U 
                                                      & (((0x17U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x16U) 
                                                            | ((0x15U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x15U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xf8ffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xff000000U 
                                                      & (((0x1aU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1aU) 
                                                         | (((0x19U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x19U) 
                                                            | ((0x18U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x18U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0xc7ffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xf8000000U 
                                                      & (((0x1dU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1dU) 
                                                         | (((0x1cU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x1cU) 
                                                            | ((0x1bU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x1bU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] = (
                                                   (0x3fffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]) 
                                                   | (0xc0000000U 
                                                      & (((0x1fU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1fU) 
                                                         | ((0x1eU 
                                                             == 
                                                             (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                              >> 0x19U)) 
                                                            << 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xfffffffeU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0x3fffffffU 
                                                      & ((0x3fffffffU 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                              >> 0x19U))) 
                                                         | ((0x3fffffffU 
                                                             & ((0x1fU 
                                                                 == 
                                                                 (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                  >> 0x19U)) 
                                                                >> 1U)) 
                                                            | ((0x1eU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               >> 2U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xfffffff1U 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xfffffffeU 
                                                      & (((0x23U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 3U) 
                                                         | (((0x22U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 2U) 
                                                            | ((0x21U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 1U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xffffff8fU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xfffffff0U 
                                                      & (((0x26U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 6U) 
                                                         | (((0x25U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 5U) 
                                                            | ((0x24U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 4U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xfffffc7fU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xffffff80U 
                                                      & (((0x29U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 9U) 
                                                         | (((0x28U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 8U) 
                                                            | ((0x27U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 7U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xffffe3ffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xfffffc00U 
                                                      & (((0x2cU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xcU) 
                                                         | (((0x2bU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xbU) 
                                                            | ((0x2aU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xaU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xffff1fffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xffffe000U 
                                                      & (((0x2fU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xfU) 
                                                         | (((0x2eU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xeU) 
                                                            | ((0x2dU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xdU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xfff8ffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xffff0000U 
                                                      & (((0x32U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x12U) 
                                                         | (((0x31U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x11U) 
                                                            | ((0x30U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x10U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xffc7ffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xfff80000U 
                                                      & (((0x35U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x15U) 
                                                         | (((0x34U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x14U) 
                                                            | ((0x33U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x13U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xfe3fffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xffc00000U 
                                                      & (((0x38U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x18U) 
                                                         | (((0x37U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x17U) 
                                                            | ((0x36U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x16U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0xf1ffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xfe000000U 
                                                      & (((0x3bU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1bU) 
                                                         | (((0x3aU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x1aU) 
                                                            | ((0x39U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x19U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0x8fffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | (0xf0000000U 
                                                      & (((0x3eU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1eU) 
                                                         | (((0x3dU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x1dU) 
                                                            | ((0x3cU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x1cU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[1U] = (
                                                   (0x7fffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]) 
                                                   | ((0x3fU 
                                                       == 
                                                       (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0x19U)) 
                                                      << 0x1fU));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0x7fffffffU 
                                                      & ((0x7ffffffeU 
                                                          & ((0x41U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 1U)) 
                                                         | ((0x7fffffffU 
                                                             & (0x40U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U))) 
                                                            | ((0x3fU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               >> 1U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xffffffe3U 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xfffffffcU 
                                                      & (((0x44U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 4U) 
                                                         | (((0x43U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 3U) 
                                                            | ((0x42U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 2U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xffffff1fU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xffffffe0U 
                                                      & (((0x47U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 7U) 
                                                         | (((0x46U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 6U) 
                                                            | ((0x45U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 5U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xfffff8ffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xffffff00U 
                                                      & (((0x4aU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xaU) 
                                                         | (((0x49U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 9U) 
                                                            | ((0x48U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 8U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xffffc7ffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xfffff800U 
                                                      & (((0x4dU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xdU) 
                                                         | (((0x4cU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xcU) 
                                                            | ((0x4bU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xbU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xfffe3fffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xffffc000U 
                                                      & (((0x50U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x10U) 
                                                         | (((0x4fU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xfU) 
                                                            | ((0x4eU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xeU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xfff1ffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xfffe0000U 
                                                      & (((0x53U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x13U) 
                                                         | (((0x52U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x12U) 
                                                            | ((0x51U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x11U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xff8fffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xfff00000U 
                                                      & (((0x56U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x16U) 
                                                         | (((0x55U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x15U) 
                                                            | ((0x54U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x14U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xfc7fffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xff800000U 
                                                      & (((0x59U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x19U) 
                                                         | (((0x58U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x18U) 
                                                            | ((0x57U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x17U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0xe3ffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xfc000000U 
                                                      & (((0x5cU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1cU) 
                                                         | (((0x5bU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x1bU) 
                                                            | ((0x5aU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x1aU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[2U] = (
                                                   (0x1fffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[2U]) 
                                                   | (0xe0000000U 
                                                      & (((0x5fU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1fU) 
                                                         | (((0x5eU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x1eU) 
                                                            | ((0x5dU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x1dU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xfffffff8U 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (((0x62U 
                                                        == 
                                                        (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                         >> 0x19U)) 
                                                       << 2U) 
                                                      | (((0x61U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 1U) 
                                                         | (0x60U 
                                                            == 
                                                            (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                             >> 0x19U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xffffffc7U 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xfffffff8U 
                                                      & (((0x65U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 5U) 
                                                         | (((0x64U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 4U) 
                                                            | ((0x63U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 3U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xfffffe3fU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xffffffc0U 
                                                      & (((0x68U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 8U) 
                                                         | (((0x67U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 7U) 
                                                            | ((0x66U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 6U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xfffff1ffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xfffffe00U 
                                                      & (((0x6bU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xbU) 
                                                         | (((0x6aU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xaU) 
                                                            | ((0x69U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 9U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xffff8fffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xfffff000U 
                                                      & (((0x6eU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0xeU) 
                                                         | (((0x6dU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0xdU) 
                                                            | ((0x6cU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xcU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xfffc7fffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xffff8000U 
                                                      & (((0x71U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x11U) 
                                                         | (((0x70U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x10U) 
                                                            | ((0x6fU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0xfU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xffe3ffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xfffc0000U 
                                                      & (((0x74U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x14U) 
                                                         | (((0x73U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x13U) 
                                                            | ((0x72U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x12U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xff1fffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xffe00000U 
                                                      & (((0x77U 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x17U) 
                                                         | (((0x76U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x16U) 
                                                            | ((0x75U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x15U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xf8ffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xff000000U 
                                                      & (((0x7aU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1aU) 
                                                         | (((0x79U 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x19U) 
                                                            | ((0x78U 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x18U)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0xc7ffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xf8000000U 
                                                      & (((0x7dU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1dU) 
                                                         | (((0x7cU 
                                                              == 
                                                              (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                               >> 0x19U)) 
                                                             << 0x1cU) 
                                                            | ((0x7bU 
                                                                == 
                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                 >> 0x19U)) 
                                                               << 0x1bU)))));
    vlSelf->ysyx_22050243_id__DOT__funct7_d[3U] = (
                                                   (0x3fffffffU 
                                                    & vlSelf->ysyx_22050243_id__DOT__funct7_d[3U]) 
                                                   | (0xc0000000U 
                                                      & (((0x7fU 
                                                           == 
                                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0x19U)) 
                                                          << 0x1fU) 
                                                         | ((0x7eU 
                                                             == 
                                                             (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                              >> 0x19U)) 
                                                            << 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__funct3_d = ((0xf8U 
                                                & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                               | (((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                           >> 0xcU))) 
                                                      << 1U) 
                                                     | (0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                            >> 0xcU))))));
    vlSelf->ysyx_22050243_id__DOT__funct3_d = ((0xc7U 
                                                & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                               | (((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 5U) 
                                                  | (((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                           >> 0xcU))) 
                                                      << 4U) 
                                                     | ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                             >> 0xcU))) 
                                                        << 3U))));
    vlSelf->ysyx_22050243_id__DOT__funct3_d = ((0x3fU 
                                                & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                               | (((7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 7U) 
                                                  | ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                          >> 0xcU))) 
                                                     << 6U)));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xfffffff8U 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (((2U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22050243_id__DOT__inst_i)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xffffffc7U 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xfffffff8U 
                                                  & (((5U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 5U) 
                                                     | (((4U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 4U) 
                                                        | ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 3U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xfffffe3fU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xffffffc0U 
                                                  & (((8U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 8U) 
                                                     | (((7U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 7U) 
                                                        | ((6U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 6U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xfffff1ffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xfffffe00U 
                                                  & (((0xbU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xbU) 
                                                     | (((0xaU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xaU) 
                                                        | ((9U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 9U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xffff8fffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xfffff000U 
                                                  & (((0xeU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xeU) 
                                                     | (((0xdU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xdU) 
                                                        | ((0xcU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xcU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xfffc7fffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xffff8000U 
                                                  & (((0x11U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x11U) 
                                                     | (((0x10U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x10U) 
                                                        | ((0xfU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xfU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xffe3ffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xfffc0000U 
                                                  & (((0x14U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x14U) 
                                                     | (((0x13U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x13U) 
                                                        | ((0x12U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x12U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xff1fffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xffe00000U 
                                                  & (((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x17U) 
                                                     | (((0x16U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x16U) 
                                                        | ((0x15U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x15U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xf8ffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xff000000U 
                                                  & (((0x1aU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1aU) 
                                                     | (((0x19U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x19U) 
                                                        | ((0x18U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x18U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0xc7ffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xf8000000U 
                                                  & (((0x1dU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1dU) 
                                                     | (((0x1cU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x1cU) 
                                                        | ((0x1bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x1bU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[0U] = ((0x3fffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                               | (0xc0000000U 
                                                  & (((0x1fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1fU) 
                                                     | ((0x1eU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                        << 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xfffffffeU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0x3fffffffU 
                                                  & ((0x3fffffffU 
                                                      & (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050243_id__DOT__inst_i))) 
                                                     | ((0x3fffffffU 
                                                         & ((0x1fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                            >> 1U)) 
                                                        | ((0x1eU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           >> 2U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xfffffff1U 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xfffffffeU 
                                                  & (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 3U) 
                                                     | (((0x22U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 2U) 
                                                        | ((0x21U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 1U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xffffff8fU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xfffffff0U 
                                                  & (((0x26U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 6U) 
                                                     | (((0x25U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 5U) 
                                                        | ((0x24U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 4U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xfffffc7fU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xffffff80U 
                                                  & (((0x29U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 9U) 
                                                     | (((0x28U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 8U) 
                                                        | ((0x27U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 7U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xffffe3ffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xfffffc00U 
                                                  & (((0x2cU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xcU) 
                                                     | (((0x2bU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xbU) 
                                                        | ((0x2aU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xaU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xffff1fffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xffffe000U 
                                                  & (((0x2fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xfU) 
                                                     | (((0x2eU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xeU) 
                                                        | ((0x2dU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xdU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xfff8ffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xffff0000U 
                                                  & (((0x32U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x12U) 
                                                     | (((0x31U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x11U) 
                                                        | ((0x30U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x10U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xffc7ffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xfff80000U 
                                                  & (((0x35U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x15U) 
                                                     | (((0x34U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x14U) 
                                                        | ((0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x13U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xfe3fffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xffc00000U 
                                                  & (((0x38U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x18U) 
                                                     | (((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x17U) 
                                                        | ((0x36U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x16U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0xf1ffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xfe000000U 
                                                  & (((0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1bU) 
                                                     | (((0x3aU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x1aU) 
                                                        | ((0x39U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x19U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0x8fffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | (0xf0000000U 
                                                  & (((0x3eU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1eU) 
                                                     | (((0x3dU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x1dU) 
                                                        | ((0x3cU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x1cU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[1U] = ((0x7fffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[1U]) 
                                               | ((0x3fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                  << 0x1fU));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xfffffffcU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0x7fffffffU 
                                                  & ((0x7ffffffeU 
                                                      & ((0x41U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 1U)) 
                                                     | ((0x7fffffffU 
                                                         & (0x40U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i))) 
                                                        | ((0x3fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           >> 1U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xffffffe3U 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xfffffffcU 
                                                  & (((0x44U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 4U) 
                                                     | (((0x43U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 3U) 
                                                        | ((0x42U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 2U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xffffff1fU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xffffffe0U 
                                                  & (((0x47U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 7U) 
                                                     | (((0x46U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 6U) 
                                                        | ((0x45U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 5U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xfffff8ffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xffffff00U 
                                                  & (((0x4aU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xaU) 
                                                     | (((0x49U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 9U) 
                                                        | ((0x48U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 8U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xffffc7ffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xfffff800U 
                                                  & (((0x4dU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xdU) 
                                                     | (((0x4cU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xcU) 
                                                        | ((0x4bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xbU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xfffe3fffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xffffc000U 
                                                  & (((0x50U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x10U) 
                                                     | (((0x4fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xfU) 
                                                        | ((0x4eU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xeU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xfff1ffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xfffe0000U 
                                                  & (((0x53U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x13U) 
                                                     | (((0x52U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x12U) 
                                                        | ((0x51U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x11U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xff8fffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xfff00000U 
                                                  & (((0x56U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x16U) 
                                                     | (((0x55U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x15U) 
                                                        | ((0x54U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x14U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xfc7fffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xff800000U 
                                                  & (((0x59U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x19U) 
                                                     | (((0x58U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x18U) 
                                                        | ((0x57U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x17U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0xe3ffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xfc000000U 
                                                  & (((0x5cU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1cU) 
                                                     | (((0x5bU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x1bU) 
                                                        | ((0x5aU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x1aU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[2U] = ((0x1fffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[2U]) 
                                               | (0xe0000000U 
                                                  & (((0x5fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1fU) 
                                                     | (((0x5eU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x1eU) 
                                                        | ((0x5dU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x1dU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xfffffff8U 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (((0x62U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                   << 2U) 
                                                  | (((0x61U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 1U) 
                                                     | (0x60U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22050243_id__DOT__inst_i)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xffffffc7U 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xfffffff8U 
                                                  & (((0x65U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 5U) 
                                                     | (((0x64U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 4U) 
                                                        | ((0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 3U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xfffffe3fU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xffffffc0U 
                                                  & (((0x68U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 8U) 
                                                     | (((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 7U) 
                                                        | ((0x66U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 6U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xfffff1ffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xfffffe00U 
                                                  & (((0x6bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xbU) 
                                                     | (((0x6aU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xaU) 
                                                        | ((0x69U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 9U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xffff8fffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xfffff000U 
                                                  & (((0x6eU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0xeU) 
                                                     | (((0x6dU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0xdU) 
                                                        | ((0x6cU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xcU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xfffc7fffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xffff8000U 
                                                  & (((0x71U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x11U) 
                                                     | (((0x70U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x10U) 
                                                        | ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0xfU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xffe3ffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xfffc0000U 
                                                  & (((0x74U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x14U) 
                                                     | (((0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x13U) 
                                                        | ((0x72U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x12U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xff1fffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xffe00000U 
                                                  & (((0x77U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x17U) 
                                                     | (((0x76U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x16U) 
                                                        | ((0x75U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x15U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xf8ffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xff000000U 
                                                  & (((0x7aU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1aU) 
                                                     | (((0x79U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x19U) 
                                                        | ((0x78U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x18U)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0xc7ffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xf8000000U 
                                                  & (((0x7dU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1dU) 
                                                     | (((0x7cU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                         << 0x1cU) 
                                                        | ((0x7bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                           << 0x1bU)))));
    vlSelf->ysyx_22050243_id__DOT__op_d[3U] = ((0x3fffffffU 
                                                & vlSelf->ysyx_22050243_id__DOT__op_d[3U]) 
                                               | (0xc0000000U 
                                                  & (((0x7fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                      << 0x1fU) 
                                                     | ((0x7eU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050243_id__DOT__inst_i)) 
                                                        << 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__inst_mul = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                   >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_mulh = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 1U)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                      >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_mulhsu = (1U 
                                                  & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                       >> 0x13U) 
                                                      & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                         >> 2U)) 
                                                     & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                        >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_mulhu = (1U 
                                                 & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 3U)) 
                                                    & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                       >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_mulw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                      >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_div = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 4U)) 
                                                & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                   >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_divu = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 5U)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                      >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_divw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 4U)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                      >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_divuw = (1U 
                                                 & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                      >> 0x1bU) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 5U)) 
                                                    & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                       >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_rem = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 6U)) 
                                                & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                   >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_remu = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 7U)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                      >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_remw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 6U)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                      >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_remuw = (1U 
                                                 & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                      >> 0x1bU) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 7U)) 
                                                    & (vlSelf->ysyx_22050243_id__DOT__funct7_d[0U] 
                                                       >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x7bU 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | (4U 
                                                      & ((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                          | vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                                         >> 0x15U)));
    vlSelf->ysyx_22050243_id__DOT__inst_csrrw = (1U 
                                                 & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_csrrs = (1U 
                                                 & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 2U)));
    vlSelf->ysyx_22050243_id__DOT__inst_csrrc = (1U 
                                                 & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 3U)));
    vlSelf->ysyx_22050243_id__DOT__inst_csrrwi = (1U 
                                                  & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 5U)));
    vlSelf->ysyx_22050243_id__DOT__inst_csrrsi = (1U 
                                                  & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 6U)));
    vlSelf->ysyx_22050243_id__DOT__inst_csrrci = (1U 
                                                  & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 7U)));
    vlSelf->ysyx_22050243_id__DOT__inst_jalr = (1U 
                                                & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                    >> 7U) 
                                                   & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)));
    vlSelf->ysyx_22050243_id__DOT__inst_sllw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_srlw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 5U)) 
                                                   & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_sraw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 5U)) 
                                                   & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]));
    vlSelf->ysyx_22050243_id__DOT__inst_sb = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                >> 3U) 
                                               & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)));
    vlSelf->ysyx_22050243_id__DOT__inst_sh = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                  >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_sw = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                  >> 2U)));
    vlSelf->ysyx_22050243_id__DOT__inst_sd = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                  >> 3U)));
    vlSelf->ysyx_22050243_id__DOT__inst_slli = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 1U)) 
                                                   & (~ 
                                                      (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                       >> 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__inst_srli = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 5U)) 
                                                   & (~ 
                                                      (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                       >> 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__inst_srai = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 5U)) 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0x1eU)));
    vlSelf->ysyx_22050243_id__DOT__inst_slliw = (1U 
                                                 & (((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                      >> 0x1bU) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 1U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__inst_srliw = (1U 
                                                 & (((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                      >> 0x1bU) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 5U)) 
                                                    & (~ 
                                                       (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0x1eU))));
    vlSelf->ysyx_22050243_id__DOT__inst_sraiw = (1U 
                                                 & (((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                      >> 0x1bU) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        >> 5U)) 
                                                    & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                       >> 0x1eU)));
    vlSelf->ysyx_22050243_id__DOT__inst_add = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_addw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                   & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_sub = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]));
    vlSelf->ysyx_22050243_id__DOT__inst_subw = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x1bU) 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                   & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]));
    vlSelf->ysyx_22050243_id__DOT__inst_sll = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 1U)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_slt = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 2U)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_sltu = (1U 
                                                & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 3U)) 
                                                   & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_srl = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 5U)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_sra = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 5U)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[1U]));
    vlSelf->ysyx_22050243_id__DOT__inst_xor = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 4U)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_or = (1U & 
                                              (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                 >> 0x13U) 
                                                & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 6U)) 
                                               & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_and = (1U & 
                                               (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                  >> 0x13U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    >> 7U)) 
                                                & vlSelf->ysyx_22050243_id__DOT__funct7_d[0U]));
    vlSelf->ysyx_22050243_id__DOT__inst_addi = (1U 
                                                & ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                    >> 0x13U) 
                                                   & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)));
    vlSelf->ysyx_22050243_id__DOT__inst_addiw = (1U 
                                                 & ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                     >> 0x1bU) 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)));
    vlSelf->ysyx_22050243_id__DOT__inst_slti = (1U 
                                                & ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                      >> 2U)));
    vlSelf->ysyx_22050243_id__DOT__inst_sltiu = (1U 
                                                 & ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       >> 3U)));
    vlSelf->ysyx_22050243_id__DOT__inst_xori = (1U 
                                                & ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                      >> 4U)));
    vlSelf->ysyx_22050243_id__DOT__inst_ori = (1U & 
                                               ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                 >> 0x13U) 
                                                & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 6U)));
    vlSelf->ysyx_22050243_id__DOT__inst_andi = (1U 
                                                & ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                      >> 7U)));
    vlSelf->ysyx_22050243_id__DOT__inst_lb = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                >> 3U) 
                                               & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)));
    vlSelf->ysyx_22050243_id__DOT__inst_lh = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                  >> 1U)));
    vlSelf->ysyx_22050243_id__DOT__inst_lw = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                  >> 2U)));
    vlSelf->ysyx_22050243_id__DOT__inst_lwu = (1U & 
                                               ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 6U)));
    vlSelf->ysyx_22050243_id__DOT__inst_lbu = (1U & 
                                               ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 4U)));
    vlSelf->ysyx_22050243_id__DOT__inst_lhu = (1U & 
                                               ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 5U)));
    vlSelf->ysyx_22050243_id__DOT__inst_ld = (1U & 
                                              ((vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                  >> 3U)));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src1 = (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src1)) 
                                                   | ((4U 
                                                       & (vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                          >> 0x15U)) 
                                                      | (2U 
                                                         & (((0x3feU 
                                                              & (vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                                 >> 0x16U)) 
                                                             | (0x3fffeU 
                                                                & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                   >> 0xeU))) 
                                                            | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr) 
                                                               << 1U)))));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x6fU 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | (0x10U 
                                                      & ((0x1ffff0U 
                                                          & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                             >> 0xbU)) 
                                                         | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr) 
                                                            << 4U))));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw)) 
                                                      << 6U));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x5fU 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | (((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)) 
                                                      << 5U));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x77U 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | (((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                                      << 3U));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x7eU 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | ((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_add) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_or)) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_and)));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src2 = (
                                                   (0x7dU 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2)) 
                                                   | (((((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_addi) 
                                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw)) 
                                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti)) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu)) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                      << 1U));
    vlSelf->ysyx_22050243_id__DOT__sel_alu_src1 = (
                                                   (6U 
                                                    & (IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src1)) 
                                                   | (((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_addi) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_add)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll)) 
                                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt)) 
                                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu)) 
                                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl)) 
                                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra)) 
                                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw)) 
                                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori)) 
                                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor)) 
                                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_or)) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_and)) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)));
    vlSelf->ysyx_22050243_id__DOT__alu_op = ((0x800U 
                                              & (((((((((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_add) 
                                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addi)) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)) 
                                                    << 0xbU) 
                                                   | (0xff800U 
                                                      & (vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                         >> 0xcU))) 
                                                  | (0xffff800U 
                                                     & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                        >> 4U))) 
                                                 | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr) 
                                                    << 0xbU))) 
                                             | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub) 
                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                                 << 0xaU) 
                                                | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt) 
                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti)) 
                                                    << 9U) 
                                                   | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu)) 
                                                       << 8U) 
                                                      | ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_and) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci)) 
                                                          << 7U) 
                                                         | ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_or) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi)) 
                                                             << 6U) 
                                                            | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori)) 
                                                                << 5U) 
                                                               | ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll) 
                                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli)) 
                                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                                                   << 4U) 
                                                                  | ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl) 
                                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                                                      << 3U) 
                                                                     | ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra) 
                                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw)) 
                                                                         << 2U) 
                                                                        | ((2U 
                                                                            & (((0x3feU 
                                                                                & (vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw) 
                                                                                << 1U)) 
                                                                               | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi) 
                                                                                << 1U))) 
                                                                           | (1U 
                                                                              & ((((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                                >> 0x14U))) 
                                                                                | (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                                                                & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                                                >> 0x14U)))))))))))))));
}

extern const VlWide<12>/*383:0*/ Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0;

VL_INLINE_OPT void Vysyx_22050243_id___024root___combo__TOP__3(Vysyx_22050243_id___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_id___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<7>/*223:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<12>/*383:0*/ __Vtemp31;
    // Body
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[1U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (1U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [1U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[2U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (2U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [2U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[3U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (3U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [3U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[4U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (4U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [4U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[5U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (5U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [5U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[6U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (6U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [6U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[7U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (7U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [7U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[8U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (8U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [8U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[9U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (9U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [9U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0xaU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0xaU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0xaU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0xbU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0xbU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0xbU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0xcU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0xcU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0xcU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0xdU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0xdU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0xdU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0xeU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0xeU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0xeU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0xfU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0xfU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0xfU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x10U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x10U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x10U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x11U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x11U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x11U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x12U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x12U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x12U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x13U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x13U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x13U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x14U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x14U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x14U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x15U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x15U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x15U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x16U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x16U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x16U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x17U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x17U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x17U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x18U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x18U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x18U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x19U] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x19U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x19U]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x1aU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x1aU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x1aU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x1bU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x1bU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x1bU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x1cU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x1cU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x1cU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x1dU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x1dU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x1dU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x1eU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x1eU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x1eU]);
    vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0x1fU] 
        = (((vlSelf->wb_2_gpr_bus[2U] >> 5U) & (0x1fU 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])))
            ? (((QData)((IData)(vlSelf->wb_2_gpr_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->wb_2_gpr_bus[0U])))
            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
           [0x1fU]);
    vlSelf->stall_req_for_load = (((((0x1fU & ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                               >> 2U)) 
                                     == (0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                  >> 0xfU))) 
                                    | ((0x1fU & ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                                 >> 2U)) 
                                       == (0x1fU & 
                                           (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                            >> 0x14U)))) 
                                   & (IData)(vlSelf->ex_2_id_for_stall_load)) 
                                  & (~ ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                        >> 1U)));
    __Vtemp17[2U] = ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw) 
                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw)) 
                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw)) 
                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw)) 
                      << 0x1fU) | (((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw)) 
                                    << 0x1eU) | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw) 
                                                                              << 0x14U) 
                                                                             | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd) 
                                                                                << 0x13U))))))))))) 
                                                 | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mul) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulh) 
                                                         << 0x11U) 
                                                        | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhu) 
                                                               << 0xfU) 
                                                              | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw) 
                                                                 << 0xeU))))) 
                                                    | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_rem) 
                                                         << 0xdU) 
                                                        | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remu) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw) 
                                                               << 0xbU) 
                                                              | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw) 
                                                                 << 0xaU)))) 
                                                       | ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_div) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divu) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw) 
                                                                    << 6U)))) 
                                                          | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci))))))))))));
    __Vtemp20[0U] = ((vlSelf->ysyx_22050243_id__DOT__inst_i 
                      << 0x19U) | (((IData)(vlSelf->ysyx_22050243_id__DOT__alu_op) 
                                    << 0xdU) | (((IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src1) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2) 
                                                    << 3U) 
                                                   | (((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)) 
                                                       << 2U) 
                                                      | ((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)) 
                                                          << 1U) 
                                                         | (1U 
                                                            & ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                                                | vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                                                                >> 0x17U) 
                                                                                | (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addi)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_add)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_or)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_and)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs)) 
                                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc)) 
                                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi)) 
                                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi)) 
                                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci)) 
                                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mul)) 
                                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulh)) 
                                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu)) 
                                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhu)) 
                                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_div)) 
                                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divu)) 
                                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_rem)) 
                                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remu)) 
                                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw)) 
                                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw)) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw)) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw)))))))));
    __Vtemp27[0U] = (IData)((((vlSelf->ex_2_gpr_bus[2U] 
                               >> 5U) & ((0x1fU & vlSelf->ex_2_gpr_bus[2U]) 
                                         == (0x1fU 
                                             & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0x14U))))
                              ? (((QData)((IData)(vlSelf->ex_2_gpr_bus[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ex_2_gpr_bus[0U])))
                              : (((vlSelf->mem_2_gpr_bus[2U] 
                                   >> 5U) & ((0x1fU 
                                              & vlSelf->mem_2_gpr_bus[2U]) 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0x14U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->mem_2_gpr_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->mem_2_gpr_bus[0U])))
                                  : (((vlSelf->wb_2_gpr_bus[2U] 
                                       >> 5U) & ((0x1fU 
                                                  & vlSelf->wb_2_gpr_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                     >> 0x14U))))
                                      ? (((QData)((IData)(
                                                          vlSelf->wb_2_gpr_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->wb_2_gpr_bus[0U])))
                                      : ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((0U == (0x1fU 
                                                  & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                     >> 0x14U)))
                                           ? 0ULL : 
                                          ((((0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0x14U)) 
                                             == (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])) 
                                            & (vlSelf->wb_2_gpr_bus[2U] 
                                               >> 5U))
                                            ? (((QData)((IData)(
                                                                vlSelf->wb_2_gpr_bus[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[0U])))
                                            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                           [(0x1fU 
                                             & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0x14U))])))))));
    __Vtemp27[1U] = (IData)(((((vlSelf->ex_2_gpr_bus[2U] 
                                >> 5U) & ((0x1fU & 
                                           vlSelf->ex_2_gpr_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0x14U))))
                               ? (((QData)((IData)(
                                                   vlSelf->ex_2_gpr_bus[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ex_2_gpr_bus[0U])))
                               : (((vlSelf->mem_2_gpr_bus[2U] 
                                    >> 5U) & ((0x1fU 
                                               & vlSelf->mem_2_gpr_bus[2U]) 
                                              == (0x1fU 
                                                  & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                     >> 0x14U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->mem_2_gpr_bus[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->mem_2_gpr_bus[0U])))
                                   : (((vlSelf->wb_2_gpr_bus[2U] 
                                        >> 5U) & ((0x1fU 
                                                   & vlSelf->wb_2_gpr_bus[2U]) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0x14U))))
                                       ? (((QData)((IData)(
                                                           vlSelf->wb_2_gpr_bus[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->wb_2_gpr_bus[0U])))
                                       : ((IData)(vlSelf->rst)
                                           ? 0ULL : 
                                          ((0U == (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           ((((0x1fU 
                                               & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                  >> 0x14U)) 
                                              == (0x1fU 
                                                  & vlSelf->wb_2_gpr_bus[2U])) 
                                             & (vlSelf->wb_2_gpr_bus[2U] 
                                                >> 5U))
                                             ? (((QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->wb_2_gpr_bus[0U])))
                                             : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                            [(0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0x14U))])))))) 
                             >> 0x20U));
    __Vtemp27[2U] = (IData)((((vlSelf->ex_2_gpr_bus[2U] 
                               >> 5U) & ((0x1fU & vlSelf->ex_2_gpr_bus[2U]) 
                                         == (0x1fU 
                                             & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0xfU))))
                              ? (((QData)((IData)(vlSelf->ex_2_gpr_bus[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ex_2_gpr_bus[0U])))
                              : (((vlSelf->mem_2_gpr_bus[2U] 
                                   >> 5U) & ((0x1fU 
                                              & vlSelf->mem_2_gpr_bus[2U]) 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0xfU))))
                                  ? (((QData)((IData)(
                                                      vlSelf->mem_2_gpr_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->mem_2_gpr_bus[0U])))
                                  : (((vlSelf->wb_2_gpr_bus[2U] 
                                       >> 5U) & ((0x1fU 
                                                  & vlSelf->wb_2_gpr_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                     >> 0xfU))))
                                      ? (((QData)((IData)(
                                                          vlSelf->wb_2_gpr_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->wb_2_gpr_bus[0U])))
                                      : ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((0U == (0x1fU 
                                                  & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                     >> 0xfU)))
                                           ? 0ULL : 
                                          ((((0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0xfU)) 
                                             == (0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U])) 
                                            & (vlSelf->wb_2_gpr_bus[2U] 
                                               >> 5U))
                                            ? (((QData)((IData)(
                                                                vlSelf->wb_2_gpr_bus[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[0U])))
                                            : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                           [(0x1fU 
                                             & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0xfU))])))))));
    __Vtemp27[3U] = (IData)(((((vlSelf->ex_2_gpr_bus[2U] 
                                >> 5U) & ((0x1fU & 
                                           vlSelf->ex_2_gpr_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0xfU))))
                               ? (((QData)((IData)(
                                                   vlSelf->ex_2_gpr_bus[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ex_2_gpr_bus[0U])))
                               : (((vlSelf->mem_2_gpr_bus[2U] 
                                    >> 5U) & ((0x1fU 
                                               & vlSelf->mem_2_gpr_bus[2U]) 
                                              == (0x1fU 
                                                  & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                     >> 0xfU))))
                                   ? (((QData)((IData)(
                                                       vlSelf->mem_2_gpr_bus[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->mem_2_gpr_bus[0U])))
                                   : (((vlSelf->wb_2_gpr_bus[2U] 
                                        >> 5U) & ((0x1fU 
                                                   & vlSelf->wb_2_gpr_bus[2U]) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0xfU))))
                                       ? (((QData)((IData)(
                                                           vlSelf->wb_2_gpr_bus[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->wb_2_gpr_bus[0U])))
                                       : ((IData)(vlSelf->rst)
                                           ? 0ULL : 
                                          ((0U == (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           ((((0x1fU 
                                               & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                  >> 0xfU)) 
                                              == (0x1fU 
                                                  & vlSelf->wb_2_gpr_bus[2U])) 
                                             & (vlSelf->wb_2_gpr_bus[2U] 
                                                >> 5U))
                                             ? (((QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->wb_2_gpr_bus[0U])))
                                             : vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                            [(0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0xfU))])))))) 
                             >> 0x20U));
    __Vtemp31[0xbU] = ((0xffffffc0U & ((0x2000U & (
                                                   vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                   >> 2U)) 
                                       | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                  << 8U) 
                                                 & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                    << 0xbU))) 
                                             | ((0x400U 
                                                 & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                       << 9U))) 
                                                | ((0x200U 
                                                    & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                          << 5U))) 
                                                   | ((0x100U 
                                                       & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                             << 3U))) 
                                                      | ((0x80U 
                                                          & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                              << 4U) 
                                                             & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                                << 1U))) 
                                                         | (0x40U 
                                                            & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                << 3U) 
                                                               & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                                  >> 1U))))))))))) 
                       | ((0x30U & ((IData)(vlSelf->ysyx_22050243_id__DOT__sp_bus) 
                                    << 4U)) | ((0x38U 
                                                & ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb)) 
                                                   << 3U)) 
                                               | ((0x3cU 
                                                   & ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                      << 2U)) 
                                                  | ((0x3eU 
                                                      & ((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                                         << 1U)) 
                                                     | (0x3fU 
                                                        & (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                           | ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw) 
                                                              >> 1U))))))));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[0U] 
        = __Vtemp27[0U];
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[1U] 
        = __Vtemp27[1U];
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[2U] 
        = __Vtemp27[2U];
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[3U] 
        = __Vtemp27[3U];
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[4U] 
        = ((__Vtemp20[0U] << 6U) | ((0x3eU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                              >> 6U)) 
                                    | (((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu))));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[5U] 
        = ((__Vtemp20[0U] >> 0x1aU) | ((0x7fffffc0U 
                                        & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                           >> 1U)) 
                                       | ((IData)(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                    ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                                    : 0ULL)) 
                                          << 0x1fU)));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[6U] 
        = ((0x3fU & ((IData)(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                               ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                               : 0ULL)) >> 1U)) | (
                                                   (0x7fffffc0U 
                                                    & ((IData)(
                                                               ((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                                 ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                                                 : 0ULL)) 
                                                       >> 1U)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                                 ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                                                 : 0ULL) 
                                                               >> 0x20U)) 
                                                      << 0x1fU)));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[7U] 
        = ((0x3fU & ((IData)((((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                : 0ULL) >> 0x20U)) 
                     >> 1U)) | ((0x7fffffc0U & ((IData)(
                                                        (((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                           ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                >> 1U)) 
                                | ((IData)(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                             ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                             : 0ULL)) 
                                   << 0x1fU)));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[8U] 
        = ((0x3fU & ((IData)(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                               ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                               : 0ULL)) >> 1U)) | (
                                                   (0x7fffffc0U 
                                                    & ((IData)(
                                                               ((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                                 ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                                                 : 0ULL)) 
                                                       >> 1U)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                                 ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                                                 : 0ULL) 
                                                               >> 0x20U)) 
                                                      << 0x1fU)));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[9U] 
        = ((0x3fU & ((IData)((((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                : 0ULL) >> 0x20U)) 
                     >> 1U)) | ((0x7fffffc0U & ((IData)(
                                                        (((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                                           ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                >> 1U)) 
                                | (__Vtemp17[2U] << 0x1fU)));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[0xaU] 
        = ((0x3fU & (__Vtemp17[2U] >> 1U)) | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw) 
                                               << 0x1fU) 
                                              | (0x7fffffc0U 
                                                 & (__Vtemp17[2U] 
                                                    >> 1U))));
    vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[0xbU] 
        = __Vtemp31[0xbU];
    vlSelf->gpr_o[0x1fU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x1fU];
    vlSelf->gpr_o[0x1eU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x1eU];
    vlSelf->gpr_o[0x1dU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x1dU];
    vlSelf->gpr_o[0x1cU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x1cU];
    vlSelf->gpr_o[0x1bU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x1bU];
    vlSelf->gpr_o[0x1aU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x1aU];
    vlSelf->gpr_o[0x19U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x19U];
    vlSelf->gpr_o[0x18U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x18U];
    vlSelf->gpr_o[0x17U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x17U];
    vlSelf->gpr_o[0x16U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x16U];
    vlSelf->gpr_o[0x15U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x15U];
    vlSelf->gpr_o[0x14U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x14U];
    vlSelf->gpr_o[0x13U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x13U];
    vlSelf->gpr_o[0x12U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x12U];
    vlSelf->gpr_o[0x11U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x11U];
    vlSelf->gpr_o[0x10U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0x10U];
    vlSelf->gpr_o[0xfU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0xfU];
    vlSelf->gpr_o[0xeU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0xeU];
    vlSelf->gpr_o[0xdU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0xdU];
    vlSelf->gpr_o[0xcU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0xcU];
    vlSelf->gpr_o[0xbU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0xbU];
    vlSelf->gpr_o[0xaU] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0xaU];
    vlSelf->gpr_o[9U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [9U];
    vlSelf->gpr_o[8U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [8U];
    vlSelf->gpr_o[7U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [7U];
    vlSelf->gpr_o[6U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [6U];
    vlSelf->gpr_o[5U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [5U];
    vlSelf->gpr_o[4U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [4U];
    vlSelf->gpr_o[3U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [3U];
    vlSelf->gpr_o[2U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [2U];
    vlSelf->gpr_o[1U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [1U];
    vlSelf->gpr_o[0U] = vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o
        [0U];
    if (vlSelf->ysyx_22050243_id__DOT__flag) {
        vlSelf->id_2_ex_bus[0U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[0U];
        vlSelf->id_2_ex_bus[1U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[1U];
        vlSelf->id_2_ex_bus[2U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[2U];
        vlSelf->id_2_ex_bus[3U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[3U];
        vlSelf->id_2_ex_bus[4U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[4U];
        vlSelf->id_2_ex_bus[5U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[5U];
        vlSelf->id_2_ex_bus[6U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[6U];
        vlSelf->id_2_ex_bus[7U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[7U];
        vlSelf->id_2_ex_bus[8U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[8U];
        vlSelf->id_2_ex_bus[9U] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[9U];
        vlSelf->id_2_ex_bus[0xaU] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[0xaU];
        vlSelf->id_2_ex_bus[0xbU] = Vysyx_22050243_id__ConstPool__CONST_fe9d5d53_0[0xbU];
    } else {
        vlSelf->id_2_ex_bus[0U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[0U];
        vlSelf->id_2_ex_bus[1U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[1U];
        vlSelf->id_2_ex_bus[2U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[2U];
        vlSelf->id_2_ex_bus[3U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[3U];
        vlSelf->id_2_ex_bus[4U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[4U];
        vlSelf->id_2_ex_bus[5U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[5U];
        vlSelf->id_2_ex_bus[6U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[6U];
        vlSelf->id_2_ex_bus[7U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[7U];
        vlSelf->id_2_ex_bus[8U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[8U];
        vlSelf->id_2_ex_bus[9U] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[9U];
        vlSelf->id_2_ex_bus[0xaU] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[0xaU];
        vlSelf->id_2_ex_bus[0xbU] = vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp[0xbU];
    }
}

void Vysyx_22050243_id___024root___eval(Vysyx_22050243_id___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_id___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050243_id___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22050243_id___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050243_id___024root___change_request_1(Vysyx_22050243_id___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050243_id___024root___change_request(Vysyx_22050243_id___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_id___024root___change_request\n"); );
    // Body
    return (Vysyx_22050243_id___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050243_id___024root___change_request_1(Vysyx_22050243_id___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_id___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050243_id___024root___eval_debug_assertions(Vysyx_22050243_id___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_id___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->stall & 0xc0U))) {
        Verilated::overWidthError("stall");}
    if (VL_UNLIKELY((vlSelf->ex_2_id_for_stall_load 
                     & 0x80U))) {
        Verilated::overWidthError("ex_2_id_for_stall_load");}
    if (VL_UNLIKELY((vlSelf->if_2_id_bus[4U] & 0xfffffffeU))) {
        Verilated::overWidthError("if_2_id_bus");}
    if (VL_UNLIKELY((vlSelf->ex_2_gpr_bus[2U] & 0xffffffc0U))) {
        Verilated::overWidthError("ex_2_gpr_bus");}
    if (VL_UNLIKELY((vlSelf->mem_2_gpr_bus[2U] & 0xffffffc0U))) {
        Verilated::overWidthError("mem_2_gpr_bus");}
    if (VL_UNLIKELY((vlSelf->wb_2_gpr_bus[2U] & 0xffffffc0U))) {
        Verilated::overWidthError("wb_2_gpr_bus");}
}
#endif  // VL_DEBUG
