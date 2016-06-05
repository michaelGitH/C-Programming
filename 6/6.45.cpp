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

int gcd ( int, int );

int main()
{
	int x, y;
	cin >> x >> y;
	cout << gcd ( x, y );
	cout << endl;
	return 0;
}

int gcd ( int x, int y )
{
	if ( y == 0 )
		return x;
	else 
		return gcd ( y, x % y );
}

		




















	
