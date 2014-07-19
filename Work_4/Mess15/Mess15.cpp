#include "afxwin.h"
#include "resource.h"

// ������� ����� CMessApp  ����������  ��������� �� CWinApp
class CMessApp: public CWinApp
{
public:	
	virtual BOOL InitInstance(); // ������������� ����� InitInstance
	afx_msg void AppMessageCommand();
//	afx_msg void ExitApp();
	DECLARE_MESSAGE_MAP()
};

CMessApp MessApp; // ������� ������ ������ ������
//----------------------------------
// ����� CMessageWindow - ������� ���� ����������  ��������� �� CFrameWnd
class CMessWnd: public CFrameWnd
{
public:
	CMessWnd();	// �����������
	//						               ������ ��������� ��� ����
	afx_msg void FrameMessageCommand();
	afx_msg void ExitApp();
	
	DECLARE_MESSAGE_MAP()        //  ������������ ��� ��������� ���������
};
//----------------------------------------- ������� �� �������� ������
void CMessWnd::FrameMessageCommand()
{
	::MessageBox(NULL,
			"������� ��������� �� ������ ���� CMessWnd",
			"Message",MB_OK);
}//----------------------------------------- ������� �� ������ ����������
void CMessApp::AppMessageCommand()
{
	::MessageBox(NULL,
			"������� ��������� �� ������ ���������� CMessApp ",
			"Message",MB_OK);
}
//------------------	�������  �������� ������ CMessApp
//
BEGIN_MESSAGE_MAP(CMessApp, CWinApp)
	ON_COMMAND(ID_TEST_INAPPCLASS, AppMessageCommand)
	ON_COMMAND(ID_TEST_INBOTHCLASS, AppMessageCommand)
//	ON_COMMAND(ID_TEST_EXIT, ExitApp)
END_MESSAGE_MAP()
//------------		  �������  �������� ������ CMessWnd
//
BEGIN_MESSAGE_MAP(CMessWnd, CFrameWnd)
	ON_COMMAND(ID_TEST_INFRAIMCLASS, FrameMessageCommand)
	ON_COMMAND(ID_TEST_INBOTHCLASS, FrameMessageCommand)
	ON_COMMAND(ID_TEST_EXIT, ExitApp)
END_MESSAGE_MAP()

//===================================
//			                               	������������� ����� 
BOOL CMessApp::InitInstance(){
	//			������� ������ ������ CMessageWindow
	m_pMainWnd=new CMessWnd();
	//			        ���������� ����, �������� m_nCmdShow ������ �����
	m_pMainWnd->ShowWindow(	m_nCmdShow);			
	m_pMainWnd->UpdateWindow();   //		�������� ���������� ����
	return TRUE;
}//=======================================
//					�����������	CMessWind,
CMessWnd::CMessWnd()	
{
	Create(NULL,"���� ������ CMessWnd", WS_OVERLAPPEDWINDOW,
				rectDefault, NULL, MAKEINTRESOURCE(IDR_MENU));
//		������� ���� ������ CMessaWnd
}//-------------------------------------------	������ ExitApp
afx_msg void CMessWnd::ExitApp(){
	DestroyWindow();
}//-----------------------------------------------------
/*afx_msg void CMessApp::ExitApp(){
	::DestroyWindow();
}*/
