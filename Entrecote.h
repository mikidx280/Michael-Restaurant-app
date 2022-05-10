////Developed by Mahyar Rahmaniezad ID: 3245525237


#pragma once
#include "steaks.h"
class Entrecote: public steaks
{
private:
	steaks entrecote;
	CString steak_name ;
	CString size ;
	double cost;

public:
	Entrecote(CString lvl, CString _name) : entrecote(lvl) { this->size = _T("380"); this->cost = 40; this->steak_name = _name; }
	virtual CString get_size() { return size; }
	virtual double get_Price() { return cost; }
	virtual CString get_name() { return this->steak_name; }
	virtual CString get_level() { return entrecote.get_level(); }
	virtual CString get_temp() { return entrecote.get_temp(); }
	virtual void	Set_Price() { this->cost = 0; }
	virtual void set_newprice(double it) { this->cost = it; }
	virtual void set_level(CString lvl) { entrecote.set_level(lvl); }
	virtual void set_size(CString _size) { this->size = _size; }
	virtual void set_name(CString _name) { this->steak_name = _name; }
	~Entrecote() {}
};

