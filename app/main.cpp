#include <iostream>
#include <AnalogSensor.hpp>
#include <lqrControl.hpp>
#include <carControl.hpp>


int main()
{
    	lqrControl LQR;
	LQR.convertStateSpace();
	double speed = LQR.lqr(60,500);
	std::cout << "the speed is: "<< speed << std::endl;
    	return 0;
}
