// 15TexMDoc.cpp : implementation of the CMy15TexMDoc class
//

#include "stdafx.h"
#include "15TexM.h"

#include "15TexMDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMDoc

IMPLEMENT_DYNCREATE(CMy15TexMDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy15TexMDoc, CDocument)
	//{{AFX_MSG_MAP(CMy15TexMDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMDoc construction/destruction

CMy15TexMDoc::CMy15TexMDoc()
{
	// TODO: add one-time construction code here

}

CMy15TexMDoc::~CMy15TexMDoc()
{
}

BOOL CMy15TexMDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy15TexMDoc serialization

void CMy15TexMDoc::Serialize(CArchive& ar)
{
	// CEditView contains an edit control which handles all serialization
	((CEditView*)m_viewList.GetHead())->SerializeRaw(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMDoc diagnostics

#ifdef _DEBUG
void CMy15TexMDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy15TexMDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMDoc commands
