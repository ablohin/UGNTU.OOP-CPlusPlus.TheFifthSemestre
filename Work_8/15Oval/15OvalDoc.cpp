// 15OvalDoc.cpp : implementation of the CMy15OvalDoc class
//

#include "stdafx.h"
#include "15Oval.h"

#include "15OvalDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalDoc

IMPLEMENT_DYNCREATE(CMy15OvalDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy15OvalDoc, CDocument)
	//{{AFX_MSG_MAP(CMy15OvalDoc)
	ON_COMMAND(ID_ED_DEC, OnDec)
	ON_COMMAND(ID_ED_INC, OnInc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalDoc construction/destruction

CMy15OvalDoc::CMy15OvalDoc()
{
	// TODO: add one-time construction code here

}

CMy15OvalDoc::~CMy15OvalDoc()
{
}

BOOL CMy15OvalDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	// TODO: add reinitialization code here - сюда вставляем
	m_Disk=CRect(20,20,150,200);
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy15OvalDoc serialization

void CMy15OvalDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
		ar<<m_Disk;
	}
	else
	{
		// TODO: add loading code here
		ar>>m_Disk;
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalDoc diagnostics

#ifdef _DEBUG
void CMy15OvalDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy15OvalDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalDoc commands

void CMy15OvalDoc::OnDec() 
{
	// TODO: Add your command handler code here
	m_Disk-=CRect(0,0,10,10);
	UpdateAllViews(NULL);
}//-----------------------------------


void CMy15OvalDoc::OnInc() 
{
	// TODO: Add your command handler code here
	m_Disk+=CRect(0,0,10,10);
	UpdateAllViews(NULL);
}//-----------------------------------

