// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP___024root.h"
#include "VTOP__Syms.h"

//==========

extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_0fbba304_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_5b236cf1_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_595ac493_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_6fa71be3_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_0671173a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTOP__ConstPool__TABLE_13fada1e_0;

VL_INLINE_OPT void VTOP___024root___combo__TOP__1(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__1\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->out_zero = (0ULL == vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out);
    vlSelf->result = vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out;
    vlSelf->TOP__DOT____Vcellinp__ysyx_22050243_ALUCtrl___funct 
        = ((8U & (vlSelf->i_inst >> 0x1bU)) | (7U & 
                                               (vlSelf->i_inst 
                                                >> 0xcU)));
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S 
        = ((0xfe0U & (vlSelf->i_inst >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->i_inst 
                                                      >> 7U)));
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B 
        = ((0x1000U & (vlSelf->i_inst >> 0x13U)) | 
           ((0x800U & (vlSelf->i_inst << 4U)) | ((0x7e0U 
                                                  & (vlSelf->i_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->i_inst 
                                                       >> 7U)))));
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J 
        = ((0x100000U & (vlSelf->i_inst >> 0xbU)) | 
           ((0xff000U & vlSelf->i_inst) | ((0x800U 
                                            & (vlSelf->i_inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->i_inst 
                                                 >> 0x14U)))));
    __Vtableidx1 = (0x7fU & vlSelf->i_inst);
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R 
        = VTOP__ConstPool__TABLE_0fbba304_0[__Vtableidx1];
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I 
        = VTOP__ConstPool__TABLE_5b236cf1_0[__Vtableidx1];
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S 
        = VTOP__ConstPool__TABLE_595ac493_0[__Vtableidx1];
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B 
        = VTOP__ConstPool__TABLE_6fa71be3_0[__Vtableidx1];
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U 
        = VTOP__ConstPool__TABLE_0671173a_0[__Vtableidx1];
    vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J 
        = VTOP__ConstPool__TABLE_13fada1e_0[__Vtableidx1];
    vlSelf->TOP__DOT__alu_ctrl_id = ((0U == ((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->i_inst))
                                              ? 3U : 0U))
                                      ? 0U : ((3U == 
                                               ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->i_inst))
                                                 ? 3U
                                                 : 0U))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->TOP__DOT____Vcellinp__ysyx_22050243_ALUCtrl___funct)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->TOP__DOT____Vcellinp__ysyx_22050243_ALUCtrl___funct))
                                                    ? 1U
                                                    : 0xfU))
                                               : 0xfU));
}

VL_INLINE_OPT void VTOP___024root___sequent__TOP__3(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__TOP__DOT__ysyx_22050243_GPR___DOT__gpr__v0;
    QData/*63:0*/ __Vdly__TOP__DOT__npc;
    QData/*63:0*/ __Vdlyvval__TOP__DOT__ysyx_22050243_GPR___DOT__gpr__v0;
    // Body
    __Vdly__TOP__DOT__npc = vlSelf->TOP__DOT__npc;
    __Vdly__TOP__DOT__npc = (4ULL + vlSelf->TOP__DOT__pc);
    __Vdlyvval__TOP__DOT__ysyx_22050243_GPR___DOT__gpr__v0 
        = vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out;
    __Vdlyvdim0__TOP__DOT__ysyx_22050243_GPR___DOT__gpr__v0 
        = (0x1fU & (vlSelf->i_inst >> 7U));
    vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[__Vdlyvdim0__TOP__DOT__ysyx_22050243_GPR___DOT__gpr__v0] 
        = __Vdlyvval__TOP__DOT__ysyx_22050243_GPR___DOT__gpr__v0;
    vlSelf->TOP__DOT__pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                             : vlSelf->TOP__DOT__npc);
    vlSelf->TOP__DOT__npc = __Vdly__TOP__DOT__npc;
}

