//Developed by Mahyar Rahmaniezad ID: 3245525237

#include "pch.h"
#include "Order.h"

Order::Order()
{
	food = {};
	amount = 0;
	OrderNumber = rand() % 1000000;
}

void Order::ReseTotalPrice()
{
	int size = food.size();
	double sum = 0;

	for (restaurant* prd : food)
	{
		 prd->Set_Price();
	}
}
double Order::calculateTotalPrice()
{
	int size = food.size();
	double sum = 0;

	for (restaurant* prd : food)
	{
		sum += prd->get_Price();
	}
	return sum;
}

int Order::getAmount()
{
	return amount;
}

int Order::getOrderNumber()
{
	return OrderNumber;
}

void Order::addProduct(restaurant* prd)
{
	food.push_back(prd);
	amount++;
}
void Order::removeProduct(restaurant* prd)
{
	food.erase(remove(food.begin(), food.end(), prd), food.end());
	amount--;
}


vector<restaurant*> Order::getAllProducts()
{
	return food;
}

restaurant* Order::getProductBySerial(int srl)
{
	for (int i = 0; i < food.size(); i++)
	{
		if (food[i]->Get_Serial() == srl) {
			return food[i];
		}
	}
	return nullptr;

}