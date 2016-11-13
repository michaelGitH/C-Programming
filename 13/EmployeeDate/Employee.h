#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
using std::string;

#include"Date.h"

class Employee
{
public:
	Employee(const string&, const string&,
		const string& );

	void setFirstName(const string&);// ���������� ��� 
	string getFirstName() const; // ���������� ��� 

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string &); // ���������� SSN 
	string getSocialSecurityNumber() const; // ���������� SSN 

	// ����� ����������� ������� ������ Employee ����������� ������� 
	virtual double earnings() const = 0; // ����� �����������
	virtual void print() const; // �����������. ���������� ������ Employee 

	void setBirthDate(const int, const int, const int);
	Date getBirhtDate() const;

	virtual ~Employee();
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	Date birthDate;
};

#endif
