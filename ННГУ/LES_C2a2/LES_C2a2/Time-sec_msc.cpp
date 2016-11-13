// Time-VS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
// #include <ctime>
#include <sys\timeb.h>
#include <sys\types.h>
#include <cmath>

using namespace std; 

int main()
{ timeb T; //Структура с несколькими полями
   ftime(&T); // В функцию ftime(.) передается указатель на эту структуру
              // & - операция взятия адреса
   cout << T.time << " sec. " << T.millitm << " msc."<<endl;;

   timeb T1,T2;
    size_t sec; 
    int msc;
      ftime(&T1);
      for(int i = 0; i<2000000; i++)
	                     cos(0.5*i*i);
      ftime(&T2);
      sec = T2.time - T1.time;
	  msc = T2.millitm - T1.millitm;
	  if (msc < 0) {--sec; msc = 1000 + msc;}
      
	  cout<< sec <<" sec. " << msc << " msc.";   
		  cin.get();
	return 0;
}

