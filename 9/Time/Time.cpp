// Рис. 9.2: Time.cpp
// Определение элемент-функций класса Time.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;


#include "Time.h" // включить определение класса Time из Time.h

// Конструктор Time инициализирует каждый элемент данных нулем.
// Гарантирует, что объекты создаются в согласованном состоянии.
Time::Time( int hr, int min, int sec )
{
	setTime( hr, min, sec ); // проверить и установить время
} // конец конструктора Time

// установить значение времени (во всемирном формате); убедиться,
// что данные согласованы: недействительные элементы обнуляются
void Time::setTime( int h, int m, int s )
{
	setHour( h ); 
	setMinute( m ); 
	setSecond( s ); 
} // конец функции setTime

// установить значение часов
void Time::setHour( int h )
{
	if ( h >= 0 && h < 24 ) // проверить часы
		hour = h;
	else
	{
		hour = ( ( time( 0 ) / 3600 ) % 24 ) + 3;
		cout << "Некорректное значение часов! Установлен час по московскому времени." << endl;
	}
} // конец функции setHour

// установить значение минут
void Time::setMinute( int m )
{
	if ( m >= 0 && m < 60 )  // проверить минуты
		minute = m;
	else
	{
		minute = ( time( 0 ) / 60 ) % 60;
		cout << "Некорректное значение минут! Установлена минута по московскому времени." << endl;
	}
} // конец функции setMinute

void Time::setSecond( int s )
{
	if( s >= 0 && s < 60 ) // проверить секунды
		second = s;
	else
	{
		second = time( 0 ) % 60;
		cout << "Некорректное значение секунд! Установлена секунда по московскому времени." << endl;	
	}
} // конец функции setMinute

// возвратить значение часов
int Time::getHour()
{
	return hour;
} // конец функции getHour
// возвратить значение минут
int Time::getMinute()
{
	return minute;
} // конец функции getMinute
// возвратить значение секунд
int Time::getSecond()
{
	return second;
} // конец функции getSecond

void Time::tick()
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
		hour = 0;
}

// Напечатать в формате всемирного времени (HH:MM:SS)
void Time::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << hour << ":"
	<< setw( 2 ) << minute << ":" << setw( 2 ) << second << endl;
} // конец функции printUniversal

// Напечатать в стандартном формате времени (HH:MM:SS AM или РМ)
void Time::printStandard()
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
	<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
	<< getSecond() << ( hour < 12 ? " AM" : " PM" );
} // конец функции printstandard
