#pragma once
#include <iostream>
#include "CategoryType.h"

using namespace std;



class Product
{
private:
	string _title;
	CategoryType _category;
	double _cost;

public:
	
	Product();

	Product(string title, CategoryType category, double cost);

	void SetTitle(string title);

	void SetCategory(CategoryType category);

	void SetCost(double cost);

	string GetTitle();

	CategoryType GetCategory();

	double GetCost();

};