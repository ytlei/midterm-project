#include <iostream>
#include <AnalogSensor.hpp>
#include <lqrControl.hpp>
#include <carControl.hpp>


int main()
{
    	lqrControl LQR;
	LQR.convertStateSpace();
	double speed = LQR.lqr(60,500);
	cout << "the speed is: "<< speed << endl;
    	return 0;
}
