#pragma once
#include <iostream>
 
using namespace std;

class Person
{
private:
	string _name;
	string _surname;
	string _patronymic;
public:

	Person();

	Person(string name, string surname, string patronymic);

	void SetName(string name);

	void SetSurname(string surname);

	void SetPatronymic(string patronymic);

	string GetName();

	string GetSurname();

	string GetPatronymic();
};
