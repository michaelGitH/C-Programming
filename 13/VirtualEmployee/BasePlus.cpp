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
	// ������������ ������ ���������� �������� ������ �������� ������ 
	return getBaseSalary() + CommissionEmployee::earnings();
}

// ���������� ������ BasePlusCommissionEmployee 
void BasePlusCommissionEmployee::print() const {
	// ������������ ������ ���������� �������� ������ �������� ������ 
	cout << "base-salaried ";

	// ������� ������� print ������ CommissionEmployee 
	CommissionEmployee::print();

	cout << "base salary: " << getBaseSalary() << "\n";
} // ����� ������� print 

BasePlusCommissionEmployee::~BasePlusCommissionEmployee() {
	cout << "Called BCE destructor.\n";
}