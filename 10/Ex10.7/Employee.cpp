#pragma warning(disable:4996)
#include<iostream>
using std::cout;
using std::endl;
#include<cstring>
using std::strncpy;
using std::strlen;

#include "Date.h"
#include "Employee.h"

Employee::Employee(const char * const first, const char * const last,
	const Date &dateOfBirth, const Date &dateOfHire)
	: birthDate( dateOfBirth), hireDate(dateOfHire)
{
	// ���������� first � firstName; ���������, ��� ������ ���������� 
	size_t length = strlen(first);
	length = (length < 25 ? length: 24);
	strncpy( firstName, first, length );
	firstName[length] = '\0';

	// ���������� last � lastName � ���������, ��� ������ ���������� 
	length = strlen(last);
	length = (length < 25 ? length : 24);
	strncpy(lastName, last, length );
	lastName[length] = '\0';

	// ������� ������ Employee, ����� ���������� ����� ������������ 
	cout << "Employee object constructor: " << firstName
		<< ' ' << lastName << endl;
} // ����� ������������ Employee 

void Employee::print() const {
	cout << lastName << ", " << firstName << " Hired: ";
	hireDate.print();
	cout << " Birthday: ";
	birthDate.print();
	cout << endl;
} // ����� ������� print

// ������� ������ Employee, ����� ���������� ����� ����������� 
Employee::~Employee() {
	cout << "Employee destructor object: "
		<< lastName << ", " << firstName << endl;
} // ����� ����������� -Employee 