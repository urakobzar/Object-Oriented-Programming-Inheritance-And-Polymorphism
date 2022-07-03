#pragma once
#include "Product.h"
#include "DiscountBase.h"

class DiscountTools
{
public:

	void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount);

};