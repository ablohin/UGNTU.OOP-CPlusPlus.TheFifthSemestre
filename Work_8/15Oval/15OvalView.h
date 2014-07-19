// 15OvalView.h : interface of the CMy15OvalView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15OVALVIEW_H__14B72E95_6703_47CF_AA15_B1B8E2E53B07__INCLUDED_)
#define AFX_15OVALVIEW_H__14B72E95_6703_47CF_AA15_B1B8E2E53B07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15OvalView : public CView
{
protected: // create from serialization only
	CMy15OvalView();
	DECLARE_DYNCREATE(CMy15OvalView)

// Attributes
public:
	CMy15OvalDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15OvalView)
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
	virtual ~CMy15OvalView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15OvalView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 15OvalView.cpp
inline CMy15OvalDoc* CMy15OvalView::GetDocument()
   { return (CMy15OvalDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15OVALVIEW_H__14B72E95_6703_47CF_AA15_B1B8E2E53B07__INCLUDED_)
