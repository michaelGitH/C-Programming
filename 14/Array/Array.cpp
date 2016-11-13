#include<iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

#include<cstdlib>
using std::exit;

#include"Array.h"

// ����������� Array �� ��������� (������ �� ��������� 10) 
template<typename T>
Array<T>::Array(int arraySize)
{
	size = (arraySize > 0 ? arraySize : 10);
	ptr = new T[size]; // �������� ������������ ��� ������� 

	for (int i = 0; i < size; i++) 
		ptr[i] = 0; // ���������� ������� �������-��������� 	
}

// ����������� ����� ��� ������ Array; 
// ��� �������������� ����������� �������� ������ ���������� ������ 
template<typename T>
Array<T>::Array(const Array<T> &arrayToCopy)
	: size(arrayToCopy.size)
{
	ptr = new T[size];
	for (int i = 0; i < size; i++)
		ptr[i] = arrayToCopy.ptr[i]; // ���������� � ������ 
}

template<typename T>
Array<T>::~Array()
{
	delete[] ptr; // ���������� ������������ ������� 
}

// ���������� ����� ��������� Array 
template<typename T>
int Array<T>::getSize() const {
	return size;
}

// ������������� �������� ������������; 
// ������������ ��������� �������������: ( al = �2 ) = �� 
template<typename T>
const Array<T> &Array<T>::operator=(const Array<T> &right) {
	if (&right != this) { // �������� ���������������� 
		// ��� �������� ������� ������� ���������� �������� ������
		//� ����� �����, ����� �������� ����� ������ ��� ����� ����� 
		if (size != right.size) {
			delete[] ptr;
			size = right.size;
			ptr = new T[size];
		}
		for (int i = 0; i < size; i++)
			ptr[i] = right.ptr[i];
	}
	return *this; // ��������� ������, ��������, � = � = z 
}

// ����������, ����� �� ��� �������, ���� �����, 
// ���������� true, � ��������� ������ ���������� false 
template<typename T>
bool Array<T>::operator==(const Array<T> &right) const {
	if (size != right.size)
		return false;

	for (int i = 0; i < size; i++)
		if (ptr[i] != right.ptr[i])
			return false;

	return true; // ������� ����� 
}

// ������������� �������� ���������� ��� ������������� ��������; 
// ������� ������ ������� �������������� lvalue 
template<typename T>
T &Array<T>::operator[](int subscript) {
	// ��������� ������ �� ����� �� ������� ������� 
	if (subscript < 0 || subscript >= size) {
		cerr << "\nError: Subscript " << subscript <<
			" out of range." << endl;
		exit(1); // ��������� ���������; ������ ��� ��������� 
	}

	return ptr[subscript]; // ������� ������ 
}

// ������������� �������� ���������� ��� ����������� ��������; 
// ������� ����������� ������ ������� rvalue 
template<typename T>
T Array<T>::operator[](int subscript) const {
	// ��������� ������ �� ����� �� ������� ������� 
	if (subscript < 0 || subscript >= size) {
		cerr << "\nError: Subscript " << subscript <<
			" out of range." << endl;
		exit(1); // ��������� ���������; ������ ��� ��������� 
	}
	return ptr[subscript]; // ���������� ����� �������� 
}

template<typename T>
istream &operator>>(istream &input, Array<T> &a) {
	for (int i = 0; i < a.size; i++)
		input >> a.ptr[i];
	return input; // enables cin � x � y; 
}

// ������������� �������� ������ ��� ������ Array 
template<typename T>
ostream &operator<<(ostream &output, const Array<T> &a) {
	int i;

	// ������� �������� ������, ���������� ���������� 
	for (i = 0; i < a.size; i++) {
		output << setw(12) << a.ptr[i];
		if ((i + 1) % 4 == 0)
			output << endl;
	}

	if (i % 4 == 0)
		output << endl;

	return output; // ��������� ������ cout � x � y; 
}



