// Input_All_Charecters.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
# include <iostream>
# include <windows.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{// SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
 cout<<"������� ���������� ��������, ����, ������� (�������), \"�����\" ��������";
 cout<<"\n\n������� ������ ������ � ����������� ���������. ��������� - �� Ctrl+z\n\n";
 cin.unsetf(cin.skipws);//������ ������ ��������� "�����" ��������

 char c;
 int kc, kws, kw, kL;
 char cOld = ' ';
 c = '\0'; //���� ����� ������ ^Z, �� � 'c' ������ �� ��������, 
           // ������� ����� �� ������� "���������"
 for( kc = kws = kw = kL = 0; ; )
 { cin >> c;
   int kod = c;
   cout<<"\nkod= "<<kod<<" - "<<c;
   kc++;
  if ( c==26        //-��� ��������� ��� ����� Ctrl+z � ����� ������
         || ( !cin 
		      || cin.eof()) ) //.eof() � ���� ������ �������� ������
							   //    ��� ����� Ctrl+z � ������ ������
                {kws++; kL++; 
                        cin.clear(); break;}
  switch (c)
  {case '\n': kL++;
   case ' ': kws++; cOld = ' '; break;
   default:
	   if (cOld == ' ') kw++;
	   cOld = c;
  }
 }
 cout <<"\n�������: "<<kc<<" -��������, "<<kws<<" -����� ��������,\n"
	     <<kw<<" -����, "<<kL<<" -�������"<<endl;
 cin.clear();//���������� ����� ��������� ��������� ^z 
             // ����� ������ ������� ����� Ctrl+z
 cin.setf(cin.skipws);//�������������� ������ ��������� "�����" ��������
 cin.get();
 system("pause");
	return 0;
}

