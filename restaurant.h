//Developed by Mahyar Rahmaniezad ID: 3245525237

#pragma once
#include <iostream>
using namespace std;
class restaurant
{
private:
	CString hot_or_cold ;
	int serial;
public:
	int Get_Serial() { return serial; }
	void set_temp(CString temp) {this->hot_or_cold = temp; }
	virtual CString get_temp() { return hot_or_cold; }
	virtual CString get_name() { return _T("0"); }
	virtual CString get_level() { return _T("0"); }
	virtual CString get_size() { return _T("0"); }
	virtual double get_Price() { return 0; }
	virtual CString get_drink() { return _T("0"); }
	virtual void	Set_Price() {}
	virtual void set_name(CString) {}
	virtual void set_newprice(double it) { }
	virtual void set_level(CString ) {}
	virtual void set_size(CString) {}
	restaurant() { this->serial = rand() % 1000000; }
	~restaurant(){}
};
