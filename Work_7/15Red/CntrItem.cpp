// CntrItem.cpp : implementation of the CMy15RedCntrItem class
//

#include "stdafx.h"
#include "15Red.h"

#include "15RedDoc.h"
#include "15RedView.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15RedCntrItem implementation

IMPLEMENT_SERIAL(CMy15RedCntrItem, CRichEditCntrItem, 0)

CMy15RedCntrItem::CMy15RedCntrItem(REOBJECT* preo, CMy15RedDoc* pContainer)
	: CRichEditCntrItem(preo, pContainer)
{
	// TODO: add one-time construction code here
	
}

CMy15RedCntrItem::~CMy15RedCntrItem()
{
	// TODO: add cleanup code here
	
}

/////////////////////////////////////////////////////////////////////////////
// CMy15RedCntrItem diagnostics

#ifdef _DEBUG
void CMy15RedCntrItem::AssertValid() const
{
	CRichEditCntrItem::AssertValid();
}

void CMy15RedCntrItem::Dump(CDumpContext& dc) const
{
	CRichEditCntrItem::Dump(dc);
}
#endif

/////////////////////////////////////////////////////////////////////////////
