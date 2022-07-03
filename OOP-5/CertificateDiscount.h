#pragma once
#include "DiscountBase.h"

class  CertificateDiscount : public DiscountBase
{
private:
	double _amount;

public:

	void SetAmount(double amount);

	double GetAmount();

	CertificateDiscount(double amount, CategoryType category);

	double Calculate(Product* product) override;

};