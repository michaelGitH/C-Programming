// Flush_cin.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include "stdafx.h"
# include <iostream>
# include <windows.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{ // SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
 char Str[100];
 int k;
 int start_type;
 cout<<"������������ �������������� ����� � ������� ������� ������ ������ �����";
 cout<<"\n----------------------------------------------------------------------";
	 cout<<"\n\n������ �������:\n 0 - ��� ������� ������ ����� ����� ������;"
		 <<"\n 1 - � ��������.\n\n: "; 
 cin >> start_type;
 cout<<"������� ��������� ������ c ��������: "; 
 cin >> Str;
 cout<<"\n�������: " << Str;
 if (start_type == 1)
 {cout<<"\n\n  ��������� ������� ������ ������ !!!";
  //������� ������:
   cin.ignore(cin.rdbuf()->in_avail());
 }
 cout <<"\n������� �����: k = "; 
 cin>>k;
 if (!cin ) //��������� ������ � ������
 {cout<<"\n�������� ������ � ������ �����."
      <<"\n��������� ��������� (����� ������ ������, ������� ������ ������)";
  cin.clear();
  cin.ignore(cin.rdbuf()->in_avail());
  cout <<"\n������� �������� �����: k = "; 
  cin>>k;
 }
 cout << "\n������� ��� ����. �������� k = " << k;

   cin.clear();
   cin.ignore(cin.rdbuf()->in_avail());
cout<<"\n\n  ��������� ������� ������ ������ !!!";
cout<<"\n������� ������� <Enter>";
 cin.get();
 
	return 0;
}

