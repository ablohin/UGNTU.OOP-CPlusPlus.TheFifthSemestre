// 15Tex1View.cpp : implementation of the CMy15Tex1View class
//

#include "stdafx.h"
#include "15Tex1.h"

#include "15Tex1Doc.h"
#include "15Tex1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1View

IMPLEMENT_DYNCREATE(CMy15Tex1View, CEditView)

BEGIN_MESSAGE_MAP(CMy15Tex1View, CEditView)
	//{{AFX_MSG_MAP(CMy15Tex1View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1View construction/destruction

CMy15Tex1View::CMy15Tex1View()
{
	// TODO: add construction code here

}

CMy15Tex1View::~CMy15Tex1View()
{
}

BOOL CMy15Tex1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1View drawing

void CMy15Tex1View::OnDraw(CDC* pDC)
{
	CMy15Tex1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1View printing

BOOL CMy15Tex1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CMy15Tex1View::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CMy15Tex1View::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1View diagnostics

#ifdef _DEBUG
void CMy15Tex1View::AssertValid() const
{
	CEditView::AssertValid();
}

void CMy15Tex1View::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CMy15Tex1Doc* CMy15Tex1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy15Tex1Doc)));
	return (CMy15Tex1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15Tex1View message handlers
