#include <windows.h>					//	���� PrivetWin15.cpp
// 		����� ������� ���������� Windows ��� ������� MFC 
// 		� ���� Build- Setting- General  ������� �� ��������� - Not Using MFC
int WINAPI WinMain(		   
		HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR lpCMdLine,
		int nShowCmd)
{
	MessageBox(NULL,"������ Windows XP,������ Windows 2000!","��������������",MB_OK);
	return 0;
}