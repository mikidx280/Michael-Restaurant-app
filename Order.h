//Developed by Mahyar Rahmaniezad ID: 3245525237

#pragma once
#include "non_alcoholic.h"
#include "alcohol.h"
#include "Fillet.h"
#include "Entrecote.h"
#include "Sinta.h"
#include <vector>

using namespace std;

class Order
{
private:
	vector<restaurant*> food;
	int OrderNumber;
	int amount;

public:
	Order();
	double calculateTotalPrice();
	void ReseTotalPrice();
	int getAmount();
	int getOrderNumber();
	void addProduct(restaurant* );
	void removeProduct(restaurant* );
	restaurant* getProductBySerial(int );
	vector<restaurant*> getAllProducts();
};




