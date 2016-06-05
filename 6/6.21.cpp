#include <iostream>
using std::cout;
using std::endl;
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

#include <cmath>
using std::sqrt;
using std::pow;

int count;

bool even ( int );

int main()
{
	for ( count = 1; count <= 20; count++ )
		cout << boolalpha << count << " is " << even ( count ) << " even" << endl;

	return 0;
}

bool even ( int number )
{
	return count % 2 == 0;
}





























