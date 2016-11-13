#include<iostream>
using std::cout;

#include"HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const string &first,
	const string &last, const string &ssn,
	double hourlyWage, double hoursWorked)
	: Employee(first, last, ssn)
{
	setWage(hourlyWage);
	setHours(hoursWorked);
}

void HourlyEmployee::setWage(double hourlyWage ) {
	wage = (hourlyWage >= 0.0) ? hourlyWage : 0.0;
}

double HourlyEmployee::getWage() const {
	return wage;
}

void HourlyEmployee::setHours(double hoursWorked) {
	hours = ( (hoursWorked >= 0.0) && (hoursWorked <= 168.0 ) )
		? hoursWorked : 0.0;
}

double HourlyEmployee::getHours() const {
	return hours;
}

double HourlyEmployee::earnings() const {
	if (getHours() < 40)
		return getWage() * getHours();
	else
		return getWage() * 40 +
		((getHours() - 40) * getWage() * 1.5);
}

void HourlyEmployee::print() const {
	cout << "hourly employee: ";
	Employee::print();
	cout << "hourly wage: " << getWage() <<
		"\nhours worked: " << getHours()
		<< "\n";
}