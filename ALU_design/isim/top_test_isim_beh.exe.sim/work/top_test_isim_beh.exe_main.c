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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000054293371_0697964315_init();
    work_m_00000000004224629230_0784097468_init();
    work_m_00000000001729907311_0260218839_init();
    work_m_00000000001783087768_1273188681_init();
    work_m_00000000003808417101_3462089752_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003808417101_3462089752");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
