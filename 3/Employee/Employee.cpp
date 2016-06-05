// Исходный код класса Employee
#include "Employee.h"

Employee::Employee( string n, string s, int sa )
{
	setName( n );
	setSurname( s );
	setSalary( sa );
}

void Employee::setName( string n )
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setSurname( string s )
{
	surname = s;
}

string Employee::getSurname()
{
	return surname;
}

void Employee::setSalary( int sa )
{
	if( sa < 0 )
		{
		sa = 0;
		cout << "Salary is invalid!\n"
			  << endl;
		}
	salary = sa;
}

int Employee::getSalary()
{
	return salary;
}
















