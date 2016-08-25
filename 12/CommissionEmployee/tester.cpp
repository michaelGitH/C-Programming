#include<iostream>
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include"BasePlus.h"

int main() {
	// ������� ������ CommissionEmployee 
	CommissionEmployee employee( "Mihail", "Tarakanov", "123-45-6789",
		10000, .06 );

	// ���������� ������ ������ ����� � ��������� ������ 
	cout << fixed << setprecision( 2 );

	// �������� ������ ��������� 
	cout << "Employee information obtained by get functions: \n" 
	<< "\nFirst name is " << employee.getFirstName() 
	<< "\nLast name is " << employee.getLastName() 
	<< "\nSocial security number is " 
	<< employee.getSocialSecurityNumber() 
	<< "\nGross sales is " << employee.getGrossSales () 
	<< "\nCommission rate is "<< employee.getCommissionRate() << endl; 

	employee.setGrossSales( 8000 ); // ���������� ����� ������ 
	employee.setCommissionRate( .1 );

	cout << "\nUpdated employee information " 
	<< "output by print function: \n" << endl; 
	employee.print(); // ������� ����� ���������� � �������� 

	// ������� ��������� ��������� 
	cout << "\n\nEmployee's earnings: $" << employee.earnings () << endl; 

	// ������� ������ BasePlusCommissionEmployee 
	BasePlus employee2("Julia", "Tarakanova", "333-33-3333",
		5000, .04, 300);

	// ���������� ������ ������ ����� � ��������� 
	cout << fixed << setprecision(2);

	// �������� ������ ��������� 
	cout << "\n\nEmployee2 information obtained by get functions: \n"
		<< "\nFirst name is " << employee2.getFirstName()
		<< "\nLast name is " << employee2.getLastName()
		<< "\nSocial security number is "
		<< employee2.getSocialSecurityNumber()
		<< "\nGross sales is " << employee2.getGrossSales()
		<< "\nCommission rate is " << employee2.getCommissionRate()
		<< "\nBase salary is " << employee2.getBaseSalary() << endl;

	employee2.setBaseSalary(1000); // ���������� �������� 

	cout << "\nUpdate employee2 information "
		<< "output by print function:\n" << endl;
	employee2.print();

	// ������� ��������� ��������� 
	cout << "\n\nEmployee2's earnings: $" << employee2.earnings() << endl;

	system("pause");
	return 0;
}


