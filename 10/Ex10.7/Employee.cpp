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
	// копировать first в firstName; убедиться, что строка поместится 
	size_t length = strlen(first);
	length = (length < 25 ? length: 24);
	strncpy( firstName, first, length );
	firstName[length] = '\0';

	// копировать last в lastName и убедиться, что строка поместится 
	length = strlen(last);
	length = (length < 25 ? length : 24);
	strncpy(lastName, last, length );
	lastName[length] = '\0';

	// вывести объект Employee, чтобы обозначить вызов конструктора 
	cout << "Employee object constructor: " << firstName
		<< ' ' << lastName << endl;
} // конец конструктора Employee 

void Employee::print() const {
	cout << lastName << ", " << firstName << " Hired: ";
	hireDate.print();
	cout << " Birthday: ";
	birthDate.print();
	cout << endl;
} // конец функции print

// вывести объект Employee, чтобы обозначить вызов деструктора 
Employee::~Employee() {
	cout << "Employee destructor object: "
		<< lastName << ", " << firstName << endl;
} // конец деструктора -Employee 