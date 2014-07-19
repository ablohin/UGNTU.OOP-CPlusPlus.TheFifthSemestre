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

	CRect ClientR, R1[5];						// клиентский и 5 одинак прямоуг
	GetClientRect(ClientR);						// Получить клиентскую область.
	CSize sz(60,30),sz2(100,50);					// размер малых эллипсов
	int rez,i,x,y,x0=ClientR.left+10,y0=ClientR.top+10; 
	x=x0+2*sz.cx; y=y0+10;
	int x1=x0,x2,y1=y0,y2;
   							//Объявим перья и кисти и указатели  на старые
	CPen penBlue,penRed,pen1,pen2,pen3,pen4,*pOldPen;
	CBrush *pOldBr,Br1(RGB(10,180,150)), Br2;

   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255)); 		//инициализ перья
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 2, RGB(255, 0, 0));
   pen1.CreatePen(PS_SOLID | PS_COSMETIC, 4, RGB(0, 50, 255));	
   pen2.CreatePen(PS_SOLID | PS_COSMETIC, 4, RGB(255, 0, 50)); 
   pen3.CreatePen(PS_SOLID | PS_GEOMETRIC,5, RGB(0, 250, 20));
   pen4.CreatePen(PS_SOLID | PS_GEOMETRIC,4, RGB(50, 150, 50)); 

   CPoint P1(ClientR.right, ClientR.CenterPoint().y);
   CPoint P2(ClientR.CenterPoint().x, ClientR.right);

   pOldPen = pDC->SelectObject(&penBlue);    pDC->Arc(ClientR,P1,P2);  //от 3ч до 6 чертим синим
   pDC->SelectObject(&penRed); 		     pDC->Arc(ClientR,P2,P1);	//от 6 до 3 красным
