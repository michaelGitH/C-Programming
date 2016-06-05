// Определение класса Employee
#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
	Employee( string, string, int );
	void setName( string );
	string getName();
	void setSurname( string );
	string getSurname();
	void setSalary( int );
	int getSalary();
private:
	string name;
	string surname;
	int salary;
};
