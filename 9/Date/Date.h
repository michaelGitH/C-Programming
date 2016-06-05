// Date.h
// Объявление класса Date.
// Элемент-функции определяются в Date.cpp

// предотвратить многократное включение заголовочного файла
#ifndef DATE_H
#define DATE_H

// определение класса Date
class Date
{
public:
	Date( int = 1, int = 1, int = 2000 ); // конструктор по умолчанию
	void setDate( int, int, int );
	void print();
	void nextDay();
private:
	void setMonth( int );
	int month;
	int day;
	int year;
	int dom;
}; // конец класса Date

#endif
