#pragma once
#include <iostream>
#include "DistanceCalculatorBase.h"



class AcceleratedDistanceCalculator : public DistanceCalculatorBase
{
private:
	double _speed;
	double _acceleration;

public:

	void SetSpeed(double speed);

	void SetAcceleration(double acceleration);

	double GetSpeed();

	double GetAcceleration();

	double Calculate(double time);

	AcceleratedDistanceCalculator(double speed, double acceleration);

};

