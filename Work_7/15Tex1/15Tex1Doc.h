// 15Tex1Doc.h : interface of the CMy15Tex1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15TEX1DOC_H__430EB140_65C2_4577_A566_0A9C9B07779B__INCLUDED_)
#define AFX_15TEX1DOC_H__430EB140_65C2_4577_A566_0A9C9B07779B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15Tex1Doc : public CDocument
{
protected: // create from serialization only
	CMy15Tex1Doc();
	DECLARE_DYNCREATE(CMy15Tex1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15Tex1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy15Tex1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15Tex1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TEX1DOC_H__430EB140_65C2_4577_A566_0A9C9B07779B__INCLUDED_)
