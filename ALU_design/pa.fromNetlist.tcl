
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name ALU_design -dir "D:/FPGA/ALU_design/planAhead_run_5" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/FPGA/ALU_design/ALU_TOP.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/FPGA/ALU_design} }
set_property target_constrs_file "ALU_TOP.ucf" [current_fileset -constrset]
add_files [list {ALU_TOP.ucf}] -fileset [get_property constrset [current_run]]
link_design
