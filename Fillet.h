//Developed by Mahyar Rahmaniezad ID: 3245525237

#pragma once
#include "steaks.h"
class Fillet: public steaks
{
private:
	steaks fillet;
	CString steak_name;
	CString size;
	double cost;
public:
	Fillet(CString lvl, CString _name) : fillet(lvl) { this->size = _T("220"); this->cost = 57; this->steak_name = _name; }
	virtual CString get_size() { return size; }
	virtual double get_Price() { return cost; }
	virtual CString get_name() { return this->steak_name; }
	virtual CString get_level() { return fillet.get_level(); }
	virtual CString get_temp() { return fillet.get_temp(); }
	virtual void	Set_Price() { this->cost = 0; }
	virtual void set_newprice(double it) { this->cost = it; }
	virtual void set_level(CString lvl) { fillet.set_level(lvl); }
	virtual void set_size(CString _size) { this->size = _size; }
	virtual void set_name(CString _name) { this->steak_name = _name; }
	~Fillet() {}
};

