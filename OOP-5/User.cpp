#include "User.h"

User::User()
{

}

User::User(int id, string login, string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

void User::SetId(int id)
{
	this->_id = id;
}

void User::SetLogin(string login)
{
	for (int i = 0; i < login.length(); i++)
	{
		if (((login[i] >= 58) && (login[i] <= 64)) || ((login[i] >= 33) && (login[i] <= 47)) 
			|| ((login[i] >= 91) && (login[i] <= 94)) 
				|| ((login[i] >= 123) && (login[i] <= 126)) || (login[i] == 96))
		{
			throw exception("Uncorrect login");
		}
	}
	this->_login = login;
}

void User::SetPassword(string password)
{
	this->_password = password;
}

int User::GetId()
{
	return this->_id;
}

string User::GetLogin()
{
	return this->_login;
}

string User::GetPassword()
{
	return this->_password;
}

bool User::IsCorrectPassword(string password)
{
	return (password == this->_password);
}

User* User::Login(User** users, int usersCount, string enteredLogin, string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}