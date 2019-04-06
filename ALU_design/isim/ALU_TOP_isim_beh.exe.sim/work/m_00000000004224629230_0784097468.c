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
static const char *ng0 = "D:/FPGA/ALU_design/OP.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {0, 0};
static int ng10[] = {32, 0};
static int ng11[] = {1, 0};



static void Always_32_0(char *t0)
{
    char t10[16];
    char t70[8];
    char t71[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t70, 0, 8);
    t7 = (t70 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t70) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 4294967295U);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t70, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t70, 0, 8);
    t7 = (t70 + 4);
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t70) = t13;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t70, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB84:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t70, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB86;

LAB85:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB87;

LAB88:    t15 = (t70 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (~(t11));
    t13 = *((unsigned int *)t70);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t70, 0, 8);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t7) == 0)
        goto LAB95;

LAB97:    t8 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t8) = 1;

LAB98:    t9 = (t70 + 4);
    t14 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t70) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB100;

LAB99:    t27 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t27 & 1U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t70, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t70, 0, 8);
    t7 = (t70 + 4);
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t70) = t13;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t21 = *((char **)t15);
    memset(t71, 0, 8);
    t23 = (t71 + 4);
    t25 = (t21 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (t19 >> 31);
    t22 = (t20 & 1);
    *((unsigned int *)t71) = t22;
    t24 = *((unsigned int *)t25);
    t26 = (t24 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t70);
    t29 = *((unsigned int *)t71);
    t30 = (t28 ^ t29);
    *((unsigned int *)t72) = t30;
    t34 = (t70 + 4);
    t36 = (t71 + 4);
    t37 = (t72 + 4);
    t31 = *((unsigned int *)t34);
    t32 = *((unsigned int *)t36);
    t33 = (t31 | t32);
    *((unsigned int *)t37) = t33;
    t35 = *((unsigned int *)t37);
    t38 = (t35 != 0);
    if (t38 == 1)
        goto LAB101;

LAB102:
LAB103:    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t72, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB24:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t11 = 0;

LAB28:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB29;

LAB30:    t11 = 1;

LAB31:    t56 = (t11 < 2);
    if (t56 == 1)
        goto LAB32;

LAB37:    t67 = (t0 + 2408);
    xsi_vlogvar_assign_value(t67, t10, 0, 0, 33);
    goto LAB23;

LAB9:    xsi_set_current_line(36, ng0);

LAB38:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = 0;

LAB42:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB43;

LAB44:    t11 = 1;

LAB45:    t52 = (t11 < 2);
    if (t52 == 1)
        goto LAB46;

LAB51:    t67 = (t0 + 2408);
    xsi_vlogvar_assign_value(t67, t10, 0, 0, 33);
    goto LAB23;

LAB11:    xsi_set_current_line(37, ng0);

LAB52:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = 0;

LAB56:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB57;

LAB58:    t11 = 1;

LAB59:    t33 = (t11 < 2);
    if (t33 == 1)
        goto LAB60;

LAB65:    t58 = (t0 + 2408);
    xsi_vlogvar_assign_value(t58, t10, 0, 0, 33);
    goto LAB23;

LAB13:    xsi_set_current_line(38, ng0);

LAB66:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = 0;

LAB70:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB71;

LAB72:    t11 = 1;

LAB73:    t38 = (t11 < 2);
    if (t38 == 1)
        goto LAB74;

LAB79:    t58 = (t10 + 8);
    t61 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t61 & 1U);
    t60 = (t10 + 12);
    t62 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t62 & 1U);
    t63 = (t0 + 2408);
    xsi_vlogvar_assign_value(t63, t10, 0, 0, 33);
    goto LAB23;

LAB15:    xsi_set_current_line(39, ng0);

