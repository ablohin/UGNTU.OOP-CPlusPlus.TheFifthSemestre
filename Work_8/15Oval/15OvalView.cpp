// 15OvalView.cpp : implementation of the CMy15OvalView class
//

#include "stdafx.h"
#include "15Oval.h"

#include "15OvalDoc.h"
#include "15OvalView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalView

IMPLEMENT_DYNCREATE(CMy15OvalView, CView)

BEGIN_MESSAGE_MAP(CMy15OvalView, CView)
	//{{AFX_MSG_MAP(CMy15OvalView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalView construction/destruction

CMy15OvalView::CMy15OvalView()
{
	// TODO: add construction code here

}

CMy15OvalView::~CMy15OvalView()
{
}

BOOL CMy15OvalView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalView drawing

void CMy15OvalView::OnDraw(CDC* pDC)
{
	CMy15OvalDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// ���� �������� ����������� ��� ��� ��������� �������
	CBrush newbrush, *oldbrush;			//�������� �����
	newbrush.CreateSolidBrush(RGB(0,255,128));	//���������������� ����� �����
	oldbrush=pDC->SelectObject(&newbrush);		//���������� ����� �����
	pDC->Ellipse(pDoc->GetDisk( ));	//����� ����� �������� �� pDoc ������� GetDisk
	pDC->SelectObject(oldbrush);			// ����������� ��������� �����
}//-----------------------------------------------------------------------------------------------------


/////////////////////////////////////////////////////////////////////////////
// CMy15OvalView printing

BOOL CMy15OvalView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy15OvalView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy15OvalView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalView diagnostics

#ifdef _DEBUG
void CMy15OvalView::AssertValid() const
{
	CView::AssertValid();
}

void CMy15OvalView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy15OvalDoc* CMy15OvalView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy15OvalDoc)));
	return (CMy15OvalDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy15OvalView message handlers

void CMy15OvalView::OnLButtonDown(UINT nFlags, CPoint point) 
{
		// ��������� ���� ��� �����������
	CMy15OvalDoc* pDoc = GetDocument();
	CRect oldrec=pDoc->m_Disk;
	int w=oldrec.Width(), h=oldrec.Height(); 	//�������� �����
	CPoint RD=point+CPoint(w,h);			//���������� ���������� Point + Point
	
	CRect newrec=CRect(point,RD); 		//������������� � ������� �����
		//pDoc->m_Disk+=p;			//���������� ��������� Rect + Point
	pDoc->m_Disk=newrec; 			// ������� ��� �� ����� ���������
	pDoc->UpdateAllViews(NULL);

	CView::OnLButtonDown(nFlags, point);
}//----------------------------------------------------------------------------------------------------
	
