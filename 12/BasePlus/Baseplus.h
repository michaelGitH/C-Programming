#ifndef BASEPLUS_H
#define BASEPLUS_H

#include<string>
using std::string;

class BasePlus
{
public:
	BasePlus( const string&, const string&, const string&,
		double = .0, double = .0, double = .0 );

	void setFirstName( const string & ); // установить имя 
	string getFirstName() const; // возвратить имя 
	 
	void setLastName( const string & ); // установить фамилию 
	string getLastName() const; // возвратить фамилию 

	void setSocialSecurityNumber( const string & ); // установить SSN 
	string getSocialSecurityNumber() const; // возвратить SSN 
	 
	void setGrossSales( double ); // установить общую сумму продаж 
	double getGrossSales() const; // возвратить общую сумму продаж 
	 
	void setCommissionRate( double ); // установить процент 
	double getCommissionRate() const; // возвратить процент 
	 
	void setBaseSalary( double ); // установить основную зарплату 
	double getBaseSalary() const; // возвратить основную зарплату 

	double earnings() const; // вычислить заработок 
	void print() const; // напечатать объект CommissionEmployee 
private:
	string firstName; 
	string lastName; 
	string socialSecurityNumber; 
	double grossSales; // продажи за неделю 
	double commissionRate; // комиссионный процент 
	double baseSalary; // основная зарплата 
};

#endif

