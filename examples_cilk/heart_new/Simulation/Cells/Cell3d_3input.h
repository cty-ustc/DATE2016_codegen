#ifndef CELL3D_3INPUT_H_
#define CELL3D_3INPUT_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Cell Data Struct
typedef struct {
	// State
	enum cellStates state;
	
	// Outputs
	double v_x;
	double v_y;
	double v_z;
	double v;
	double theta;
	double v_O;
	double f_theta;
	
	// Inputs
	double v_i_0;
	double v_i_1;
	double v_i_2;

	// Internal Variables
	double g;
	unsigned long pacing_count;
	unsigned long pacing_rate;
} Cell3d_3input;

// Initialization function
void Cell3d_3inputInit(Cell3d_3input* me);

// Execution function
void Cell3d_3inputRun(Cell3d_3input* me);

#endif // CELL3D_3INPUT_H_
