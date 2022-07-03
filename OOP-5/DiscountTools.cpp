#include "DiscountTools.h"

void DiscountTools::ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	double fullCost = 0;
	double newCost;
	for (int i = 0; i < productsCount; i++)
	{
		cout << "\nTitle: " << products[i].GetTitle();
		cout << "\tOld cost: " << products[i].GetCost();
		newCost = discount->Calculate(&products[i]);
		cout << "\tNew cost: " << newCost;
		fullCost = fullCost + newCost;
	}
	cout << "\nFull cost with discount: " << fullCost;
}
