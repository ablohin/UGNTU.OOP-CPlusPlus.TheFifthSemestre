// 15TexMView.cpp : implementation of the CMy15TexMView class
//

#include "stdafx.h"
#include "15TexM.h"

#include "15TexMDoc.h"
#include "15TexMView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMView

IMPLEMENT_DYNCREATE(CMy15TexMView, CEditView)

BEGIN_MESSAGE_MAP(CMy15TexMView, CEditView)
	//{{AFX_MSG_MAP(CMy15TexMView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMView construction/destruction

CMy15TexMView::CMy15TexMView()
{
	// TODO: add construction code here

}

CMy15TexMView::~CMy15TexMView()
{
}

BOOL CMy15TexMView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMView drawing

void CMy15TexMView::OnDraw(CDC* pDC)
{
	CMy15TexMDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMView printing

BOOL CMy15TexMView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CMy15TexMView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CMy15TexMView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMView diagnostics

#ifdef _DEBUG
void CMy15TexMView::AssertValid() const
{
	CEditView::AssertValid();
}

void CMy15TexMView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CMy15TexMDoc* CMy15TexMView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy15TexMDoc)));
	return (CMy15TexMDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15TexMView message handlers
