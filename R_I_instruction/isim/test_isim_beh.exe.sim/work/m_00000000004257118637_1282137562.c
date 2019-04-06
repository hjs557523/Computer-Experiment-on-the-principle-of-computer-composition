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
static const char *ng0 = "D:/FPGA/R_I_instruction/OP_YIMA.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {32U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {39U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {43U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static int ng17[] = {1, 0};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {12U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {35U, 0U};



static void Always_35_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t37[8];
    char t48[8];
    char t51[8];
    char t52[8];
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
    unsigned int t49;
    int t50;
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

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
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
LAB12:    xsi_set_current_line(60, ng0);
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
    t6 = ((char*)((ng3)));
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
        goto LAB52;

LAB49:    if (t27 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t37) = 1;

LAB52:    t17 = (t37 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t37);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(78, ng0);
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
    t6 = ((char*)((ng11)));
    memset(t48, 0, 8);
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
        goto LAB74;

LAB71:    if (t27 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t48) = 1;

LAB74:    memset(t51, 0, 8);
    t17 = (t48 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t48);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t17) != 0)
        goto LAB77;

LAB78:    t31 = (t51 + 4);
    t41 = *((unsigned int *)t51);
    t42 = *((unsigned int *)t31);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB79;

LAB80:    memcpy(t79, t51, 8);

LAB81:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB93;

LAB94:
LAB95:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
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
    t47 = (t0 + 1928);
    xsi_vlogvar_assign_value(t47, t37, 0, 0, 5);
    xsi_set_current_line(41, ng0);
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
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(42, ng0);
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
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t37, 0, 8);
    t2 = (t37 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t37) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng2)));
    memset(t48, 0, 8);
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
        goto LAB17;

LAB14:    if (t27 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t48) = 1;

LAB17:    memset(t15, 0, 8);
    t17 = (t48 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t48);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t17) != 0)
        goto LAB20;

LAB21:    t31 = (t15 + 4);
    t41 = *((unsigned int *)t15);
    t42 = *((unsigned int *)t31);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB22;

LAB23:    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    t46 = *((unsigned int *)t31);
    t49 = (t45 || t46);
    if (t49 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t31) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t15) > 0)
        goto LAB28;

LAB29:    memcpy(t4, t39, 8);

LAB30:    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t4, 0, 0, 1);
    xsi_set_current_line(48, ng0);
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

LAB31:    t6 = ((char*)((ng4)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t6, 6);
    if (t50 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng6)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng8)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng10)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng12)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng14)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng5)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t50 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB12;

LAB16:    t16 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB20:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB22:    t38 = ((char*)((ng1)));
    goto LAB23;

LAB24:    t39 = ((char*)((ng3)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t4, 1, t38, 1, t39, 1);
    goto LAB30;

LAB28:    memcpy(t4, t38, 8);
    goto LAB30;

LAB32:    xsi_set_current_line(49, ng0);
    t7 = ((char*)((ng5)));
    t14 = (t0 + 1448);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 3);
    goto LAB48;

LAB34:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB36:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB38:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB40:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB42:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB44:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB46:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB48;

LAB51:    t16 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(61, ng0);

LAB56:    xsi_set_current_line(62, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t48, 0, 8);
    t30 = (t48 + 4);
    t38 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 0);
    *((unsigned int *)t48) = t42;
    t43 = *((unsigned int *)t38);
    t44 = (t43 >> 0);
    *((unsigned int *)t30) = t44;
    t45 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t45 & 65535U);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 65535U);
    t39 = (t0 + 2248);
    xsi_vlogvar_assign_value(t39, t48, 0, 0, 16);
    xsi_set_current_line(63, ng0);
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
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 5);
    xsi_set_current_line(64, ng0);
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
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 5);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
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

LAB57:    t6 = ((char*)((ng18)));
    t50 = xsi_vlog_unsigned_case_compare(t15, 6, t6, 6);
    if (t50 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng19)));
    t50 = xsi_vlog_unsigned_case_compare(t15, 6, t2, 6);
    if (t50 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng20)));
    t50 = xsi_vlog_unsigned_case_compare(t15, 6, t2, 6);
    if (t50 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng21)));
    t50 = xsi_vlog_unsigned_case_compare(t15, 6, t2, 6);
    if (t50 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    xsi_set_current_line(71, ng0);

LAB67:    xsi_set_current_line(71, ng0);
    t7 = ((char*)((ng17)));
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB66;

LAB60:    xsi_set_current_line(72, ng0);

LAB68:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB66;

LAB62:    xsi_set_current_line(73, ng0);

LAB69:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB66;

LAB64:    xsi_set_current_line(74, ng0);

LAB70:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB66;

LAB73:    t16 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t51) = 1;
    goto LAB78;

LAB77:    t30 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB78;

LAB79:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t52, 0, 8);
    t38 = (t52 + 4);
    t40 = (t39 + 4);
    t44 = *((unsigned int *)t39);
    t45 = (t44 >> 26);
    *((unsigned int *)t52) = t45;
    t46 = *((unsigned int *)t40);
    t49 = (t46 >> 26);
    *((unsigned int *)t38) = t49;
    t53 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t53 & 7U);
    t54 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t54 & 7U);
    t47 = ((char*)((ng13)));
    memset(t55, 0, 8);
    t56 = (t52 + 4);
    t57 = (t47 + 4);
    t58 = *((unsigned int *)t52);
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
        goto LAB85;

LAB82:    if (t67 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t55) = 1;

LAB85:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t72) != 0)
        goto LAB88;

LAB89:    t80 = *((unsigned int *)t51);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t51 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB81;

LAB84:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t71) = 1;
    goto LAB89;

LAB88:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB89;

LAB90:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t51 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t51);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t50 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t50));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB92;

LAB93:    xsi_set_current_line(79, ng0);

LAB96:    xsi_set_current_line(80, ng0);
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
    t126 = (t0 + 2248);
    xsi_vlogvar_assign_value(t126, t116, 0, 0, 16);
    xsi_set_current_line(81, ng0);
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
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t37, 0, 0, 5);
    xsi_set_current_line(82, ng0);
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
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t37, 0, 0, 5);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
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

LAB97:    t6 = ((char*)((ng22)));
    t50 = xsi_vlog_unsigned_case_compare(t37, 6, t6, 6);
    if (t50 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng14)));
    t50 = xsi_vlog_unsigned_case_compare(t37, 6, t2, 6);
    if (t50 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB95;

LAB98:    xsi_set_current_line(87, ng0);

LAB103:    xsi_set_current_line(87, ng0);
    t7 = ((char*)((ng17)));
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB102;

LAB100:    xsi_set_current_line(88, ng0);

LAB104:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB102;

}


extern void work_m_00000000004257118637_1282137562_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000004257118637_1282137562", "isim/test_isim_beh.exe.sim/work/m_00000000004257118637_1282137562.didat");
	xsi_register_executes(pe);
}
