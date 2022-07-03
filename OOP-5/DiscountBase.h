#pragma once
#include "CategoryType.h"
#include "Product.h"

class DiscountBase
{
private:
	CategoryType _category;
	void SetCategory(CategoryType category);

protected:
	DiscountBase(CategoryType category);

public:
	CategoryType GetCategory();

	double virtual Calculate(Product* product) = 0;
};