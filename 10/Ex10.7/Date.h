#ifndef DATE_H
#define DATE_H
#include<ctime>
using std::ctime;
using std::time;

class Date {
public:
	Date(int = 1, int = 1, int = 1900);
	Date( long = 1, int = 1900 );
	Date(char* = "January", int = 1, int = 1900);
	Date( char = 's' );
	void print() const; // напечатать дату в формате месяц/день/год 
	void print1() const;
	void print2() const;
	void fullPrint() const;
	int sysMonth();
	int sysDay();
	int sysYear();
	~Date();// предусмотрен для подтверждения порядка деструкции
private:
	int month;
	int day;
	int year;

	// вспомогательная функция для проверки допустимости дня месяца 
	int checkDate( int ) const;
}; // конец класса 

#endif
