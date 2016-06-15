#include<iostream>
using std::cout;
using std::endl;

#include "Employee.h"

int main()
{
	// использовать имя класса и операцию разрешения области 
	// действия, чтобы обратиться к статическому элементу getCount 
	cout << "Number of employees befor creation of any object is " <<
		Employee::getCount() << endl; // использовать имя класса 

	// использовать new для динамического создания двух Employee 
	// операция new вызывает также конструктор объекта 
	Employee *e1Ptr = new Employee("Susan", "Baker");
	Employee *e2Ptr = new Employee("Robert", "Jones");

	// вызвать getCount для первого объекта Employee 
	cout << "Number of employees after object are instantiated is " <<
		e1Ptr->getCount() << endl;

	cout << "\n\nEmployee 1: " << e1Ptr->getFirstName() << ' ' <<
		e1Ptr->getLastName() << "\nEmployee 2: " << e2Ptr->getFirstName() << ' '
		<< e2Ptr->getLastName() << "\n\n";

	delete e1Ptr; // освободить память 
	e1Ptr = 0; // отсоединить указатель от области свободной памяти 
	delete e2Ptr;
	e2Ptr = 0;

	// объектов нет, поэтому для вызова статической функции getCount 
	// используется имя класса и операция разрешения области действия 
	cout << "Number of employees after objects are delited is " <<
		Employee::getCount() << endl;

	system("pause");
	return 0;
}