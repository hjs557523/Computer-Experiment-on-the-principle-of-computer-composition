
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Registerfile_design -dir "D:/FPGA/Registerfile_design/planAhead_run_3" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Top_Register_file.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Register_file.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Top_Register_file.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Top_Register_file $srcset
add_files [list {Top_Register_file.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
