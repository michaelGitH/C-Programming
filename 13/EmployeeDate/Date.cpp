#pragma warning(disable: 4996)
#include<iostream>
#include "Date.h"

// ���������������� ����������� ������� � ������� �������� ����� 
const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date(int m, int d, int y) {
	setDate(m, d, y);
}
	
// ���������� �����, ���� � ��� 
void Date::setDate( int m, int d, int y ) {
	month = (m > 0 && m <= 12) ? m : 1;
	year = (y >= 1900 && y <= 2100) ? y : 1900;

	// ���������, ���������� �� ��� 
	if (month == 2 && leapYear(year))
		day = (d >= 1 && d <= 29) ? d : 1;
	else
		day = (d >= 1 && d <= days[month]) ? d : 1;
}

// ������������� �������� ����������� ���������� 
Date &Date::operator++() {
	helpIncrement(); // ���������������� ���� 
	return *this; // ������� ������ ��� ��������� lvalue 
}

// ������������� �������� ������������ ����������; ��������, ��� 
// ��� ������ ���������-�������� ��� ����� ��������� 
Date Date::operator++(int) {
	Date temp = *this; // ��������� ������� ��������� ������� 
	helpIncrement();

	// ������� �������������������� ����������� ������ 
	return temp; // ������� ��������, �� ������ 
}

// ��������� � ���� ��������� ����� ���� 
const Date &Date::operator+=( int additionalDays ) {
	for (int i = 0; i < additionalDays; i++)
		helpIncrement();
	return *this; // ��������� �������������� 
}

// ���� ��� ����������, ���������� true; ����� ���������� false 
bool Date::leapYear( int testYear ) const {
	if (testYear % 400 == 0 ||
	(testYear % 100 != 0 && testYear % 4 == 0))
		return true; // ���������� ��� 
	else
		return false;
}

// ����������, �������� �� ���� ��������� ���� ������ 
bool Date::endOfMonth(int testDay) const {
	if (month == 2 && leapYear(year))
		return testDay == 29; // ��������� ���� ������� ��������. ���� 
	else
		return testDay == days[month]; 
}

// ��������������� ������� ��� ���������� ���� 
void Date::helpIncrement() {
	//�� ��������� ���� ������ 
	if (!endOfMonth(day))
		day++;
	else {
		if (month < 12) { // ��������� ���� ������ � ����� < 12 
			month++;
			day = 1;
		}
		else { // ��������� ���� ���� 
			year++;
			month = 1;
			day = 1;
		}
	}
}

int Date::getMonth() const {
	return month;
}

// ������������� �������� ������ 
ostream &operator<<(ostream &output, const Date &d) {
	static char *monthName[] = { "", "January", "February", "March", "April",
	"May", "June", "July", "August", "September", "October", "November", "December" };
	output << monthName[d.month] << ' ' << d.day << ", " << d.year;
	return output; // ��������� �������������� 
}