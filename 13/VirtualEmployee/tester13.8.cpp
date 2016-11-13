#include<iostream>
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include<vector>
using std::vector;

#include<typeinfo>

#include"Employee.h"
#include"SalariedEmployee.h"
#include"HourlyEmployee.h";
#include"CommissionEmployee.h"
#include"BasePlus.h"

int main() {
	cout << fixed << setprecision(2);

	vector< Employee * > employees(4);

	// инициализировать вектор имеющимися объектами 
	employees[0] = new SalariedEmployee("Julia", "Tarakanova", "123-45-6789", 500);
	employees[1] = new HourlyEmployee("Mihail", "Tarakanov", "987-65-4321", 20, 45);
	employees[2] = new CommissionEmployee("Kleopatra", "Tarakanova", "123-45-4321", 10000, .05);
	employees[3] = new BasePlusCommissionEmployee("Klepa", "Mihaylovna", "543-21-2345", 10000, .04, 200);

	for (size_t i = 0; i < employees.size(); i++) {
		employees[i]->print(); // вывести информацию о служащем 
		cout << endl;

		// нисходящее приведение указателя 
		BasePlusCommissionEmployee *derivedPtr =
			dynamic_cast<BasePlusCommissionEmployee*>
			(employees[i]);

		// определить, ссылается ли указатель на служащего 
		// типа BasePlusCommissionEmployee 
		if (derivedPtr != 0) { //0, если не BasePlusCommissionEmployee 
			double oldBaseSalary = derivedPtr->getBaseSalary();
			cout << "Old base salary: $" << oldBaseSalary;
			derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
			cout << "\nnew base salary with 10% increase is: $"
				<< derivedPtr->getBaseSalary() << endl;
		}

		cout << "earned: $" << employees[i]->earnings() << "\n\n";
	}

	// освободить объекты, на которые указывают элементы вектора 
	for (size_t i = 0; i < employees.size(); i++) {
		cout << "deleting object of "
			<< typeid(*employees[i]).name() << endl;

		delete employees[i];
	}

	system("pause");
	return 0;
}