// 15Red.h : main header file for the 15RED application
//

#if !defined(AFX_15RED_H__FB1C5A2C_CCFE_4D0A_8C42_C27C8D606698__INCLUDED_)
#define AFX_15RED_H__FB1C5A2C_CCFE_4D0A_8C42_C27C8D606698__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy15RedApp:
// See 15Red.cpp for the implementation of this class
//

class CMy15RedApp : public CWinApp
{
public:
	CMy15RedApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15RedApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy15RedApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15RED_H__FB1C5A2C_CCFE_4D0A_8C42_C27C8D606698__INCLUDED_)
