#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(int = 1, int = 1, int = 1900);
	void print() const; // напечатать дату в формате месяц/день/год 
	~Date();// предусмотрен для подтверждения порядка деструкции
private:
	int month;
	int day;
	int year;

	// вспомогательная функция для проверки допустимости дня месяца 
	int checkDate( int ) const;
}; // конец класса 

#endif
