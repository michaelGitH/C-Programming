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
	explicit Array(int = 10); // ����������� �� ��������� // explicit-ctor
	Array(const Array &); // ����������� ����� 
	~Array(); // ���������� 
	int getSize() const; // ���������� ������ 

	const Array &operator=(const Array &); // �������� ������������ 
	bool operator==(const Array &) const; // �������� ��������� 

	// �������� �����������; ��������� �������������� �������� == 
	bool operator!=(const Array &right) const {
		return !(*this == right); // �������� Array::operator== 
	}

	// ���������� ��� ������������� �������� ���������� lvalue 
	int &operator[](int);
	// ���������� ��� ����������� �������� ���������� rvalue 
	int operator[](int) const;
private:
	int size; // ������ �������, ��������� ���������� 
	int *ptr; // ��������� �� ������ ������� ������� 
};

#endif
