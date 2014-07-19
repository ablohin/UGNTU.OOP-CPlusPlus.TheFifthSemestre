#if !defined(AFX_SETDIALOG_H__E875CD43_9EE5_4003_8CAC_9C572ADE31F8__INCLUDED_)
#define AFX_SETDIALOG_H__E875CD43_9EE5_4003_8CAC_9C572ADE31F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SetDialog dialog

class SetDialog : public CDialog
{
// Construction
public:
	SetDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(SetDialog)
	enum { IDD = IDD_DIALOG1 };
	int		m_Color;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SetDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(SetDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETDIALOG_H__E875CD43_9EE5_4003_8CAC_9C572ADE31F8__INCLUDED_)
