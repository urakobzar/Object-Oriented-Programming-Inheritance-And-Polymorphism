#include "Teacher.h"

Teacher::Teacher(string name, string surname, string patronymic, 
	string position):Person(name, surname, patronymic)
{
	this->SetPosition(position);
}

void Teacher::SetPosition(string position)
{
	this->_position = position;
}

string Teacher::GetPosition()
{
	return this->_position;
}
