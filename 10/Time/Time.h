// Time.h
// Объявление класса Time.
// Элемент-функции определяются в Time.cpp

// предотвратить многократное включение заголовочного файла

#ifndef TIME_H
#define TIME_H

#include<ctime>

// определение класса Time
class Time
{
public:
	Time( int = ( ( time( 0 ) / 3600 ) % 24 ) + 3, int = ( time( 0 ) / 60 ) % 60, int = time( 0 ) % 60 ); // конструктор
	// set-функции
	void setTime( int, int, int ); // установить час, минуту, секунду
	int setHour( int );
	int setMinute( int );
	int setSecond( int );

	// get-функции
	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	void tick();
	void printUniversal() const; // напечатать в формате всемирного времени
	void printStandard(); // напечатать в стандартном формате времени

private:
	int second; //0-59

}; // конец класса Time

#endif






















