#ifndef COMMISSION_H
#define COMMISSION_H

#include<string>
using std::string;

class CommissionEmployee
{
public:
	CommissionEmployee( const string&, const string&,
		const string&, double = 0.0, double = 0.0 );

	void setFirstName( const string& );// ���������� ��� 
	string getFirstName() const; // ���������� ��� 

	void setLastName( const string& ); 
	string getLastName() const;

	void setSocialSecurityNumber( const string & ); // ���������� SSN 
	string getSocialSecurityNumber() const; // ���������� SSN 

	void setGrossSales( double ); // ���������� ����� ����� ������ 
	double getGrossSales() const; // ���������� ����� ����� ������ 

	void setCommissionRate ( double ); // ���������� ������� 
	double getCommissionRate() const; // ���������� ������� 

	double earnings() const; // ��������� ��������� 
	void print() const; // ���������� ������ CommissionEmployee 
protected:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif

