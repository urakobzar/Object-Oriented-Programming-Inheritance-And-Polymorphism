#include <iostream>
#include "AcceleratedDistanceCalculator.h"
#include "UniformDistanceCalculator.h"

using namespace std;

double ReadingCorrectValue()
{
	double value;
	while (true)
	{
		if (cin >> value)
		{
			break;
		}
		cout << "Unfortunately, you made a mistake\n";
		cout << "(The input value must be an integer)\n";
		cout << "Enter again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return value;
}

int main()
{
	cout << "\nEnter the speed for uniform movement in km/h: ";
	double speed = ReadingCorrectValue();
	cout << "\nEnter the time for uniform movement in hours: ";
	double time = ReadingCorrectValue();
	UniformDistanceCalculator* uniformDistance = new UniformDistanceCalculator(speed);
	cout << "\nDistance for uniform movement in km: " << uniformDistance->Calculate(time);
	cout << "\n\n\nEnter the speed for accelerated movemen in km/h: ";
	speed = ReadingCorrectValue();
	cout << "\nEnter the acceleration for accelerated movemen in km/h^2: ";
	double acceleration = ReadingCorrectValue();
	AcceleratedDistanceCalculator* acceleratedDistance = new AcceleratedDistanceCalculator(speed, acceleration);
	cout << "\nEnter the time for accelerated movement in hours: ";
	time = ReadingCorrectValue();
	cout << "\nDistance for accelerated movement in km: " << acceleratedDistance->Calculate(time);
	cout << endl;
	system("pause");
	return 0;
}