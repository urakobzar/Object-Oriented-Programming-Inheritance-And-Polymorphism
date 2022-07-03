#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _yearOfReceipt;
	int _numberExamBook;

public:

	Student(string name, string surname, string patronymic, int yearOfReceipt, int numberExamBook);

	void SetYearOfReceipt(int yearOfReceipt);

	void SetNumberExamBook(int numberExamBook);

	int GetYearOfReceipt();

	int GetNumberExamBook();

};