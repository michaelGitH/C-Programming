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
Time::Time( int hr, int min, int sec ) :
	second( 0 )
{
	setTime( hr, min, sec ); // проверить и установить время
} // конец конструктора Time

// установить значение времени (во всемирном формате); убедиться,
// что данные согласованы: недействительные элементы обнуляются
void Time::setTime( int h, int m, int s )
{
	second += setHour(h) * 3600;
	second += setMinute(m) * 60;
	second += setSecond(s);
} // конец функции setTime

// установить значение часов
int Time::setHour( int h )
{
	if ( h >= 0 && h < 24 ) // проверить часы
		return h;
	else
	{
		cout << "Некорректное значение часов! Установлен час по московскому времени." << endl;
		return ((time(0) / 3600) % 24) + 3;
	}
} // конец функции setHour

// установить значение минут
int Time::setMinute( int m )
{
	if ( m >= 0 && m < 60 )  // проверить минуты
		return m;
	else
	{
		cout << "Некорректное значение минут! Установлена минута по московскому времени." << endl;
		return (time(0) / 60) % 60;
	}
} // конец функции setMinute

int Time::setSecond( int s )
{
	if( s >= 0 && s < 60 ) // проверить секунды
		return s;
	else
	{
		cout << "Некорректное значение секунд! Установлена секунда по московскому времени." << endl;
		return time(0) % 60;
	}
} // конец функции setMinute

// возвратить значение часов
int Time::getHour() const
{
	return second / 3600;
} // конец функции getHour
// возвратить значение минут
int Time::getMinute() const
{
	return second / 60 - ( ( second / 3600 ) * 60 );
} // конец функции getMinute
// возвратить значение секунд
int Time::getSecond() const
{
	return second - second / 60 * 60;
} // конец функции getSecond

/*void Time::tick()
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
}*/

// Напечатать в формате всемирного времени (HH:MM:SS)
void Time::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
	<< setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond() << endl;
} // конец функции printUniversal

// Напечатать в стандартном формате времени (HH:MM:SS AM или РМ)
void Time::printStandard()
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
	<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
	<< getSecond() << ( getHour() < 12 ? " AM" : " PM" );
} // конец функции printstandard
