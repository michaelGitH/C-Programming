#ifndef BASEPLUS_H
#define BASEPLUS_H

#include<string>
using std::string;

#include"CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&,
		double = .0, double = .0, double = .0);

	void setBaseSalary(double);
	double getBaseSalary() const;

	virtual double earnings() const;
	virtual void print() const;

	~BasePlusCommissionEmployee();
private:
	double baseSalary;
};

#endif
