#include<iostream>
using std::cout;

#include"BasePlus.h"

BasePlus::BasePlus(const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary)
	: CommissionEmployee( first, last, ssn, sales, rate )
{
	setBaseSalary(salary);
}

void BasePlus::setBaseSalary(double salary) {
	baseSalary = salary;
}

double BasePlus::getBaseSalary() const {
	return baseSalary;
}

double BasePlus::earnings() const {
	// производному классу недоступны закрытые данные базового класса 
	return getBaseSalary() + CommissionEmployee::earnings();
}

// напечатать объект BasePlusCommissionEmployee 
void BasePlus::print() const {
	// производному классу недоступны закрытые данные базового класса 
	cout << "base-salaried ";

	// вызвать функцию print класса CommissionEmployee 
	CommissionEmployee::print();

	cout << "\nbase salary: " << baseSalary;
} // конец функции print 
