#pragma warning(disable:4996)
#include<iostream>
using std::cout;
using std::endl;

#include<cstring>
using std::strlen;
using std::strcpy;

#include "Employee.h"

// ���������� � ���������������� ����������� ������� ������ 
int Employee::count = 0;

// ���������� ����������� �������-�������, ������������ ����� 
// ��������� �������� Employee (��������� static � Employee.h) 
int Employee::getCount() {
	return count;
}

// ����������� ����������� �������� ������ ��� ����� � ������� 
//� �������� strcpy ��� ����������� ����� � ������� � ������ 
Employee::Employee(const char* const first, const char* const last) {
	firstName = new char[strlen(first) + 1];
	strcpy(firstName, first);

	lastName = new char[strlen(last) + 1];
	strcpy(lastName, last);

	count++; // ��������� ����������� ������� �������� 

	cout << "Employee constructor for " << firstName << ' ' <<
		lastName << " called." << endl;
}

// ���������� ����������� ����������� ���������� ������ 
Employee::~Employee() {
	cout << "Employee destructor called for " << firstName << ' ' <<
		lastName << "." << endl;
	delete [] firstName;
	delete [] lastName;
	count--;
}

// ���������� ��� ��������� 
const char *Employee::getFirstName() const {
	// const ����� ������������ ����� �� ���� ������� �������������� 
	// �������� ������; ������ ������ ����������� ������, ������ ��� 
	// ���������� ��������� ������ � ��������� ������ �������������� 
	return firstName;
}

// ���������� ������� ��������� 
const char *Employee::getLastName() const {
	return lastName;
}

