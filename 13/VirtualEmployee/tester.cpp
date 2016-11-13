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

	// вывести информацию и заработок (статическое св€зывание) 
	se.print();
	cout << "earned &" << se.earnings() << "\n\n";
	he.print();
	cout << "earned &" << he.earnings() << "\n\n";
	ce.print();
	cout << "earned &" << ce.earnings() << "\n\n";
	bce.print();
	cout << "earned &" << bce.earnings() << "\n\n";

	vector< Employee * > employees(4);

	// инициализировать вектор имеющимис€ объектами 
	employees[0] = &se;
	employees[1] = &he;
	employees[2] = &ce;
	employees[3] = &bce;

	cout << "Employee processed polimprphically via dynamic binding:\n\n";

	// вызвать virtualViaPointer дл€ печати информации объектов 
	//и заработка, использу€ динамическое св€зывание 
	cout << "Virtual function calls made base-class pointers:\n\n";

	for (size_t i = 0; i < employees.size(); i++) 
		virtualViaPointer(employees[i]);	

	// вызвать virtualViaReference дл€ печати информации объектов 
	//и заработка, использу€ динамическое св€зывание 
	cout << "Virtual function calls made base-class refrence:\n\n";

	for (size_t i = 0; i < employees.size(); i++)
		virtualViaRefrence(*employees[i]); // NB: разыменование 

	system("pause");
	return 0;
}

// вызвать виртуальные функции print и earnings через 
// указатель на базовый класс (динамическое св€зывание) 
void virtualViaPointer(const Employee * const baseClassPtr) {
	baseClassPtr->print();
	cout << "earned $" << baseClassPtr->earnings() << "\n\n";
}

// вызвать виртуальные функции print и earnings через 
// ссылку на базовый класс (динамическое св€зывание) 
void virtualViaRefrence(const Employee &baseClassRef) {
	baseClassRef.print();
	cout << "earned $" << baseClassRef.earnings() << "\n\n";
}
