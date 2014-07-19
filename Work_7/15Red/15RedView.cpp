// 15RedView.cpp : implementation of the CMy15RedView class
//

#include "stdafx.h"
#include "15Red.h"

#include "15RedDoc.h"
#include "CntrItem.h"
#include "15RedView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15RedView

IMPLEMENT_DYNCREATE(CMy15RedView, CRichEditView)

BEGIN_MESSAGE_MAP(CMy15RedView, CRichEditView)
	//{{AFX_MSG_MAP(CMy15RedView)
	ON_WM_DESTROY()
	ON_COMMAND(IDR_CENTER, OnCenter)
	ON_COMMAND(IDR_FONT, OnFont)
	ON_COMMAND(IDR_ITALIC, OnItalic)
	ON_COMMAND(IDR_LEFT, OnLeft)
	ON_COMMAND(IDR_RIGHT, OnRight)
	ON_COMMAND(IDR_UNDELINE, OnUndeline)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CRichEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CRichEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRichEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15RedView construction/destruction

CMy15RedView::CMy15RedView()
{
	// TODO: add construction code here

}

CMy15RedView::~CMy15RedView()
{
}

BOOL CMy15RedView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRichEditView::PreCreateWindow(cs);
}

void CMy15RedView::OnInitialUpdate()
{
	CRichEditView::OnInitialUpdate();


	// Set the printing margins (720 twips = 1/2 inch).
	SetMargins(CRect(720, 720, 720, 720));
}

/////////////////////////////////////////////////////////////////////////////
// CMy15RedView printing

BOOL CMy15RedView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}


void CMy15RedView::OnDestroy()
{
	// Deactivate the item on destruction; this is important
	// when a splitter view is being used.
   CRichEditView::OnDestroy();
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pActiveItem->GetActiveView() == this)
   {
      pActiveItem->Deactivate();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
}


/////////////////////////////////////////////////////////////////////////////
// CMy15RedView diagnostics

#ifdef _DEBUG
void CMy15RedView::AssertValid() const
{
	CRichEditView::AssertValid();
}

void CMy15RedView::Dump(CDumpContext& dc) const
{
	CRichEditView::Dump(dc);
}

CMy15RedDoc* CMy15RedView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy15RedDoc)));
	return (CMy15RedDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15RedView message handlers

void CMy15RedView::OnCenter() 
{
	// добавить сюда код обработчика
	OnParaAlign(PFA_CENTER);
}

void CMy15RedView::OnFont() 
{
	// добавить сюда код обработчика
	CHARFORMAT&		cf = GetCharFormatSelection();
	cf.dwMask			|= CFM_COLOR;
	cf.yHeight			= 600;
	cf.crTextColor		= RGB( 0, 0, 255 );
	cf.bCharSet			= ANSI_CHARSET;
	cf.bPitchAndFamily	= VARIABLE_PITCH | FF_ROMAN;
	strcpy(cf.szFaceName, "MS Sans Serif");
	if(cf.dwEffects & CFE_AUTOCOLOR) cf.dwEffects = 0;
	
	SetCharFormat( cf );

}

void CMy15RedView::OnItalic() 
{
	// добавить сюда код обработчика
	OnCharEffect(CFM_ITALIC, CFE_ITALIC);	
}

void CMy15RedView::OnLeft() 
{
	// добавить сюда код обработчика 
	OnParaAlign(PFA_LEFT);
}

void CMy15RedView::OnRight() 
{
	// добавить сюда код обработчика
	OnParaAlign(PFA_RIGHT);
}

void CMy15RedView::OnUndeline() 
{
	// добавить сюда код обработчика
	OnCharEffect(CFM_UNDERLINE, CFE_UNDERLINE);

}
