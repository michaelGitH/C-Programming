#ifndef COMMISSION_H
#define COMMISSION_H

#include<string>
using std::string;

class CommissionEmployee
{
public:
	CommissionEmployee( const string&, const string&,
		const string&, double = 0.0, double = 0.0 );

	void setFirstName( const string& );// установить имя 
	string getFirstName() const; // возвратить имя 

	void setLastName( const string& ); 
	string getLastName() const;

	void setSocialSecurityNumber( const string & ); // установить SSN 
	string getSocialSecurityNumber() const; // возвратить SSN 

	void setGrossSales( double ); // установить общую сумму продаж 
	double getGrossSales() const; // возвратить общую сумму продаж 

	void setCommissionRate ( double ); // установить процент 
	double getCommissionRate() const; // возвратить процент 

	double earnings() const; // вычислить заработок 
	void print() const; // напечатать объект CommissionEmployee 
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif

