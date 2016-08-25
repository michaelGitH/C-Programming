#ifndef BASEPLUS_H
#define BASEPLUS_H

#include<string>
using std::string;

#include"CommissionEmployee.h"

class BasePlus : public CommissionEmployee
{
public:
	BasePlus(const string&, const string&, const string&,
		double = .0, double = .0, double = .0);

	void setBaseSalary( double );
	double getBaseSalary() const;

	double earnings() const;
	void print() const;
private:
	double baseSalary;
};

#endif
