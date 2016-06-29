#ifndef STRING_H
#define STRING_H

#include<iostream>
using std::ostream;
using std::istream;

class String
{
	friend ostream &operator<< (ostream &, const String &);
	friend istream &operator>> (istream &, String &);
public:
	String(const char * = ""); // к-тор преобразования/по умолчанию 
	String(const String &); // конструктор копии 
	~String(); // деструктор 
	const String &operator=(const String &); // on. присваивания 
	const String &operator+=(const String &); // on. конкатенации 
	bool operator!() const; // пуста ли строка? 
	bool operator==(const String &) const; // проверить s1 == s2 
	bool operator<(const String &) const; // проверить s1 < s2 

	// проверить s1 != s2 
	bool operator!=(const String &right) const {
		return !(*this == right);
	}
	// проверить s1 > s2 
	bool operator>(const String &right) const {
		return right < *this;
	}
	// проверить s1 <= s2 
	bool operator<=(const String &right) const {
		return !(*this > right);
	}
	// проверить s1 >= s2
	bool operator>=(const String &right) const {
		return !(*this < right);
	}

	char &operator[](int); // операция индексации (lvalue) 
	char operator[](int) const; // операция индексации (rvalue) 
	String operator()(int, int = 0) const; // возвратить подстроку 
	int getLength() const; // возвратить длину строки 
private:
	int length; // длина строки (не считая завершающий нуль) 
	char *sPtr; // указатель на начало представления строки 
	void setString(const char *); // вспомогательная функция 
};

#endif