#include "Product.h"

Product::Product()
{

}

Product::Product(string title, CategoryType category, double cost)
{
	this->SetTitle(title);
	this->SetCategory(category);
	this->SetCost(cost);
}

void Product::SetTitle(string title)
{
	this->_title = title;
}

void Product::SetCategory(CategoryType category)
{
	this->_category = category;
}

void Product::SetCost(double cost)
{
	if ((cost < 0) && (cost > 100000))
	{
		throw exception("The cost cannot be negative, nor can it exceed 100000");
	}
	this->_cost = cost;
}

string Product::GetTitle()
{
	return this->_title;
}

CategoryType Product::GetCategory()
{
	return this->_category;
}

double Product::GetCost()
{
	return this->_cost;
}
