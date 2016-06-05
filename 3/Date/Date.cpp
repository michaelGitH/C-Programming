// Исходный код класса Date
#include"Date.h"

Date::Date( int m, int d, int y )
{
	setMonth( m );
	setDay( d );
	setYear( y );
}

void Date::setMonth( int m )
{
	if( m < 1 )
		m = 1;
	if( m > 12 )
		m = 1;
	month = m;
}

int Date::getMonth()
{
	return month;
}

void Date::setDay( int d )
{
	day = d;
}

int Date::getDay()
{
	return day;
}

void Date::setYear( int y )
{
	year = y;
}

int Date::getYear()
{
	return year;
}

void Date::displayDate()
{
	cout << "\nDate is: " << getMonth() << "/"
		  << getDay() << "/" << getYear() << "\n"
		  << endl;
}
