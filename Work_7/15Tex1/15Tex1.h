// 15Tex1.h : main header file for the 15TEX1 application
//

#if !defined(AFX_15TEX1_H__66A88572_76C8_429E_BDBC_E507F342108B__INCLUDED_)
#define AFX_15TEX1_H__66A88572_76C8_429E_BDBC_E507F342108B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1App:
// See 15Tex1.cpp for the implementation of this class
//

class CMy15Tex1App : public CWinApp
{
public:
	CMy15Tex1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15Tex1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy15Tex1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TEX1_H__66A88572_76C8_429E_BDBC_E507F342108B__INCLUDED_)
