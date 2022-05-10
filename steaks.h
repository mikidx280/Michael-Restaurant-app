//Developed by Mahyar Rahmaniezad ID: 3245525237

#pragma once
#include "restaurant.h"
class steaks : public restaurant
{
private:
	CString level ;
	
public:
	steaks() {}
	steaks(CString lvl) { this->level = lvl; set_temp(_T("HOT")); }
	virtual CString get_name() { return 0; }
	virtual CString get_temp() { return restaurant::get_temp(); }
	virtual CString get_level() { return level; }
	virtual CString get_size() { return _T("0"); }
	virtual double get_Price() { return 0; }
	virtual void	Set_Price() {}
	virtual void set_newprice(double it) {}
	virtual void set_level(CString lvl) { this->level = lvl; }
	virtual void set_size(CString) {}
	virtual void set_name(CString _name) {}
	~steaks(){}
};

