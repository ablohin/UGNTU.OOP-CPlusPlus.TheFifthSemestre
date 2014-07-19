// 15TexM.h : main header file for the 15TEXM application
//

#if !defined(AFX_15TEXM_H__C209D3CB_9B5E_4D8E_8F71_54181AE14982__INCLUDED_)
#define AFX_15TEXM_H__C209D3CB_9B5E_4D8E_8F71_54181AE14982__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMApp:
// See 15TexM.cpp for the implementation of this class
//

class CMy15TexMApp : public CWinApp
{
public:
	CMy15TexMApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15TexMApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy15TexMApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TEXM_H__C209D3CB_9B5E_4D8E_8F71_54181AE14982__INCLUDED_)
