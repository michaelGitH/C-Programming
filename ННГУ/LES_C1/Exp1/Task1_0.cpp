
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
	 int a,b; //Слагаемые
   int Sum; //Сумма
   cout << "Вычисление суммы\n";
   cout << "\nВведите числа а и b : ";
   
   cin >> a >>b;
     Sum = a + b;
   cout << "\nСумма "<<a<<" + "<< b <<" = "<< Sum << endl;
   system("pause"); // Приостановка выполнения
  
}

