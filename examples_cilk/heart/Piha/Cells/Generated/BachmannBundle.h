#ifndef BACHMANNBUNDLE_H_
#define BACHMANNBUNDLE_H_

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

	// Internal Variables
	double g;
} BachmannBundle;

// Initialization function
void BachmannBundleInit(BachmannBundle* me);

// Execution function
void BachmannBundleRun(BachmannBundle* me);

#endif // BACHMANNBUNDLE_H_
