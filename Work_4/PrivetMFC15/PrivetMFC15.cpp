#include <afxwin.h>
// ������� ����� CPrivetMFCApp 
// ����������  ��������� �� CWinApp
class CPrivetMFCApp: public CWinApp
{
public:
	// ������������� ����� InitInstance

	virtual BOOL InitInstance();
};
// ������� ������ ������ ������
CPrivetMFCApp PrivetMFCApp;
//----------------------------------
//				������������� ����� 
BOOL CPrivetMFCApp::InitInstance()
{
	AfxMessageBox("������ MFC!");
	return FALSE;
}