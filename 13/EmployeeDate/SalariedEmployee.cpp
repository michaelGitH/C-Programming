#include<iostream>
using std::cout;

#include"SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string &first,
	const string &last, const string &ssn, double salary)
	: Employee(first, last, ssn)
{
	setWeeklySalary(salary);
}

// установить недельную зарплату 
void SalariedEmployee::setWeeklySalary( double salary ) {
	weeklySalary = ( salary >= 0.0 ) ? salary : 0.0;
}

double SalariedEmployee::getWeeklySalary() const {
	return weeklySalary;
}

// вычислить заработок; 
// заменяет чисто виртуальную функцию earnings в Employee 
double SalariedEmployee::earnings() const {
	return getWeeklySalary();
}

// напечатать информацию о SalariedEmployee 
void SalariedEmployee::print() const {
	cout << "salaried employee: ";
	Employee::print();
	cout << "weekly salary: " << getWeeklySalary()
		<< "\n";
}
