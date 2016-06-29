#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
using std::ostream;
using std::istream;

class Array
{
	friend ostream &operator<<(ostream &, const Array &);
	friend istream &operator>> (istream &, Array &);
public:
	explicit Array(int = 10); // конструктор по умолчанию // explicit-ctor
	Array(const Array &); // конструктор копии 
	~Array(); // деструктор 
	int getSize() const; // возвратить размер 

	const Array &operator=(const Array &); // операция присваивания 
	bool operator==(const Array &) const; // операция равенства 

	// операция неравенства; результат противоположен операции == 
	bool operator!=(const Array &right) const {
		return !(*this == right); // вызывает Array::operator== 
	}

	// индексация для неконстантных объектов возвращает lvalue 
	int &operator[](int);
	// индексация для константных объектов возвращает rvalue 
	int operator[](int) const;
private:
	int size; // размер массива, заданного указателем 
	int *ptr; // указатель на первый элемент массива 
};

#endif
