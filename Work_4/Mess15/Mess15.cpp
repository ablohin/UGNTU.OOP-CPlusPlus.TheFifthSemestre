#include "afxwin.h"
#include "resource.h"

// Главный класс CMessApp  приложения  наследуем от CWinApp
class CMessApp: public CWinApp
{
public:	
	virtual BOOL InitInstance(); // переопределим метод InitInstance
	afx_msg void AppMessageCommand();
//	afx_msg void ExitApp();
	DECLARE_MESSAGE_MAP()
};

CMessApp MessApp; // создаем объект нашего класса
//----------------------------------
// Класс CMessageWindow - главное окно приложения  наследуем от CFrameWnd
class CMessWnd: public CFrameWnd
{
public:
	CMessWnd();	// конструктор
	//						               методы обработки ком меню
	afx_msg void FrameMessageCommand();
	afx_msg void ExitApp();
	
	DECLARE_MESSAGE_MAP()        //  макрокоманда для обработки сообщений
};
//----------------------------------------- команда из базового класса
void CMessWnd::FrameMessageCommand()
{
	::MessageBox(NULL,
			"Команда посланная из класса окна CMessWnd",
			"Message",MB_OK);
}//----------------------------------------- команда из класса приложения
void CMessApp::AppMessageCommand()
{
	::MessageBox(NULL,
			"Команда посланная из класса приложения CMessApp ",
			"Message",MB_OK);
}
//------------------	ТАБЛИЦА  СОБЩЕНИЙ класса CMessApp
//
BEGIN_MESSAGE_MAP(CMessApp, CWinApp)
	ON_COMMAND(ID_TEST_INAPPCLASS, AppMessageCommand)
	ON_COMMAND(ID_TEST_INBOTHCLASS, AppMessageCommand)
//	ON_COMMAND(ID_TEST_EXIT, ExitApp)
END_MESSAGE_MAP()
//------------		  ТАБЛИЦА  СОБЩЕНИЙ класса CMessWnd
//
BEGIN_MESSAGE_MAP(CMessWnd, CFrameWnd)
	ON_COMMAND(ID_TEST_INFRAIMCLASS, FrameMessageCommand)
	ON_COMMAND(ID_TEST_INBOTHCLASS, FrameMessageCommand)
	ON_COMMAND(ID_TEST_EXIT, ExitApp)
END_MESSAGE_MAP()

//===================================
//			                               	переопределим метод 
BOOL CMessApp::InitInstance(){
	//			создаем объект класса CMessageWindow
	m_pMainWnd=new CMessWnd();
	//			        отображаем окно, параметр m_nCmdShow задает режим
	m_pMainWnd->ShowWindow(	m_nCmdShow);			
	m_pMainWnd->UpdateWindow();   //		обновить содержимое окна
	return TRUE;
}//=======================================
//					конструктор	CMessWind,
CMessWnd::CMessWnd()	
{
	Create(NULL,"Окно класса CMessWnd", WS_OVERLAPPEDWINDOW,
				rectDefault, NULL, MAKEINTRESOURCE(IDR_MENU));
//		создаем окно класса CMessaWnd
}//-------------------------------------------	методы ExitApp
afx_msg void CMessWnd::ExitApp(){
	DestroyWindow();
}//-----------------------------------------------------
/*afx_msg void CMessApp::ExitApp(){
	::DestroyWindow();
}*/
