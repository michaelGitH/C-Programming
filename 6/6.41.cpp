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

long double fib ( long double );

int main()
{
	cout << fixed << setprecision( 0 );
	long double x;
	cin >> x;
	cout << fib( x ) << endl;
	cout << endl;
	for ( int count = 1; count <= x; count++ )
	{
		cout << fib( count ) << endl;
	}

	return 0;	
}

long double fib ( long double number )
{
	long double f;
	long double f1 = 0;
	long double f2 = 1;
	long double count;
	if ( number == 1 )
		return 0;
	else if ( number == 2 )
		return 1;
	else
	for ( count = 3; count <= number; count++ )
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}



		
		
























