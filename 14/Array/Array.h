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
	explicit Array(int = 10); // ����������� �� ��������� // explicit-ctor
	Array(const Array<T> &); // ����������� ����� 
	~Array(); // ���������� 
	int getSize() const; // ���������� ������ 

	const Array &operator=(const Array<T> &); // �������� ������������ 
	bool operator==(const Array<T> &) const; // �������� ��������� 

	// �������� �����������; ��������� �������������� �������� == 
	bool operator!=(const Array<T> &right) const {
		return !(*this == right); // �������� Array::operator== 
	}

	// ���������� ��� ������������� �������� ���������� lvalue 
	T &operator[](int);
	// ���������� ��� ����������� �������� ���������� rvalue 
	T operator[](int) const;
private:
	int size; // ������ �������, ��������� ���������� 
	T *ptr; // ��������� �� ������ ������� ������� 
};

#endif
