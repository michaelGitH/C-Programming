
#include <windows.h>
#include <iostream>
#include <cstdlib>
using namespace std;

//#include<locale>

void main()
{ 
   //setlocale(LC_ALL, ".1251");
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
	 int a,b; //���������
   int Sum; //�����
   cout << "���������� �����\n";
   cout << "\n������� ����� � � b : ";
   
   cin >> a >>b;
     Sum = a + b;
   cout << "\n����� "<<a<<" + "<< b <<" = "<< Sum << endl;
   system("pause"); // ������������ ����������
  
}

