// Random.cpp: ���������� ����� ����� ��� ����������� ����������.
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
   {cout<<"���������� ��������� ����� (�� ����� " << NMAX << "): "; 
     cin >> N;
   }while (N > NMAX);
   cin.get();
   time_t t = time(0);//���������� �����, ������������ � 64 ��������� �����
                      // �������  <ctime>
   unsigned int t0 = unsigned int(t);
   srand(t0);//������������� ������� ��������� �����. ������� <cstdlib>
  while (1)
  {
    for(int i=0; i<N; i++)
      dat[i] = float(rand())/RAND_MAX; //������� <cstdlib>
   
    for(int i=0; i<N; i++)
    { if (i % 5 == 0) cout << endl;
       cout << setiosflags(ios::fixed) << setw(9) // ���������
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

