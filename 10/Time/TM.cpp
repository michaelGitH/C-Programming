// TM.cpp
// Программа для тестирования класса Time.
// ЗАМЕЧАНИЕ: Файл должен компилироваться совместно с Time.cpp.
#pragma warning(disable : 4996)
#include<iostream>
using std::cout;
using std::endl;
#include<ctime>

#include "Time.h" // включить определение класса Time из Time.h

int main()
{
	Time t;
	t.printStandard();
	cout << endl;
	t.printUniversal();


	/*int t = time(0);
	int t1 = ( t % ( 3600 * 24 ) ) + 3600 * 3;
	int h = t1 / 3600;
	int m = t1 / 60 - ( h * 60 );
	int s = t1 - ( h * 3600 ) - ( m * 60 );
	cout << h << ' ' << m << ' ' << s << endl;*/
	

	system("pause");
	return 0;
}
