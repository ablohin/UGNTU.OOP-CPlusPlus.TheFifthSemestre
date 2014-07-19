// Ris.h : main header file for the RIS application
//

#if !defined(AFX_RIS_H__9A57B4A6_6514_40B7_BC35_6CFD30CD23CA__INCLUDED_)
#define AFX_RIS_H__9A57B4A6_6514_40B7_BC35_6CFD30CD23CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CRisApp:
// See Ris.cpp for the implementation of this class
//

class CRisApp : public CWinApp
{
public:
	CRisApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRisApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CRisApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RIS_H__9A57B4A6_6514_40B7_BC35_6CFD30CD23CA__INCLUDED_)
