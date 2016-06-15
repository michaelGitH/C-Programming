#include<iostream>
using std::cout;
using std::endl;

#include "Date.h"

Date::Date( int mn, int dy, int yr ) {
	if (mn > 0 && mn <= 12)
		month = mn;
	else {
		month = 1;
		cout << "invalid month ( " << mn << " ) set to 1.\n";
	}

	year = yr;

	day = checkDate(dy); // ѕроверить день

	// вывести объект Date, чтобы обозначить вызов конструктора 
	cout << "Date object constructor for date ";
	print();
	cout << endl;
}

void Date::print() const {
	cout << month << '/' << day << '/' << year << '\n';
}

// вывести объект Date, чтобы обозначить вызов деструктора 
Date::~Date() {
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}

// вспомогательна€ функци€ дл€ подтверждени€ действительности 
// дн€ дл€ данных мес€ца и года (обрабатывает високосные годы) 
int Date::checkDate(int testDay) const {
	static const int dayPerMonth[13] =
	 { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	// определить действительность testDay дл€ указанного мес€ца 
	if (testDay > 0 && testDay <= dayPerMonth[month])
		return testDay;
	// проверить 29 феврал€ дл€ високосного года 
	if (month == 2 && testDay == 29 && (year % 400 == 0
		|| (year % 100 != 0 && year % 4 == 0)))
		return testDay;

	cout << "Invalid day ( " << testDay << " ) set to 1.\n";
	return 1;
}