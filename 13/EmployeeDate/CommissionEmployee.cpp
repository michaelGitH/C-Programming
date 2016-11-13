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

// установить комиссионный процент 
void CommissionEmployee::setCommissionRate(double rate) {
	commissionRate = (rate >= 0.0 && rate < 1.0) ? rate : 0.0;
} // конец функции setCommissionRate 

  // возвратить комиссионный процент 
double CommissionEmployee::getCommissionRate() const {
	return commissionRate;
} // конец функции getCommissionRate 

  // вычислить заработок 
double CommissionEmployee::earnings() const {
	return getGrossSales() * getCommissionRate();
}

// напечатать объект CommissionEmployee 
void CommissionEmployee::print() const {
	cout << "commission employee: ";
	Employee::print();
	cout << "gross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate()
		<< "\n";
} // конец функции print 

CommissionEmployee::~CommissionEmployee() {
	cout << "Called Commisssion destructor.\n";
}