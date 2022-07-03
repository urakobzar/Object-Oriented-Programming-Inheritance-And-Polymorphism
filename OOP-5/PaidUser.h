#pragma once
#include "Post.h"
#include "User.h"

class PaidUser : public User
{
private:
	Post* _posts;
	int _postsCount;

public:

	void SetPosts(Post* posts, int postsCount);

	Post* GetPosts();

	int GetPostsCount();

	PaidUser(int id, string login, string password, Post* posts, int postsCount);

	PaidUser(int id, string login, string password);

	PaidUser();

};