
#include <windows.h> 
//#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std; 


void main()
{
  int i;
  char c;
  SetConsoleOutputCP(1251);
   cout << "               Построение таблицы символов и их кодов\n" ;
  SetConsoleOutputCP(866);

	 for( i=0; i <= 255; i++)
	  {  cout<< setw(4)<<i<<"-"<<char(i);
		 if ( (i+1) % 13  == 0 ) cout <<endl;
	  }
system("pause");
}

