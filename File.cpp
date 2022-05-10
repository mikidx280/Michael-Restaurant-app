//Developed by Mahyar Rahmaniezad ID: 3245525237

#include "pch.h"
#include "File.h"
#include <string.h>

void File::exportOrderToFile(Order* orderToExportPtr, CString filePath) // reads from file
{
	ofstream file;
	file.open(filePath);
	vector<restaurant*> allProducts = orderToExportPtr->getAllProducts();
	for (int i = 0; i < allProducts.size(); i++)
	{
		if (allProducts[i]->get_name() == "Entrecote")
		{
			file << "E,";
			if (allProducts[i]->get_level() == "M")
			{
				file << "M,";
				file << '\n';
			}
			if (allProducts[i]->get_level() == "MW")
			{
				file << "MW";
				file << '\n';
			}
			if (allProducts[i]->get_level() == "MR")
			{
				file << "MR";
				file << '\n';
			}
		}
		if (allProducts[i]->get_name() == "Fillet")
		{
			file << "F,";
			if (allProducts[i]->get_level() == "M")
			{
				file << "M,";
				file << '\n';
			}
			if (allProducts[i]->get_level() == "MW")
			{
				file << "MW";
				file << '\n';
			}
			if (allProducts[i]->get_level() == "MR")
			{
				file << "MR";
				file << '\n';
			}
		}
		if (allProducts[i]->get_name() == "Sinta")
		{
			file << "S,";
			if (allProducts[i]->get_level() == "M")
			{
				file << "M,";
				file << '\n';
			}
			if (allProducts[i]->get_level() == "MW")
			{
				file << "MW";
				file << '\n';
			}
			if (allProducts[i]->get_level() == "MR")
			{
				file << "MR";
				file << '\n';
			}
		}
		if (allProducts[i]->get_name() == "Cosmopolitan")
		{
			file << "C,";
			if (allProducts[i]->get_size() == "200")
			{
				file << "sm";
				file << '\n';
			}
			if (allProducts[i]->get_size() == "350")
			{
				file << "me";
				file << '\n';
			}
			if (allProducts[i]->get_size() == "500")
			{
				file << "bi";
				file << '\n';
			}
		}
		if (allProducts[i]->get_name() == "Whiskey-Sour")
		{
			file << "W,";
			if (allProducts[i]->get_size() == "200")
			{
				file << "sm";
				file << '\n';
			}
			if (allProducts[i]->get_size() == "350")
			{
				file << "me";
				file << '\n';
			}
			if (allProducts[i]->get_size() == "500")
			{
				file << "bi";
				file << '\n';
			}
		}
		if (allProducts[i]->get_name() == "Mojito")
		{
			file << "M,";

			if (allProducts[i]->get_size() == "200")
			{
				file << "sm";
				file << '\n';
			}
			if (allProducts[i]->get_size() == "350")
			{
				file << "me";
				file << '\n';
			}
			if (allProducts[i]->get_size() == "500")
			{
				file << "bi";
				file << '\n';
			}
		}


		if (allProducts[i]->get_name() == "Fanta")
		{
			file << "fa..";
			file << '\n';
		}
		if (allProducts[i]->get_name() == "Coca-cola")
		{
			file << "co..";
			file << '\n';
		}
		if (allProducts[i]->get_name() == "Sprite")
		{
			file << "sp..";
			file << '\n';
		}
		if (allProducts[i]->get_name() == "Apple-juice")
		{
			file << "Aj..";
			file << '\n';
		}
	}
	file.close();
}

