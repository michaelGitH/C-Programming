// Time-VS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 #include <ctime>
//#include <sys\timeb.h>
//#include <sys\types.h>

using namespace std; 

int main()
{ tm *T; //��������� � ����������� ������
  time_t t;
  t = time(0);
  T = gmtime(&t); // � ������� ftime(.) ���������� ��������� �� ��� ���������
              // & - �������� ������ ������
   cout << T->tm_hour<<" hour " << T->tm_min << " min. "
	    << T->tm_sec << " sec. ";

   cin.get();
	return 0;
}

