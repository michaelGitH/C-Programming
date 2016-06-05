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

void perfect ( int );

int main()
{
	for ( int count = 1; count <= 10000000; count++ )
		perfect ( count );
	return 0;
}

void perfect ( int number )
{
	int total = 0;
	for ( int count = number / 2; count >= 1; count-- )
	{
		if ( number % count == 0 )
		{
			total += count;
		}
	}
	if ( total == number )
	{
		cout << number << " is a perfect number!" << endl;
	}
}