BOOL File::importFromFile(Order* MyOrder, CString filePath)
{
	CString cupsize= _T("");
	CString level=_T("");
	CString size=_T("");
	CString Drink=_T("");
	 CString price = _T("");
	ifstream file;
	file.open(filePath);
	if (!file)
	{
		return false;
	}
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			if (line[0] == 'E')
			{
				CString name = _T("Entrecote");
				size = _T("380");
				
				if (line[3] == 'R')
				{
					level = _T("MR");
				}
				if (line[3] == 'W')
				{
					level = _T("MW");
				}
				if (line[3] == ',')
				{
					level = _T("M");
				}
				restaurant* entr = new Entrecote(level, name);
				MyOrder->addProduct(entr);
			}

			 if (line[0] == 'F')
			{
				CString name = _T("Fillet");
				size = _T("220");
				
				if (line[3] == 'R')
				{
					level = _T("MR");
				}
				if (line[3] == 'W') 
				{
					level = _T("MW");
				}
				if (line[3] == ',')
				{
					level = _T("M");
				}
				restaurant* fillush = new Fillet(level, name);
				MyOrder->addProduct(fillush);
			}
			 if (line[0] == 'S')
			{
				CString name = _T("Sinta");
				size = _T("220");
				
				if (line[3] == 'R')
				{
					level = _T("MR");
				}
				if (line[3] == 'W')
				{
					level = _T("MW");
				}
				if (line[3] == ',')
				{
					level = _T("M");
				}
				restaurant* sintush = new Sinta (level , name);
				MyOrder->addProduct(sintush);
			}
				//===================================//
				if (line[1] == 'a')
				{
					Drink= _T("Fanta");
					size = _T("330");
					restaurant* f = new non_alcoholic(_T("Fanta"), _T("330"));
					MyOrder->addProduct(f);
				}
				 if (line[1] == 'o')
				{
					Drink = _T("Coca-cola");
					size = _T("330");
					restaurant* c = new non_alcoholic(_T("Coca-cola"), _T("330"));
					MyOrder->addProduct(c);
				}
					if (line[1] == 'p')
				{
					Drink = _T("Sprite");
					size = _T("330");
					restaurant* S = new non_alcoholic(_T("Sprite"), _T("330"));
					MyOrder->addProduct(S);
				}
				if (line[0] == 'A')
				{
					Drink = _T("Apple-juice");
					size = _T("330");
					restaurant* A = new non_alcoholic(_T("Apple-juice"), _T("330"));
					MyOrder->addProduct(A);
				}
				//===================================//

				if (line[0] == 'C')
				{
					CString name = _T("Cosmopolitan");
					
					if (line[2] == 'b')
					{
						cupsize = _T("500");
						restaurant* Co = new alcohol(name, cupsize, 15);
						MyOrder->addProduct(Co);
					}
					if (line[2] == 'm')
					{
						cupsize = _T("350");
						restaurant* Co = new alcohol(name,cupsize, 10);
						MyOrder->addProduct(Co);
					}
					if (line[2] == 's')
					{
						cupsize = _T("200");
						restaurant* Co = new alcohol(name, cupsize, 5);
						MyOrder->addProduct(Co);
					}
				
				}
				if (line[0] == 'W')
				{
					CString name = _T("Whiskey-Sour");
					
					if (line[2] == 'b')
					{
						cupsize = _T("500");
						restaurant* Wh = new alcohol(name, cupsize, 15);
						MyOrder->addProduct(Wh);
					}
					if (line[2] == 'm')
					{
						cupsize = _T("350");
						restaurant* Wh = new alcohol(name, cupsize, 10);
						MyOrder->addProduct(Wh);
					}
					if (line[2] == 's')
					{
						cupsize = _T("200");
						restaurant* Wh = new alcohol(name, cupsize, 5);
						MyOrder->addProduct(Wh);
					}
				}
				 if (line[0] == 'M')
				{
					CString name = _T("Mojito");
					
					if (line[2] == 'b')
					{
						cupsize = _T("500");
						restaurant* Mo = new alcohol(name, cupsize, 15);
						MyOrder->addProduct(Mo);
					}
					if (line[2] == 'm')
					{
						cupsize = _T("350");
						restaurant* Mo = new alcohol(name, cupsize, 10);
						MyOrder->addProduct(Mo);
					}
					if (line[2] == 's')
					{
						cupsize = _T("200");
						restaurant* Mo = new alcohol(name, cupsize, 5);
						MyOrder->addProduct(Mo);
					}
				}
				
			
			
		}
	}
	file.close();
	return true;
}
