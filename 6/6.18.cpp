#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int integerPower ( int, int );

int main()
{

	cout << integerPower ( 2, 50 ) << endl;
	return 0;
}

int integerPower ( int base, int exponent )
{
	int result = 1;
	for ( int count = 1; count <= exponent; count++ )
	{
		result *= base;
	}
	return result;
}
