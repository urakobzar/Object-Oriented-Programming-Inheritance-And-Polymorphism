#include "PersonTools.h"

void PersonTools::ShowName(Person* person)
{
	cout << "\nName: " << person->GetName();
	cout << "\nSurame: " << person->GetSurname();
	cout << "\nPatronymic: " << person->GetPatronymic();
	cout << endl;
}
