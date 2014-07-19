// 15OvalDoc.h : interface of the CMy15OvalDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_15OVALDOC_H__7CDF1A51_E5B4_49DB_AD31_6340F08887EB__INCLUDED_)
#define AFX_15OVALDOC_H__7CDF1A51_E5B4_49DB_AD31_6340F08887EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy15OvalDoc : public CDocument
{
protected: // create from serialization only
	CMy15OvalDoc();
	DECLARE_DYNCREATE(CMy15OvalDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15OvalDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
     CRect m_Disk;  					// описывающий прямоугольник
     CRect  GetDisk( ) { return m_Disk; } 		// получить его параметры
	virtual ~CMy15OvalDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy15OvalDoc)
	afx_msg void OnDec();
	afx_msg void OnInc();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15OVALDOC_H__7CDF1A51_E5B4_49DB_AD31_6340F08887EB__INCLUDED_)
