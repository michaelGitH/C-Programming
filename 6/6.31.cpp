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

int reverse ( int );

int main()
{
	int x;
	cin >> x;
	cout << reverse( x ) << endl;
	return 0;
}

int reverse ( int number )
{
	int count;
	int ch = number;
	int reversed = 0;
	for ( count = 0; ch >= 9; count++ )
	{
		ch /= 10;
	}
	ch = number;
	for ( count; count >= 0; count-- )
	{
		reversed += ( ( ch % 10 ) * pow ( 10, count ) );
		ch /= 10;
	}
	return reversed;
}






