VL_INLINE_OPT void VTOP___024root___combo__TOP__4(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->TOP__DOT__rs1 = (((0x1fU & (vlSelf->i_inst 
                                        >> 0xfU)) == 
                              (0x1fU & (vlSelf->i_inst 
                                        >> 7U))) ? vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out
                              : vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr
                             [(0x1fU & (vlSelf->i_inst 
                                        >> 0xfU))]);
    vlSelf->TOP__DOT__b = ((0x13U == (0x7fU & vlSelf->i_inst))
                            ? ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R)
                                ? 0ULL : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I)
                                           ? ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S)
                                               ? 0ULL
                                               : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                     ? 0ULL
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->i_inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->i_inst 
                                                                        >> 0x14U))))))))
                                           : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S)
                                               ? ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                     ? 0ULL
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S))))))
                                               : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B)
                                                   ? 
                                                  ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                     ? 0ULL
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B) 
                                                                             >> 0xcU))))) 
                                                      << 0xdU) 
                                                     | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B)))))
                                                   : 
                                                  ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                    ? 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                     ? 0ULL
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->i_inst 
                                                                          >> 0x1fU)))) 
                                                      << 0x14U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->i_inst 
                                                                        >> 0xcU)))))
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J 
                                                                             >> 0x14U))))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J)))
                                                     : 0ULL))))))
                            : (((0x1fU & (vlSelf->i_inst 
                                          >> 0x14U)) 
                                == (0x1fU & (vlSelf->i_inst 
                                             >> 7U)))
                                ? vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out
                                : vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr
                               [(0x1fU & (vlSelf->i_inst 
                                          >> 0x14U))]));
    vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__add_result 
        = (vlSelf->TOP__DOT__rs1 + vlSelf->TOP__DOT__b);
    vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sub_result 
        = (vlSelf->TOP__DOT__rs1 - vlSelf->TOP__DOT__b);
    vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sllw_result 
        = ((IData)(vlSelf->TOP__DOT__rs1) << (0x1fU 
                                              & (IData)(vlSelf->TOP__DOT__b)));
    vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__srlw_result 
        = ((IData)(vlSelf->TOP__DOT__rs1) >> (0x1fU 
                                              & (IData)(vlSelf->TOP__DOT__b)));
    vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out 
        = ((8U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
            ? ((4U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                ? ((2U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                    ? ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? 0ULL : (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->TOP__DOT__rs1 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelf->TOP__DOT__rs1) 
                                                                >> 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->TOP__DOT__b)))))))
                    : ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? VL_SHIFTRS_QQI(64,64,6, vlSelf->TOP__DOT__rs1, 
                                         (0x3fU & (IData)(vlSelf->TOP__DOT__b)))
                        : (((QData)((IData)((- (IData)(
                                                       (vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__srlw_result 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__srlw_result)))))
                : ((2U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                    ? ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? (((QData)((IData)((- (IData)(
                                                       (vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sllw_result 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sllw_result)))
                        : (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sub_result 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sub_result))))
                    : ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__add_result 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__add_result)))
                        : vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sub_result)))
            : ((4U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                ? ((2U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                    ? ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? (vlSelf->TOP__DOT__rs1 & vlSelf->TOP__DOT__b)
                        : (vlSelf->TOP__DOT__rs1 | vlSelf->TOP__DOT__b))
                    : ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? (vlSelf->TOP__DOT__rs1 >> 
                           (0x3fU & (IData)(vlSelf->TOP__DOT__b)))
                        : (vlSelf->TOP__DOT__rs1 ^ vlSelf->TOP__DOT__b)))
                : ((2U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                    ? ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? ((vlSelf->TOP__DOT__rs1 < vlSelf->TOP__DOT__b)
                            ? 1ULL : 0ULL) : (VL_LTS_IQQ(1,64,64, vlSelf->TOP__DOT__rs1, vlSelf->TOP__DOT__b)
                                               ? 1ULL
                                               : 0ULL))
                    : ((1U & (IData)(vlSelf->TOP__DOT__alu_ctrl_id))
                        ? (vlSelf->TOP__DOT__rs1 << 
                           (0x3fU & (IData)(vlSelf->TOP__DOT__b)))
                        : vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__add_result))));
}

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Body
    VTOP___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VTOP___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VTOP___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VTOP___024root___change_request_1(VTOP___024root* vlSelf);

VL_INLINE_OPT QData VTOP___024root___change_request(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___change_request\n"); );
    // Body
    return (VTOP___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VTOP___024root___change_request_1(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out ^ vlSelf->__Vchglast__TOP__TOP__DOT__ysyx_22050243_ALU__DOT__alu_out));
    VL_DEBUG_IF( if(__req && ((vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out ^ vlSelf->__Vchglast__TOP__TOP__DOT__ysyx_22050243_ALU__DOT__alu_out))) VL_DBG_MSGF("        CHANGE: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_ALU.v:16: ysyx_22050243_ALU.alu_out\n"); );
    // Final
    vlSelf->__Vchglast__TOP__TOP__DOT__ysyx_22050243_ALU__DOT__alu_out 
        = vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out;
    return __req;
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
