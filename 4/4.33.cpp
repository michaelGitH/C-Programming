#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
	double a, b, c;
	cout << "Enter first side of the triangle: ";
	cin >> a;
	cout << "Enter second side of the triangle: ";
	cin >> b;	
	cout << "Enter third side of the triangle: ";
	cin >> c;

	if ( a * a == b * b + c * c )
		cout << "It's the right triangle" << endl;
	else if ( b * b == a * a + c * c )
		cout << "It's the right triangle" << endl;
	else if ( c * c == a * a + b * b )
		cout << "It's the right triangle" << endl;
	else
		cout << "It's not the right triangle" << endl;


	return 0;
}
