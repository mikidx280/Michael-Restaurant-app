//Developed by Mahyar Rahmaniezad ID: 3245525237


#pragma once
#include <string>
#include<istream>
#include<fstream>

#include "non_alcoholic.h"
#include "alcohol.h"
#include "Fillet.h"
#include "Entrecote.h"
#include "Sinta.h"
#include "Order.h"

class File
{
public:
	static void exportOrderToFile(Order* orderToExportPtr, CString filePath);
	static BOOL importFromFile(Order* MyOrder, CString filePath);
};

