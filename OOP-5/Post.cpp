#include "Post.h"

Post::Post(string title, string text)
{
	SetTitle(title);
	SetText(text);
}

void Post::SetTitle(string title)
{
	_title = title;
}
void Post::SetText(string text)
{
	_text = text;
}
string Post::GetTitle()
{
	return _title;
}

string Post::GetText()
{
	return _text;
}
