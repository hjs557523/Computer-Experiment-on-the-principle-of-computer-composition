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
static const char *ng0 = "D:/FPGA/R_I_J_instruction/OP_YIMA.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {4U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {38U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {39U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {43U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {12U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {35U, 0U};



static void Always_39_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t37[8];
    char t49[8];
    char t50[8];
    char t51[8];
    char t55[8];
    char t71[8];
    char t79[8];
    char t116[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    int t48;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4768);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 29);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 29);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng10)));
    memset(t37, 0, 8);
    t7 = (t15 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB46;

LAB43:    if (t27 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t37) = 1;

LAB46:    t17 = (t37 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t37);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t37, 0, 8);
    t2 = (t37 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 30);
    *((unsigned int *)t37) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 30);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng12)));
    memset(t49, 0, 8);
    t7 = (t37 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t37);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB68;

LAB65:    if (t27 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t49) = 1;

LAB68:    memset(t50, 0, 8);
    t17 = (t49 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t49);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t17) != 0)
        goto LAB71;

LAB72:    t31 = (t50 + 4);
    t41 = *((unsigned int *)t50);
    t42 = *((unsigned int *)t31);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB73;

LAB74:    memcpy(t79, t50, 8);

LAB75:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB87;

LAB88:
LAB89:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t49, 0, 8);
    t2 = (t49 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 27);
    *((unsigned int *)t49) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 27);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = ((char*)((ng12)));
    memset(t50, 0, 8);
    t7 = (t49 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t49);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB102;

LAB99:    if (t27 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t50) = 1;

LAB102:    t17 = (t50 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t50);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t50, 0, 8);
    t2 = (t50 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 27);
    *((unsigned int *)t50) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 27);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = ((char*)((ng10)));
    memset(t51, 0, 8);
    t7 = (t50 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t50);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB144;

LAB141:    if (t27 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t51) = 1;

LAB144:    t17 = (t51 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t51);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB145;

LAB146:
LAB147:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 11);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 11);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 31U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 31U);
    t47 = (t0 + 2088);
    xsi_vlogvar_assign_value(t47, t37, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);

LAB14:    t6 = ((char*)((ng3)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t6, 6);
    if (t48 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng18)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t48 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB12;

LAB15:    xsi_set_current_line(54, ng0);

LAB34:    xsi_set_current_line(54, ng0);
    t7 = ((char*)((ng4)));
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 3);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB17:    xsi_set_current_line(55, ng0);

LAB35:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB19:    xsi_set_current_line(56, ng0);

LAB36:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB21:    xsi_set_current_line(57, ng0);

LAB37:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB23:    xsi_set_current_line(58, ng0);

LAB38:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB25:    xsi_set_current_line(59, ng0);

LAB39:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB27:    xsi_set_current_line(60, ng0);

LAB40:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB29:    xsi_set_current_line(61, ng0);

LAB41:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB31:    xsi_set_current_line(62, ng0);

LAB42:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB45:    t16 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(67, ng0);

LAB50:    xsi_set_current_line(68, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t49, 0, 8);
    t30 = (t49 + 4);
    t38 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 0);
    *((unsigned int *)t49) = t42;
    t43 = *((unsigned int *)t38);
    t44 = (t43 >> 0);
    *((unsigned int *)t30) = t44;
    t45 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t45 & 65535U);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 65535U);
    t39 = (t0 + 2408);
    xsi_vlogvar_assign_value(t39, t49, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 5);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 5);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);

LAB51:    t6 = ((char*)((ng18)));
    t48 = xsi_vlog_unsigned_case_compare(t15, 6, t6, 6);
    if (t48 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng19)));
    t48 = xsi_vlog_unsigned_case_compare(t15, 6, t2, 6);
    if (t48 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng20)));
    t48 = xsi_vlog_unsigned_case_compare(t15, 6, t2, 6);
    if (t48 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng21)));
    t48 = xsi_vlog_unsigned_case_compare(t15, 6, t2, 6);
    if (t48 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    xsi_set_current_line(79, ng0);

LAB61:    xsi_set_current_line(79, ng0);
    t7 = ((char*)((ng5)));
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB60;

LAB54:    xsi_set_current_line(80, ng0);

LAB62:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB60;

LAB56:    xsi_set_current_line(81, ng0);

LAB63:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB60;

LAB58:    xsi_set_current_line(82, ng0);

LAB64:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB60;

LAB67:    t16 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t50) = 1;
    goto LAB72;

