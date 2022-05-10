//Developed by Mahyar Rahmaniezad ID: 3245525237

#pragma once
#include "drinks.h"
class non_alcoholic : public drinks
{
private:
	double Price ;
	drinks soft;
	CString name;
public:
	 virtual double get_Price() { return Price;}
	 virtual void	Set_Price() { this->Price = 0; }
	virtual CString get_name() { return name;}
	 virtual CString get_temp() { return soft.get_temp(); }
	 virtual void set_newprice(double it) { this->Price = it; }
	 virtual void set_size(CString _size) { soft.set_size(_size); }
	 non_alcoholic(CString _name, CString size) : soft(size) { this->Price = 3; this->name = _name; }
	 virtual void set_name(CString _name) { this->name=_name; }
	 virtual CString get_size() { return _T("330"); }
	~non_alcoholic(){}
};

