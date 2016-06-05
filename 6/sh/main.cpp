// Тестовая программа для шаблона функции maximum.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "h.h"
	
int main()
{
	// демонстрация maximum со значениями типа int
	int int1, int2, int3;
	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;

	// вызвать int-версию maximum
	cout << "The maximum integer value is: "
		<< maximum( int1, int2, int3 );

	// демонстрация maximum со значениями типа double
	double double1, double2, double3;
	cout << "\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;

	cout << "The maximum double value is: "
		<< maximum( double1, double2, double3 );

	return 0;
}















