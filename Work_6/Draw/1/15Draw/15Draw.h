// 15Draw.h : main header file for the 15DRAW application
//

#if !defined(AFX_15DRAW_H__B5229033_27E8_4643_BF95_C122E5AA25FA__INCLUDED_)
#define AFX_15DRAW_H__B5229033_27E8_4643_BF95_C122E5AA25FA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy15DrawApp:
// See 15Draw.cpp for the implementation of this class
//

class CMy15DrawApp : public CWinApp
{
public:
	CMy15DrawApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15DrawApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMy15DrawApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15DRAW_H__B5229033_27E8_4643_BF95_C122E5AA25FA__INCLUDED_)
