#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
using std::ostream;
using std::istream;

template<typename T>
class Array
{
	friend ostream &operator<<(ostream &, const Array<T> &);
	friend istream &operator >> (istream &, Array<T> &);
public:
	explicit Array(int = 10); // конструктор по умолчанию // explicit-ctor
	Array(const Array<T> &); // конструктор копии 
	~Array(); // деструктор 
	int getSize() const; // возвратить размер 

	const Array &operator=(const Array<T> &); // операция присваивания 
	bool operator==(const Array<T> &) const; // операция равенства 

	// операция неравенства; результат противоположен операции == 
	bool operator!=(const Array<T> &right) const {
		return !(*this == right); // вызывает Array::operator== 
	}

	// индексация для неконстантных объектов возвращает lvalue 
	T &operator[](int);
	// индексация для константных объектов возвращает rvalue 
	T operator[](int) const;
private:
	int size; // размер массива, заданного указателем 
	T *ptr; // указатель на первый элемент массива 
};

#endif
