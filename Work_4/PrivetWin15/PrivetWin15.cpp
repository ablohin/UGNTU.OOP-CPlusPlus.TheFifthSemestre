#include <windows.h>					//	файл PrivetWin15.cpp
// 		самое простое приложение Windows без классов MFC 
// 		в меню Build- Setting- General  оставим по умолчанию - Not Using MFC
int WINAPI WinMain(		   
		HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR lpCMdLine,
		int nShowCmd)
{
	MessageBox(NULL,"Привет Windows XP,прощай Windows 2000!","Предупреждение",MB_OK);
	return 0;
}