LAB80:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_add(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB23;

LAB17:    xsi_set_current_line(40, ng0);

LAB81:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_minus(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB23;

LAB19:    xsi_set_current_line(41, ng0);

LAB82:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_less(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB23;

LAB21:    xsi_set_current_line(42, ng0);

LAB83:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_lshift(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB23;

LAB25:    t31 = (t11 * 8);
    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t15) = (t32 | t33);
    t34 = (t8 + t31);
    t35 = (t31 + 4);
    t36 = (t8 + t35);
    t37 = (t9 + t31);
    t38 = (t31 + 4);
    t39 = (t9 + t38);
    t40 = *((unsigned int *)t34);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t52 & t50);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & t51);
    t54 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t54 & t50);
    t55 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t55 & t51);

LAB27:    t11 = (t11 + 1);
    goto LAB28;

LAB26:    goto LAB27;

LAB29:    t13 = (t11 * 8);
    t7 = (t8 + t13);
    t14 = (t9 + t13);
    t15 = (t10 + t13);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t19 = (t11 * 8);
    t20 = (t19 + 4);
    t21 = (t8 + t20);
    t22 = (t19 + 4);
    t23 = (t9 + t22);
    t24 = (t19 + 4);
    t25 = (t10 + t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t23);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB25;
    else
        goto LAB26;

LAB32:    t57 = (t11 * 8);
    t58 = (t10 + t57);
    *((unsigned int *)t58) = 0;
    t59 = (t57 + 4);
    t60 = (t10 + t59);
    *((unsigned int *)t60) = 0;
    t61 = (t11 < 1);
    if (t61 == 1)
        goto LAB33;

LAB35:    t64 = (t11 < 1);
    if (t64 == 1)
        goto LAB34;

LAB36:    t11 = (t11 + 1);
    goto LAB31;

LAB33:    t62 = (t57 + 4);
    t63 = (t8 + t62);
    *((unsigned int *)t58) = *((unsigned int *)t63);
    *((unsigned int *)t60) = *((unsigned int *)t63);
    goto LAB36;

LAB34:    t65 = (t57 + 4);
    t66 = (t9 + t65);
    *((unsigned int *)t58) = *((unsigned int *)t66);
    *((unsigned int *)t60) = *((unsigned int *)t66);
    goto LAB36;

LAB39:    t31 = (t11 * 8);
    t32 = *((unsigned int *)t9);
    t33 = *((unsigned int *)t21);
    *((unsigned int *)t9) = (t32 | t33);
    t23 = (t4 + t31);
    t35 = (t31 + 4);
    t25 = (t4 + t35);
    t34 = (t7 + t31);
    t38 = (t31 + 4);
    t36 = (t7 + t38);
    t40 = *((unsigned int *)t25);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t48 = (t42 & t41);
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = *((unsigned int *)t34);
    t49 = (t45 & t44);
    t46 = (~(t48));
    t47 = (~(t49));
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & t46);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);

LAB41:    t11 = (t11 + 1);
    goto LAB42;

LAB40:    goto LAB41;

LAB43:    t13 = (t11 * 8);
    t3 = (t4 + t13);
    t8 = (t7 + t13);
    t9 = (t10 + t13);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = (t11 * 8);
    t20 = (t19 + 4);
    t14 = (t4 + t20);
    t22 = (t19 + 4);
    t15 = (t7 + t22);
    t24 = (t19 + 4);
    t21 = (t10 + t24);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t15);
    t28 = (t26 | t27);
    *((unsigned int *)t21) = t28;
    t29 = *((unsigned int *)t21);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB39;
    else
        goto LAB40;

LAB46:    t53 = (t11 * 8);
    t37 = (t10 + t53);
    *((unsigned int *)t37) = 0;
    t54 = (t53 + 4);
    t39 = (t10 + t54);
    *((unsigned int *)t39) = 0;
    t55 = (t11 < 1);
    if (t55 == 1)
        goto LAB47;

LAB49:    t62 = (t11 < 1);
    if (t62 == 1)
        goto LAB48;

LAB50:    t11 = (t11 + 1);
    goto LAB45;

