// RisDoc.cpp : implementation of the CRisDoc class
//

#include "stdafx.h"
#include "Ris.h"

#include "RisDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRisDoc

IMPLEMENT_DYNCREATE(CRisDoc, CDocument)

BEGIN_MESSAGE_MAP(CRisDoc, CDocument)
	//{{AFX_MSG_MAP(CRisDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRisDoc construction/destruction

CRisDoc::CRisDoc()
{
	// TODO: add one-time construction code here

}

CRisDoc::~CRisDoc()
{
}

BOOL CRisDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CRisDoc serialization

void CRisDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CRisDoc diagnostics

#ifdef _DEBUG
void CRisDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CRisDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRisDoc commands
