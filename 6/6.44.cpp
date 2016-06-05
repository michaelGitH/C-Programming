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

unsigned long factorial ( unsigned long );

int main()
{
	int x;
	cout << "Enter number for factorial: ";
	cin >> x;
	cout << factorial( x ) << endl;
	return 0;
}

unsigned long factorial ( unsigned long number )
{
	if ( ( number == 1 ) || ( number == 0 ) )
	{
		cout << number << "! = 1 = ";
		return 1;
	}
	else
	{
		cout << number << "! = " << number << " * " << number - 1 << "!" << endl << endl;
		return number * factorial( number - 1 );
	}
}























