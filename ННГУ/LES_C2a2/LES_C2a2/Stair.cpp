// Stair.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
//# include <iostream>
//# include <windows.h>
//using namespace std;

// ������ � ��������
void main()
{  SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int h[] = {1,0,0,-1,2,3,4,5,5,7,4,3,3,3,1,2,3,4,4,4,1,1,1,1};
   int StepsCount = sizeof(h)/sizeof(int);
   int i,startArea, endArea, //������ � ����� ��������
	   maxLArea, // ����� �������� ������� �������� �� �������������
	   Imax = -1,// =-1 - ��� �� ���� ��������; = 1 - �������� �����������.
	   maxHArea;//���������� ������ �� �������� ������� ��������

  for( i = 0; i < StepsCount; i++)
   { 
	 if (i==0 || h[i] != h[i-1]) //�������� ����� ��������
	     { startArea =i;} 
	 if (i == StepsCount - 1 || h[i] != h[i+1]) //����������� �������� ������� h[i]
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
  cout << "�������� ������� �������� �� �������� ������� �����: "<< endl 
	    << "������ = " << maxHArea << endl << "����� = " << maxLArea;
   cin.get();
}

