//Developed by Mahyar Rahmaniezad ID: 3245525237


#pragma once
#include "drinks.h"
class alcohol: public drinks
{
private:
	double Price;
	drinks cocktail;
	CString name;
public:

	 virtual double get_Price() { return Price; }
	 alcohol(CString _name, CString size, int price) : cocktail(size) { this->Price = price; this->name =_name; }
	virtual  CString get_temp() { return cocktail.get_temp(); }
	virtual  CString get_name() { return name;}
	virtual void	Set_Price() { this->Price = 0; }
	virtual void set_newprice(double it) { this->Price = it; }
	virtual void set_name(CString _name) {this->name =_name; }
	virtual void set_size(CString _size) {cocktail.set_size(_size); }
	virtual CString get_size() { return cocktail.get_size(); }
	~alcohol () {}
};

