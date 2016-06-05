#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::boolalpha;

#include <string>
using std::string;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::left;

#include <cmath>
using std::sqrt;
using std::pow;

double minimum ( double, double, double );

int main()
{
	double a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	cout << "Minimal number is " << minimum( a, b, c ) << endl;
	return 0;
}

double minimum ( double a, double b, double c )
{
	double min = a;
	if ( b < min )
		min = b;
	if ( c < min )
		min = c;
	return min;
}






























