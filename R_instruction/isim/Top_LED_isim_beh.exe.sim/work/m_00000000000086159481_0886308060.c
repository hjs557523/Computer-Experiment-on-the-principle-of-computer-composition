/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/FPGA/R_instruction/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {1, 0};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {7U, 0U};



static void Always_27_0(char *t0)
{
    char t8[8];
    char t40[8];
    char t41[16];
    char t42[8];
    char t46[8];
    char t53[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t12 = (t5 + 4);
    t13 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t14 = *((unsigned int *)t12);
    t15 = *((unsigned int *)t13);
    t16 = (t14 ^ t15);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB69;

LAB66:    if (t20 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t8) = 1;

LAB69:    t22 = (t8 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB72:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB24;

LAB25:
LAB26:    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB27;

LAB28:
LAB29:    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB23;

LAB11:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB30;

LAB31:
LAB32:    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t40) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t40 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t8, 0, 8);
    t21 = (t8 + 4);
    t22 = (t40 + 4);
    t23 = *((unsigned int *)t40);
    t24 = (~(t23));
    *((unsigned int *)t8) = t24;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB37;

LAB36:    t29 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t29 & 4294967295U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 4294967295U);
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(36, ng0);

LAB38:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_add(t41, 33, t5, 32, t7, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t41, 0, 0, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t41, 32, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t12 = *((char **)t7);
    memset(t40, 0, 8);
    t7 = (t40 + 4);
    t13 = (t12 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t40) = t19;
    t20 = *((unsigned int *)t13);
    t23 = (t20 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t40);
    t27 = (t25 ^ t26);
    *((unsigned int *)t42) = t27;
    t21 = (t8 + 4);
    t22 = (t40 + 4);
    t39 = (t42 + 4);
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t22);
    t30 = (t28 | t29);
    *((unsigned int *)t39) = t30;
    t33 = *((unsigned int *)t39);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB39;

LAB40:
LAB41:    t43 = (t0 + 2088);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t48 = (t45 + 4);
    t37 = *((unsigned int *)t45);
    t38 = (t37 >> 31);
    t49 = (t38 & 1);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 31);
    t52 = (t51 & 1);
    *((unsigned int *)t47) = t52;
    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t46);
    t56 = (t54 ^ t55);
    *((unsigned int *)t53) = t56;
    t57 = (t42 + 4);
    t58 = (t46 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB42;

LAB43:
LAB44:    t67 = (t0 + 2248);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = *((unsigned int *)t53);
    t72 = *((unsigned int *)t69);
    t73 = (t71 ^ t72);
    *((unsigned int *)t70) = t73;
    t74 = (t53 + 4);
    t75 = (t69 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB45;

LAB46:
LAB47:    t84 = (t0 + 1928);
    xsi_vlogvar_assign_value(t84, t70, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(37, ng0);

LAB48:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_minus(t41, 33, t5, 32, t7, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t41, 0, 0, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t41, 32, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t12 = *((char **)t7);
    memset(t40, 0, 8);
    t7 = (t40 + 4);
    t13 = (t12 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t40) = t19;
    t20 = *((unsigned int *)t13);
    t23 = (t20 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t40);
    t27 = (t25 ^ t26);
    *((unsigned int *)t42) = t27;
    t21 = (t8 + 4);
    t22 = (t40 + 4);
    t39 = (t42 + 4);
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t22);
    t30 = (t28 | t29);
    *((unsigned int *)t39) = t30;
    t33 = *((unsigned int *)t39);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB49;

LAB50:
LAB51:    t43 = (t0 + 2088);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t48 = (t45 + 4);
    t37 = *((unsigned int *)t45);
    t38 = (t37 >> 31);
    t49 = (t38 & 1);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 31);
    t52 = (t51 & 1);
    *((unsigned int *)t47) = t52;
    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t46);
    t56 = (t54 ^ t55);
    *((unsigned int *)t53) = t56;
    t57 = (t42 + 4);
    t58 = (t46 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB52;

LAB53:
LAB54:    t67 = (t0 + 2248);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = *((unsigned int *)t53);
    t72 = *((unsigned int *)t69);
    t73 = (t71 ^ t72);
    *((unsigned int *)t70) = t73;
    t74 = (t53 + 4);
    t75 = (t69 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB55;

LAB56:
LAB57:    t84 = (t0 + 1928);
    xsi_vlogvar_assign_value(t84, t70, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB59;

LAB58:    t12 = (t7 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB60;

LAB61:    t21 = (t8 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t14 = (t11 & t10);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB65:    goto LAB23;

LAB21:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1048U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB23;

LAB24:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB26;

LAB27:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB29;

LAB30:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB32;

LAB33:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t40) = (t19 | t20);
    goto LAB35;

LAB37:    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t8) = (t25 | t26);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t27 | t28);
    goto LAB36;

LAB39:    t35 = *((unsigned int *)t42);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t42) = (t35 | t36);
    goto LAB41;

LAB42:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    goto LAB44;

LAB45:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    goto LAB47;

LAB49:    t35 = *((unsigned int *)t42);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t42) = (t35 | t36);
    goto LAB51;

LAB52:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    goto LAB54;

LAB55:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    goto LAB57;

LAB59:    t13 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t8) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(40, ng0);
    t22 = ((char*)((ng8)));
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t22, 0, 0, 32);
    goto LAB65;

LAB68:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(46, ng0);
    t39 = ((char*)((ng8)));
    t43 = (t0 + 1768);
    xsi_vlogvar_assign_value(t43, t39, 0, 0, 1);
    goto LAB72;

}


extern void work_m_00000000000086159481_0886308060_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000000086159481_0886308060", "isim/Top_LED_isim_beh.exe.sim/work/m_00000000000086159481_0886308060.didat");
	xsi_register_executes(pe);
}
