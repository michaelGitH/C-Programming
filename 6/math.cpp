#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using namespace std;

int main()
{
	double c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9, j = 10, k = 0;

	double a = 18.25;

	cout << a << " округлен до " << ceil( a ) << endl;

	double b = 45;
	cout << "cosinus " << b << " is " << cos( b ) << endl;

	c = 3;
	cout << "exp of " << c << " is " << exp( c ) << endl;

	cout << "fabs of " << a << " is " << fabs( a ) << endl;

	cout << a << " округлен до " << floor( a ) << endl;

	cout << c << " / " << d << " is " << fmod( c, d ) << endl;

	cout << "log of " << d << " is " << log( d ) << endl;

	cout << "10log of " << d << " is " << log10( d ) << endl;

	b = 45;


	cout << "sqrt of " << f + c << " is " << sqrt( f + c ) << endl;

	b = 45;
	cout << "tang of " << b << " is " << tan( b ) << endl;

	return 0;
}

