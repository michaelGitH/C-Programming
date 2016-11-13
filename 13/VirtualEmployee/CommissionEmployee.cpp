#include<iostream>
using std::cout;

#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const string &first, const string &last,
	const string &ssn, double sales, double rate)
	: Employee( first, last, ssn )
{
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales(double sales) {
	grossSales = (sales >= 0.0) ? sales : 0.0;
}

double CommissionEmployee::getGrossSales() const {
	return grossSales;
}

// ���������� ������������ ������� 
void CommissionEmployee::setCommissionRate(double rate) {
	commissionRate = (rate >= 0.0 && rate < 1.0) ? rate : 0.0;
} // ����� ������� setCommissionRate 

  // ���������� ������������ ������� 
double CommissionEmployee::getCommissionRate() const {
	return commissionRate;
} // ����� ������� getCommissionRate 

  // ��������� ��������� 
double CommissionEmployee::earnings() const {
	return getGrossSales() * getCommissionRate();
}

// ���������� ������ CommissionEmployee 
void CommissionEmployee::print() const {
	cout << "commission employee: ";
	Employee::print();
	cout << "gross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate()
		<< "\n";
} // ����� ������� print 

CommissionEmployee::~CommissionEmployee() {
	cout << "Called Commisssion destructor.\n";
}