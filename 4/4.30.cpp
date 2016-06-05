#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
	double r;

	cout << "Please enter the radius of a circle: ";
	cin >> r;

	double D = 2 * r;
	double p = 3.14159;
	double l = 2 * p * r;
	double S = p * ( r * r );

	cout << setprecision(2) << fixed
		  << "The diameter is " << D << endl
		  << "The circumference is " << l << endl		  	
		  << "The surface area of a circle is " << S << endl;

	return 0;
}
