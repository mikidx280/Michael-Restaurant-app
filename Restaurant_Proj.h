//Developed by Mahyar Rahmaniezad ID: 3245525237
// 
// Restaurant_Proj.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CRestaurantProjApp:
// See Restaurant_Proj.cpp for the implementation of this class
//

class CRestaurantProjApp : public CWinApp
{
public:
	CRestaurantProjApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CRestaurantProjApp theApp;
