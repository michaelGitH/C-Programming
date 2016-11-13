// Stair.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//# include <iostream>
//# include <windows.h>
//using namespace std;

// Задача о лестнице
void main()
{  SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int h[] = {1,0,0,-1,2,3,4,5,5,7,4,3,3,3,1,2,3,4,4,4,1,1,1,1};
   int StepsCount = sizeof(h)/sizeof(int);
   int i,startArea, endArea, //Начало и конец площадки
	   maxLArea, // Длина наиболее длинной площадки из встретившейся
	   Imax = -1,// =-1 - Еще не было площадок; = 1 - Площадки встречались.
	   maxHArea;//Наибольшая высота из наиболее длинных площадок

  for( i = 0; i < StepsCount; i++)
   { 
	 if (i==0 || h[i] != h[i-1]) //Началась новая площадка
	     { startArea =i;} 
	 if (i == StepsCount - 1 || h[i] != h[i+1]) //Завершилась площадка высотой h[i]
         { endArea =i; 
	       if (Imax == -1 || 
			      maxLArea < (endArea - startArea + 1) 
			    || maxLArea == (endArea - startArea + 1) && maxHArea < h[i]
			   )
			   { Imax = i;
                 maxLArea = (endArea - startArea + 1);
				 maxHArea = h[i];
			   }
	     }
   }
  cout << "Наиболее высокая площадка из наиболее длинных имеет: "<< endl 
	    << "Высоту = " << maxHArea << endl << "Длину = " << maxLArea;
   cin.get();
}