//-----------------------------------------------------
	pDC->TextOut(x,y,"Проба перьев. Текущий шрифт системный"); 	y+=20;     
	pDC->TextOut(x,y,"1.Создаем обекты-инструменты - перья"); 		y+=20;
	pDC->TextOut(x,y,"2.Инициализируем нужное перо методом CreatePen"); 	y+=20;
	COLORREF oldColor;							//старый цвет текста
	oldColor=pDC->SetTextColor(RGB(255,0,0));			       //уст нов цвет - красный
	pDC->TextOut(x,y,"3.Активиз нужное перо методом SelectObject"); 	y+=20;
	pDC->SetTextColor(RGB(255,0,200));					// уст фиолет
	pDC->TextOut(x,y,"4. и запоминаем указ на старое перо"); 		y+=20;
	pDC->SetTextColor(oldColor);						// восст старый цвет
	pDC->TextOut(x,y,"5.pOldPen = pDC->SelectObject(&penBlue)"); 	y+=20;
	pDC->TextOut(x,y,"6.После работы восст старое перо pDC->SelectObject(pOldPen)");
		
	for(i=0;i<5;i++){								// иниц 5 прямоуголь
		x2=x1+sz.cx; 		y2=y1+sz.cy;		R1[i].SetRect(x1,y1,x2,y2);
		x1+=(int)1.5*sz.cx; y1+=2*sz.cy;
	}//--------------------------------------------------------------------------------- 
	for(i=0;i<5;i++){								//чертим 5 эллипсов
		CPoint Pn(R1[i].right, R1[i].CenterPoint().y); 			//конструир нач и кон
		CPoint Pk(R1[i].CenterPoint().x, R1[i].right);  			//точки
		
		pDC->SelectObject(&pen1); 	pDC->Arc(R1[i], Pn,Pk); 	//от 6 ч до 3 синим
		pDC->SelectObject(&pen2); 	pDC->Arc(R1[i],Pk,Pn);  	//от 6 до 3 красным 
	}//---------------------------------------------------------------------------------
	//обратный цикл эллипсов
	x0=ClientR.right-10-sz.cx; y0=ClientR.top+10;//начало прав верх угол
	x1=x0; y1=y0;
	for(i=0;i<5;i++){								// иниц 5 прямоуголь
		x2=x1+sz.cx; 		y2=y1+sz.cy;		R1[i].SetRect(x1,y1,x2,y2);
		x1-=(int)1.5*sz.cx; y1+=2*sz.cy;
	}// 
	for(i=0;i<5;i++){								//чертим 5 эллипсов
		CPoint Pn(R1[i].right, R1[i].CenterPoint().y); 			//конструир нач и кон
		CPoint Pk(R1[i].CenterPoint().x, R1[i].right);  			//точки
		
		pDC->SelectObject(&pen3); 	pDC->Arc(R1[i],Pn,Pk);	//от 6 до 3
		pDC->SelectObject(&pen4); 	pDC->Arc(R1[i],Pk,Pn);	//от 6 до 3 красным 
	}//-----------------------
	x0=ClientR.left+10; 			y0=ClientR.CenterPoint().y;
	x1=x0+sz2.cx; 			y1=y0+sz2.cy;
	R1[0].SetRect(x0,y0,x1,y1);		R1[1]=R1[0]+CSize(400,10);
	CPoint Pn(x0+sz2.cx/2+10,y0), 	Pk(x1-10,y1-sz2.cy/2);
	
	pDC->SelectObject(&penRed); 	pOldBr=pDC->SelectObject(&Br1);	     //уст перо и кисть
	pDC->Chord(R1[0],Pn,Pk);						      //сегмент = дуга + хорда
	x=200;  y=200;	pDC->MoveTo(x,y);					//чертим линию
	rez=pDC->AngleArc(x,y,50,0.,360);				//почемуне не чертит  дугу окр  
	if(!rez) pDC->TextOut(x+30,y+90,"AngleArc не раб ");

	Pn+=CSize(400,10); Pk+=CSize(400,10);
	pDC->Pie(R1[1],Pn,Pk);						//сектор
	CSize sz1(20,-10); 	R1[1]+=sz1; 	Pn+=sz1; 	Pk+=sz1;	//сдвинем точки прямоуг
	pDC->Pie(R1[1],Pk,Pn);					// второй кусок сектора сдвиутого
	
	pDC->SelectObject(&penBlue);					//чертим синюю линию
	pDC->MoveTo(x,y);		x=80; 		y=260; 	pDC->LineTo(x,y);
											//чертим полигон
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
	
	x-=120; y+= 40; 						//изменим положение и размеры
	Ps[0]=CPoint(x,y);			pDC->SelectObject(&penBlue); 
	Ps[1]=Ps[0]+CPoint(30,20);		Ps[4]=Ps[0]+CPoint(-30,20);	
	Ps[2]=Ps[0]+CPoint(16,50);		Ps[3]=Ps[0]+CPoint(-16,50);	
	Ps[5]=Ps[0];							//добав посл точку для замыкания
	pDC->Polyline(Ps,6);						//чертим замкнутую ломаную

	COLORREF Col=RGB(0,0,255);		//цвет синего пера которым чертили ломаную
	COLORREF Col2=RGB(0,220,235);						//цвет кисти
	Br2.CreateSolidBrush(Col2); pDC->SelectObject(&Br2); 
	
	pDC->FloodFill(x-5,y+5,Col);			//закрасим область огр цветом Col=Blue
	x-=150;  							//еще раз переместим ломаную 
	Ps[0]=CPoint(x,y);
	Ps[1]=Ps[0]+CPoint(30,20);		Ps[4]=Ps[0]+CPoint(-30,20);	
	Ps[2]=Ps[0]+CPoint(16,50);		Ps[3]=Ps[0]+CPoint(-16,50);	
	Ps[5]=Ps[0];							//добав посл точку для замыкания
	pDC->Polyline(Ps,6);						//чертим замкнутую ломаную
									//и закрасим штриховой кистью
	// Initialize a LOGBRUSH structure.
	LOGBRUSH logBrush;
	logBrush.lbStyle = BS_HATCHED;
	logBrush.lbColor = RGB(255, 0, 20);
	logBrush.lbHatch = HS_FDIAGONAL; 	//HS_BDIAGONAL HS_DIAGCROSS HS_FDIAGONAL 
	CBrush Br3;						//HS_HORIZONTAL HS_VERTICAL //HS_CROSS
	Br3.CreateBrushIndirect(&logBrush);		//инициализруем штриховую кисть
	pDC->SelectObject(&Br3);				// устанавл штриховую кисть
	//--------------
	 pDC->FloodFill(x-5,y+5,Col);		//закрасим область огр цветом Col=Blue

	pDC->SelectObject(pOldPen); pDC->SelectObject(pOldBr);    //восстановить старые 

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
