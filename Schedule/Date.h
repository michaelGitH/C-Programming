#ifndef DATE_H
#define DATE_H

#include<iostream>
using std::ostream;

class Date {
	friend ostream &operator<<(ostream&, const Date&);
public:
	Date(int = 1, int = 1, int = 1900);
	void setDate(int, int, int);
	Date &operator++(); // операция префиксного инкремента 
	Date operator++(int); // операция постфиксного инкремента 
	const Date &operator+=(int); // прибавить дни к дате 
	bool leapYear(int) const; // високосный год? 
	bool endOfMonth(int) const; // последний день месяца? 
	void print() const; // напечатать дату в формате месяц/день/год 
	int week();
private:
	int month;
	int day;
	int year;

	static const int days[]; // массив дней в месяцах
	void helpIncrement(); // сервисная функция для инкремента даты 
}; // конец класса 

#endif
