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
	vector<Employee *>employees( 4 );
	// инициализировать вектор имеющимися объектами 
	SalariedEmployee se("Julia", "Tarakanova", "123-45-6789", 500);
	se.setBirthDate(10, 11, 1992);
	HourlyEmployee he("Mihail", "Tarakanov", "987-65-4321", 20, 45);
	he.setBirthDate(11, 15, 1992);
	CommissionEmployee ce("Kleopatra", "Tarakanova", "123-45-4321", 10000, .05);
	ce.setBirthDate(9, 5, 2015);
	BasePlusCommissionEmployee bce("Klepa", "Mihaylovna", "543-21-2345", 10000, .04, 200);
	bce.setBirthDate(9, 5, 2015);

	cout << "birth date of " << ce.getFirstName() <<
		" " << ce.getLastName() << ": " <<
		ce.getBirhtDate() << endl;

	employees[0] = &se;
	employees[1] = &he;
	employees[2] = &ce;
	employees[3] = &bce;

	for (size_t i = 0; i < employees.size(); i++) {
		(*employees[i]).print();
		if ((*employees[i]).getBirhtDate().getMonth() != 9)
			cout << "Earned: " << (*employees[i]).earnings() << "$\n\n";
		else
			cout << "Earned = " << (*employees[i]).earnings() + 100 << "$ =\n"
			<< (*employees[i]).earnings() << "$ + " << 100 << "$(birth date award).\n\n";
	}

	system("pause");
	return 0;
}