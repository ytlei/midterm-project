/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	lqrControl.cpp
 *   @brief  	This is the main file to run the LQR controller
 *      
 *   convert the input to state space representation. Do the LQR control
 *
 *   @author	Yi-ting Lei
 *   @date	2017/3/17
 */

#include <iostream>
#include <lqrControl.hpp>


void lqrControl::convertStateSpace() {  ///< set the pid parameters
	m = 1000; ///<set car mass = 1000kg
	b = 50; ///<b = 50Nsec/m
	u = 500; ///<u = 500N

	A = -b/m;
	B = 1/m;
	C = 1;
	D = 0;	
}

double lqrControl::lqr(double v, double u) {  ///< show current velocity
	dv = A*v + B*u;
	y = C*v;
	return y; ///<algorithm not finished, dummy output
}

