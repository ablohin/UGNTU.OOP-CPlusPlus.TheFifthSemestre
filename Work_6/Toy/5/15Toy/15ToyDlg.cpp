// 15ToyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "15Toy.h"
#include "15ToyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15ToyDlg dialog

CMy15ToyDlg::CMy15ToyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy15ToyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMy15ToyDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy15ToyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMy15ToyDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMy15ToyDlg, CDialog)
	//{{AFX_MSG_MAP(CMy15ToyDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DESTROY()
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_Tuning, OnTuning)
	ON_BN_CLICKED(IDC_Exit, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15ToyDlg message handlers

BOOL CMy15ToyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
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
	int Result = SetTimer(1,10, NULL) ;
	if (Result == 0) { MessageBox ("Не могу установить Таймер"); }
	m_dlg.m_Color=0;			
	m_Rad=50;
	m_Dir=1;						
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy15ToyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy15ToyDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

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
else{
		// MessageBeep((WORD)-1);		// отключим эксперим звук
		CPaintDC dc(this);
		CPen NewPen,  *OldPen;
		CBrush  NewBrush, * OldBrush;
		static DWORD cv[3]={ RGB(255,0,50), RGB(0,255,150), RGB(0,10,255)};
		int cb, cp=m_dlg.m_Color;	cb=(cp+2)%3;		// cp, cb -  текущ. цвета пера и кисти
		NewPen.CreatePen(PS_SOLID,5,cv[cp]);		// установка цвета нового пера
		NewBrush.CreateSolidBrush(cv[cb]);		// установка цвета новой кисти
		
		OldBrush = dc.SelectObject(&NewBrush);		//выделяем объекты - перо и кисть
		OldPen    = dc.SelectObject(&NewPen);		//и запоминаем их старые значения
		
		CRect Rectan(20,10,20+m_Rad*2,10+m_Rad*2);	
		dc.Ellipse(&Rectan);					//  рисуем круг
		dc.SelectObject(OldPen);	dc.SelectObject(OldBrush);  // восстановим перо и кисть
		CDialog::OnPaint();						
     }
}// ------  конец  OnPaint  ------------------------


// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy15ToyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMy15ToyDlg::OnDestroy() 
{
	
	// TODO: Add your message handler code here
	CDialog::OnDestroy();
	KillTimer(1);
}

void CMy15ToyDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	//MessageBeep((WORD)-1);
	m_Rad += m_Dir;
	if (m_Rad==100) m_Dir=-1;		
	if (m_Rad== 0)  m_Dir=1;		
	Invalidate();
	CDialog::OnTimer(nIDEvent);			
}



void CMy15ToyDlg::OnTuning() 
{
	// TODO: Add your control notification handler code here
	m_dlg.DoModal();
}

void CMy15ToyDlg::OnExit() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}
