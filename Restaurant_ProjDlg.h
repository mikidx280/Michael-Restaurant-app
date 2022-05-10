//Developed by Mahyar Rahmaniezad ID: 3245525237


#include "non_alcoholic.h"
#include "alcohol.h"
#include "Fillet.h"
#include "Entrecote.h"
#include "Sinta.h"
#include "Order.h"
#include "file.h"
// Restaurant_ProjDlg.h : header file
//

#pragma once


// CRestaurantProjDlg dialog
class CRestaurantProjDlg : public CDialogEx
{
// Construction
public:
	CRestaurantProjDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RESTAURANT_PROJ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnDtnDatetimechangeDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedRadio7();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio10();
	afx_msg void OnBnClickedRadio8();
	afx_msg void OnBnClickedRadio11();
	afx_msg void OnBnClickedButton4();
	CButton MR;
	CButton M;
	CButton MW;
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck8();
	afx_msg void OnBnClickedCheck9();
	Order MyOrder;
	CButton BigCup;
	CButton MediumCup;
	CButton SmallCup;
	restaurant** rest;
	int size_arr = 0;
	CListCtrl Order_Window;
	afx_msg void OnLvnItemchangedList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton5();
	CButton sinta;
	CButton entrecote;
	CButton fillet;
	CButton Order_S;
	CButton mojito;
	CButton cosmo;
	CButton whiskey;
	CButton Order_C;
	afx_msg void OnBnClickedButton1();
	CButton Coke;
	CButton sprite;
	CButton fanta;
	CButton applej;
	afx_msg void OnBnClickedButton6();
	afx_msg void OnFileNew32771();
	afx_msg void OnFileOpen32772();
	afx_msg void OnFileSave32773();
	CButton softish;
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	
	int SerialToChange = -1;
	int nItemToChange = -1;
	double tip = 0;
	CButton Change_O;
	CButton Remove_O;
	CButton Tip;
	CButton Pay;
	CButton Exit_R;
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	CButton change_steak;
	CButton change_cock;
	void Display();
};
