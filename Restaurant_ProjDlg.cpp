//Developed by Mahyar Rahmaniezad ID: 3245525237
// Restaurant_ProjDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Restaurant_Proj.h"
#include "Restaurant_ProjDlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
	
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	
	
END_MESSAGE_MAP()


// CRestaurantProjDlg dialog



CRestaurantProjDlg::CRestaurantProjDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RESTAURANT_PROJ_DIALOG, pParent)
	
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRestaurantProjDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK1, MR);
	DDX_Control(pDX, IDC_CHECK2, M);
	DDX_Control(pDX, IDC_CHECK3, MW);
	DDX_Control(pDX, IDC_CHECK4, BigCup);
	DDX_Control(pDX, IDC_CHECK8, MediumCup);
	DDX_Control(pDX, IDC_CHECK9, SmallCup);


	DDX_Control(pDX, IDC_LIST2, Order_Window);
	DDX_Control(pDX, IDC_RADIO1, sinta);
	DDX_Control(pDX, IDC_RADIO2, entrecote);
	DDX_Control(pDX, IDC_RADIO3, fillet);
	DDX_Control(pDX, IDC_BUTTON3, Order_S);
	DDX_Control(pDX, IDC_RADIO8, mojito);
	DDX_Control(pDX, IDC_RADIO10, cosmo);
	DDX_Control(pDX, IDC_RADIO11, whiskey);
	DDX_Control(pDX, IDC_BUTTON4, Order_C);
	DDX_Control(pDX, IDC_RADIO4, Coke);
	DDX_Control(pDX, IDC_RADIO5, sprite);
	DDX_Control(pDX, IDC_RADIO6, fanta);
	DDX_Control(pDX, IDC_RADIO7, applej);
	DDX_Control(pDX, IDC_BUTTON1, softish);
	DDX_Control(pDX, IDC_BUTTON7, Change_O);
	DDX_Control(pDX, IDC_BUTTON2, Remove_O);
	DDX_Control(pDX, IDC_BUTTON5, Tip);
	DDX_Control(pDX, IDC_BUTTON8, Pay);
	DDX_Control(pDX, IDOK, Exit_R);
	DDX_Control(pDX, IDC_BUTTON10, change_steak);
	DDX_Control(pDX, IDC_BUTTON9, change_cock);
}

BEGIN_MESSAGE_MAP(CRestaurantProjDlg, CDialogEx)
	
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CRestaurantProjDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_CHECK2, &CRestaurantProjDlg::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &CRestaurantProjDlg::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK1, &CRestaurantProjDlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_BUTTON3, &CRestaurantProjDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_RADIO1, &CRestaurantProjDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CRestaurantProjDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CRestaurantProjDlg::OnBnClickedRadio3)
	ON_NOTIFY(DTN_DATETIMECHANGE, IDC_DATETIMEPICKER1, &CRestaurantProjDlg::OnDtnDatetimechangeDatetimepicker1)
	ON_BN_CLICKED(IDC_RADIO5, &CRestaurantProjDlg::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CRestaurantProjDlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO7, &CRestaurantProjDlg::OnBnClickedRadio7)
	ON_BN_CLICKED(IDC_RADIO4, &CRestaurantProjDlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO10, &CRestaurantProjDlg::OnBnClickedRadio10)
	ON_BN_CLICKED(IDC_RADIO8, &CRestaurantProjDlg::OnBnClickedRadio8)
	ON_BN_CLICKED(IDC_RADIO11, &CRestaurantProjDlg::OnBnClickedRadio11)
	ON_BN_CLICKED(IDC_BUTTON4, &CRestaurantProjDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_CHECK4, &CRestaurantProjDlg::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_CHECK8, &CRestaurantProjDlg::OnBnClickedCheck8)
	ON_BN_CLICKED(IDC_CHECK9, &CRestaurantProjDlg::OnBnClickedCheck9)
	
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST2, &CRestaurantProjDlg::OnLvnItemchangedList2)
	ON_BN_CLICKED(IDC_BUTTON2, &CRestaurantProjDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &CRestaurantProjDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON1, &CRestaurantProjDlg::OnBnClickedButton1)
	
	ON_COMMAND(ID_FILE_NEW32771, &CRestaurantProjDlg::OnFileNew32771)
	ON_COMMAND(ID_FILE_OPEN32772, &CRestaurantProjDlg::OnFileOpen32772)
	ON_COMMAND(ID_FILE_SAVE32773, &CRestaurantProjDlg::OnFileSave32773)
	ON_BN_CLICKED(IDC_BUTTON7, &CRestaurantProjDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CRestaurantProjDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CRestaurantProjDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CRestaurantProjDlg::OnBnClickedButton10)
END_MESSAGE_MAP()


// CRestaurantProjDlg message handlers

