#include "Person.h"

Person::Person()
{

}

Person::Person(string name, string surname, string patronymic)
{
	this->SetName(name);
	this->SetSurname(surname);
	this->SetPatronymic(patronymic);
}

void Person::SetName(string name)
{
	this->_name = name;
}

void Person::SetSurname(string surname)
{
	this->_surname = surname;
}

void Person::SetPatronymic(string patronymic)
{
	this->_patronymic = patronymic;
}

string Person::GetName()
{
	return this->_name;
}

string Person::GetSurname()
{
	return this->_surname;
}

string Person::GetPatronymic()
{
	return this->_patronymic;
}
