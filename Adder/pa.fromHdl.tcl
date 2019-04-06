
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Adder -dir "D:/FPGA/Adder/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Adder_one.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Adder_one.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Adder_one $srcset
add_files [list {Adder_one.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
