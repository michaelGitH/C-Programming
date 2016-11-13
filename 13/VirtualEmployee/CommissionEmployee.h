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

	void setGrossSales(double); // ���������� ����� ����� ������ 
	double getGrossSales() const; // ���������� ����� ����� ������ 

	void setCommissionRate(double); // ���������� ������� 
	double getCommissionRate() const; // ���������� ������� 

	virtual double earnings() const; // ��������� ��������� 
	virtual void print() const; // ���������� ������ CommissionEmployee

	~CommissionEmployee();
private:
	double grossSales;
	double commissionRate;
};

#endif
