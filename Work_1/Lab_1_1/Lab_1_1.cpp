//#include iostream.h   ���� ��������� ��� �� �� ���� ������� ��� ���������� CyrIOS.h (������ �������� 5 ������)
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include "CyrIOS.h"

double F(double x){
	double f;
		//��������������� ���� � ��������� ���������� 
    try {
		if (x<0) throw "\nlog10(x),pri x0 ne suchestvyet!";
		if (x>1000) throw "\npri x>1000 v korne otricatelnoe chislo"; 
		}		    
	catch (const char *report)   //��������� ����������
	{  cerr<<report<<"a y nas x="<<x<<endl;
		 return 0;
	}
    f=pow((3-(log(x))/(log(10))),0.5);
 return f;	
 }//---------------------------------------------------

void main(){
double y,x;
cout<<"������� x=";
cin>>x;
y=F(x);
cout<<"\n y=F(x)=pow((3-(log(x))/(log(10))),0.5)="<<y;	
getchar();
getchar();
}//-----------------------------------------------------