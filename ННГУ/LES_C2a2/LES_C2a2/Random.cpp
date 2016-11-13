// Random.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

//# include <cstdlib>
//# include <ctime>
//# include <iostream>
//# include <iomanip>
//# include <windows.h>
//using namespace std;

void main()
{  // SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   const int NMAX = 100;
   float dat[NMAX];
   int N;
   do
   {cout<<"Количество случайных чисел (не более " << NMAX << "): "; 
     cin >> N;
   }while (N > NMAX);
   cin.get();
   time_t t = time(0);//Возвращает время, запакованное в 64 разрядное целое
                      // Требует  <ctime>
   unsigned int t0 = unsigned int(t);
   srand(t0);//Инициализация датчика случайных чисел. Требует <cstdlib>
  while (1)
  {
    for(int i=0; i<N; i++)
      dat[i] = float(rand())/RAND_MAX; //Требует <cstdlib>
   
    for(int i=0; i<N; i++)
    { if (i % 5 == 0) cout << endl;
       cout << setiosflags(ios::fixed) << setw(9) // Потребует
	         << setprecision(5)<< dat[i];     //      <iomanip>
    }
	cout<<endl;
    cin.get();
	if (!cin){cin.clear(); break;}
  }
 cin.get();
   system("cls");
 cin.get();
}