LAB71:    t30 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB72;

LAB73:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t51, 0, 8);
    t38 = (t51 + 4);
    t40 = (t39 + 4);
    t44 = *((unsigned int *)t39);
    t45 = (t44 >> 26);
    *((unsigned int *)t51) = t45;
    t46 = *((unsigned int *)t40);
    t52 = (t46 >> 26);
    *((unsigned int *)t38) = t52;
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 & 7U);
    t54 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t54 & 7U);
    t47 = ((char*)((ng14)));
    memset(t55, 0, 8);
    t56 = (t51 + 4);
    t57 = (t47 + 4);
    t58 = *((unsigned int *)t51);
    t59 = *((unsigned int *)t47);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB79;

LAB76:    if (t67 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t55) = 1;

LAB79:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t72) != 0)
        goto LAB82;

LAB83:    t80 = *((unsigned int *)t50);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t50 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB75;

LAB78:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t71) = 1;
    goto LAB83;

LAB82:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB83;

LAB84:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t50 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t50);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t48 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t48));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB86;

LAB87:    xsi_set_current_line(87, ng0);

LAB90:    xsi_set_current_line(88, ng0);
    t117 = (t0 + 1048U);
    t118 = *((char **)t117);
    memset(t116, 0, 8);
    t117 = (t116 + 4);
    t119 = (t118 + 4);
    t120 = *((unsigned int *)t118);
    t121 = (t120 >> 0);
    *((unsigned int *)t116) = t121;
    t122 = *((unsigned int *)t119);
    t123 = (t122 >> 0);
    *((unsigned int *)t117) = t123;
    t124 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t124 & 65535U);
    t125 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t125 & 65535U);
    t126 = (t0 + 2408);
    xsi_vlogvar_assign_value(t126, t116, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t37, 0, 8);
    t2 = (t37 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t37) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t37, 0, 0, 5);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t37, 0, 8);
    t2 = (t37 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t37) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t37, 0, 0, 5);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t37, 0, 8);
    t2 = (t37 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t37) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);

LAB91:    t6 = ((char*)((ng22)));
    t48 = xsi_vlog_unsigned_case_compare(t37, 6, t6, 6);
    if (t48 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng15)));
    t48 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t48 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB89;

LAB92:    xsi_set_current_line(98, ng0);

LAB97:    xsi_set_current_line(98, ng0);
    t7 = ((char*)((ng2)));
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB96;

LAB94:    xsi_set_current_line(99, ng0);

LAB98:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB96;

LAB101:    t16 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB102;

LAB103:    xsi_set_current_line(104, ng0);

LAB106:    xsi_set_current_line(105, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t51, 0, 8);
    t30 = (t51 + 4);
    t38 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 0);
    *((unsigned int *)t51) = t42;
    t43 = *((unsigned int *)t38);
    t44 = (t43 >> 0);
    *((unsigned int *)t30) = t44;
    t45 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t45 & 65535U);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 65535U);
    t39 = (t0 + 2408);
    xsi_vlogvar_assign_value(t39, t51, 0, 0, 16);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t49, 0, 8);
    t2 = (t49 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t49) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t49, 0, 0, 5);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t49, 0, 8);
    t2 = (t49 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t49) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t49, 0, 0, 5);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t49, 0, 8);
    t2 = (t49 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t49) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);

