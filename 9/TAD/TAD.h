#ifndef DATE_H
#define DATE_H

class TAD
{
public:
	TAD( int = 1, int = 1, int = 2000,
	int = ( ( time( 0 ) / 3600 ) % 24 ) + 3, int = ( time( 0 ) / 60 ) % 60, int = time( 0 ) % 60 ); // конструктор по умолчанию

	void setDate( int, int, int );
	void setTime( int, int, int ); // установить час, минуту, секунду
	void setHour( int );
	void setMinute( int );
	void setSecond( int );

	// get-функции
	int getHour();
	int getMinute();
	int getSecond();

	void tick();
	void nextDay();
	void printUniversal(); // напечатать в формате всемирного времени
	void printStandard(); // напечатать в стандартном формате времени
private:
	void setMonth( int );
	int month;
	int day;
	int year;
	int dom;

	int hour; // 0 - 23 (24-часовой формат времени)
	int minute; //0-59
	int second; //0-59
}; // конец класса Date

#endif