LAB47:    t58 = (t4 + t53);
    t56 = (t53 + 4);
    t60 = (t4 + t56);
    t57 = *((unsigned int *)t58);
    t59 = *((unsigned int *)t60);
    t61 = (t57 | t59);
    *((unsigned int *)t37) = t61;
    *((unsigned int *)t39) = *((unsigned int *)t60);
    goto LAB50;

LAB48:    t63 = (t7 + t53);
    t64 = (t53 + 4);
    t66 = (t7 + t64);
    t65 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t66);
    t69 = (t65 | t68);
    *((unsigned int *)t37) = t69;
    *((unsigned int *)t39) = *((unsigned int *)t66);
    goto LAB50;

LAB53:    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t21);
    *((unsigned int *)t9) = (t31 | t32);

LAB55:    t11 = (t11 + 1);
    goto LAB56;

LAB54:    goto LAB55;

LAB57:    t13 = (t11 * 8);
    t3 = (t4 + t13);
    t8 = (t7 + t13);
    t9 = (t10 + t13);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    *((unsigned int *)t9) = t18;
    t19 = (t11 * 8);
    t20 = (t19 + 4);
    t14 = (t4 + t20);
    t22 = (t19 + 4);
    t15 = (t7 + t22);
    t24 = (t19 + 4);
    t21 = (t10 + t24);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t15);
    t28 = (t26 | t27);
    *((unsigned int *)t21) = t28;
    t29 = *((unsigned int *)t21);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB53;
    else
        goto LAB54;

LAB60:    t35 = (t11 * 8);
    t23 = (t10 + t35);
    *((unsigned int *)t23) = 0;
    t38 = (t35 + 4);
    t25 = (t10 + t38);
    *((unsigned int *)t25) = 0;
    t40 = (t11 < 1);
    if (t40 == 1)
        goto LAB61;

LAB63:    t45 = (t11 < 1);
    if (t45 == 1)
        goto LAB62;

LAB64:    t11 = (t11 + 1);
    goto LAB59;

LAB61:    t34 = (t4 + t35);
    t41 = (t35 + 4);
    t36 = (t4 + t41);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t36);
    t44 = (t42 | t43);
    *((unsigned int *)t23) = t44;
    *((unsigned int *)t25) = *((unsigned int *)t36);
    goto LAB64;

LAB62:    t37 = (t7 + t35);
    t46 = (t35 + 4);
    t39 = (t7 + t46);
    t47 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t39);
    t51 = (t47 | t50);
    *((unsigned int *)t23) = t51;
    *((unsigned int *)t25) = *((unsigned int *)t39);
    goto LAB64;

LAB67:    t33 = *((unsigned int *)t9);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t9) = (t33 | t35);

LAB69:    t11 = (t11 + 1);
    goto LAB70;

LAB68:    goto LAB69;

LAB71:    t13 = (t11 * 8);
    t3 = (t4 + t13);
    t8 = (t7 + t13);
    t9 = (t10 + t13);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    *((unsigned int *)t9) = t18;
    t19 = (t11 * 8);
    t20 = (t19 + 4);
    t14 = (t4 + t20);
    t22 = (t19 + 4);
    t15 = (t7 + t22);
    t24 = (t19 + 4);
    t21 = (t10 + t24);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t15);
    t28 = (t26 | t27);
    *((unsigned int *)t21) = t28;
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    *((unsigned int *)t9) = t30;
    t31 = *((unsigned int *)t21);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB67;
    else
        goto LAB68;

LAB74:    t40 = (t11 * 8);
    t23 = (t10 + t40);
    *((unsigned int *)t23) = 4294967295U;
    t41 = (t40 + 4);
    t25 = (t10 + t41);
    *((unsigned int *)t25) = 0;
    t42 = (t11 < 1);
    if (t42 == 1)
        goto LAB75;

LAB77:    t50 = (t11 < 1);
    if (t50 == 1)
        goto LAB76;

