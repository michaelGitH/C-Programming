// TM.cpp
// Программа для тестирования класса Time.
// ЗАМЕЧАНИЕ: Файл должен компилироваться совместно с Time.cpp.
#include<iostream>
using std::cout;
using std::endl;

#include "Time.h" // включить определение класса Time из Time.h

int main()
{
	Time t1; // все аргументы по умолчанию
	Time t2( 2 ); // указаны часы; минуты и секунды по умолчанию
	Time t3( 21, 34 ); // указаны часы и минуты; секунды по умолчанию
	Time t4 ( 12, 25, 42 ); // указаны часы, минуты и секунды
	Time t5( 27, 74, 99 ); // все значения недействительны
	
	cout << "Constructed with:\n\nt1: all arguments defaulted\n ";
	t1.printUniversal(); // 00:00:00
	cout << "\n ";
	t1.printStandard(); // 12:00:00 AM
	
	cout << "\n\nt2: hour specified; minute and second defaulted\n ";
	t2.printUniversal(); // 02:00:00
	cout << "\n ";
	t2.printStandard(); // 2:00:00 AM
	
	cout << "\n\nt3: hour and minute specified; second defaulted\n ";
	t3.printUniversal(); // 21:34:00
	cout << "\n";
	t3.printStandard(); // 9:34:00 PM

	cout << "\n\nt4: hour, minute and second specified\n ";
	t4.printUniversal(); // 12:25:42
	cout << "\n";
	t4.printStandard(); // 12:25:42 PM

	cout << "\n\nt5: all invalid values specified\n ";
	t5.printUniversal(); // 00:00:00
	cout << "\n";
	t5.printStandard(); // 12:00:00 AM
	cout << endl;


	return 0;
}
