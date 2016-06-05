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

bool multiple ( int, int );

int main()
{
	cout << boolalpha << multiple ( 10, 5 ) << endl;
	cout << multiple ( 3, 6 ) << endl;
	cout << multiple ( 140, 5 ) << endl;
	cout << multiple ( 5, 3 ) << endl;
	return 0;
}

bool multiple ( int x, int y )
{
	if ( x % y == 0 )
		return true;
	else
		return false;
}



























