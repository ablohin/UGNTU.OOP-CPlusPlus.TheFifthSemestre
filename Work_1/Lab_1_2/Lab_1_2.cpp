// nod_try2.cpp   ��� �� ������� ���������  ����������
// �������� � ��������� ���������� � ���������� ���������
//#include <iostream.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include "CyrIOS.h"
char s1[35]="\nlog10(x),pri x<0 ne suchestvyet";
char s2[45]="\npri x>1000 v korne otricatelnoe chislo\n";
double F(double x){
	double f;
	// ��������� ���������� 
	if (x<0) throw s1;
	if (x>1000) throw s2;
	f=pow((3-(log(x))/(log(10))),0.5);
	return f;
}

void main(){
    double f,x,y;
	cout<<"������� �=";
	cin>>x;
	try { y=F(x); cout<<"\ny=F(x)=pow((3-(log(x))/(log(10))),0.5)="<<y; }
    catch(const char *report){ //���������� ����������
	cerr<<report;
	}
    catch(...){//���������� ����������
	cerr<<s1;
	}
 getchar();
 getchar();
}//--------------------------------------------------