#include <afxwin.h>
// Главный класс CPrivetMFCApp 
// приложения  наследуем от CWinApp
class CPrivetMFCApp: public CWinApp
{
public:
	// переопределим метод InitInstance

	virtual BOOL InitInstance();
};
// создаем объект нашего класса
CPrivetMFCApp PrivetMFCApp;
//----------------------------------
//				переопределим метод 
BOOL CPrivetMFCApp::InitInstance()
{
	AfxMessageBox("Привет MFC!");
	return FALSE;
}