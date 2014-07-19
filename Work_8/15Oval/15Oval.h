// 15Oval.h : main header file for the 15OVAL application
//

#if !defined(AFX_15OVAL_H__1358C3B1_4A04_43ED_8F23_FD2E2CEABE84__INCLUDED_)
#define AFX_15OVAL_H__1358C3B1_4A04_43ED_8F23_FD2E2CEABE84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalApp:
// See 15Oval.cpp for the implementation of this class
//

class CMy15OvalApp : public CWinApp
{
public:
	CMy15OvalApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15OvalApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy15OvalApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15OVAL_H__1358C3B1_4A04_43ED_8F23_FD2E2CEABE84__INCLUDED_)
