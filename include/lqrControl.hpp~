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

class PidController {
		double u, x, xd; ///<values that need to be shared

        	double h, k, t; ///<state-feedback gain K,
        	double A, B, C; ///<state-space model for dx=Ax+Bu
	public:
		
		void convertStateSpace() ; 	///< set the pid parameters
		double lqr(double, double, double) ;	///< show current velocity
};

#endif
