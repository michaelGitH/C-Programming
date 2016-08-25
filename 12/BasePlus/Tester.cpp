#include<iostream>
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include"Baseplus.h"

int main() {
	// ������� ������ BasePlusCommissionEmployee 
	BasePlus employee("Mihail", "Tarakanov", "333-33-3333",
		5000, .04, 300);

	// ���������� ������ ������ ����� � ��������� 
	cout << fixed << setprecision(2);

	// �������� ������ ��������� 
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()
		<< "\nBase salary is " << employee.getBaseSalary() << endl;

	employee.setBaseSalary(1000); // ���������� �������� 

	cout << "\nUpdate employee information "
		<< "output by print function:\n" << endl;
	employee.print();

	// ������� ��������� ��������� 
	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

	system("pause");
	return 0;
}