LAB107:    t6 = ((char*)((ng4)));
    t48 = xsi_vlog_unsigned_case_compare(t49, 6, t6, 6);
    if (t48 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng7)));
    t48 = xsi_vlog_unsigned_case_compare(t49, 6, t2, 6);
    if (t48 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB105;

LAB108:    xsi_set_current_line(109, ng0);

LAB113:    xsi_set_current_line(109, ng0);
    t7 = ((char*)((ng2)));
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t51, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t2) != 0)
        goto LAB116;

LAB117:    t6 = (t51 + 4);
    t13 = *((unsigned int *)t51);
    t18 = *((unsigned int *)t6);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB118;

LAB119:    t20 = *((unsigned int *)t51);
    t21 = (~(t20));
    t22 = *((unsigned int *)t6);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t6) > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t51) > 0)
        goto LAB124;

LAB125:    memcpy(t50, t14, 8);

LAB126:    t16 = (t0 + 3528);
    xsi_vlogvar_assign_value(t16, t50, 0, 0, 2);
    goto LAB112;

LAB110:    xsi_set_current_line(111, ng0);

LAB127:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t51, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t2) != 0)
        goto LAB130;

LAB131:    t6 = (t51 + 4);
    t13 = *((unsigned int *)t51);
    t18 = *((unsigned int *)t6);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB132;

LAB133:    t20 = *((unsigned int *)t51);
    t21 = (~(t20));
    t22 = *((unsigned int *)t6);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t6) > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t51) > 0)
        goto LAB138;

LAB139:    memcpy(t50, t14, 8);

LAB140:    t16 = (t0 + 3528);
    xsi_vlogvar_assign_value(t16, t50, 0, 0, 2);
    goto LAB112;

LAB114:    *((unsigned int *)t51) = 1;
    goto LAB117;

LAB116:    t5 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB117;

LAB118:    t7 = ((char*)((ng12)));
    goto LAB119;

LAB120:    t14 = ((char*)((ng1)));
    goto LAB121;

LAB122:    xsi_vlog_unsigned_bit_combine(t50, 2, t7, 2, t14, 2);
    goto LAB126;

LAB124:    memcpy(t50, t7, 8);
    goto LAB126;

LAB128:    *((unsigned int *)t51) = 1;
    goto LAB131;

LAB130:    t5 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB131;

LAB132:    t7 = ((char*)((ng1)));
    goto LAB133;

LAB134:    t14 = ((char*)((ng12)));
    goto LAB135;

LAB136:    xsi_vlog_unsigned_bit_combine(t50, 2, t7, 2, t14, 2);
    goto LAB140;

LAB138:    memcpy(t50, t7, 8);
    goto LAB140;

LAB143:    t16 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(117, ng0);

LAB148:    xsi_set_current_line(118, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t55, 0, 8);
    t30 = (t55 + 4);
    t38 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 0);
    *((unsigned int *)t55) = t42;
    t43 = *((unsigned int *)t38);
    t44 = (t43 >> 0);
    *((unsigned int *)t30) = t44;
    t45 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t45 & 67108863U);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 67108863U);
    t39 = (t0 + 3048);
    xsi_vlogvar_assign_value(t39, t55, 0, 0, 26);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t50, 0, 8);
    t2 = (t50 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t50) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);

LAB149:    t6 = ((char*)((ng12)));
    t48 = xsi_vlog_unsigned_case_compare(t50, 6, t6, 6);
    if (t48 == 1)
        goto LAB150;

LAB151:    t2 = ((char*)((ng14)));
    t48 = xsi_vlog_unsigned_case_compare(t50, 6, t2, 6);
    if (t48 == 1)
        goto LAB152;

LAB153:
LAB154:    goto LAB147;

LAB150:    xsi_set_current_line(120, ng0);

LAB155:    xsi_set_current_line(120, ng0);
    t7 = ((char*)((ng1)));
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 2);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB154;

LAB152:    xsi_set_current_line(121, ng0);

LAB156:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB154;

}


extern void work_m_00000000001149712811_1282137562_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000001149712811_1282137562", "isim/test_isim_beh.exe.sim/work/m_00000000001149712811_1282137562.didat");
	xsi_register_executes(pe);
}