BOOL CRestaurantProjDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	Order_Window.InsertColumn(0, L"Dish Name", LVCFMT_LEFT, 110);
	Order_Window.InsertColumn(1, L"Drink Name", LVCFMT_LEFT, 110);
	Order_Window.InsertColumn(2, L"Level", LVCFMT_LEFT, 75);
	Order_Window.InsertColumn(3, L"Size (gr.)", LVCFMT_LEFT, 75);
	Order_Window.InsertColumn(4, L"Cup Size (ml.)", LVCFMT_LEFT, 100);
	Order_Window.InsertColumn(5, L"Type", LVCFMT_LEFT, 90);
	Order_Window.InsertColumn(6, L"Price", LVCFMT_LEFT, 63);
	Order_Window.InsertColumn(7, L"Serial", LVCFMT_LEFT, 0);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CRestaurantProjDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

void CRestaurantProjDlg::Display()
{
	int nItem = -1;
	vector<restaurant*> allProducts = MyOrder.getAllProducts();
		for (int i = 0; i < allProducts.size(); i++) {
			if (allProducts[i]->get_name() == _T("Entrecote"))
			{
				CString DishName = _T(""), level = _T(""), size = _T(""), type = _T("HOT"), price = _T(""), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				level = ((restaurant*)allProducts[i])->get_level();
				size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, _T("Entrecote"));
				Order_Window.SetItemText(nItem, 2, level);
				Order_Window.SetItemText(nItem, 3, size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Fillet"))
			{
				CString DishName = _T(""), level = _T(""), size = _T(""), type = _T("HOT"), price = _T(""), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				level = ((restaurant*)allProducts[i])->get_level();
				size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, _T("Fillet"));
				Order_Window.SetItemText(nItem, 2, level);
				Order_Window.SetItemText(nItem, 3, size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Sinta"))
			{
				CString DishName = _T(""), level = _T(""), size = _T(""), type = _T("HOT"), price = _T(""), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				level = ((restaurant*)allProducts[i])->get_level();
				size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, _T("Sinta"));
				Order_Window.SetItemText(nItem, 2, level);
				Order_Window.SetItemText(nItem, 3, size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Whiskey-Sour"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Whiskey-Sour");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Cosmopolitan"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Cosmopolitan");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Mojito"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Mojito");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Fanta"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Fanta");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Coca-cola"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Coca-cola");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Sprite"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"), ((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Sprite");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			if (allProducts[i]->get_name() == _T("Apple-juice"))
			{
				CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");

				price.Format(_T("%g$"),((restaurant*)allProducts[i])->get_Price());
				serial.Format(_T("%d"), allProducts[i]->Get_Serial());
				DrinkName = _T("Apple-juice");
				cup_size = ((restaurant*)allProducts[i])->get_size();
				nItem = Order_Window.InsertItem(0, dishname);
				Order_Window.SetItemText(nItem, 1, DrinkName);
				Order_Window.SetItemText(nItem, 4, cup_size);
				Order_Window.SetItemText(nItem, 5, type);
				Order_Window.SetItemText(nItem, 6, price);
				Order_Window.SetItemText(nItem, 7, serial);
			}
			nItem = -1;
		}

}


void CRestaurantProjDlg::OnPaint()
{
	CPaintDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	int r, g, b;
	r = 229;
	g = 255;
	b = 204;
	CBrush m_brush;
	m_brush.CreateSolidBrush(RGB(r, g, b));
	dc.FillRect(&rect, &m_brush);

	
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		
		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
		
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CRestaurantProjDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CRestaurantProjDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}

void CRestaurantProjDlg::OnBnClickedCheck1() //MR
{
	if (MR.GetCheck())
	{
		if (!(fillet.GetCheck() || sinta.GetCheck() || entrecote.GetCheck()))
		{
			Order_S.EnableWindow(false);
		}
		else
		{
			Order_S.EnableWindow(TRUE);
		}
		MW.EnableWindow(false);
		M.EnableWindow(false);
	}
	else
	{
		Order_S.EnableWindow(false);
		MW.EnableWindow(true);
		M.EnableWindow(true);
	}
}


void CRestaurantProjDlg::OnBnClickedCheck2() // M
{
	
	if (M.GetCheck())
	{
		if (!(fillet.GetCheck() || sinta.GetCheck() || entrecote.GetCheck()))
		{
			Order_S.EnableWindow(false);
		}
		else
		{
			Order_S.EnableWindow(TRUE);
		}
		MW.EnableWindow(false);
		MR.EnableWindow(false);
	}
	else
	{
		Order_S.EnableWindow(false);
		MW.EnableWindow(true);
		MR.EnableWindow(true);
	}
}


void CRestaurantProjDlg::OnBnClickedCheck3() // MW
{
	if (MW.GetCheck())
	{
		if (!(fillet.GetCheck() || sinta.GetCheck() || entrecote.GetCheck()))
		{
			Order_S.EnableWindow(false);
		}
		else
		{
			Order_S.EnableWindow(TRUE);
		}
		M.EnableWindow(false);
		MR.EnableWindow(false);
	}
	else
	{
		M.EnableWindow(true);
		MR.EnableWindow(true);
		Order_S.EnableWindow(false);
	}
}

