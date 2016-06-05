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

#include <cmath>
using std::sqrt;
using std::pow;

int time ( int, int, int );

int main()
{
	cout << time ( 1, 23, 45 ) << endl;
	cout << time ( 7, 45, 35 ) << endl;
	cout << time ( 7, 45, 35 ) - time ( 1, 23, 45 ) << endl;
	return 0;
}

int time ( int h, int m, int s )
{
	if ( h < 12 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0 )
		return h * 3600 + m * 60 + s;
	else
		cout << "Incorrect time! Try again" << endl;
}






































