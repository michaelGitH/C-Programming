#include<iostream>
using std::cout;
using std::endl;

#include "Employee.h"

int main()
{
	// ������������ ��� ������ � �������� ���������� ������� 
	// ��������, ����� ���������� � ������������ �������� getCount 
	cout << "Number of employees befor creation of any object is " <<
		Employee::getCount() << endl; // ������������ ��� ������ 

	// ������������ new ��� ������������� �������� ���� Employee 
	// �������� new �������� ����� ����������� ������� 
	Employee *e1Ptr = new Employee("Susan", "Baker");
	Employee *e2Ptr = new Employee("Robert", "Jones");

	// ������� getCount ��� ������� ������� Employee 
	cout << "Number of employees after object are instantiated is " <<
		e1Ptr->getCount() << endl;

	cout << "\n\nEmployee 1: " << e1Ptr->getFirstName() << ' ' <<
		e1Ptr->getLastName() << "\nEmployee 2: " << e2Ptr->getFirstName() << ' '
		<< e2Ptr->getLastName() << "\n\n";

	delete e1Ptr; // ���������� ������ 
	e1Ptr = 0; // ����������� ��������� �� ������� ��������� ������ 
	delete e2Ptr;
	e2Ptr = 0;

	// �������� ���, ������� ��� ������ ����������� ������� getCount 
	// ������������ ��� ������ � �������� ���������� ������� �������� 
	cout << "Number of employees after objects are delited is " <<
		Employee::getCount() << endl;

	system("pause");
	return 0;
}