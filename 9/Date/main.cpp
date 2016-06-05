// Рис. 9.19: fig09_19.cpp
// Демонстрация того, что объекты классов можно присваивать
// друг другу посредством поэлементного копирования по умолчанию.
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

int main()
{
	Date date1( 28, 5, 2016 );
	Date date2; // date2.no умолчанию 1/1/2000
	
	cout << "date1 = ";
	date1.print();
	cout << "\ndate2 = ";
	date2.print();

	date2 = date1; // поэлементное копирование по умолчанию

	cout << "\n\nAfter default memberwise assignment, date2 = ";
	date2.print();
	cout << endl;
	return 0;
}
