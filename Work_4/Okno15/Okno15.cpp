#include <afxwin.h>						// Файл Okno.cpp
//					 Главный класс COknoApp наследуем от CWinApp
class COknoApp: public CWinApp
{
public:
	virtual BOOL InitInstance();		// будем переопределим метод
};
COknoApp OknoApp; 				// создаем объект нашего класса 
//------------------------------------------------------------------
class COkno: public CFrameWnd		// Класс COkno наследуем от CFrameWnd
{
public:
	COkno();						// конструктор
};
//------------------------------------------------------------------
BOOL COknoApp::InitInstance()
{								//	переопределим метод 	
	m_pMainWnd=new COkno();			//	создаем объект класса 
//				отображаем окно на экране параметр m_nCmdShow задает режим
	m_pMainWnd->ShowWindow(m_nCmdShow);		
	m_pMainWnd->UpdateWindow();		//	обновить содержимое окна 
	return TRUE;
}//==================================================================
COkno::COkno()						//	конструктор	COkno
{
	Create(NULL,"Привет окно ! К сожалению не пишет"); 	//создаем окно класса COknoWindow
}
//==================================================================