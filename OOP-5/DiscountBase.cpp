#include "DiscountBase.h"

void DiscountBase::SetCategory(CategoryType category)
{
	this->_category = category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	this->SetCategory(category);
}

CategoryType DiscountBase::GetCategory()
{
	return this->_category;
}
