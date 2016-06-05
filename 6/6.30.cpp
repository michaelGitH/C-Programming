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

void simple ( int );

int main()
{
	for ( int count = 1; count <= 10000; count++ )
	{
		if ( count > 3 )
		{
			count++;
			simple ( count );
		}
	}
	for ( int count = 1; count <= 10000; count++ )
	{
		if ( sqrt( count ) * sqrt( count ) != count )
			simple ( count );
	}

	return 0;
}

void simple ( int number )
{
	int total = 0;
	for ( int count = number; count >= 1; count-- )
		if ( number % count == 0 )
			total += count;
	if ( total == number + 1 )
	cout << number << " is a simple number!" << endl;
}
























