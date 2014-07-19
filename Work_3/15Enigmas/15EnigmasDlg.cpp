// 15EnigmasDlg.cpp : implementation file
//

#include "stdafx.h"
#include "15Enigmas.h"
#include "15EnigmasDlg.h"

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
// CMy15EnigmasDlg dialog

CMy15EnigmasDlg::CMy15EnigmasDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy15EnigmasDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMy15EnigmasDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy15EnigmasDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMy15EnigmasDlg)
	DDX_Control(pDX, IDC_EDEnigmas, m_Enigmas);
	DDX_Control(pDX, IDC_EDOtvet, m_Otvet);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMy15EnigmasDlg, CDialog)
	//{{AFX_MSG_MAP(CMy15EnigmasDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_Enigmas, OnEnigmas)
	ON_BN_CLICKED(IDC_Otvet, OnOtvet)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15EnigmasDlg message handlers

BOOL CMy15EnigmasDlg::OnInitDialog()
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
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy15EnigmasDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMy15EnigmasDlg::OnPaint() 
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
HCURSOR CMy15EnigmasDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMy15EnigmasDlg::OnEnigmas() 
{
	// TODO: Add your control notification handler code here
	switch(++Count){								       // Вставляем
	case 1: m_Enigmas.SetWindowText("Не говорит,Не поёт,А кто к хозяину идёт -Она знать даёт.");m_Otvet.SetWindowText("");      	    break;        
	case 2: m_Enigmas.SetWindowText("Стоит на горке в красной рубашке Егорка.Кто не пройдёт,Всяк поклонится.");m_Otvet.SetWindowText("");  break;       
	case 3: m_Enigmas.SetWindowText("Стоит Антошка на одной ножке;Его ищут,А он не откликается."); m_Otvet.SetWindowText("");break;      
	case 4: m_Enigmas.SetWindowText("Ползун ползёт,Иголки везёт."); m_Otvet.SetWindowText("");break;      
	case 5: m_Enigmas.SetWindowText("ПКрасна девица, сидит в темнице,а коса на улице.");m_Otvet.SetWindowText(""); break; 
	default: m_Enigmas.SetWindowText("Загадки кончились жми выход умник");m_Otvet.SetWindowText(""); break; 	
}

}

void CMy15EnigmasDlg::OnOtvet() 
{
	// TODO: Add your control notification handler code here
CString s2="";
switch(Count){
case 1: m_Otvet.GetWindowText(s2); if(s2=="Собака") m_Otvet.SetWindowText("Ваш ответ,"+s2+"Правильный!");else m_Otvet.SetWindowText("Ваш ответ,"+s2+"!Непрвильный"); break;
case 2: m_Otvet.GetWindowText(s2); if(s2=="Земляника") m_Otvet.SetWindowText("Ваш ответ,"+s2+"Правильный!");else m_Otvet.SetWindowText("Ваш ответ,"+s2+"!Непрвильный"); break;
case 3: m_Otvet.GetWindowText(s2); if(s2=="Гриб") m_Otvet.SetWindowText("Ваш ответ,"+s2+"Правильный!");else m_Otvet.SetWindowText("Ваш ответ,"+s2+"!Непрвильный"); break;
case 4: m_Otvet.GetWindowText(s2); if(s2=="Ёж")m_Otvet.SetWindowText("Ваш ответ,"+s2+"Правильный!");else m_Otvet.SetWindowText("Ваш ответ,"+s2+"!Непрвильный"); break;
case 5: m_Otvet.GetWindowText(s2); if(s2=="Морковь") m_Otvet.SetWindowText("Ваш ответ,"+s2+"Правильный!");else m_Otvet.SetWindowText("Ваш ответ,"+s2+"!Непрвильный"); break;
}
}

