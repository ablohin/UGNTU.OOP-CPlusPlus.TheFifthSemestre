; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMy15ToyDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "15Toy.h"

ClassCount=4
Class1=CMy15ToyApp
Class2=CMy15ToyDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_MY15TOY_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX (English (U.S.))
Class4=SetDialog
Resource4=IDD_DIALOG1

[CLS:CMy15ToyApp]
Type=0
HeaderFile=15Toy.h
ImplementationFile=15Toy.cpp
Filter=N
LastObject=CMy15ToyApp

[CLS:CMy15ToyDlg]
Type=0
HeaderFile=15ToyDlg.h
ImplementationFile=15ToyDlg.cpp
Filter=D
LastObject=IDC_Exit
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=15ToyDlg.h
ImplementationFile=15ToyDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_MY15TOY_DIALOG]
Type=1
Class=?
ControlCount=2
Control1=IDC_Exit,button,1342242816
Control2=IDC_Tuning,button,1342242816

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DIALOG1]
Type=1
Class=SetDialog
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_RADIO1,button,1342308361
Control5=IDC_RADIO2,button,1342177289
Control6=IDC_RADIO3,button,1342177289

[CLS:SetDialog]
Type=0
HeaderFile=SetDialog.h
ImplementationFile=SetDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_RADIO1
VirtualFilter=dWC

