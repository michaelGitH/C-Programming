#pragma warning(disable: 4996)
#include<iostream>
#include "Date.h"

// инициализировать статический элемент в области действия файла 
const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date(int m, int d, int y) {
	setDate(m, d, y);
}
	
// установить месяц, день и год 
void Date::setDate( int m, int d, int y ) {
	month = (m > 0 && m <= 12) ? m : 1;
	year = (y >= 1900 && y <= 2100) ? y : 1900;

	// проверить, високосный ли год 
	if (month == 2 && leapYear(year))
		day = (d >= 1 && d <= 29) ? d : 1;
	else
		day = (d >= 1 && d <= days[month]) ? d : 1;
}

// перегруженная операция префиксного инкремента 
Date &Date::operator++() {
	helpIncrement(); // инкрементировать дату 
	return *this; // возврат ссылки для получения lvalue 
}

// перегруженная операция постфиксного инкремента; заметьте, что 
// для целого параметра-пустышки нет имени параметра 
Date Date::operator++(int) {
	Date temp = *this; // запомнить текущее состояние объекта 
	helpIncrement();

	// вернуть неинкрементированный сохраненный объект 
	return temp; // возврат значения, не ссылки 
}

// прибавить к дате указанное число дней 
const Date &Date::operator+=( int additionalDays ) {
	for (int i = 0; i < additionalDays; i++)
		helpIncrement();
	return *this; // разрешает каскадирование 
}

// если год високосный, возвратить true; иначе возвратить false 
bool Date::leapYear( int testYear ) const {
	if (testYear % 400 == 0 ||
	(testYear % 100 != 0 && testYear % 4 == 0))
		return true; // високосный год 
	else
		return false;
}

// определить, является ли день последним днем месяца 
bool Date::endOfMonth(int testDay) const {
	if (month == 2 && leapYear(year))
		return testDay == 29; // последний день февраля високосн. года 
	else
		return testDay == days[month]; 
}

// вспомогатильная функция для инкремента даты 
void Date::helpIncrement() {
	//не последний день месяца 
	if (!endOfMonth(day))
		day++;
	else {
		if (month < 12) { // последний день месяца и месяц < 12 
			month++;
			day = 1;
		}
		else { // последний день года 
			year++;
			month = 1;
			day = 1;
		}
	}
}

int Date::getMonth() const {
	return month;
}

// перегруженная операция вывода 
ostream &operator<<(ostream &output, const Date &d) {
	static char *monthName[] = { "", "January", "February", "March", "April",
	"May", "June", "July", "August", "September", "October", "November", "December" };
	output << monthName[d.month] << ' ' << d.day << ", " << d.year;
	return output; // разрешает каскадирование 
}