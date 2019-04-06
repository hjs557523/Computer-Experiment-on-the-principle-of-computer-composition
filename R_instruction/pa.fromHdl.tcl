
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name R_instruction -dir "D:/FPGA/R_instruction/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Top_LED.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/Inst_ROM.ngc}]
set hdlfile [add_files [list {ipcore_dir/Inst_ROM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Register_file.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {pc.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ALU.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {top_R_cpu.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Top_LED.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Top_LED $srcset
add_files [list {Top_LED.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Inst_ROM.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
