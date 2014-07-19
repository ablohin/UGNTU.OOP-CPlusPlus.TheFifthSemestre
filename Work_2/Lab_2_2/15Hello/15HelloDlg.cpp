// 15HelloDlg.cpp : implementation file
//

#include "stdafx.h"
#include "15Hello.h"
#include "15HelloDlg.h"

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
// CMy15HelloDlg dialog

CMy15HelloDlg::CMy15HelloDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy15HelloDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMy15HelloDlg)
	m_You = _T("");
	m_Comp = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy15HelloDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMy15HelloDlg)
	DDX_Text(pDX, IDC_EDYou, m_You);
	DDV_MaxChars(pDX, m_You, 50);
	DDX_Text(pDX, IDC_EDComp, m_Comp);
	DDV_MaxChars(pDX, m_Comp, 80);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMy15HelloDlg, CDialog)
	//{{AFX_MSG_MAP(CMy15HelloDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_You, OnYou)
	ON_BN_CLICKED(IDC_Comp, OnComp)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15HelloDlg message handlers

BOOL CMy15HelloDlg::OnInitDialog()
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
    Count=0;
	Flag=FALSE;
	m_You="";
	m_Comp="";
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy15HelloDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMy15HelloDlg::OnPaint() 
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
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy15HelloDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMy15HelloDlg::OnYou() 
{
// TODO: Add your control notification handler code here
switch(++Count)					//  Вставляем
{ 	// Первый щелк
case 1: m_You="Привет, Компьютер!"; UpdateData(FALSE);     break;
case 2: m_You="Компьютер, проснись!";UpdateData(FALSE);   break;   // Второй щелк
case 3: m_You="Поздоровайся, наконец!";UpdateData(FALSE); break;  // Третий щелк	
}
}

void CMy15HelloDlg::OnComp() 
{ // TODO: Add your control notification handler code here
CString s1="Совет дня: Никогда не разговаривайте с неизвестными Ваше имя пожалуйста",
	s2="";
if(Count >=3)
		if(!Flag){
			m_Comp=s1; m_You="";
			Flag=TRUE; UpdateData(FALSE);
		}
		else{	UpdateData(TRUE);
			if(m_You=="") m_You="люди ";
			m_Comp="Здравствуйте,"+m_You+"!Всегда рад с вами работать!"; 
			m_You="";
			UpdateData(FALSE);	
		}
}
HBRUSH CMy15HelloDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
	pDC->SetBkMode(TRANSPARENT);
	hbr=CreateSolidBrush(RGB(0,0,255)); 
	// TODO: Return a different brush if the default is not desired
	return hbr;
}
