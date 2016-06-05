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

int power ( int, int );

int main ()
{
	int x, y;
	cin >> x >> y;
	cout << power ( x, y ) << endl;
	return 0;
}

int power ( int base, int exponent )
{
	if ( exponent <= 1 )
		return base;
	else
		return base * power ( base, exponent - 1 );
}		




