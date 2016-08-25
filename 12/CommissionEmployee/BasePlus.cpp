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
	// ������������ ������ ���������� �������� ������ �������� ������ 
	return baseSalary + (commissionRate * grossSales);
}

// ���������� ������ BasePlusCommissionEmployee 
void BasePlus::print() const {
	// ������������ ������ ���������� �������� ������ �������� ������ 
	cout << "base - salaried commission employee : " << firstName << ' ' << lastName
		<< "\nsocial security number: "
		<< socialSecurityNumber << "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate
		<< "\nbase salary: " << baseSalary;
} // ����� ������� print 
