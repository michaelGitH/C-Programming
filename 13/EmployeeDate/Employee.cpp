#include<iostream>
using std::cout;

#include "Employee.h"

Employee::Employee(const string &first, const string &last,
	const string &ssn )
	: firstName(first), lastName(last), socialSecurityNumber(ssn)
{
}

void Employee::setFirstName(const string &first) {
	firstName = first;
}

string Employee::getFirstName() const {
	return firstName;
}

void Employee::setLastName(const string &last) {
	lastName = last;
}

string Employee::getLastName() const {
	return lastName;
}

void Employee::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void Employee::setBirthDate(const int m, const int d, const int y) {
	birthDate.setDate( m, d, y );
}

Date Employee::getBirhtDate() const {
	return birthDate;
}

// ���������� ������ CommissionEmployee 
void Employee::print() const {
	cout << getFirstName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\n";
} // ����� ������� print 

Employee::~Employee() {
	cout << "Called Employee destructor.\n";
}