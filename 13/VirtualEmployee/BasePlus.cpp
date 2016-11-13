#include<iostream>
using std::cout;

#include"BasePlus.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, sales, rate)
{
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	baseSalary = ( salary > .0 ) ? salary : .0;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
	// производному классу недоступны закрытые данные базового класса 
	return getBaseSalary() + CommissionEmployee::earnings();
}

// напечатать объект BasePlusCommissionEmployee 
void BasePlusCommissionEmployee::print() const {
	// производному классу недоступны закрытые данные базового класса 
	cout << "base-salaried ";

	// вызвать функцию print класса CommissionEmployee 
	CommissionEmployee::print();

	cout << "base salary: " << getBaseSalary() << "\n";
} // конец функции print 

BasePlusCommissionEmployee::~BasePlusCommissionEmployee() {
	cout << "Called BCE destructor.\n";
}