// 15TexMView.h : interface of the CMy15TexMView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15TEXMVIEW_H__7ED3F662_5515_4008_8F48_40CE026B78BE__INCLUDED_)
#define AFX_15TEXMVIEW_H__7ED3F662_5515_4008_8F48_40CE026B78BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15TexMView : public CEditView
{
protected: // create from serialization only
	CMy15TexMView();
	DECLARE_DYNCREATE(CMy15TexMView)

// Attributes
public:
	CMy15TexMDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15TexMView)
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
	virtual ~CMy15TexMView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15TexMView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 15TexMView.cpp
inline CMy15TexMDoc* CMy15TexMView::GetDocument()
   { return (CMy15TexMDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TEXMVIEW_H__7ED3F662_5515_4008_8F48_40CE026B78BE__INCLUDED_)
