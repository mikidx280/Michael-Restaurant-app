////Developed by Mahyar Rahmaniezad ID: 3245525237

#pragma once
#include "restaurant.h"
class drinks : public restaurant
{
private:
	CString size;
public:
	 virtual CString get_temp() { return restaurant::get_temp();}
	 virtual CString get_name() { return 0; }
	 virtual double get_Price() { return 0; }
	 virtual void	Set_Price() {}
	 virtual void set_newprice(double it) { }
	 virtual void set_name(CString _name) { }
	 virtual void set_size(CString _size) { this->size = _size; }
	 virtual CString get_size() { return size; }
	drinks() {}
	drinks(CString size) { this->size = size;  set_temp(_T("COLD")); }
	~drinks(){}
};

