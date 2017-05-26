/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	car.cpp
 *   @brief  	This is the file to run car step simulation
 *      
 *   step simulation for car.
 *
 *   @author	Yi-ting Lei
 *   @date	2017/5/19
 */

#include "car.h"
#include <iostream>

int car::idGlobal = 0;

void car::stepSim(double dt)
{
	position += speed * dt;
}
