#include<iostream>
using std::cout;

#include"BasePlus.h"

BasePlus::BasePlus( const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary ) {
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales( sales );
	setCommissionRate( rate );
	setBaseSalary( salary );
}

void BasePlus::setFirstName(const string &first) {
	firstName = first;
}

string BasePlus::getFirstName() const {
	return firstName;
}

void BasePlus::setLastName(const string &last) {
	lastName = last;
}

string BasePlus::getLastName() const {
	return lastName;
}

// ���������� ����� ��������� 
void BasePlus::setSocialSecurityNumber( const string &ssn) {
	socialSecurityNumber = ssn; // should validate 
} // ����� ������� setSocialSecurityNumber 

// ���������� ����� ��������� 
string BasePlus::getSocialSecurityNumber() const {
	return socialSecurityNumber;
} // ����� ������� getSocialSecurityNumber 

// ���������� ����� ����� ������ 
void BasePlus::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
} // ����� ������� setGrossSales 

// ���������� ����� ����� ������ 
double BasePlus::getGrossSales() const {
	return grossSales;
} // ����� ������� getGrossSales 

 // ���������� ������������ ������� 
 void BasePlus::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
} // ����� ������� setCommissionRate 

// ���������� ������������ ������� 
double BasePlus::getCommissionRate() const {
	return commissionRate;
} // ����� ������� getCommissionRate 

void BasePlus::setBaseSalary(double salary) {
	baseSalary = (salary > 0.0) ? salary : .0;
}

double BasePlus::getBaseSalary() const {
	return baseSalary;
}

// ��������� ��������� 
double BasePlus::earnings() const {
	return baseSalary + (grossSales * commissionRate);
}

// ���������� ������ BasePlusCommissionEmployee 
void BasePlus::print() const
{
	cout << "base-salaried commission employee: " << firstName << ' ' 
	<< lastName << "\nsocial security number: "
	<< socialSecurityNumber << "\ngross sales: " << grossSales
	<< "\ncommission rate: " << commissionRate
	<< "\nbase salary: " << baseSalary;
} // ����� ������� print 


