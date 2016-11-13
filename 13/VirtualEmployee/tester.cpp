#include<iostream>
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include<vector>
using std::vector;

#include"Employee.h"
#include"SalariedEmployee.h"
#include"HourlyEmployee.h";
#include"CommissionEmployee.h"
#include"BasePlus.h"

void virtualViaPointer(const Employee* const);
void virtualViaRefrence(const Employee&);

int main() {
	cout << fixed << setprecision(2);

	SalariedEmployee se("Julia", "Tarakanova", "123-45-6789", 500);
	HourlyEmployee he("Mihail", "Tarakanov", "987-65-4321", 20, 45);
	CommissionEmployee ce("Kleopatra", "Tarakanova", "123-45-4321", 10000, .05);
	BasePlusCommissionEmployee bce("Klepa", "Mihaylovna", "543-21-2345", 10000, .04, 200);

	cout << "Employee processed individually using static binding:\n\n";

	// ������� ���������� � ��������� (����������� ����������) 
	se.print();
	cout << "earned &" << se.earnings() << "\n\n";
	he.print();
	cout << "earned &" << he.earnings() << "\n\n";
	ce.print();
	cout << "earned &" << ce.earnings() << "\n\n";
	bce.print();
	cout << "earned &" << bce.earnings() << "\n\n";

	vector< Employee * > employees(4);

	// ���������������� ������ ���������� ��������� 
	employees[0] = &se;
	employees[1] = &he;
	employees[2] = &ce;
	employees[3] = &bce;

	cout << "Employee processed polimprphically via dynamic binding:\n\n";

	// ������� virtualViaPointer ��� ������ ���������� �������� 
	//� ���������, ��������� ������������ ���������� 
	cout << "Virtual function calls made base-class pointers:\n\n";

	for (size_t i = 0; i < employees.size(); i++) 
		virtualViaPointer(employees[i]);	

	// ������� virtualViaReference ��� ������ ���������� �������� 
	//� ���������, ��������� ������������ ���������� 
	cout << "Virtual function calls made base-class refrence:\n\n";

	for (size_t i = 0; i < employees.size(); i++)
		virtualViaRefrence(*employees[i]); // NB: ������������� 

	system("pause");
	return 0;
}

// ������� ����������� ������� print � earnings ����� 
// ��������� �� ������� ����� (������������ ����������) 
void virtualViaPointer(const Employee * const baseClassPtr) {
	baseClassPtr->print();
	cout << "earned $" << baseClassPtr->earnings() << "\n\n";
}

// ������� ����������� ������� print � earnings ����� 
// ������ �� ������� ����� (������������ ����������) 
void virtualViaRefrence(const Employee &baseClassRef) {
	baseClassRef.print();
	cout << "earned $" << baseClassRef.earnings() << "\n\n";
}
