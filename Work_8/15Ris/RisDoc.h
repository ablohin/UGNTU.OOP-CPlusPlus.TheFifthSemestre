// RisDoc.h : interface of the CRisDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_RISDOC_H__C15FFD22_A40A_41B3_AAD2_444704AF757D__INCLUDED_)
#define AFX_RISDOC_H__C15FFD22_A40A_41B3_AAD2_444704AF757D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CRisDoc : public CDocument
{
protected: // create from serialization only
	CRisDoc();
	DECLARE_DYNCREATE(CRisDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRisDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRisDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRisDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RISDOC_H__C15FFD22_A40A_41B3_AAD2_444704AF757D__INCLUDED_)
