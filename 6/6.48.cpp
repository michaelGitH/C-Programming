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

double distance ( double, double, double, double );

int main()
{
	double x1, y1;
	double x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << fixed << setprecision( 2 ) << distance ( x1, y1, x2, y2 ) << endl;
}

double distance ( double x1, double y1, double x2, double y2 )
{
	return sqrt ( pow( x2 - x1, 2 ) + pow( y2 - y1, 2 ) );
}






























