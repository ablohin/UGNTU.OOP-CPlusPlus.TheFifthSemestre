// 15RedDoc.h : interface of the CMy15RedDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15REDDOC_H__CAD3C300_2A11_49E1_A22D_0A2C38F90954__INCLUDED_)
#define AFX_15REDDOC_H__CAD3C300_2A11_49E1_A22D_0A2C38F90954__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15RedDoc : public CRichEditDoc
{
protected: // create from serialization only
	CMy15RedDoc();
	DECLARE_DYNCREATE(CMy15RedDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15RedDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL
	virtual CRichEditCntrItem* CreateClientItem(REOBJECT* preo) const;

// Implementation
public:
	virtual ~CMy15RedDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15RedDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15REDDOC_H__CAD3C300_2A11_49E1_A22D_0A2C38F90954__INCLUDED_)
