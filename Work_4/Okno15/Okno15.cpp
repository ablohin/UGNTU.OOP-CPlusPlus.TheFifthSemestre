#include <afxwin.h>						// ���� Okno.cpp
//					 ������� ����� COknoApp ��������� �� CWinApp
class COknoApp: public CWinApp
{
public:
	virtual BOOL InitInstance();		// ����� ������������� �����
};
COknoApp OknoApp; 				// ������� ������ ������ ������ 
//------------------------------------------------------------------
class COkno: public CFrameWnd		// ����� COkno ��������� �� CFrameWnd
{
public:
	COkno();						// �����������
};
//------------------------------------------------------------------
BOOL COknoApp::InitInstance()
{								//	������������� ����� 	
	m_pMainWnd=new COkno();			//	������� ������ ������ 
//				���������� ���� �� ������ �������� m_nCmdShow ������ �����
	m_pMainWnd->ShowWindow(m_nCmdShow);		
	m_pMainWnd->UpdateWindow();		//	�������� ���������� ���� 
	return TRUE;
}//==================================================================
COkno::COkno()						//	�����������	COkno
{
	Create(NULL,"������ ���� ! � ��������� �� �����"); 	//������� ���� ������ COknoWindow
}
//==================================================================