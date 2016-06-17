#pragma warning(disable: 4996)
#include<iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
using std::setfill;
#include<cstring>
using std::strcmp;
using std::strncpy;

#include "Date.h"

Date::Date( int mn, int dy, int yr ) {
	if (mn > 0 && mn <= 12)
		month = mn;
	else {
		month = 1;
		cout << "invalid month ( " << mn << " ) set to 1.\n";
	}

	year = yr;

	day = checkDate(dy); // ��������� ����

	// ������� ������ Date, ����� ���������� ����� ������������ 
	cout << "Date object constructor for date ";
	print();
	cout << endl;
}
Date::Date(long dy, int yr) {
	int dayMonth[] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (dy > 365 || dy < 1) {
		if (dy == 366 && year % 4 == 0)
			dy;
		else
			cout << "Day is incorrect. Try again!" << endl;
	}
	if (yr % 4 == 0) 
		dayMonth[2] = 29;
	
	int ddd = 0;
	int i;
	for (i = 1; ddd < dy && i <= 13; i++) {
		ddd += dayMonth[i];
	}
	ddd -= dayMonth[i];
	month = i - 1;
	dy -= ddd;
	year = yr;
	day = dy;

	cout << "Date object constructor for date ";
	print();
	cout << endl;
}
Date::Date(char *mm, int dd, int yy) {
	char *mn[] = { "0", "January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November", "December" };
	year = yy;
	for (int i = 1; i <= 13; i++) {
		if (strcmp( mm, mn[ i ] ) == 0) {			
			month = i;
			i = 14;
		}
		else {
			if (i == 13) {
				cout << "Incorrect month!" << endl;
				month = 1;
			}
		}
	}
	day = checkDate(dd);
	cout << "Date object constructor for date ";
	print();
	cout << endl;
}
Date::Date( char s ) :
	year(sysYear()),
	month(sysMonth()),
	day(sysDay())
{	
	cout << "Date object constructor for date ";
	print();
	cout << endl;
}

void Date::print() const {
	cout << month << '/' << day << '/' << year << '\n';
}
void Date::print1() const {
	char *mm[] = { "0", "January", "February", "March", "April", "May",
	 "June", "July", "August", "September", "October", "November", "December" };
	cout << mm[month] << ' ' << day << ", " << year << endl;
}
void Date::print2() const {
	int dayMonth[] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (year % 4 == 0) {
		dayMonth[2] = 29;
	}
	int ddd = 0;
	for (int i = 1; i < month; i++) {
		ddd += dayMonth[i];
	}
	ddd += day;
	cout << setfill('0') << setw(3) << ddd << ' ' << year << endl << setfill(' ');
}
void Date::fullPrint() const {
	print(); print1(); print2();
}

int Date::sysMonth() {
	time_t t = time(0);
	char *tPtr = ctime(&t);
	char tmn[] = { tPtr[4], tPtr[5], tPtr[6], '\0' };
	int mon;
	char *mm[] = { "0","Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	for (int i = 1; i <= 12; i++) {
		if (strcmp(tmn, mm[i]) == 0) {
			mon = i;
			i = 14;
		}
	}
	return mon;
}
int Date::sysDay() {
	time_t t = time(0);
	char *tPtr = ctime(&t);
	char dy[] = { tPtr[8], tPtr[9], '\0' };
	int dd = (static_cast<int>(dy[0]) - 48) * 10 + (static_cast<int>(dy[1]) - 48);
	return dd;
}
int Date::sysYear() {
	time_t t = time(0);
	char *tPtr = ctime(&t);
	char y[5];
	y[0] = tPtr[20];
	y[1] = tPtr[21];
	y[2] = tPtr[22];
	y[3] = tPtr[23];
	y[4] = '\0';
	int yea = (static_cast<int>(y[0]) - 48) * 1000 + (static_cast<int>(y[1]) - 48) * 100
		+ (static_cast<int>(y[2]) - 48) * 10 + (static_cast<int>(y[3]) - 48);
	return yea;
}

// ������� ������ Date, ����� ���������� ����� ����������� 
Date::~Date() {
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}

// ��������������� ������� ��� ������������� ���������������� 
// ��� ��� ������ ������ � ���� (������������ ���������� ����) 
int Date::checkDate(int testDay) const {
	static const int dayPerMonth[13] =
	 { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	// ���������� ���������������� testDay ��� ���������� ������ 
	if (testDay > 0 && testDay <= dayPerMonth[month])
		return testDay;
	// ��������� 29 ������� ��� ����������� ���� 
	if (month == 2 && testDay == 29 && (year % 400 == 0
		|| (year % 100 != 0 && year % 4 == 0)))
		return testDay;

	cout << "Invalid day ( " << testDay << " ) set to 1.\n";
	return 1;
}