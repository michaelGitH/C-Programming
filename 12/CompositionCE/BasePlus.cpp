#include<iostream>
using std::cout;

#include"BasePlus.h"

BasePlus::BasePlus(const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary)
	: empl(first, last, ssn, sales, rate)
{
	setBaseSalary(salary);
}

void BasePlus::setFirstName(const string &first) {
	empl.setFirstName( first );
}

string BasePlus::getFirstName() const {
	return empl.getFirstName();
}

void BasePlus::setLastName(const string &last) {
	empl.setLastName( last );
}

string BasePlus::getLastName() const {
	return empl.getLastName();
}

void BasePlus::setSocialSecurityNumber(const string &ssn) {
	empl.setSocialSecurityNumber( ssn );
}

string BasePlus::getSocialSecurityNumber() const {
	return empl.getSocialSecurityNumber();
}

void BasePlus::setGrossSales(double sales) {
	empl.setGrossSales( sales );
}

double BasePlus::getGrossSales() const {
	return empl.getGrossSales();
}

// установить комиссионный процент 
void BasePlus::setCommissionRate(double rate) {
	empl.setCommissionRate( rate );
} // конец функции setCommissionRate 

  // возвратить комиссионный процент 
double BasePlus::getCommissionRate() const {
	return empl.getCommissionRate();
} // конец функции getCommissionRate 


void BasePlus::setBaseSalary(double salary) {
	baseSalary = salary;
}

double BasePlus::getBaseSalary() const {
	return baseSalary;
}

double BasePlus::earnings() const {
	return getBaseSalary() + empl.earnings();
}

// напечатать объект BasePlusCommissionEmployee 
void BasePlus::print() const {
	cout << "base-salaried ";

	// вызвать функцию print элемента empl 
	empl.print();

	cout << "\nbase salary: " << baseSalary;
} // конец функции print 
