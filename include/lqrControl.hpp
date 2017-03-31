/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	lqrControl.hpp
 *   @brief  	This is a lqr controller for controlling car speed.
 *		It converts transfer functions to state-space models
 *		and then do the negative feedback LQR controller
 *      
 *   
 *
 *   @author	Yi-ting Lei
 *   @date	2017/3/13
 */
#ifndef INCLUDE_LQRCONTROL_HPP_
#define INCLUDE_LQRCONTROL_HPP_

class lqrControl {
		double v, y, dv; ///<velocity and output
		double m; ///<car mass
		double b; ///<drag
		double u; ///<engine force
        	//double k, k, t; ///<state-feedback gain K,
        	double A, B, C, D; ///<state-space model for dx=Ax+Bu
	public:
		void convertStateSpace() ; 	///< set the pid parameters
		double lqr(double, double) ;	///< show current velocity
};


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

#endif
