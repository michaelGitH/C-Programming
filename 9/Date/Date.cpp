// Рис. 9.18: Date.cpp
// Определение элемент-функций класса Date.
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

// конструктор Date constructor (должен проверять диапазон)
Date::Date( int d, int m, int y )
{
	setDate( d, m, y );
} // конец конструктора Date

void Date::setDate( int d, int m, int y )
{
	setMonth( m );
	day = ( d > 0 && d <= dom ) ? d : 1;
	year = y;
}

void Date::setMonth( int m )
{
	month = ( m > 0 && m < 13 ) ? m : 1;
	if ( month == 4 || month == 6 || month == 9 || month == 11 )
		dom = 30;
	else if ( month % 2 == 1 || month == 8 || month == 10 || month == 12 )
		dom = 31;
	else
		( year % 4 != 0 ) ? dom = 28 : dom = 29;
}

void Date::nextDay()
{
	++day;
	if ( day > dom )
	{
		day = 1;
		++month;
	}
	if ( month > 12 )
	{
		month = 1;
		++year;
	}
	setMonth( month );
}

// напечатать дату в формате mm/dd/yyyy
void Date::print()
{
	cout << day << '/' << month << '/'; 
	( year > 0 ) ? cout << year : cout << year << "BC";
	cout << endl;
} // конец функции print












