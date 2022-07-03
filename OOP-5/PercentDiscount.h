#pragma once
#include "DiscountBase.h"


class PercentDiscount : public DiscountBase
{
private:
	double _percent;

public:

	PercentDiscount(double percent, CategoryType category);

	void SetPercent(double percent);

	double GetPercent();

	double Calculate(Product* product) override;

};