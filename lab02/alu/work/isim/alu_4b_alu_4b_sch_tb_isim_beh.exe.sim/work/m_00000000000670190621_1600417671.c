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
static const char *ng0 = "C:/Users/petersjl/Documents/School/CSSE/132/1819c-csse132-petersjl/lab02/alu/testalu_4b.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static const char *ng2 = "pass and 1";
static const char *ng3 = "FAIL and 1";
static unsigned int ng4[] = {5U, 0U, 0U, 0U};
static unsigned int ng5[] = {10U, 0U, 0U, 0U};
static const char *ng6 = "pass and 2";
static const char *ng7 = "FAIL and 2";
static unsigned int ng8[] = {12U, 0U, 0U, 0U};
static const char *ng9 = "pass and 3";
static const char *ng10 = "FAIL and 3";
static unsigned int ng11[] = {14U, 0U, 0U, 0U};
static unsigned int ng12[] = {13U, 0U, 0U, 0U};
static const char *ng13 = "pass and 4";
static const char *ng14 = "FAIL and 4";
static unsigned int ng15[] = {1U, 0U, 0U, 0U};
static const char *ng16 = "pass or 1";
static const char *ng17 = "FAIL or 1";
static unsigned int ng18[] = {15U, 0U, 0U, 0U};
static const char *ng19 = "pass or 2";
static const char *ng20 = "FAIL or 2";
static unsigned int ng21[] = {8U, 0U, 0U, 0U};
static unsigned int ng22[] = {2U, 0U, 0U, 0U};
static const char *ng23 = "pass or 3";
static const char *ng24 = "FAIL or 3";
static unsigned int ng25[] = {3U, 0U, 0U, 0U};
static const char *ng26 = "pass or 4";
static const char *ng27 = "FAIL or 4";
static const char *ng28 = "pass add 1";
static const char *ng29 = "FAIL add 1";
static const char *ng30 = "pass add 2";
static const char *ng31 = "FAIL add 2";
static unsigned int ng32[] = {6U, 0U, 0U, 0U};
static unsigned int ng33[] = {9U, 0U, 0U, 0U};
static const char *ng34 = "pass add 3";
static const char *ng35 = "FAIL add 3";
static const char *ng36 = "pass add 4";
static const char *ng37 = "FAIL add 4";
static unsigned int ng38[] = {6U, 0U};
static const char *ng39 = "pass sub 1";
static const char *ng40 = "FAIL sub 1";
static const char *ng41 = "pass sub 2";
static const char *ng42 = "FAIL sub 2";
static const char *ng43 = "pass sub 3";
static const char *ng44 = "FAIL sub 3";
static const char *ng45 = "pass sub 4";
static const char *ng46 = "FAIL sub 4";
static const char *ng47 = "pass sub 5";
static const char *ng48 = "FAIL sub 5";
static unsigned int ng49[] = {7U, 0U, 0U, 0U};
static const char *ng50 = "pass less 1";
static const char *ng51 = "FAIL less 1";
static const char *ng52 = "pass less 2";
static const char *ng53 = "FAIL less 2";
static const char *ng54 = "pass less 3";
static const char *ng55 = "FAIL less 3";
static const char *ng56 = "pass less 4";
static const char *ng57 = "FAIL less 4";



static void Initial_25_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 2496);
    xsi_process_wait(t3, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t5, 4, t4, 64);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);

LAB9:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);

LAB13:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:    xsi_set_current_line(48, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB13;

LAB14:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);

LAB17:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB17;

LAB18:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);

LAB21:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB19:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    goto LAB21;

LAB22:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(85, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);

LAB25:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB25;

LAB26:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);

LAB29:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB27:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB29;

LAB30:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);

LAB33:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB31:    xsi_set_current_line(104, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    goto LAB33;

LAB34:    xsi_set_current_line(114, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(117, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);

LAB37:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB35:    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    goto LAB37;

LAB38:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(130, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);

LAB41:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB39:    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    goto LAB41;

LAB42:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng22)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(141, ng0);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);

LAB45:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB43:    xsi_set_current_line(139, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    goto LAB45;

LAB46:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng33)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(152, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);

LAB49:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB47:    xsi_set_current_line(150, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);
    goto LAB49;

LAB50:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(163, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);

LAB53:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB51:    xsi_set_current_line(161, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);
    goto LAB53;

LAB54:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(176, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);

LAB57:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB55:    xsi_set_current_line(174, ng0);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    goto LAB57;

LAB58:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(186, ng0);
    xsi_vlogfile_write(1, 0, 0, ng42, 1, t0);

LAB61:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB59:    xsi_set_current_line(184, ng0);
    xsi_vlogfile_write(1, 0, 0, ng41, 1, t0);
    goto LAB61;

LAB62:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng33)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(196, ng0);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);

LAB65:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB63:    xsi_set_current_line(194, ng0);
    xsi_vlogfile_write(1, 0, 0, ng43, 1, t0);
    goto LAB65;

LAB66:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng25)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(206, ng0);
    xsi_vlogfile_write(1, 0, 0, ng46, 1, t0);

LAB69:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB67:    xsi_set_current_line(204, ng0);
    xsi_vlogfile_write(1, 0, 0, ng45, 1, t0);
    goto LAB69;

LAB70:    xsi_set_current_line(213, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(216, ng0);
    xsi_vlogfile_write(1, 0, 0, ng48, 1, t0);

LAB73:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB71:    xsi_set_current_line(214, ng0);
    xsi_vlogfile_write(1, 0, 0, ng47, 1, t0);
    goto LAB73;

LAB74:    xsi_set_current_line(226, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(229, ng0);
    xsi_vlogfile_write(1, 0, 0, ng51, 1, t0);

LAB77:    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB75:    xsi_set_current_line(227, ng0);
    xsi_vlogfile_write(1, 0, 0, ng50, 1, t0);
    goto LAB77;

LAB78:    xsi_set_current_line(236, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(239, ng0);
    xsi_vlogfile_write(1, 0, 0, ng53, 1, t0);

LAB81:    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(245, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB79:    xsi_set_current_line(237, ng0);
    xsi_vlogfile_write(1, 0, 0, ng52, 1, t0);
    goto LAB81;

LAB82:    xsi_set_current_line(246, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng15)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(249, ng0);
    xsi_vlogfile_write(1, 0, 0, ng55, 1, t0);

LAB85:    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB83:    xsi_set_current_line(247, ng0);
    xsi_vlogfile_write(1, 0, 0, ng54, 1, t0);
    goto LAB85;

LAB86:    xsi_set_current_line(256, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 4, t3, 64);
    t5 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(259, ng0);
    xsi_vlogfile_write(1, 0, 0, ng57, 1, t0);

LAB89:    goto LAB1;

LAB87:    xsi_set_current_line(257, ng0);
    xsi_vlogfile_write(1, 0, 0, ng56, 1, t0);
    goto LAB89;

}


extern void work_m_00000000000670190621_1600417671_init()
{
	static char *pe[] = {(void *)Initial_25_0};
	xsi_register_didat("work_m_00000000000670190621_1600417671", "isim/alu_4b_alu_4b_sch_tb_isim_beh.exe.sim/work/m_00000000000670190621_1600417671.didat");
	xsi_register_executes(pe);
}
