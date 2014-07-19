// 15RedView.h : interface of the CMy15RedView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15REDVIEW_H__35761DD2_51B7_40B3_B5EA_22994A9985C3__INCLUDED_)
#define AFX_15REDVIEW_H__35761DD2_51B7_40B3_B5EA_22994A9985C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMy15RedCntrItem;

class CMy15RedView : public CRichEditView
{
protected: // create from serialization only
	CMy15RedView();
	DECLARE_DYNCREATE(CMy15RedView)

// Attributes
public:
	CMy15RedDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15RedView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy15RedView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15RedView)
	afx_msg void OnDestroy();
	afx_msg void OnCenter();
	afx_msg void OnFont();
	afx_msg void OnItalic();
	afx_msg void OnLeft();
	afx_msg void OnRight();
	afx_msg void OnUndeline();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 15RedView.cpp
inline CMy15RedDoc* CMy15RedView::GetDocument()
   { return (CMy15RedDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15REDVIEW_H__35761DD2_51B7_40B3_B5EA_22994A9985C3__INCLUDED_)
