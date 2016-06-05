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

void number ();

int main()
{
	//a, b
	int a = 5, b = 2, c = a / b, d = a % b;
	cout << c << " " << d << endl;
	//c
	number();
	return 0;
}

void number ()
{
	int x;
	cout << "Enter number more than 1 and less than 32767: ";
	cin >> x;
	int y = x;
	int count;
	for ( count = 0; y > 0; count++ )
		y /= 10;
	y = x;
	for ( count; x > 0; count-- )
	{
		int z = pow ( 10, count - 1 );
		y = x / z;
		cout << y << "  ";
		x = x % z;
	}
	cout << endl;
}
	



















