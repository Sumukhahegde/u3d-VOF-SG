//Contains includes of all files 

#ifndef UNSTEADY_NS3D_H
#define UNSTEADY_NS3D_H

	#include"preProcessing/preProcessing.c"
	#include"preProcessing/default_Input.c"
	#include"preProcessing/dynamic_Allocate.c"
	#include"preProcessing/initial_Time_Values.c"
	#include"preProcessing/fixed_Velocity.c"
	#include"preProcessing/boundaryConditions/pressure_BC.c"
	#include"preProcessing/boundaryConditions/velocity_BC.c"
	#include"preProcessing/boundaryConditions/Temperature_BC.c"
	#include"preProcessing/boundaryConditions/Psi_BC.c"
	#include"source/pressure/p_Correction_Coefficients.c"
	#include"source/pressure/p_Correction_Equation.c"
	#include"source/velocity/correct_Velocity_Boundary.c"
	#include"source/pv_Coupling/simple.c"
	#include"source/pv_Coupling/schemes.c"
	#include"source/solver/ADI_TDMA.c"
	#include"source/solver/mADI_TDMA.c"
	#include"source/update/update_Pressure_Velocity.c"
	#include"source/multiBlock/sync.c"
	#include"source/velocity/u_Equation.c"
	#include"source/velocity/v_Equation.c"
	#include"source/velocity/w_Equation.c"
	#include"source/velocity/make_velocity_vector.c"
	#include"source/Temperature/T_Equation.c"
	#include"source/Temperature/T_Equation_Coefficients.c"
	#include"source/Psi/Psi_Equation.c"
	#include"source/Psi/Psi_Equation_Coefficients.c"
	#include"source/velocity/u_Equation_Coefficients.c"
	#include"source/velocity/v_Equation_Coefficients.c"
	#include"source/velocity/w_Equation_Coefficients.c"
	#include"source/velocity/block_Velocity.c"
	#include"source/Temperature/block_Temperature.c"
	#include"source/Psi/block_Psi.c"
	#include"source/controls/solver_Controls.c"
	#include"source/phaseFields/createFields.c"
	#include"source/phaseFields/definePhaseField.c"
	#include"source/phaseFields/local_Courant.c"
	#include"source/phaseFields/VOF/magnitude_Gradient_Alpha_D.c"
	#include"source/phaseFields/VOF/VOFschemes.c"
	#include"source/phaseFields/VOF/alpha_Equation_Coefficients.c"
//	#include"source/phaseFields/VOF/alpha_Equation_Correction_Coefficients.c"
	#include"source/phaseFields/VOF/alpha_Equation.c"
	#include"source/phaseFields/VOF/correct_Alpha.c"
	#include"source/phaseFields/CSF/curvature_spSmooth.c"
	#include"source/phaseFields/CSF/surface_Tension.c"
	#include"source/phaseFields/CSF/spSmoothing.c"
	#include"source/phaseFields/CSF/curvature_K8Convo.c"
	#include"source/phaseFields/CSF/k8Convolution.c"
	#include"source/phaseFields/CSF/signedDistanceFunction.c"
	#include"source/phaseFields/CSF/Height_Function.c"
	#include"source/phaseFields/shift_pseudo.c"
	#include"source/phaseFields/pseudo_cycle.c"
	#include"source/phaseFields/multi_Phase.c"
	#include"source/multiBlock/create_Blocks.c"
	#include"source/multiBlock/sync_BufferArrays.c"
	#include"postProcessing/write_Output.c"
	#include"preProcessing/grid_Generation/create_Mesh.c"
	#include"preProcessing/grid_Generation/boundary_Coordinates.c"
	#include"preProcessing/grid_Generation/uniform_Grid.c"
	#include"preProcessing/grid_Generation/write_Mesh.c"
	
	
#endif
