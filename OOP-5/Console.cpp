#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "PersonTools.h"
#include "PaidUser.h"
#include "User.h"
#include "DiscountTools.h"
#include "CertificateDiscount.h"
#include "PercentDiscount.h"
#include "CategoryType.h"

using namespace std;

enum MaimMenu
{
	Inheritance = 1,
	Refactoring = 2,
	Polymorphism = 3,
	Exit = 4
};

int ReadingCorrectSize()
{
	int size;
	while (true)
	{
		cin >> size;
		if (size <= 0)
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater than 0)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return size;
}

int main()
{
	while (true)
	{
		cout << "\n\n\t||MAIN MENU||\n\n";
		cout << "\nPlease enter a number between 1 and 4: \n";
		cout << "\nLoad Inheritance: 1";
		cout << "\nLoad Refactoring with base class allocation: 2";
		cout << "\nLoad Polymorphism: 3";
		cout << "\nExit program: 4";
		cout << "\nMake your choice: ";
		int menuNumber = ReadingCorrectSize();
		switch (menuNumber)
		{
			case Inheritance:
			{
				cout << "\n\nInheritance\n";
				PersonTools* personTools = new PersonTools();
				Person* person = new Person("Vladimir", "Putin", "Vladimirovich");
				personTools->ShowName(person);
				Student* student = new Student("Yuri", "Kobzar", "Nikolaevich", 2019, 231001);
				personTools->ShowName(student);
				Teacher* teacher = new Teacher("Maxim", "Kochergin ", "Igorevich", "Docent");
				personTools->ShowName(teacher);
				delete person;
				delete student;
				delete teacher;
				break;
			}

			case Refactoring:
			{
				cout << "\n\nRefactoring with base class allocation\n";				
				User** users = new User*[]
				{

					new User(100000, "morkovka1995", "1995morkovka"),
					new User(100001, "ilon_mask", "X æ A-12"),
					new User(100002, "megazver", "password"),
					new User(100003, "yogurt", "ksTPQzSu")
				};
				PaidUser** paidUsers = new PaidUser*[]
				{
					new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
					new PaidUser(200001, "system_exe", "UgfkDGmU"),
					new PaidUser(200002, "RazorQ", "TBgRnbCP"),
					new PaidUser(200003, "schdub", "CetyQVID")
				};
				User** usersArray = new User *[8];
				usersArray[0] = users[0];
				usersArray[1] = users[1];
				usersArray[2] = users[2];
				usersArray[3] = users[3];
				usersArray[4] = paidUsers[0];
				usersArray[5] = paidUsers[1];
				usersArray[6] = paidUsers[2];
				usersArray[7] = paidUsers[3];
				string login = "megazver";
				string password = "password";
				User* loginedUser = new User();
				cout << "Signed in as: " << loginedUser->Login(usersArray, 8, login, password)->GetLogin() << endl;
				login = "system_exe";
				password = "UgfkDGmU";
				User* loginedPaidUser = new PaidUser();
				cout << "Signed in as: " << loginedPaidUser->Login(usersArray, 8, login, password)->GetLogin() << endl;				
				for (int i = 0; i < 4; i++)
				{
					delete users[i];
				}
				delete[] users;
				for (int i = 0; i < 4; i++)
				{
					delete paidUsers[i];
				}
				delete[] paidUsers;
				break;
			}

			case Polymorphism:
			{
				cout << "\n\nPolymorphism\n";
				PercentDiscount* percentDiscount = new PercentDiscount(10, Meat);
				CertificateDiscount* certificateDiscount = new CertificateDiscount(500, Fish);
				Product* products = new Product[]
				{
					Product("Chicken", Meat, 1000),
					Product("Pollock", Fish, 2500),
					Product("Banana",Fruits, 500),
					Product("Tomato", Vegetables, 300)
				};
				DiscountTools* discountTools = new DiscountTools();
				cout << "\n\nPercent discount on Meat is 10 percent:";
				discountTools->ShowCheckWithDiscount(percentDiscount, products, 4);
				cout << "\n\nCertificate discount on Fish is 500 rubles:";
				discountTools->ShowCheckWithDiscount(certificateDiscount, products, 4);
				delete[] products;
				delete discountTools;
				delete percentDiscount;
				delete certificateDiscount;
				break;
			}

			case Exit:
			{
				cout << endl;
				system("pause");
				return 0;
			}

			default:
			{
				cout << "You made a mistake. Try again";
				break;
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

/*
•	Наследование – механизм языка программирования, позволяющий создавать новые классы с приоб - ретением реализации другого класса.
	В отличие от агрегирования, где один объект является полем другого объекта, при наследовании один класс (дочерний, производный) 
	является частным, расши - ренным вариантом другого класса (родительского, базового).
	При этом все поля и методы базового класса становятся полями и методами дочернего класса.

•	Рефа̀кторинг – модификация про-граммы с целью улучшения структуры кода или его читаемости без изменения его функциональности.

•	Виртуальные функции – это методы класса, реализация которых может быть переопределена в дочерних классах. 
	В языке Си++ виртуальные функции обозначаются с помощью модификатора virtual.

•	Возможность работы с объектами с общим интерфейсом, но без знания о том, какой объект скрывается за интерфейсом, называется полиморфизмом.

•	Чисто виртуальные функции – это виртуальные функции, которые не имеют реализации в базовом классе.

•	Классы, имеющие хотя бы одну чисто виртуальную функцию без реализации, называются абстрактными классами.

•	Интерфейс – это класс, содержащий только чисто виртуальные функции. То есть, интерфейс как базовый класс не задает никакой реализации для методов,
	и предназначен для использования в качестве указателя на базовый класс и предоставления доступа к реализациям дочерних классов.

•	Важной причиной для неиспользования статических методов и классов заключается в том, что статические методы и классы не могут быть полиморфными. 
	Работа полиморфизма заключается в работе с некоторым объектом, для которого неизвестен его истинный класс, но известен его интерфейс для работы с этим объектом.

•	Для запрета наследования от класса необходимо написать ключевое слово final при объявлении класса.

•	Правила при наследовании:
	• Расширение обязанностей класса
	• При наследовании в дочернем классе не должен меняться смысл полей и методов базового класса
	• Если поле класса описывает величину в единицах измерения – единицы измерения не должны меняться в дочерних классах
	• Базовый класс не должен знать о существовании дочерних классах или о данных и методах, относящихся исключительно к дочерним классам.
	• В случае создания полиморфных объектов, наследование применяется не для расширения функциональности, а для приобретения интерфейса, описанного в базовом классе.

*/