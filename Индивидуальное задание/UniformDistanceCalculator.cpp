#include "UniformDistanceCalculator.h"

void UniformDistanceCalculator::SetSpeed(double speed)
{
	if (speed < 0)
	{
		throw std::exception("The value cannot be negative");
	}
	this->_speed = speed;
}

double UniformDistanceCalculator::GetSpeed()
{
	return this->_speed;
}

double UniformDistanceCalculator::Calculate(double time)
{
	return (time * this->GetSpeed());
}

UniformDistanceCalculator::UniformDistanceCalculator(double speed)
{
	this->SetSpeed(speed);
}
