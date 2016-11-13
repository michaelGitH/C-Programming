// Flush_cin.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
# include <iostream>
# include <windows.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{ // SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
 char Str[100];
 int k;
 int start_type;
 cout<<"Демонстрация предотвращения сбоев и техники очистки буфера потока ввода";
 cout<<"\n----------------------------------------------------------------------";
	 cout<<"\n\nСпособ запуска:\n 0 - без очистки потока после ввода строки;"
		 <<"\n 1 - с очисткой.\n\n: "; 
 cin >> start_type;
 cout<<"Введите текстовую строку c пробелом: "; 
 cin >> Str;
 cout<<"\nВведено: " << Str;
 if (start_type == 1)
 {cout<<"\n\n  Выполняем очистку буфера потока !!!";
  //Очистка буфера:
   cin.ignore(cin.rdbuf()->in_avail());
 }
 cout <<"\nВведите число: k = "; 
 cin>>k;
 if (!cin ) //Выявление ошибки в потоке
 {cout<<"\nВозникла ошибка в потоке ввода."
      <<"\nВыполняем коррекцию (сброс флагов потока, очистка буфера потока)";
  cin.clear();
  cin.ignore(cin.rdbuf()->in_avail());
  cout <<"\nВведите повторно число: k = "; 
  cin>>k;
 }
 cout << "\nВыводим как есть. Значение k = " << k;

   cin.clear();
   cin.ignore(cin.rdbuf()->in_avail());
cout<<"\n\n  Выполняем очистку буфера потока !!!";
cout<<"\nОжидаем нажатия <Enter>";
 cin.get();
 
	return 0;
}

