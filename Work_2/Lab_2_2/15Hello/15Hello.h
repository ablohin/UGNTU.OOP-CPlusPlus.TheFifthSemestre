// 15Hello.h : main header file for the 15HELLO application
//

#if !defined(AFX_15HELLO_H__88F044F4_2DAC_43A8_A3DF_FD9FD8145E61__INCLUDED_)
#define AFX_15HELLO_H__88F044F4_2DAC_43A8_A3DF_FD9FD8145E61__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy15HelloApp:
// See 15Hello.cpp for the implementation of this class
//

class CMy15HelloApp : public CWinApp
{
public:
	CMy15HelloApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15HelloApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMy15HelloApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15HELLO_H__88F044F4_2DAC_43A8_A3DF_FD9FD8145E61__INCLUDED_)
