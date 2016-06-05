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

int assessment ( int );

int main ()
{
	int x;
	cin >> x;
	cout << "assessment is " << assessment ( x ) << endl;
	return 0;
}

int assessment ( int x )
{
	if ( x >= 90 && x <= 100 )
		return 4;
	else if ( x >= 80 && x <= 89 )
		return 3;
	else if ( x >= 70 && x <= 79 )
		return 2;
	else if ( x >= 60 && x <= 69 )
		return 1;
	else if ( x <= 60 )
		return 0;
}



















