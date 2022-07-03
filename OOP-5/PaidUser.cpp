#include "PaidUser.h"

PaidUser::PaidUser(int id, string login, string password, Post* posts, 
	int postsCount) : User(id, login, password)
{
	this->SetPosts(posts, postsCount);
}

PaidUser::PaidUser(int id, string login, string password) :
	PaidUser(id, login, password, nullptr, 0)
{

}

PaidUser::PaidUser()
{

}

void PaidUser::SetPosts(Post* posts, int postsCount)
{
	if (postsCount < 0)
	{
		throw exception("Posts count must be more than 0");
	}
	this->_posts = posts;
	this->_postsCount = postsCount;
}

Post* PaidUser::GetPosts()
{
	return this->_posts;
}

int PaidUser::GetPostsCount()
{
	return this->_postsCount;
}