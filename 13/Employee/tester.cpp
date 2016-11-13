#include<iostream>
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include"BasePlus.h"

int main() {
	// создать объект базового класса 
	CommissionEmployee commissionEmployee("Sue", "Jones",
		"222-22-2222", 10000, .06);

	// создать указатель базового класса 
	CommissionEmployee *commissionEmployeePtr = 0;

	// создать объект производного класса 
	BasePlus basePlus( "Bob", "Lewis", "333-33-3333", 5000, .4, 300 );

	// создать указатель производного класса 
	BasePlus *basePlusPtr = 0;

	cout << fixed << setprecision(2);

	// вывести объекты, использу€ статическое св€зывание 
	cout << "Invoking print function on base-class and derived-class"
		<< "\nobjects with static binding\n\n";
	commissionEmployee.print();
	cout << "\n\n";
	basePlus.print();

	// вывести объекты, использу€ динамическое св€зывание 
	cout << "\n\nInvoking print function on base-class and derived-class"
		<< "\nobjects with dynamic binding\n\n";
	// установить базовый указатель на базовый объект 
	commissionEmployeePtr = &commissionEmployee;
	cout << "Calling virtual function print with base-class "
		<< "pointer\nto base-class object ivokes base-class "
		<< "print function\n\n";
	commissionEmployeePtr->print();

	// установить производный указатель на производный объект 
	basePlusPtr = &basePlus;
	cout << "\n\nCalling virtual function print with deliver-class "
		<< "pointer\nto deliver-class object ivokes base-class "
		<< "print function\n\n";
	basePlusPtr->print();

	// установить базовый указатель на производный объект 
	commissionEmployeePtr = &basePlus;
	cout << "\n\nCalling virtual function print with base-class "
		<< "pointer\nto deliver-class object ivokes deliver-class "
		<< "print function\n\n";

	// полиморфизм; вызывает print из BasePlusCommissionEmployee; 
	// указатель базового класса на объект производного класса 
	commissionEmployeePtr->print();
	cout << "\n\n";

	commissionEmployeePtr = &commissionEmployee;

	CommissionEmployee *array[2] = { commissionEmployeePtr, basePlusPtr };

	cout << "\n\nCalling array of poiners CE:\n\n";
	for (int i = 0; i < 2; i++) {
		array[i]->print();
		cout << "\n\n";
	}



	// вызов функций базового класса дл€ объекта производного 
	// класса через указатель базового класса 
	/*commissionEmployeePtr = &basePlus;
	string firstName = commissionEmployeePtr->getFirstName();
	string lastName = commissionEmployeePtr->getLastName();
	string ssn = commissionEmployeePtr->getSocialSecurityNumber();
	double grossSales = commissionEmployeePtr->getGrossSales();
	double commissionRate = commissionEmployeePtr->getCommissionRate();

	// попытка вызове функций только производного класса дл€ 
	// объекта производного класса через базовый указатель 
	double baseSalary = commissionEmployeePtr->getBaseSalary();
	commissionEmployeePtr->setBaseSalary(500);*/

	system("pause");
	return 0;
}


