// 15Tex1View.h : interface of the CMy15Tex1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15TEX1VIEW_H__41EBBB3C_16D0_4595_8AB2_4224542F4B0C__INCLUDED_)
#define AFX_15TEX1VIEW_H__41EBBB3C_16D0_4595_8AB2_4224542F4B0C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15Tex1View : public CEditView
{
protected: // create from serialization only
	CMy15Tex1View();
	DECLARE_DYNCREATE(CMy15Tex1View)

// Attributes
public:
	CMy15Tex1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15Tex1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy15Tex1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15Tex1View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 15Tex1View.cpp
inline CMy15Tex1Doc* CMy15Tex1View::GetDocument()
   { return (CMy15Tex1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TEX1VIEW_H__41EBBB3C_16D0_4595_8AB2_4224542F4B0C__INCLUDED_)
