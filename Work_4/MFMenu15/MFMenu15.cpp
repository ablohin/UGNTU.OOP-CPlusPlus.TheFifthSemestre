#include <afxwin.h>				// 			Файл MFMenu.cpp
#include "resource.h"
// 					Главный класс CMFMenuApp наследуем от CWinApp
class CMFMenuApp: public CWinApp
{
public:
	virtual BOOL InitInstance();		//	будем переопределим метод
};
CMFMenuApp MFMenuApp;				//	создаем объект нашего класса
//----------------------------------------------------------------
// 			Класс CMFMenuWindow - главное окно наследуем от CFrameWnd
class CMFMenuWindow: public CFrameWnd
{
public:
	CMFMenuWindow();				//	конструктор
	afx_msg void MenuCommand();		//	методы обработки ком меню
	afx_msg void ExitApp();
	DECLARE_MESSAGE_MAP();		//макрокоманда для обработки сообщений
};
//------------------------------------------------------------
void CMFMenuWindow::MenuCommand()		//	команда меню  Beep
{
	MessageBeep(0);
}
void CMFMenuWindow::ExitApp()			//	метод ExitApp
{
	DestroyWindow();
}//-------------------------------------------------------------
//обычно эту таблицу вставляет AppWizard		ТАБЛИЦА  СОБЩЕНИЙ
BEGIN_MESSAGE_MAP(CMFMenuWindow, CFrameWnd)
	ON_COMMAND(ID_TEST_BEEP, MenuCommand)
	ON_COMMAND(ID_TEST_EXIT, ExitApp)
END_MESSAGE_MAP()
//================================================================
BOOL CMFMenuApp::InitInstance()			//	переопределим метод
{
	m_pMainWnd=new CMFMenuWindow();		//	создаем объект класса
	m_pMainWnd->ShowWindow(	m_nCmdShow);	//отображаем окно на экране
	m_pMainWnd->UpdateWindow();			//обновить содержимое окна
	return TRUE;
}//===============================================================
CMFMenuWindow::CMFMenuWindow()	//	конструктор	CMFMenuWundow
{
Create(NULL,"Привет MFC!", WS_OVERLAPPEDWINDOW,
		rectDefault, NULL, MAKEINTRESOURCE(IDR_MENU));
//							создаем окно класса COknoWindow
}//----------------------------------------------------------------
