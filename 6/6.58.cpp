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

template < typename M >
M min ( M x, M y, M z )
{
	if ( x <= y && x <= z )
		return x;
	else if ( y <= x && y <= z )
		return y;
	else
		return z;
}

int main()
{
	int x, y, z;
	cout << "Enter 3 integers: ";
	cin >> x >> y >> z;
	cout << "Minimum is " << min( x, y, z ) << endl;
	double a, b, c;
	cout << "Enter 3 floating-point numbers: ";
	cin >> a >> b >> c;
	cout << "Minimum is " << min( a, b, c ) << endl;
	char d, e, f;
	cout << "Enter 3 symbols: ";
	cin >> d >> e >> f;
	cout << "Minimum is " << min( d, e, f ) << endl;
	cout << static_cast< int >( d ) << "\t" << static_cast< int >( e ) << "\t"  << static_cast< int >( f ) << endl;
	return 0;
}






















	
