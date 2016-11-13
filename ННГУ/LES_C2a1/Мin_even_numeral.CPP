

#include "stdafx.h"

# include <iostream>
# include <windows.h>

using namespace std;

    
 void main()
 { // SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   int N; //Исходное число
   int EvenNum_min, Imin; //Переменные для определения наименьшей четной цифры и ее позиции
   int Num, i; //Текущая цифра и номер ее разряда
   cout <<  "\nОпределение наименьшей четной цифры и ее позиции"
		 << "\nВведите целое неотрицательное число: ";
   cin >> N;
   cout << "Введено: " << N;
   //Реализация на цикле for: 
   for( Imin = -1, i = 0; i == 0 || N != 0; i++)  
   {  Num = N % 10; 
      N = N / 10;
   cout << "\nЦифра разряда " << i <<": "<< Num;
     if ( (Num & 1) == 0 
		   && ( Imin == -1 || Num < EvenNum_min ) 
		 )
          {
             EvenNum_min = Num;
             Imin = i;
          }
   }
   if (Imin == -1) cout<< "\nНет четных цифр"; 
   else cout << "\nНаименьшая четная цифра = " << EvenNum_min
		 <<"\n стоит в разряде с номером "<< Imin <<
		 " (при нумерации от нуля)." <<endl;

   int kkk = cin.rdbuf()->in_avail(); //Количество байт, оставшихся в потоке
       cin.ignore(kkk); //Их удаление
   cin.get();// Ожидается нажатие любой клавиши
   system("pause");
}


