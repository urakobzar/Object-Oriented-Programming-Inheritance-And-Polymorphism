#include "Student.h"

Student::Student(string name, string surname, string patronymic, 
	int yearOfReceipt, int numberExamBook):Person(name, surname, patronymic)
{
	this->SetYearOfReceipt(yearOfReceipt);
	this->SetNumberExamBook(numberExamBook);
}

void Student::SetYearOfReceipt(int yearOfReceipt)
{
	this->_yearOfReceipt = yearOfReceipt;
}

void Student::SetNumberExamBook(int numberExamBook)
{
	this->_numberExamBook = numberExamBook;
}

int Student::GetYearOfReceipt()
{
	return this->_yearOfReceipt;
}

int Student::GetNumberExamBook()
{
	return this->_numberExamBook;
}
