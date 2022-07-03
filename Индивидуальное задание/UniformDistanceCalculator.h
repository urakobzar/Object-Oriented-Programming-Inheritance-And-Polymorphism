#pragma once
#include <iostream>
#include "DistanceCalculatorBase.h"


class UniformDistanceCalculator : public DistanceCalculatorBase
{
private:
	double _speed;

public:

	void SetSpeed(double speed);

	double GetSpeed();

	double Calculate(double time);

	UniformDistanceCalculator(double speed);

};