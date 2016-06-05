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

int main()
{
	int x;
	cin >> x;
	int y = x;
	int count;
	for ( count = 0; y > 0; count++ )
		y /= 10;
	y = x;

		int z = y / pow ( 10, count - 1 );
		cout << z << "  ";
	
}
