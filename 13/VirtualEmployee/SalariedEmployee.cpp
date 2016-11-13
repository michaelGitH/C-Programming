#include<iostream>
using std::cout;

#include"SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string &first,
	const string &last, const string &ssn, double salary)
	: Employee(first, last, ssn)
{
	setWeeklySalary(salary);
}

// ���������� ��������� �������� 
void SalariedEmployee::setWeeklySalary( double salary ) {
	weeklySalary = ( salary >= 0.0 ) ? salary : 0.0;
}

double SalariedEmployee::getWeeklySalary() const {
	return weeklySalary;
}

// ��������� ���������; 
// �������� ����� ����������� ������� earnings � Employee 
double SalariedEmployee::earnings() const {
	return getWeeklySalary();
}

// ���������� ���������� � SalariedEmployee 
void SalariedEmployee::print() const {
	cout << "salaried employee: ";
	Employee::print();
	cout << "weekly salary: " << getWeeklySalary()
		<< "\n";
}
