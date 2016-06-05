//floor
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a = 8.4;
	double b = 4.8;
	double c = 11.13;
	double d = 134.875;

	cout << a << "\t" << floor ( a + .5 ) << endl;
	cout << b << "\t" << floor ( b + .5 ) << endl;
	cout << c << "\t" << floor ( c + .5 ) << endl;
	cout << d << "\t" << floor ( d + .5 ) << endl;

	return 0;
}
