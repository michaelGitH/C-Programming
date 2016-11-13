#ifndef COMMISSION_H
#define COMMISSION_H

#include<string>
using std::string;

#include"Employee.h"

class CommissionEmployee : public Employee
{
public:
	CommissionEmployee(const string&, const string&,
		const string&, double = 0.0, double = 0.0);

	void setGrossSales(double); // установить общую сумму продаж 
	double getGrossSales() const; // возвратить общую сумму продаж 

	void setCommissionRate(double); // установить процент 
	double getCommissionRate() const; // возвратить процент 

	virtual double earnings() const; // вычислить заработок 
	virtual void print() const; // напечатать объект CommissionEmployee

	~CommissionEmployee();
private:
	double grossSales;
	double commissionRate;
};

#endif
