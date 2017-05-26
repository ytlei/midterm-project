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

#include <iostream>
#include <tuple>
#include <pidController.hpp>

/**
    
 *   @brief  Constructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */
pidController::pidController(void) {}


/**
    
 *   @brief  Destructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */

pidController::~pidController(void) {}


/**
   The function takes sets the gain values of the PID controller.
   @param[in]     &p Proportional gain.
   @param[in]     &i Integral gain.
   @param[in]     &d Differential gain.
   @return Function is of type Void.
 */
void pidController::setParams(double &p, double &i, double &d) {
    pidController::Kp = p;
    pidController::Ki = i;
    pidController::Kd = d;
}


/**
   The function takes two strings and their lengths as input.
   It returns the location of second string in the first string as an integer.
  
   @param     none
   @return std::tuple<double, double, double>.
 */
std::tuple<double, double, double> pidController::getParams() {
    return std::make_tuple(pidController::Kp, pidController::Ki,
                           pidController::Kd);
}


/**
   The function takes the current value, target value and time difference as inputs and returns Control value 
  
   @param[in]     &setVal Target value.
   @param[in]     &currentVal Current value.
   @param[in]     &time Time difference.
   @return        newVal Control value.
 */
double pidController::computeControl(double &setVal, double &currentVal,
                                     double &time) {
    double newVal = 0;
    double error = 0;
    double prevError = 0;
    double integral = 0;
    double derivative = 0;

    // diff time should not be zero
    if (time == 0)
        return 0;

    error = setVal - currentVal;
    integral = integral + error * time;
    derivative = (error - prevError) / time;

    newVal = Kp * error + Ki * integral  + Kd * derivative;
    prevError = error;

    return newVal;
}







//================================
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


