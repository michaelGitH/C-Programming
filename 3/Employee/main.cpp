// Тестирование класса Employee
#include "Employee.h"

int main()
{
	Employee employee1( "Mihail", "Tarakanov", 100000 );
	Employee employee2( "Julia", "Kubashevskaya", 23000 );

	cout << "Year salary of " << employee1.getName()
		  << " " << employee1.getSurname() << " is "
		  << employee1.getSalary() * 12 << " rub.\n"
		  << endl;

	cout << "Year salary of " << employee2.getName()
		  << " " << employee2.getSurname() << " is "
		  << employee2.getSalary() * 12 << " rub.\n"
		  << endl;

	employee1.setSalary( 110000 );
	employee2.setSalary( 25300 );

	cout << employee1.getSalary() * 12 << "\n"
		  << employee2.getSalary() * 12 << endl;

return 0;
}

