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
static const char *ng0 = "C:/Users/petersjl/Documents/School/CSSE/132/1819c-csse132-petersjl/extra-stuff/mega_AND/test_mega_and.v";
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng3[] = {2863311530U, 0U, 2863311530U, 0U};
static const char *ng4 = "It worked";
static const char *ng5 = "You suck";
static int ng6[] = {1, 0, 0, 0};
static int ng7[] = {10, 0};
static const char *ng8 = "FAIL";



static void Initial_41_0(char *t0)
{
    char t4[16];
    char t56[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);

LAB4:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    xsi_vlog_unsigned_equal(t4, 64, t3, 64, t2, 64);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(59, ng0);

LAB11:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB9:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    xsi_vlog_signed_unary_minus(t4, 64, t2, 32);
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t11 = (t8 & t7);
    t5 = (t0 + 4516);
    *((int *)t5) = t11;

LAB12:    t12 = (t0 + 4516);
    if (*((int *)t12) > 0)
        goto LAB13;

LAB14:    goto LAB1;

LAB7:    xsi_set_current_line(56, ng0);

LAB10:    xsi_set_current_line(57, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB9;

LAB13:    xsi_set_current_line(65, ng0);

LAB15:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 1448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    xsi_vlog_unsigned_add(t4, 64, t15, 64, t16, 32);
    t17 = (t0 + 1448);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 64);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t11 = (t8 & t7);
    t5 = (t0 + 4520);
    *((int *)t5) = t11;

LAB16:    t12 = (t0 + 4520);
    if (*((int *)t12) > 0)
        goto LAB17;

LAB18:    t2 = (t0 + 4516);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB12;

LAB17:    xsi_set_current_line(67, ng0);

LAB19:    xsi_set_current_line(68, ng0);
    t13 = (t0 + 1608);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    xsi_vlog_unsigned_add(t4, 64, t15, 64, t16, 32);
    t17 = (t0 + 1608);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1448);
    t5 = (t2 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1608);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t6 = 0;

LAB24:    t7 = (t6 < 2);
    if (t7 == 1)
        goto LAB25;

LAB26:    xsi_vlog_unsigned_equal(t56, 64, t3, 64, t4, 64);
    t57 = (t56 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(74, ng0);

LAB31:    xsi_set_current_line(75, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);

LAB29:    t2 = (t0 + 4520);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB16;

LAB21:    t32 = (t6 * 8);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t18) = (t33 | t34);
    t35 = (t12 + t32);
    t36 = (t32 + 4);
    t37 = (t12 + t36);
    t38 = (t15 + t32);
    t39 = (t32 + 4);
    t40 = (t15 + t39);
    t41 = *((unsigned int *)t35);
    t42 = (~(t41));
    t43 = *((unsigned int *)t37);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t11 = (t42 & t44);
    t49 = (t46 & t48);
    t50 = (~(t11));
    t51 = (~(t49));
    t52 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t52 & t50);
    t53 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t53 & t51);
    t54 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t54 & t50);
    t55 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t55 & t51);

LAB23:    t6 = (t6 + 1);
    goto LAB24;

LAB22:    goto LAB23;

LAB25:    t8 = (t6 * 8);
    t16 = (t12 + t8);
    t17 = (t15 + t8);
    t18 = (t4 + t8);
    t9 = *((unsigned int *)t16);
    t10 = *((unsigned int *)t17);
    t19 = (t9 & t10);
    *((unsigned int *)t18) = t19;
    t20 = (t6 * 8);
    t21 = (t20 + 4);
    t22 = (t12 + t21);
    t23 = (t20 + 4);
    t24 = (t15 + t23);
    t25 = (t20 + 4);
    t26 = (t4 + t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t24);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB21;
    else
        goto LAB22;

LAB27:    xsi_set_current_line(71, ng0);

LAB30:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB29;

}


extern void work_m_00000000003006700345_4026538111_init()
{
	static char *pe[] = {(void *)Initial_41_0};
	xsi_register_didat("work_m_00000000003006700345_4026538111", "isim/test_mega_and_isim_beh.exe.sim/work/m_00000000003006700345_4026538111.didat");
	xsi_register_executes(pe);
}
