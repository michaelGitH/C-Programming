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

// установить номер страховки 
void BasePlus::setSocialSecurityNumber( const string &ssn) {
	socialSecurityNumber = ssn; // should validate 
} // конец функции setSocialSecurityNumber 

// возвратить номер страховки 
string BasePlus::getSocialSecurityNumber() const {
	return socialSecurityNumber;
} // конец функции getSocialSecurityNumber 

// установить общую сумму продаж 
void BasePlus::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
} // конец функции setGrossSales 

// возвратить общую сумму продаж 
double BasePlus::getGrossSales() const {
	return grossSales;
} // конец функции getGrossSales 

 // установить комиссионный процент 
 void BasePlus::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
} // конец функции setCommissionRate 

// возвратить комиссионный процент 
double BasePlus::getCommissionRate() const {
	return commissionRate;
} // конец функции getCommissionRate 

void BasePlus::setBaseSalary(double salary) {
	baseSalary = (salary > 0.0) ? salary : .0;
}

double BasePlus::getBaseSalary() const {
	return baseSalary;
}

// вычислить заработок 
double BasePlus::earnings() const {
	return baseSalary + (grossSales * commissionRate);
}

// напечатать объект BasePlusCommissionEmployee 
void BasePlus::print() const
{
	cout << "base-salaried commission employee: " << firstName << ' ' 
	<< lastName << "\nsocial security number: "
	<< socialSecurityNumber << "\ngross sales: " << grossSales
	<< "\ncommission rate: " << commissionRate
	<< "\nbase salary: " << baseSalary;
} // конец функции print 