LAB78:    t11 = (t11 + 1);
    goto LAB73;

LAB75:    t34 = (t4 + t40);
    t43 = (t40 + 4);
    t36 = (t4 + t43);
    t44 = *((unsigned int *)t34);
    t45 = (~(t44));
    *((unsigned int *)t23) = t45;
    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t36);
    *((unsigned int *)t23) = (t46 | t47);
    *((unsigned int *)t25) = *((unsigned int *)t36);
    goto LAB78;

LAB76:    t37 = (t7 + t40);
    t51 = (t40 + 4);
    t39 = (t7 + t51);
    t52 = *((unsigned int *)t37);
    t53 = (~(t52));
    *((unsigned int *)t23) = t53;
    t54 = *((unsigned int *)t23);
    t55 = *((unsigned int *)t39);
    *((unsigned int *)t23) = (t54 | t55);
    *((unsigned int *)t25) = *((unsigned int *)t36);
    t56 = *((unsigned int *)t37);
    t57 = *((unsigned int *)t39);
    t59 = (t56 | t57);
    *((unsigned int *)t23) = t59;
    *((unsigned int *)t25) = *((unsigned int *)t39);
    goto LAB78;

LAB86:    t14 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB88;

LAB87:    *((unsigned int *)t70) = 1;
    goto LAB88;

LAB90:    xsi_set_current_line(49, ng0);
    t21 = (t0 + 1928);
    t23 = (t21 + 56U);
    t25 = *((char **)t23);
    t34 = (t0 + 1768);
    t36 = (t34 + 56U);
    t37 = *((char **)t36);
    t39 = (t0 + 1768);
    t58 = (t39 + 72U);
    t60 = *((char **)t58);
    t63 = (t0 + 2248);
    t66 = (t63 + 56U);
    t67 = *((char **)t66);
    xsi_vlog_generic_get_index_select_value(t71, 1, t37, t60, 2, t67, 6, 2);
    t18 = *((unsigned int *)t25);
    t19 = *((unsigned int *)t71);
    t20 = (t18 | t19);
    *((unsigned int *)t72) = t20;
    t73 = (t25 + 4);
    t74 = (t71 + 4);
    t75 = (t72 + 4);
    t22 = *((unsigned int *)t73);
    t24 = *((unsigned int *)t74);
    t26 = (t22 | t24);
    *((unsigned int *)t75) = t26;
    t27 = *((unsigned int *)t75);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB92;

LAB93:
LAB94:    t78 = (t0 + 1928);
    xsi_vlogvar_assign_value(t78, t72, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t4, 6, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t70, 0, 0, 6);
    goto LAB84;

LAB92:    t29 = *((unsigned int *)t72);
    t30 = *((unsigned int *)t75);
    *((unsigned int *)t72) = (t29 | t30);
    t76 = (t25 + 4);
    t77 = (t71 + 4);
    t31 = *((unsigned int *)t76);
    t32 = (~(t31));
    t33 = *((unsigned int *)t25);
    t6 = (t33 & t32);
    t35 = *((unsigned int *)t77);
    t38 = (~(t35));
    t40 = *((unsigned int *)t71);
    t48 = (t40 & t38);
    t41 = (~(t6));
    t42 = (~(t48));
    t43 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t43 & t41);
    t44 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t44 & t42);
    goto LAB94;

LAB95:    *((unsigned int *)t70) = 1;
    goto LAB98;

LAB100:    t20 = *((unsigned int *)t70);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t70) = (t20 | t22);
    t24 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t9) = (t24 | t26);
    goto LAB99;

LAB101:    t40 = *((unsigned int *)t72);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t72) = (t40 | t41);
    goto LAB103;

}


extern void work_m_00000000004224629230_0784097468_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000004224629230_0784097468", "isim/ALU_TOP_isim_beh.exe.sim/work/m_00000000004224629230_0784097468.didat");
	xsi_register_executes(pe);
}
