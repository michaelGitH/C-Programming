#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setfill;
using std::setw;

#include "TAD.h"

// конструктор Date constructor (должен проверять диапазон)
TAD::TAD( int d, int m, int y, int hr, int min, int sec )
{
	setDate( d, m, y );
	setTime( hr, min, sec );
} // конец конструктора Date

void TAD::setDate( int d, int m, int y )
{
	setMonth( m );
	day = ( d > 0 && d <= dom ) ? d : 1;
	year = y;
}

void TAD::setMonth( int m )
{
	month = ( m > 0 && m < 13 ) ? m : 1;
	if ( month == 4 || month == 6 || month == 9 || month == 11 )
		dom = 30;
	else if ( month % 2 == 1 || month == 8 || month == 10 || month == 12 )
		dom = 31;
	else
		( year % 4 != 0 ) ? dom = 28 : dom = 29;
}

void TAD::setTime( int h, int m, int s )
{
	setHour( h ); 
	setMinute( m ); 
	setSecond( s ); 
} // конец функции setTime

// установить значение часов
void TAD::setHour( int h )
{
	hour = ( h >= 0 && h < 24 ) ? h : ( ( time( 0 ) / 3600 ) % 24 ) + 3; // проверить часы
} // конец функции setHour

// установить значение минут
void TAD::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : ( time( 0 ) / 60 ) % 60; // проверить минуты
} // конец функции setMinute

void TAD::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? s : time( 0 ) % 60 ; // проверить секунды
} // конец функции setMinute

// возвратить значение часов
int TAD::getHour()
{
	return hour;
} // конец функции getHour
// возвратить значение минут
int TAD::getMinute()
{
	return minute;
} // конец функции getMinute
// возвратить значение секунд
int TAD::getSecond()
{
	return second;
} // конец функции getSecond

void TAD::tick()
{
	++second;
	if( second > 59 )
	{
		second = 0;
		++minute;
	}
	if( minute > 59 )
	{
		minute = 0;
		++hour;
	}
	if( hour > 23 )
	{
		hour = 0;
		nextDay();
	}
}

void TAD::nextDay()
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
		year++;
	}
	setMonth( month );
}

// Напечатать в формате всемирного времени (HH:MM:SS)
void TAD::printUniversal()
{
	cout << day << '/' << month << '/'; 
	( year > 0 ) ? cout << year << ' ' : cout << year << "BC ";
	cout << setfill( '0' ) << setw( 2 ) << hour << ":"
	<< setw( 2 ) << minute << ":" << setw( 2 ) << second << endl;
} // конец функции printUniversal

// Напечатать в стандартном формате времени (HH:MM:SS AM или РМ)
void TAD::printStandard()
{
	cout << day << '/' << month << '/'; 
	( year > 0 ) ? cout << year << ' ' : cout << year << "BC ";
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
	<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
	<< getSecond() << ( hour < 12 ? " AM" : " PM" );
} // конец функции printstandard
















