#ifndef BASEPLUS_H
#define BASEPLUS_H

#include<string>
using std::string;

#include"CommissionEmployee.h"

class BasePlus
{
public:
	BasePlus(const string&, const string&, const string&,
		double = .0, double = .0, double = .0);

	void setFirstName(const string&);// установить имя 
	string getFirstName() const; // возвратить имя 

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string &); // установить SSN 
	string getSocialSecurityNumber() const; // возвратить SSN 

	void setGrossSales(double); // установить общую сумму продаж 
	double getGrossSales() const; // возвратить общую сумму продаж 

	void setCommissionRate(double); // установить процент 
	double getCommissionRate() const; // возвратить процент 

	void setBaseSalary(double);
	double getBaseSalary() const;

	double earnings() const;
	void print() const;
private:
	CommissionEmployee empl;
	double baseSalary;
};

#endif
