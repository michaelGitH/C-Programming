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

	void setFirstName(const string&);// установить имя 
	string getFirstName() const; // возвратить имя 

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string &); // установить SSN 
	string getSocialSecurityNumber() const; // возвратить SSN 

	// чисто виртуальная функция делает Employee абстрактным классом 
	virtual double earnings() const = 0; // чисто виртуальная
	virtual void print() const; // виртуальная. напечатать объект Employee 

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
