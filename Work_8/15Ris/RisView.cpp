// RisView.cpp : implementation of the CRisView class
//

#include "stdafx.h"
#include "Ris.h"

#include "RisDoc.h"
#include "RisView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRisView

IMPLEMENT_DYNCREATE(CRisView, CView)

BEGIN_MESSAGE_MAP(CRisView, CView)
	//{{AFX_MSG_MAP(CRisView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRisView construction/destruction

CRisView::CRisView()
{
	// TODO: add construction code here

}

CRisView::~CRisView()
{
}

BOOL CRisView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CRisView drawing

void CRisView::OnDraw(CDC* pDC)
{
	CRisDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	CRect ClientR, R1[5];						// ���������� � 5 ������ �������
	GetClientRect(ClientR);						// �������� ���������� �������.
	CSize sz(60,30),sz2(100,50);					// ������ ����� ��������
	int rez,i,x,y,x0=ClientR.left+10,y0=ClientR.top+10; 
	x=x0+2*sz.cx; y=y0+10;
	int x1=x0,x2,y1=y0,y2;
   							//������� ����� � ����� � ���������  �� ������
	CPen penBlue,penRed,pen1,pen2,pen3,pen4,*pOldPen;
	CBrush *pOldBr,Br1(RGB(10,180,150)), Br2;

   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255)); 		//��������� �����
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 2, RGB(255, 0, 0));
   pen1.CreatePen(PS_SOLID | PS_COSMETIC, 4, RGB(0, 50, 255));	
   pen2.CreatePen(PS_SOLID | PS_COSMETIC, 4, RGB(255, 0, 50)); 
   pen3.CreatePen(PS_SOLID | PS_GEOMETRIC,5, RGB(0, 250, 20));
   pen4.CreatePen(PS_SOLID | PS_GEOMETRIC,4, RGB(50, 150, 50)); 

   CPoint P1(ClientR.right, ClientR.CenterPoint().y);
   CPoint P2(ClientR.CenterPoint().x, ClientR.right);

   pOldPen = pDC->SelectObject(&penBlue);    pDC->Arc(ClientR,P1,P2);  //�� 3� �� 6 ������ �����
   pDC->SelectObject(&penRed); 		     pDC->Arc(ClientR,P2,P1);	//�� 6 �� 3 �������
