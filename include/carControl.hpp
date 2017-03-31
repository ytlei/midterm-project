/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	carControl.hpp
 *   @brief  	This is a car controller for controlling car speed.
 *		one can set target velocity and get current speed.
 *      
 *   Control the velocity using brake and acceleration
 *
 *   @author	Yi-ting Lei
 *   @date	2017/3/12
 */
#ifndef INCLUDE_CARCONTROL_HPP_
#define INCLUDE_CARCONTROL_HPP_

class carControl {

		double speed;
		double targetVelocity;

	public:
		
		double getSpeed();
		void setSpeed(double);
		void accelerate();
		void brake();
	
};


double carControl::getSpeed(){
	return speed;
}

void carControl::setSpeed(double speedSet){
	speed = speedSet;
}
		

void carControl::accelerate(){
	speed += 1;
}
		
void carControl::brake(){
	speed -= 1;
}

#endif
