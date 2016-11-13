#include<iostream>
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include"BasePlus.h"

int main() {
	// ������� ������ �������� ������ 
	CommissionEmployee commissionEmployee("Sue", "Jones",
		"222-22-2222", 10000, .06);

	// ������� ��������� �������� ������ 
	CommissionEmployee *commissionEmployeePtr = 0;

	// ������� ������ ������������ ������ 
	BasePlus basePlus( "Bob", "Lewis", "333-33-3333", 5000, .4, 300 );

	// ������� ��������� ������������ ������ 
	BasePlus *basePlusPtr = 0;

	cout << fixed << setprecision(2);

	// ������� �������, ��������� ����������� ���������� 
	cout << "Invoking print function on base-class and derived-class"
		<< "\nobjects with static binding\n\n";
	commissionEmployee.print();
	cout << "\n\n";
	basePlus.print();

	// ������� �������, ��������� ������������ ���������� 
	cout << "\n\nInvoking print function on base-class and derived-class"
		<< "\nobjects with dynamic binding\n\n";
	// ���������� ������� ��������� �� ������� ������ 
	commissionEmployeePtr = &commissionEmployee;
	cout << "Calling virtual function print with base-class "
		<< "pointer\nto base-class object ivokes base-class "
		<< "print function\n\n";
	commissionEmployeePtr->print();

	// ���������� ����������� ��������� �� ����������� ������ 
	basePlusPtr = &basePlus;
	cout << "\n\nCalling virtual function print with deliver-class "
		<< "pointer\nto deliver-class object ivokes base-class "
		<< "print function\n\n";
	basePlusPtr->print();

	// ���������� ������� ��������� �� ����������� ������ 
	commissionEmployeePtr = &basePlus;
	cout << "\n\nCalling virtual function print with base-class "
		<< "pointer\nto deliver-class object ivokes deliver-class "
		<< "print function\n\n";

	// �����������; �������� print �� BasePlusCommissionEmployee; 
	// ��������� �������� ������ �� ������ ������������ ������ 
	commissionEmployeePtr->print();
	cout << "\n\n";

	commissionEmployeePtr = &commissionEmployee;

	CommissionEmployee *array[2] = { commissionEmployeePtr, basePlusPtr };

	cout << "\n\nCalling array of poiners CE:\n\n";
	for (int i = 0; i < 2; i++) {
		array[i]->print();
		cout << "\n\n";
	}



	// ����� ������� �������� ������ ��� ������� ������������ 
	// ������ ����� ��������� �������� ������ 
	/*commissionEmployeePtr = &basePlus;
	string firstName = commissionEmployeePtr->getFirstName();
	string lastName = commissionEmployeePtr->getLastName();
	string ssn = commissionEmployeePtr->getSocialSecurityNumber();
	double grossSales = commissionEmployeePtr->getGrossSales();
	double commissionRate = commissionEmployeePtr->getCommissionRate();

	// ������� ������ ������� ������ ������������ ������ ��� 
	// ������� ������������ ������ ����� ������� ��������� 
	double baseSalary = commissionEmployeePtr->getBaseSalary();
	commissionEmployeePtr->setBaseSalary(500);*/

	system("pause");
	return 0;
}


