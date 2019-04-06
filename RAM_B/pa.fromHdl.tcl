
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name RAM_B -dir "D:/FPGA/RAM_B/planAhead_run_4" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "top_RAM_B.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/RAM_B.ngc}]
set hdlfile [add_files [list {ipcore_dir/RAM_B.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {top_RAM_B.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top top_RAM_B $srcset
add_files [list {top_RAM_B.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/RAM_B.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
