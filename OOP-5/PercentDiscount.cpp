#include "PercentDiscount.h"

PercentDiscount::PercentDiscount(double percent, CategoryType category) : DiscountBase(category)
{
	this->SetPercent(percent);
}

void PercentDiscount::SetPercent(double percent)
{
	if ((percent < 0) && (percent > 100))
	{
		throw exception("The value must be in the range from 0 to 100");
	}
	this->_percent = percent;
}

double PercentDiscount::GetPercent()
{
	return this->_percent;
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		return (100 - this->GetPercent()) / 100 * product->GetCost();
	}
	return product->GetCost();
}
