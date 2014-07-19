#include <afxwin.h>				// 			���� MFMenu.cpp
#include "resource.h"
// 					������� ����� CMFMenuApp ��������� �� CWinApp
class CMFMenuApp: public CWinApp
{
public:
	virtual BOOL InitInstance();		//	����� ������������� �����
};
CMFMenuApp MFMenuApp;				//	������� ������ ������ ������
//----------------------------------------------------------------
// 			����� CMFMenuWindow - ������� ���� ��������� �� CFrameWnd
class CMFMenuWindow: public CFrameWnd
{
public:
	CMFMenuWindow();				//	�����������
	afx_msg void MenuCommand();		//	������ ��������� ��� ����
	afx_msg void ExitApp();
	DECLARE_MESSAGE_MAP();		//������������ ��� ��������� ���������
};
//------------------------------------------------------------
void CMFMenuWindow::MenuCommand()		//	������� ����  Beep
{
	MessageBeep(0);
}
void CMFMenuWindow::ExitApp()			//	����� ExitApp
{
	DestroyWindow();
}//-------------------------------------------------------------
//������ ��� ������� ��������� AppWizard		�������  ��������
BEGIN_MESSAGE_MAP(CMFMenuWindow, CFrameWnd)
	ON_COMMAND(ID_TEST_BEEP, MenuCommand)
	ON_COMMAND(ID_TEST_EXIT, ExitApp)
END_MESSAGE_MAP()
//================================================================
BOOL CMFMenuApp::InitInstance()			//	������������� �����
{
	m_pMainWnd=new CMFMenuWindow();		//	������� ������ ������
	m_pMainWnd->ShowWindow(	m_nCmdShow);	//���������� ���� �� ������
	m_pMainWnd->UpdateWindow();			//�������� ���������� ����
	return TRUE;
}//===============================================================
CMFMenuWindow::CMFMenuWindow()	//	�����������	CMFMenuWundow
{
Create(NULL,"������ MFC!", WS_OVERLAPPEDWINDOW,
		rectDefault, NULL, MAKEINTRESOURCE(IDR_MENU));
//							������� ���� ������ COknoWindow
}//----------------------------------------------------------------
