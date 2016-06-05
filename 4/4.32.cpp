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

	if ( a < ( b + c ) )
		if ( b < ( a + c ) )
			if ( c < ( a + b ) )
				cout << "Three entered sides is sides of triangle" << endl;
			else cout << "Three entered sides is not sides of triangle" << endl;
		else cout << "Three entered sides is not sides of triangle" << endl;
	else cout << "Three entered sides is not sides of triangle" << endl;

	return 0;
}
