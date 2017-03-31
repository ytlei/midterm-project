/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	carControl.cpp
 *   @brief  	This is the main file to run the car control
 *      
 *   Set the desired velocity. Using ccelerate and brake to control the car
 *
 *   @author	Yi-ting Lei
 *   @date	2017/3/17
 */

#include <iostream>
//#include <lib.hpp>
#include <carControl.hpp>


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


