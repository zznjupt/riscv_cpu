// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_Ctrl.h for the primary calling header

#include "Vysyx_22050243_Ctrl___024root.h"
#include "Vysyx_22050243_Ctrl__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void ID_ctrl_show(long long opcode);

VL_INLINE_OPT void Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ID_ctrl_show_TOP(QData/*63:0*/ opcode) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ID_ctrl_show_TOP\n"); );
    // Body
    long long opcode__Vcvt;
    for (size_t opcode__Vidx = 0; opcode__Vidx < 1; ++opcode__Vidx) opcode__Vcvt = opcode;
    ID_ctrl_show(opcode__Vcvt);
}

extern "C" void ID_funct3_show(long long funct3);

VL_INLINE_OPT void Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ID_funct3_show_TOP(QData/*63:0*/ funct3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ID_funct3_show_TOP\n"); );
    // Body
    long long funct3__Vcvt;
    for (size_t funct3__Vidx = 0; funct3__Vidx < 1; ++funct3__Vidx) funct3__Vcvt = funct3;
    ID_funct3_show(funct3__Vcvt);
}

VL_INLINE_OPT void Vysyx_22050243_Ctrl___024root___combo__TOP__1(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___combo__TOP__1\n"); );
    // Body
    if ((0x40U & (IData)(vlSelf->opcode))) {
        if ((0x20U & (IData)(vlSelf->opcode))) {
            if ((0x10U & (IData)(vlSelf->opcode))) {
                if ((8U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                } else if ((4U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                } else if ((2U & (IData)(vlSelf->opcode))) {
                    if ((1U & (IData)(vlSelf->opcode))) {
                        if ((0U == (IData)(vlSelf->funct3))) {
                            vlSelf->csr_r = 0U;
                            vlSelf->alu_src = 0U;
                            vlSelf->mem2reg = 0U;
                            vlSelf->reg_w = 0U;
                            vlSelf->mem_r = 0U;
                            vlSelf->mem_w = 0U;
                            vlSelf->branch = 0U;
                            vlSelf->pc_src_ctrl = 0U;
                            vlSelf->alu_op = 0U;
                            Vysyx_22050243_Ctrl___024root____Vdpiimwrap_ysyx_22050243_Ctrl__DOT__ebreak_TOP();
                        } else {
                            vlSelf->csr_r = 1U;
                            vlSelf->alu_src = 0U;
                            vlSelf->mem2reg = 5U;
                            vlSelf->reg_w = 1U;
                            vlSelf->mem_r = 0U;
                            vlSelf->mem_w = 0U;
                            vlSelf->branch = 0U;
                            vlSelf->pc_src_ctrl = 0U;
                            vlSelf->alu_op = 0U;
                        }
                    } else {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 0U;
                        vlSelf->reg_w = 0U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 0U;
                    }
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else if ((8U & (IData)(vlSelf->opcode))) {
                if ((4U & (IData)(vlSelf->opcode))) {
                    if ((2U & (IData)(vlSelf->opcode))) {
                        if ((1U & (IData)(vlSelf->opcode))) {
                            vlSelf->csr_r = 0U;
                            vlSelf->alu_src = 0U;
                            vlSelf->mem2reg = 3U;
                            vlSelf->reg_w = 1U;
                            vlSelf->mem_r = 0U;
                            vlSelf->mem_w = 0U;
                            vlSelf->branch = 0U;
                            vlSelf->pc_src_ctrl = 1U;
                            vlSelf->alu_op = 0U;
                        } else {
                            vlSelf->csr_r = 0U;
                            vlSelf->alu_src = 0U;
                            vlSelf->mem2reg = 0U;
                            vlSelf->reg_w = 0U;
                            vlSelf->mem_r = 0U;
                            vlSelf->mem_w = 0U;
                            vlSelf->branch = 0U;
                            vlSelf->pc_src_ctrl = 0U;
                            vlSelf->alu_op = 0U;
                        }
                    } else {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 0U;
                        vlSelf->reg_w = 0U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 0U;
                    }
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else if ((4U & (IData)(vlSelf->opcode))) {
                if ((2U & (IData)(vlSelf->opcode))) {
                    if ((1U & (IData)(vlSelf->opcode))) {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 3U;
                        vlSelf->reg_w = 1U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 2U;
                        vlSelf->alu_op = 0U;
                    } else {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 0U;
                        vlSelf->reg_w = 0U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 0U;
                    }
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 1U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 1U;
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->opcode))) {
        if ((0x10U & (IData)(vlSelf->opcode))) {
            if ((8U & (IData)(vlSelf->opcode))) {
                if ((4U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                } else if ((2U & (IData)(vlSelf->opcode))) {
                    if ((1U & (IData)(vlSelf->opcode))) {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 0U;
                        vlSelf->reg_w = 1U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 6U;
                    } else {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 0U;
                        vlSelf->reg_w = 0U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 0U;
                    }
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else if ((4U & (IData)(vlSelf->opcode))) {
                if ((2U & (IData)(vlSelf->opcode))) {
                    if ((1U & (IData)(vlSelf->opcode))) {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 2U;
                        vlSelf->reg_w = 1U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 0U;
                    } else {
                        vlSelf->csr_r = 0U;
                        vlSelf->alu_src = 0U;
                        vlSelf->mem2reg = 0U;
                        vlSelf->reg_w = 0U;
                        vlSelf->mem_r = 0U;
                        vlSelf->mem_w = 0U;
                        vlSelf->branch = 0U;
                        vlSelf->pc_src_ctrl = 0U;
                        vlSelf->alu_op = 0U;
                    }
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 1U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 2U;
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else if ((8U & (IData)(vlSelf->opcode))) {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        } else if ((4U & (IData)(vlSelf->opcode))) {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        } else if ((2U & (IData)(vlSelf->opcode))) {
            if ((1U & (IData)(vlSelf->opcode))) {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 1U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 1U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->opcode))) {
        if ((8U & (IData)(vlSelf->opcode))) {
            if ((4U & (IData)(vlSelf->opcode))) {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            } else if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 1U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 1U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 7U;
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else if ((4U & (IData)(vlSelf->opcode))) {
            if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 4U;
                    vlSelf->reg_w = 1U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else if ((2U & (IData)(vlSelf->opcode))) {
            if ((1U & (IData)(vlSelf->opcode))) {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 1U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 1U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 3U;
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        }
    } else if ((8U & (IData)(vlSelf->opcode))) {
        if ((4U & (IData)(vlSelf->opcode))) {
            if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (IData)(vlSelf->opcode))) {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                } else {
                    vlSelf->csr_r = 0U;
                    vlSelf->alu_src = 0U;
                    vlSelf->mem2reg = 0U;
                    vlSelf->reg_w = 0U;
                    vlSelf->mem_r = 0U;
                    vlSelf->mem_w = 0U;
                    vlSelf->branch = 0U;
                    vlSelf->pc_src_ctrl = 0U;
                    vlSelf->alu_op = 0U;
                }
            } else {
                vlSelf->csr_r = 0U;
                vlSelf->alu_src = 0U;
                vlSelf->mem2reg = 0U;
                vlSelf->reg_w = 0U;
                vlSelf->mem_r = 0U;
                vlSelf->mem_w = 0U;
                vlSelf->branch = 0U;
                vlSelf->pc_src_ctrl = 0U;
                vlSelf->alu_op = 0U;
            }
        } else {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        }
    } else if ((4U & (IData)(vlSelf->opcode))) {
        vlSelf->csr_r = 0U;
        vlSelf->alu_src = 0U;
        vlSelf->mem2reg = 0U;
        vlSelf->reg_w = 0U;
        vlSelf->mem_r = 0U;
        vlSelf->mem_w = 0U;
        vlSelf->branch = 0U;
        vlSelf->pc_src_ctrl = 0U;
        vlSelf->alu_op = 0U;
    } else if ((2U & (IData)(vlSelf->opcode))) {
        if ((1U & (IData)(vlSelf->opcode))) {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 1U;
            vlSelf->mem2reg = 1U;
            vlSelf->reg_w = 1U;
            vlSelf->mem_r = 1U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        } else {
            vlSelf->csr_r = 0U;
            vlSelf->alu_src = 0U;
            vlSelf->mem2reg = 0U;
            vlSelf->reg_w = 0U;
            vlSelf->mem_r = 0U;
            vlSelf->mem_w = 0U;
            vlSelf->branch = 0U;
            vlSelf->pc_src_ctrl = 0U;
            vlSelf->alu_op = 0U;
        }
    } else if ((1U & (IData)(vlSelf->opcode))) {
        vlSelf->csr_r = 0U;
        vlSelf->alu_src = 0U;
        vlSelf->mem2reg = 0U;
        vlSelf->reg_w = 0U;
        vlSelf->mem_r = 0U;
        vlSelf->mem_w = 0U;
        vlSelf->branch = 0U;
        vlSelf->pc_src_ctrl = 0U;
        vlSelf->alu_op = 0U;
    } else {
        vlSelf->csr_r = 0U;
        vlSelf->alu_src = 0U;
        vlSelf->mem2reg = 0U;
        vlSelf->reg_w = 0U;
        vlSelf->mem_r = 0U;
        vlSelf->mem_w = 0U;
        vlSelf->branch = 0U;
        vlSelf->pc_src_ctrl = 0U;
        vlSelf->alu_op = 0U;
    }
}

void Vysyx_22050243_Ctrl___024root___eval(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___eval\n"); );
    // Body
    Vysyx_22050243_Ctrl___024root___combo__TOP__1(vlSelf);
}

QData Vysyx_22050243_Ctrl___024root___change_request_1(Vysyx_22050243_Ctrl___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050243_Ctrl___024root___change_request(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___change_request\n"); );
    // Body
    return (Vysyx_22050243_Ctrl___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050243_Ctrl___024root___change_request_1(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050243_Ctrl___024root___eval_debug_assertions(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
}
#endif  // VL_DEBUG