//-----------------------------------------------------
	pDC->TextOut(x,y,"����� ������. ������� ����� ���������"); 	y+=20;     
	pDC->TextOut(x,y,"1.������� ������-����������� - �����"); 		y+=20;
	pDC->TextOut(x,y,"2.�������������� ������ ���� ������� CreatePen"); 	y+=20;
	COLORREF oldColor;							//������ ���� ������
	oldColor=pDC->SetTextColor(RGB(255,0,0));			       //��� ��� ���� - �������
	pDC->TextOut(x,y,"3.������� ������ ���� ������� SelectObject"); 	y+=20;
	pDC->SetTextColor(RGB(255,0,200));					// ��� ������
	pDC->TextOut(x,y,"4. � ���������� ���� �� ������ ����"); 		y+=20;
	pDC->SetTextColor(oldColor);						// ����� ������ ����
	pDC->TextOut(x,y,"5.pOldPen = pDC->SelectObject(&penBlue)"); 	y+=20;
	pDC->TextOut(x,y,"6.����� ������ ����� ������ ���� pDC->SelectObject(pOldPen)");
		
	for(i=0;i<5;i++){								// ���� 5 ����������
		x2=x1+sz.cx; 		y2=y1+sz.cy;		R1[i].SetRect(x1,y1,x2,y2);
		x1+=(int)1.5*sz.cx; y1+=2*sz.cy;
	}//--------------------------------------------------------------------------------- 
	for(i=0;i<5;i++){								//������ 5 ��������
		CPoint Pn(R1[i].right, R1[i].CenterPoint().y); 			//��������� ��� � ���
		CPoint Pk(R1[i].CenterPoint().x, R1[i].right);  			//�����
		
		pDC->SelectObject(&pen1); 	pDC->Arc(R1[i], Pn,Pk); 	//�� 6 � �� 3 �����
		pDC->SelectObject(&pen2); 	pDC->Arc(R1[i],Pk,Pn);  	//�� 6 �� 3 ������� 
	}//---------------------------------------------------------------------------------
	//�������� ���� ��������
	x0=ClientR.right-10-sz.cx; y0=ClientR.top+10;//������ ���� ���� ����
	x1=x0; y1=y0;
	for(i=0;i<5;i++){								// ���� 5 ����������
		x2=x1+sz.cx; 		y2=y1+sz.cy;		R1[i].SetRect(x1,y1,x2,y2);
		x1-=(int)1.5*sz.cx; y1+=2*sz.cy;
	}// 
	for(i=0;i<5;i++){								//������ 5 ��������
		CPoint Pn(R1[i].right, R1[i].CenterPoint().y); 			//��������� ��� � ���
		CPoint Pk(R1[i].CenterPoint().x, R1[i].right);  			//�����
		
		pDC->SelectObject(&pen3); 	pDC->Arc(R1[i],Pn,Pk);	//�� 6 �� 3
		pDC->SelectObject(&pen4); 	pDC->Arc(R1[i],Pk,Pn);	//�� 6 �� 3 ������� 
	}//-----------------------
	x0=ClientR.left+10; 			y0=ClientR.CenterPoint().y;
	x1=x0+sz2.cx; 			y1=y0+sz2.cy;
	R1[0].SetRect(x0,y0,x1,y1);		R1[1]=R1[0]+CSize(400,10);
	CPoint Pn(x0+sz2.cx/2+10,y0), 	Pk(x1-10,y1-sz2.cy/2);
	
	pDC->SelectObject(&penRed); 	pOldBr=pDC->SelectObject(&Br1);	     //��� ���� � �����
	pDC->Chord(R1[0],Pn,Pk);						      //������� = ���� + �����
	x=200;  y=200;	pDC->MoveTo(x,y);					//������ �����
	rez=pDC->AngleArc(x,y,50,0.,360);				//�������� �� ������  ���� ���  
	if(!rez) pDC->TextOut(x+30,y+90,"AngleArc �� ��� ");

	Pn+=CSize(400,10); Pk+=CSize(400,10);
	pDC->Pie(R1[1],Pn,Pk);						//������
	CSize sz1(20,-10); 	R1[1]+=sz1; 	Pn+=sz1; 	Pk+=sz1;	//������� ����� �������
	pDC->Pie(R1[1],Pk,Pn);					// ������ ����� ������� ���������
	
	pDC->SelectObject(&penBlue);					//������ ����� �����
	pDC->MoveTo(x,y);		x=80; 		y=260; 	pDC->LineTo(x,y);
											//������ �������
	pDC->SelectObject(&penRed); 
	CPoint Ps[6];				Ps[0]=CPoint(x,y);
	Ps[1]=Ps[0]+sz;			Ps[4]=Ps[0]+CPoint(-60,30);	
	Ps[2]=Ps[0]+CPoint(30,80);		Ps[3]=Ps[0]+CPoint(-30,80);	
	pDC->Polygon(Ps,5);			
											// PolyLine
	x+=400; Ps[0]=CPoint(x,y);		pDC->LineTo(x,y);
	Ps[1]=Ps[0]+sz;			Ps[4]=Ps[0]+CPoint(-60,30);	
	Ps[2]=Ps[0]+CPoint(30,80);		Ps[3]=Ps[0]+CPoint(-30,80);	
	pDC->Polyline(Ps,5);	
	
	x-=120; y+= 40; 						//������� ��������� � �������
	Ps[0]=CPoint(x,y);			pDC->SelectObject(&penBlue); 
	Ps[1]=Ps[0]+CPoint(30,20);		Ps[4]=Ps[0]+CPoint(-30,20);	
	Ps[2]=Ps[0]+CPoint(16,50);		Ps[3]=Ps[0]+CPoint(-16,50);	
	Ps[5]=Ps[0];							//����� ���� ����� ��� ���������
	pDC->Polyline(Ps,6);						//������ ��������� �������

	COLORREF Col=RGB(0,0,255);		//���� ������ ���� ������� ������� �������
	COLORREF Col2=RGB(0,220,235);						//���� �����
	Br2.CreateSolidBrush(Col2); pDC->SelectObject(&Br2); 
	
	pDC->FloodFill(x-5,y+5,Col);			//�������� ������� ��� ������ Col=Blue
	x-=150;  							//��� ��� ���������� ������� 
	Ps[0]=CPoint(x,y);
	Ps[1]=Ps[0]+CPoint(30,20);		Ps[4]=Ps[0]+CPoint(-30,20);	
	Ps[2]=Ps[0]+CPoint(16,50);		Ps[3]=Ps[0]+CPoint(-16,50);	
	Ps[5]=Ps[0];							//����� ���� ����� ��� ���������
	pDC->Polyline(Ps,6);						//������ ��������� �������
									//� �������� ��������� ������
	// Initialize a LOGBRUSH structure.
	LOGBRUSH logBrush;
	logBrush.lbStyle = BS_HATCHED;
	logBrush.lbColor = RGB(255, 0, 20);
	logBrush.lbHatch = HS_FDIAGONAL; 	//HS_BDIAGONAL HS_DIAGCROSS HS_FDIAGONAL 
	CBrush Br3;						//HS_HORIZONTAL HS_VERTICAL //HS_CROSS
	Br3.CreateBrushIndirect(&logBrush);		//������������� ��������� �����
	pDC->SelectObject(&Br3);				// �������� ��������� �����
	//--------------
	 pDC->FloodFill(x-5,y+5,Col);		//�������� ������� ��� ������ Col=Blue

	pDC->SelectObject(pOldPen); pDC->SelectObject(pOldBr);    //������������ ������ 

}

/////////////////////////////////////////////////////////////////////////////
// CRisView printing

BOOL CRisView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CRisView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CRisView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CRisView diagnostics

#ifdef _DEBUG
void CRisView::AssertValid() const
{
	CView::AssertValid();
}

void CRisView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRisDoc* CRisView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRisDoc)));
	return (CRisDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRisView message handlers