void CRestaurantProjDlg::OnBnClickedButton3()//Order-steaks
{
	int nItem = -1;
	CString DishName = _T(""), level = _T(""), size = _T(""), type = _T("HOT"), price = _T("") , serial = _T("");
	if (!(fillet.GetCheck()|| entrecote.GetCheck() || sinta.GetCheck()))
	{
		MessageBox(_T("No product was selected\nChoose pruduct please."));
	}
	if (fillet.GetCheck())
	{
		if (MR.GetCheck())
		{
			restaurant* steak = new Fillet(_T("MR"), _T("Fillet"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (M.GetCheck())
		{
			restaurant* steak = new Fillet(_T("M"), _T("Fillet"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (MW.GetCheck())
		{
			restaurant* steak = new Fillet(_T("MW"), _T("Fillet"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}

	}
	if (entrecote.GetCheck())
	{
		if (MR.GetCheck())
		{
			restaurant* steak = new Entrecote(_T("MR"), _T("Entrecote"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (M.GetCheck())
		{
			restaurant* steak = new Entrecote(_T("M") , _T("Entrecote"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (MW.GetCheck())
		{
			restaurant* steak = new Entrecote(_T("MW") , _T("Entrecote"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}

	}
	if (sinta.GetCheck())
	{
		
		if (MR.GetCheck())
		{
			restaurant* steak = new Sinta(_T("MR"), _T("Sinta"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (M.GetCheck())
		{
			restaurant* steak = new Sinta(_T("M"), _T("Sinta"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (MW.GetCheck())
		{
			restaurant* steak = new Sinta(_T("MW"), _T("Sinta"));
			DishName = steak->get_name();
			level = steak->get_level();
			size = steak->get_size();
			serial.Format(_T("%d"), steak->Get_Serial());
			price.Format(_T("%g$"), steak->get_Price());
			MyOrder.addProduct(steak);
			nItem = Order_Window.InsertItem(0, DishName);
			Order_Window.SetItemText(nItem, 2, level);
			Order_Window.SetItemText(nItem, 3, size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
	}
}


void CRestaurantProjDlg::OnBnClickedRadio1()//Choose-Sinta
{
	softish.EnableWindow(false);
	Order_C.EnableWindow(false);
	if (!(M.GetCheck() || MW.GetCheck() || MR.GetCheck()))
	{
		Order_S.EnableWindow(false);
	}
	else
	{
		Order_S.EnableWindow(TRUE);
	}

}


void CRestaurantProjDlg::OnBnClickedRadio2()//Choose Antrikot
{
	softish.EnableWindow(false);
	Order_C.EnableWindow(false);

	if (!(M.GetCheck() || MW.GetCheck() || MR.GetCheck()))
	{
		Order_S.EnableWindow(false);
	}
	else
	{
		Order_S.EnableWindow(TRUE);
	}
	// TODO: Add your control notification handler code here
}


void CRestaurantProjDlg::OnBnClickedRadio3()//Fillet
{
	softish.EnableWindow(false);
	Order_C.EnableWindow(false);

	if (!(M.GetCheck() || MW.GetCheck() || MR.GetCheck()))
	{
		Order_S.EnableWindow(false);
	}
	else
	{
		Order_S.EnableWindow(TRUE);
	}
	// TODO: Add your control notification handler code here
}






void CRestaurantProjDlg::OnDtnDatetimechangeDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMDATETIMECHANGE pDTChange = reinterpret_cast<LPNMDATETIMECHANGE>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}



void CRestaurantProjDlg::OnBnClickedRadio5() // sprite
{
	Order_C.EnableWindow(false);
	Order_S.EnableWindow(false);
	softish.EnableWindow(TRUE);;

}


void CRestaurantProjDlg::OnBnClickedRadio6() // fanta
{
	Order_C.EnableWindow(false);
	Order_S.EnableWindow(false);
	softish.EnableWindow(TRUE);;
}


void CRestaurantProjDlg::OnBnClickedRadio7() // apple juice
{
	Order_C.EnableWindow(false);
	Order_S.EnableWindow(false);
	softish.EnableWindow(TRUE);;
}


void CRestaurantProjDlg::OnBnClickedRadio4() // coca cola
{
	Order_C.EnableWindow(false);
	Order_S.EnableWindow(false);
	softish.EnableWindow(TRUE);;
}


void CRestaurantProjDlg::OnBnClickedRadio10() // cosmo
{
	softish.EnableWindow(false);
	Order_S.EnableWindow(false);
	if (!(BigCup.GetCheck() || MediumCup.GetCheck() || SmallCup.GetCheck()))
	{
		Order_C.EnableWindow(false);
	}
	else
	{
		Order_C.EnableWindow(TRUE);
	}
	// TODO: Add your control notification handler code here
}


void CRestaurantProjDlg::OnBnClickedRadio8() // mojito
{
	softish.EnableWindow(false);
	Order_S.EnableWindow(false);
	if (!(BigCup.GetCheck() || MediumCup.GetCheck() || SmallCup.GetCheck()))
	{
		Order_C.EnableWindow(false);
	}
	else
	{
		Order_C.EnableWindow(TRUE);
	}
	// TODO: Add your control notification handler code here
}


void CRestaurantProjDlg::OnBnClickedRadio11() // whiskey
{
	softish.EnableWindow(false);
	Order_S.EnableWindow(false);
	if (!(BigCup.GetCheck() || MediumCup.GetCheck() || SmallCup.GetCheck()))
	{
		Order_C.EnableWindow(false);
	}
	else
	{
		Order_C.EnableWindow(TRUE);
	}
	// TODO: Add your control notification handler code here
}


void CRestaurantProjDlg::OnBnClickedButton4() // order cocktail
{
	int nItem = -1;
	CString DrinkName = _T(""), cup_size = _T(""), type = _T("COLD"), price = _T(""), dishname = _T("-----------"), serial = _T("");
	
	if (!(mojito.GetCheck() || cosmo.GetCheck() || whiskey.GetCheck()))
	{
		MessageBox(_T("No product was selected\nChoose pruduct please."));
	}
	if (mojito.GetCheck())
	{
		
		if (BigCup.GetCheck())
		{
			restaurant* cock_tail = new alcohol(_T("Mojito"), _T("500") , 15);
	
			DrinkName = _T("Mojito");
			cock_tail->set_size(_T("500"));
			cup_size = _T("500");
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (MediumCup.GetCheck())
		{
			restaurant* cock_tail = new alcohol(_T("Mojito"), _T("350"), 10);
	
			DrinkName = _T("Mojito");
			cup_size = _T("350");
			cock_tail->set_size(_T("350"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);

		}
		if (SmallCup.GetCheck())
		{
			restaurant* cock_tail = new alcohol(_T("Mojito"), _T("200"), 5);
	
			DrinkName = _T("Mojito");
			cup_size = _T("200");
			cock_tail->set_size(_T("200"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
	
	}

	if (cosmo.GetCheck())
	{
		
		if (BigCup.GetCheck())
		{

			restaurant* cock_tail = new alcohol(_T("Cosmopolitan"), _T("500"), 15);
			
			DrinkName = _T("Cosmopolitan");
			cup_size = _T("500");
			cock_tail->set_size(_T("500"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);
		}
		if (MediumCup.GetCheck())
		{
			restaurant* cock_tail = new alcohol(_T("Cosmopolitan"), _T("350"), 10);
		
			DrinkName = _T("Cosmopolitan");
			cup_size = _T("350");
			cock_tail->set_size(_T("350"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);

		}
		if (SmallCup.GetCheck())
		{

			restaurant* cock_tail = new alcohol(_T("Cosmopolitan"), _T("200"), 5);
		
			DrinkName = _T("Cosmopolitan");
			cup_size = _T("200");
			cock_tail->set_size(_T("200"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);

		}
		
	}

	if (whiskey.GetCheck())
	{
		if (BigCup.GetCheck())
		{
			restaurant* cock_tail = new alcohol(_T("Whiskey-Sour"), _T("500"), 15);
			
			DrinkName = _T("Whiskey-Sour");
			cup_size = _T("500");
			cock_tail->set_size(_T("500"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);

		}
		if (MediumCup.GetCheck())
		{
			restaurant* cock_tail = new alcohol(_T("Whiskey-Sour"), _T("350"), 10);
		
			DrinkName = _T("Whiskey-Sour");
			cup_size = _T("350");
			cock_tail->set_size(_T("350"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);

		}
		if (SmallCup.GetCheck())
		{

			restaurant* cock_tail = new alcohol(_T("Whiskey-Sour"), _T("200"), 5);
			DrinkName = _T("Whiskey-Sour");
			cup_size = _T("200");
			cock_tail->set_size(_T("200"));
			serial.Format(_T("%d"), cock_tail->Get_Serial());
			price.Format(_T("%g$"), cock_tail->get_Price());
			nItem = Order_Window.InsertItem(0, dishname);
			MyOrder.addProduct(cock_tail);
			Order_Window.SetItemText(nItem, 1, DrinkName);
			Order_Window.SetItemText(nItem, 4, cup_size);
			Order_Window.SetItemText(nItem, 5, type);
			Order_Window.SetItemText(nItem, 6, price);
			Order_Window.SetItemText(nItem, 7, serial);

		}
		
	}
}


void CRestaurantProjDlg::OnBnClickedCheck4()//Big Cup
{
	if (BigCup.GetCheck())
	{
		if (!(mojito.GetCheck() || whiskey.GetCheck() || cosmo.GetCheck()))
		{
			Order_C.EnableWindow(false);
		}
		else
		{
			Order_C.EnableWindow(TRUE);
		}
		SmallCup.EnableWindow(false);
		MediumCup.EnableWindow(false);
	}
	else
	{
		Order_C.EnableWindow(false);
		SmallCup.EnableWindow(true);
		MediumCup.EnableWindow(true);
	}
}


void CRestaurantProjDlg::OnBnClickedCheck8()//Medium Cup
{
	
	if (MediumCup.GetCheck())
	{
		if (!(mojito.GetCheck() || whiskey.GetCheck() || cosmo.GetCheck()))
		{
			Order_C.EnableWindow(false);
		}
		else
		{
			Order_C.EnableWindow(TRUE);
		}
		SmallCup.EnableWindow(false);
		BigCup.EnableWindow(false);
	}
	else
	{
		Order_C.EnableWindow(false);
		SmallCup.EnableWindow(true);
		BigCup.EnableWindow(true);
	}
}


void CRestaurantProjDlg::OnBnClickedCheck9()//Small Cup
{
	if (SmallCup.GetCheck())
	{

		if (!(mojito.GetCheck() || whiskey.GetCheck() || cosmo.GetCheck()))
		{
			Order_C.EnableWindow(false);
		}
		else
		{
			Order_C.EnableWindow(TRUE);
		}
		MediumCup.EnableWindow(false);
		BigCup.EnableWindow(false);
	}
	else
	{
		Order_C.EnableWindow(false);
		MediumCup.EnableWindow(true);
		BigCup.EnableWindow(true);
	}
}


void CRestaurantProjDlg::OnLvnItemchangedList2(NMHDR* pNMHDR, LRESULT* pResult)//OrderWindow
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	
}


void CRestaurantProjDlg::OnBnClickedButton2() // remove order
{
	int nItem = -1;
	CString name, price, specs, size, totalPrice;
	nItem = Order_Window.GetNextItem(nItem, LVNI_SELECTED);
	int id = _ttoi(Order_Window.GetItemText(nItem, 7));
	restaurant* productToDelete = MyOrder.getProductBySerial(id);
	if (productToDelete != nullptr) {
		MyOrder.removeProduct(productToDelete);
		Order_Window.DeleteItem(nItem);
	}
	else 
	{
		AfxMessageBox(_T("Error: No Product was Selected"));
	}
}


void CRestaurantProjDlg::OnBnClickedButton5() // Tip
{
	tip += 2;
	MessageBox(_T("Thank you, We appreciate that!"));
}


void CRestaurantProjDlg::OnBnClickedButton1() // order soft_drinks
{
	int nItem = -1;
	CString DrinkName = _T(""), cup_size = _T("330"), type = _T("COLD"), price = _T(""), dishname =_T("-----------"), serial =_T("");
	if (!(Coke.GetCheck() || fanta.GetCheck() || sprite.GetCheck() || applej.GetCheck()))
	{
		MessageBox(_T("No product was selected\nChoose pruduct please."));
	}
	if (Coke.GetCheck())
	{
		Order_C.EnableWindow(false);
		Order_S.EnableWindow(false);
		restaurant* soft = new non_alcoholic(_T("Coca-cola"), _T("330"));
		DrinkName = _T("Coca-cola");
		serial.Format(_T("%d"), soft->Get_Serial());
		price.Format(_T("%g$"), soft->get_Price());
		nItem = Order_Window.InsertItem(0, dishname);
		MyOrder.addProduct(soft);
		Order_Window.SetItemText(nItem,1, DrinkName);
		Order_Window.SetItemText(nItem, 4, cup_size);
		Order_Window.SetItemText(nItem, 5, type);
		Order_Window.SetItemText(nItem, 6, price);
		Order_Window.SetItemText(nItem, 7, serial);
	}

	if (sprite.GetCheck())
	{
		Order_C.EnableWindow(false);
		Order_S.EnableWindow(false);
		restaurant* soft = new non_alcoholic(_T("Sprite"), _T("330"));
		DrinkName = _T("Sprite");
		type = soft->get_temp();
		serial.Format(_T("%d"), soft->Get_Serial());
		price.Format(_T("%g$"), soft->get_Price());
		nItem = Order_Window.InsertItem(0, dishname);
		MyOrder.addProduct(soft);
		Order_Window.SetItemText(nItem, 1, DrinkName);
		Order_Window.SetItemText(nItem, 4, cup_size);
		Order_Window.SetItemText(nItem, 5, type);
		Order_Window.SetItemText(nItem, 6, price);
		Order_Window.SetItemText(nItem, 7, serial);
	}
	if (fanta.GetCheck())
	{
		Order_C.EnableWindow(false);
		Order_S.EnableWindow(false);
		restaurant* soft = new non_alcoholic(_T("Fanta"), _T("330"));
		DrinkName = _T("Fanta");
		type = soft->get_temp();
		serial.Format(_T("%d"), soft->Get_Serial());
		price.Format(_T("%g$"), soft->get_Price());
		nItem = Order_Window.InsertItem(0, dishname);
		MyOrder.addProduct(soft);
		Order_Window.SetItemText(nItem, 1, DrinkName);
		Order_Window.SetItemText(nItem, 4, cup_size);
		Order_Window.SetItemText(nItem, 5, type);
		Order_Window.SetItemText(nItem, 6, price);
		Order_Window.SetItemText(nItem, 7, serial);
	}
	
	if (applej.GetCheck())
	{
		Order_C.EnableWindow(false);
		Order_S.EnableWindow(false);
		restaurant* soft = new non_alcoholic(_T("Apple-juice"), _T("330"));
		DrinkName = _T("Apple-juice");
		type = soft->get_temp();
		serial.Format(_T("%d"), soft->Get_Serial());
		price.Format(_T("%g$"), soft->get_Price());
		nItem = Order_Window.InsertItem(0, dishname);
		MyOrder.addProduct(soft);
		Order_Window.SetItemText(nItem, 1, DrinkName);
		Order_Window.SetItemText(nItem, 4, cup_size);
		Order_Window.SetItemText(nItem, 5, type);
		Order_Window.SetItemText(nItem, 6, price);
		Order_Window.SetItemText(nItem, 7, serial);
	}
}

void CRestaurantProjDlg::OnFileNew32771() // Menu - new;
{
	Order_Window.DeleteAllItems();
	sprite.SetCheck(0);
	Coke.SetCheck(0);
	fanta.SetCheck(0);
	applej.SetCheck(0);
	entrecote.SetCheck(0);
	fillet.SetCheck(0);
	sinta.SetCheck(0);
	M.SetCheck(0);
	MW.SetCheck(0);
	MR.SetCheck(0);
	cosmo.SetCheck(0);
	mojito.SetCheck(0);
	whiskey.SetCheck(0);
	BigCup.SetCheck(0);
	MediumCup.SetCheck(0);
	SmallCup.SetCheck(0);
	Order_C.EnableWindow(false);
	Order_S.EnableWindow(false);
	softish.EnableWindow(false);
	change_cock.EnableWindow(false);
	change_steak.EnableWindow(false);
	M.EnableWindow(TRUE);
	MW.EnableWindow(TRUE);
	MR.EnableWindow(TRUE);
	BigCup.EnableWindow(TRUE);
	SmallCup.EnableWindow(TRUE);
	MediumCup.EnableWindow(TRUE);
	MyOrder.ReseTotalPrice();
	tip = 0;
}


void CRestaurantProjDlg::OnFileOpen32772() // Menu - Open
{
	int isCartEmpty = MyOrder.getAmount();
	if (isCartEmpty == 0)
	{
		char strFilter[] = { "Restaurant Order Files (*.Rest)|*.Rest|" };
		CFileDialog myOpenFileDialog(TRUE, CString(".txt"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, CString(strFilter));
		if (myOpenFileDialog.DoModal() == IDOK)
		{
			if (myOpenFileDialog.GetFileExt() == _T("Rest"))
			{

				CString fullPathName = myOpenFileDialog.GetPathName();
				if (File::importFromFile(&MyOrder, fullPathName))
				{
					Display();
					MessageBox(_T("Your order was loaded successfully.\nYou may modify it or continue to checkout."));
				}
				else
				{
					AfxMessageBox(_T("Could not open file specified"));
				}

			}
			else
			{
				AfxMessageBox(_T("File format is ileagal. You must select a '.Rest' file."));
			}
		}
	}
	else {
		AfxMessageBox(_T("To load a saved order your cart must be empty, please empty your cart first."));
	}
}



void CRestaurantProjDlg::OnFileSave32773() // Menu - Save
{
	if (MyOrder.getAmount() != 0)
	{
		char strFilter[] = { "Restaurant Order Files (*.Rest)|*.Rest|" };
		CFileDialog mySelectFolderDialog(FALSE, CString(".txt"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, CString(strFilter));
		if (mySelectFolderDialog.DoModal() == IDOK)
		{
			CString fullPathName = mySelectFolderDialog.GetPathName();
			File::exportOrderToFile(&MyOrder, fullPathName);

			CString finalMessage = _T("Your Order been saved to ") + fullPathName + _T(" successfully.\nYou can load it any time by clicking on 'Load saved order' button.");
			MessageBox(finalMessage);
		}
	}
	else
	{
		AfxMessageBox(_T("Your order is currently empty, please add one or more items."));
	}
	// TODO: Add your command handler code here
}



void CRestaurantProjDlg::OnBnClickedButton7() // change order
{
	nItemToChange = Order_Window.GetNextItem(nItemToChange, LVNI_SELECTED);

	if (nItemToChange == -1)
	{
		AfxMessageBox(_T("No Product was selected, please select a product to change."));
	}
	else
	{
		CString ProductName = Order_Window.GetItemText(nItemToChange, 0);
		CString DrinkName = Order_Window.GetItemText(nItemToChange, 1);
		CString productSerial = Order_Window.GetItemText(nItemToChange, 7);
		CString level = _T("");
		SerialToChange = _ttoi(productSerial);
		if (ProductName == _T("Entrecote") || ProductName == _T("Fillet") || ProductName == _T("Sinta"))
		{
			Remove_O.EnableWindow(false);
			Change_O.EnableWindow(false);
			Pay.EnableWindow(false);
			Exit_R.EnableWindow(false);
			Order_C.EnableWindow(false);
			Order_S.EnableWindow(false);
			softish.EnableWindow(false);
			change_steak.EnableWindow(true);
	
		}
		if (DrinkName == _T("Mojito") || DrinkName == _T("Cosmopolitan") || DrinkName == _T("Whiskey-Sour"))
		{
			Remove_O.EnableWindow(false);
			Change_O.EnableWindow(false);
			Pay.EnableWindow(false);
			Exit_R.EnableWindow(false);
			Order_C.EnableWindow(false);
			Order_S.EnableWindow(false);
			softish.EnableWindow(false);
			change_cock.EnableWindow(true);
		}
	}
	// TODO: Add your control notification handler code here
}


void CRestaurantProjDlg::OnBnClickedButton8() // PAY
{
	CString Total;
	if (!(MyOrder.calculateTotalPrice()))
	{
		MessageBox(_T("You didn't ordered any product"));
	}
	else
	{
		Total.Format(_T(" Your bill is %g$ (%g$ Tip)\n Thank you, Adelle-Rest."), MyOrder.calculateTotalPrice() + tip,tip );
		MessageBox(Total);
		OnFileNew32771();
	}
	
	
	// TODO: Add your control notification handler code here
}


void CRestaurantProjDlg::OnBnClickedButton9()// change cocktail
{
	restaurant* cocktailish = (drinks*)MyOrder.getProductBySerial(SerialToChange);



	if (mojito.GetCheck())
	{
		if (BigCup.GetCheck())
		{
			cocktailish->set_newprice(15);
			cocktailish->set_name(_T("Mojito"));
			cocktailish->set_size(_T("500"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Mojito"));
			Order_Window.SetItemText(nItemToChange, 4, _T("500"));
			Order_Window.SetItemText(nItemToChange, 6, _T("15$"));

		}
		if (MediumCup.GetCheck())
		{
			cocktailish->set_newprice(10);
			cocktailish->set_name(_T("Mojito"));
			cocktailish->set_size(_T("350"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Mojito"));
			Order_Window.SetItemText(nItemToChange, 4, _T("350"));
			Order_Window.SetItemText(nItemToChange, 6, _T("10$"));
		}
		if (SmallCup.GetCheck())
		{
			cocktailish->set_newprice(5);
			cocktailish->set_name(_T("Mojito"));
			cocktailish->set_size(_T("200"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Mojito"));
			Order_Window.SetItemText(nItemToChange, 4, _T("200"));
			Order_Window.SetItemText(nItemToChange, 6, _T("5$"));

		}

	}
	if (whiskey.GetCheck())
	{
		if (BigCup.GetCheck())
		{
			cocktailish->set_newprice(15);
			cocktailish->set_name(_T("Whiskey-Sour"));
			cocktailish->set_size(_T("500"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Whiskey-Sour"));
			Order_Window.SetItemText(nItemToChange, 4, _T("500"));
			Order_Window.SetItemText(nItemToChange, 6, _T("15$"));

		}
		if (MediumCup.GetCheck())
		{
			cocktailish->set_newprice(10);
			cocktailish->set_name(_T("Whiskey-Sour"));
			cocktailish->set_size(_T("350"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Whiskey-Sour"));
			Order_Window.SetItemText(nItemToChange, 4, _T("350"));
			Order_Window.SetItemText(nItemToChange, 6, _T("10$"));
			
		}
		if (SmallCup.GetCheck())
		{
			cocktailish->set_newprice(5);
			cocktailish->set_name(_T("Whiskey-Sour"));
			cocktailish->set_size(_T("200"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Whiskey-Sour"));
			Order_Window.SetItemText(nItemToChange, 4, _T("200"));
			Order_Window.SetItemText(nItemToChange, 6, _T("5$"));

		}

	}
	if (cosmo.GetCheck())
	{

		if (BigCup.GetCheck())
		{
			cocktailish->set_newprice(15);
			cocktailish->set_name(_T("Cosmopolitan"));
			cocktailish->set_size(_T("500"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Cosmopolitan"));
			Order_Window.SetItemText(nItemToChange, 4, _T("500"));
			Order_Window.SetItemText(nItemToChange, 6, _T("15$"));

		}
		if (MediumCup.GetCheck())
		{
			cocktailish->set_newprice(10);
			cocktailish->set_name(_T("Cosmopolitan"));
			cocktailish->set_size(_T("350"));
			Order_Window.SetItemText(nItemToChange, 1, _T("Cosmopolitan"));
			Order_Window.SetItemText(nItemToChange, 4, _T("350"));
			Order_Window.SetItemText(nItemToChange, 6, _T("10$"));
		}
		if (SmallCup.GetCheck())
		{
			cocktailish->set_newprice(5);
			cocktailish->set_name(_T("Cosmopolitan"));
			cocktailish->set_size(_T("200")); 
			Order_Window.SetItemText(nItemToChange, 1, _T("Cosmopolitan"));
			Order_Window.SetItemText(nItemToChange, 4, _T("200"));
			Order_Window.SetItemText(nItemToChange, 6, _T("5$"));

		}
	}
	nItemToChange = -1;
	Remove_O.EnableWindow(true);
	Change_O.EnableWindow(true);
	Pay.EnableWindow(true);
	Exit_R.EnableWindow(true);
	Order_C.EnableWindow(true);
	Order_S.EnableWindow(false);
	softish.EnableWindow(false);
	change_cock.EnableWindow(false);
}


void CRestaurantProjDlg::OnBnClickedButton10()// change steak
{

	if (fillet.GetCheck())
	{
		if (MR.GetCheck())
		{
			restaurant* Steakish = (Fillet*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("MR"));
			Steakish->set_newprice(57);
			Steakish->set_size(_T("220"));
			Steakish->set_name(_T("Fillet"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Fillet"));
			Order_Window.SetItemText(nItemToChange, 2, _T("MR"));
			Order_Window.SetItemText(nItemToChange, 3, _T("220"));
			Order_Window.SetItemText(nItemToChange, 6, _T("57$"));

		}
		if (M.GetCheck())
		{
			restaurant* Steakish = (Fillet*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("M"));
			Steakish->set_newprice(57);
			Steakish->set_size(_T("220"));
			Steakish->set_name(_T("Fillet"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Fillet"));
			Order_Window.SetItemText(nItemToChange, 2, _T("M"));
			Order_Window.SetItemText(nItemToChange, 3, _T("220"));
			Order_Window.SetItemText(nItemToChange, 6, _T("57$"));
		}
		if (MW.GetCheck())
		{
			restaurant* Steakish = (Fillet*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("MW"));
			Steakish->set_newprice(57);
			Steakish->set_size(_T("220"));
			Steakish->set_name(_T("Fillet"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Fillet"));
			Order_Window.SetItemText(nItemToChange, 2, _T("MW"));
			Order_Window.SetItemText(nItemToChange, 3, _T("220"));
			Order_Window.SetItemText(nItemToChange, 6, _T("57$"));

		}

	}
	if (entrecote.GetCheck())
	{
		if (MR.GetCheck())
		{
			restaurant* Steakish = (Entrecote*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("MR"));
			Steakish->set_newprice(40);
			Steakish->set_size(_T("380"));
			Steakish->set_name(_T("Entrecote"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Entrecote"));
			Order_Window.SetItemText(nItemToChange, 2, _T("MR"));
			Order_Window.SetItemText(nItemToChange, 3, _T("380"));
			Order_Window.SetItemText(nItemToChange, 6, _T("40$"));
		}
		if (M.GetCheck())
		{
			restaurant* Steakish = (Entrecote*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("M"));
			Steakish->set_newprice(40);
			Steakish->set_size(_T("380"));
			Steakish->set_name(_T("Entrecote"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Entrecote"));
			Order_Window.SetItemText(nItemToChange, 2, _T("M"));
			Order_Window.SetItemText(nItemToChange, 3, _T("380"));
			Order_Window.SetItemText(nItemToChange, 6, _T("40$"));
		}
		if (MW.GetCheck())
		{
			restaurant* Steakish = (Entrecote*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("MW"));
			Steakish->set_newprice(40);
			Steakish->set_size(_T("380"));
			Steakish->set_name(_T("Entrecote"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Entrecote"));
			Order_Window.SetItemText(nItemToChange, 2, _T("MW"));
			Order_Window.SetItemText(nItemToChange, 3, _T("380"));
			Order_Window.SetItemText(nItemToChange, 6, _T("40$"));
		}

	}
	if (sinta.GetCheck())
	{

		if (MR.GetCheck())
		{
			restaurant* Steakish = (Sinta*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("MR"));
			Steakish->set_newprice(45);
			Steakish->set_size(_T("220"));
			Steakish->set_name(_T("Sinta"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Sinta"));
			Order_Window.SetItemText(nItemToChange, 2, _T("MR"));
			Order_Window.SetItemText(nItemToChange, 3, _T("220"));
			Order_Window.SetItemText(nItemToChange, 6, _T("45$"));
		}
		if (M.GetCheck())
		{
			restaurant* Steakish = (Sinta*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("M"));
			Steakish->set_newprice(45);
			Steakish->set_size(_T("220"));
			Steakish->set_name(_T("Sinta"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Sinta"));
			Order_Window.SetItemText(nItemToChange, 2, _T("M"));
			Order_Window.SetItemText(nItemToChange, 3, _T("220"));
			Order_Window.SetItemText(nItemToChange, 6, _T("45$"));
		}
		if (MW.GetCheck())
		{
			restaurant* Steakish = (Sinta*)MyOrder.getProductBySerial(SerialToChange);
			Steakish->set_level(_T("MW"));
			Steakish->set_newprice(45);
			Steakish->set_size(_T("220"));
			Steakish->set_name(_T("Sinta"));
			Order_Window.SetItemText(nItemToChange, 0, _T("Sinta"));
			Order_Window.SetItemText(nItemToChange, 2, _T("MW"));
			Order_Window.SetItemText(nItemToChange, 3, _T("220"));
			Order_Window.SetItemText(nItemToChange, 6, _T("45$"));
		}
	}
	nItemToChange = -1;
	Remove_O.EnableWindow(true);
	Change_O.EnableWindow(true);
	Pay.EnableWindow(true);
	Exit_R.EnableWindow(true);
	Order_C.EnableWindow(false);
	Order_S.EnableWindow(true);
	softish.EnableWindow(false);
	change_steak.EnableWindow(false);
	
}
