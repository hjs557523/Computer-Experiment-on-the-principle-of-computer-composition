
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name R_I_instruction -dir "D:/FPGA/R_I_instruction/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/FPGA/R_I_instruction/TOP_LED.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/FPGA/R_I_instruction} {ipcore_dir} }
add_files [list {ipcore_dir/Inst_ROM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/RAM_B.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "TOP_LED.ucf" [current_fileset -constrset]
add_files [list {TOP_LED.ucf}] -fileset [get_property constrset [current_run]]
link_design
