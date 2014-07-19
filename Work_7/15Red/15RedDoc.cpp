// 15RedDoc.cpp : implementation of the CMy15RedDoc class
//

#include "stdafx.h"
#include "15Red.h"

#include "15RedDoc.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15RedDoc

IMPLEMENT_DYNCREATE(CMy15RedDoc, CRichEditDoc)

BEGIN_MESSAGE_MAP(CMy15RedDoc, CRichEditDoc)
	//{{AFX_MSG_MAP(CMy15RedDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Enable default OLE container implementation
	ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, CRichEditDoc::OnUpdateEditLinksMenu)
	ON_COMMAND(ID_OLE_EDIT_LINKS, CRichEditDoc::OnEditLinks)
	ON_UPDATE_COMMAND_UI_RANGE(ID_OLE_VERB_FIRST, ID_OLE_VERB_LAST, CRichEditDoc::OnUpdateObjectVerbMenu)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15RedDoc construction/destruction

CMy15RedDoc::CMy15RedDoc()
{
	// TODO: add one-time construction code here

}

CMy15RedDoc::~CMy15RedDoc()
{
}

BOOL CMy15RedDoc::OnNewDocument()
{
	if (!CRichEditDoc::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

CRichEditCntrItem* CMy15RedDoc::CreateClientItem(REOBJECT* preo) const
{
	// cast away constness of this
	return new CMy15RedCntrItem(preo, (CMy15RedDoc*) this);
}



/////////////////////////////////////////////////////////////////////////////
// CMy15RedDoc serialization

void CMy15RedDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}

	// Calling the base class CRichEditDoc enables serialization
	//  of the container document's COleClientItem objects.
	// TODO: set CRichEditDoc::m_bRTF = FALSE if you are serializing as text
	CRichEditDoc::Serialize(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CMy15RedDoc diagnostics

#ifdef _DEBUG
void CMy15RedDoc::AssertValid() const
{
	CRichEditDoc::AssertValid();
}

void CMy15RedDoc::Dump(CDumpContext& dc) const
{
	CRichEditDoc::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15RedDoc commands
