#pragma once
#include "Person.h"

class Teacher : public Person
{
private: 
	string _position;

public:
		
	Teacher(string name, string surname, string patronymic, string position);

	void SetPosition(string position);

	string GetPosition();

};