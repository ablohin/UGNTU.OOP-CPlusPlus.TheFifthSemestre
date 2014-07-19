// SetDialog.cpp : implementation file
//

#include "stdafx.h"
#include "15Toy.h"
#include "SetDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SetDialog dialog


SetDialog::SetDialog(CWnd* pParent /*=NULL*/)
	: CDialog(SetDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(SetDialog)
	m_Color = -1;
	//}}AFX_DATA_INIT
}


void SetDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(SetDialog)
	DDX_Radio(pDX, IDC_RADIO1, m_Color);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(SetDialog, CDialog)
	//{{AFX_MSG_MAP(SetDialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SetDialog message handlers
