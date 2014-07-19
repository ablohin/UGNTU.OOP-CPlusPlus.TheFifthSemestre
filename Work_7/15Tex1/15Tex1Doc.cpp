// 15Tex1Doc.cpp : implementation of the CMy15Tex1Doc class
//

#include "stdafx.h"
#include "15Tex1.h"

#include "15Tex1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1Doc

IMPLEMENT_DYNCREATE(CMy15Tex1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy15Tex1Doc, CDocument)
	//{{AFX_MSG_MAP(CMy15Tex1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1Doc construction/destruction

CMy15Tex1Doc::CMy15Tex1Doc()
{
	// TODO: add one-time construction code here

}

CMy15Tex1Doc::~CMy15Tex1Doc()
{
}

BOOL CMy15Tex1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	((CEditView*)m_viewList.GetHead())->SetWindowText(NULL);

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1Doc serialization

void CMy15Tex1Doc::Serialize(CArchive& ar)
{
	// CEditView contains an edit control which handles all serialization
	((CEditView*)m_viewList.GetHead())->SerializeRaw(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1Doc diagnostics

#ifdef _DEBUG
void CMy15Tex1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy15Tex1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1Doc commands
