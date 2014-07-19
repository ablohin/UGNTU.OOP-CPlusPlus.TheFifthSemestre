// 15TexMDoc.h : interface of the CMy15TexMDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15TEXMDOC_H__73067207_1324_4A14_88E7_11FF08E9AB4D__INCLUDED_)
#define AFX_15TEXMDOC_H__73067207_1324_4A14_88E7_11FF08E9AB4D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15TexMDoc : public CDocument
{
protected: // create from serialization only
	CMy15TexMDoc();
	DECLARE_DYNCREATE(CMy15TexMDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15TexMDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy15TexMDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15TexMDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TEXMDOC_H__73067207_1324_4A14_88E7_11FF08E9AB4D__INCLUDED_)
