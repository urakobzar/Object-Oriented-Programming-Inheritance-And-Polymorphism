#include "AcceleratedDistanceCalculator.h"

void AcceleratedDistanceCalculator::SetSpeed(double speed)
{
	if (speed < 0)
	{
		throw std::exception("The value cannot be negative");
	}
	this->_speed = speed;
}

void AcceleratedDistanceCalculator::SetAcceleration(double acceleration)
{
	this->_acceleration = acceleration;
}

double AcceleratedDistanceCalculator::GetSpeed()
{
	return this->_speed;
}

double AcceleratedDistanceCalculator::GetAcceleration()
{
	return this->_acceleration;
}

double AcceleratedDistanceCalculator::Calculate(double time)
{
	return ((this->GetSpeed()* time) + (this->GetAcceleration()*time*time/2));
}

AcceleratedDistanceCalculator::AcceleratedDistanceCalculator(double speed, double acceleration)
{
	this->SetSpeed(speed);
	this->SetAcceleration(acceleration);
}
