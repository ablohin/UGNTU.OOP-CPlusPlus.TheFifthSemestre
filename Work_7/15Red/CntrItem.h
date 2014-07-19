// CntrItem.h : interface of the CMy15RedCntrItem class
//

#if !defined(AFX_CNTRITEM_H__F3A7634B_E50E_49E8_9A72_44017325C793__INCLUDED_)
#define AFX_CNTRITEM_H__F3A7634B_E50E_49E8_9A72_44017325C793__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMy15RedDoc;
class CMy15RedView;

class CMy15RedCntrItem : public CRichEditCntrItem
{
	DECLARE_SERIAL(CMy15RedCntrItem)

// Constructors
public:
	CMy15RedCntrItem(REOBJECT* preo = NULL, CMy15RedDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE.
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer.

// Attributes
public:
	CMy15RedDoc* GetDocument()
		{ return (CMy15RedDoc*)CRichEditCntrItem::GetDocument(); }
	CMy15RedView* GetActiveView()
		{ return (CMy15RedView*)CRichEditCntrItem::GetActiveView(); }

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15RedCntrItem)
	public:
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	~CMy15RedCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CNTRITEM_H__F3A7634B_E50E_49E8_9A72_44017325C793__INCLUDED_)
