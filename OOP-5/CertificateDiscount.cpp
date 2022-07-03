#include "CertificateDiscount.h"


CertificateDiscount::CertificateDiscount(double amount, CategoryType category) : DiscountBase(category)
{
	this->SetAmount(amount);
}

void CertificateDiscount::SetAmount(double amount)
{
	if ((amount < 0) && (amount > 10000))
	{
		throw exception("The value must be in the range from 0 to 10000");
	}
	this->_amount = amount;
}

double CertificateDiscount::GetAmount()
{
	return this->_amount;
}

double CertificateDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		int cost = product->GetCost() - this->GetAmount();
		if (cost <= 0)
		{
			this->SetAmount(product->GetCost() - cost);
			return 0;
		}
		this->SetAmount(0);
		return cost;
	}
	return product->GetCost();
}
