#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::sqrt;
using std::pow;

double hypotenuse ( double, double );

int main()
{
	cout << hypotenuse ( 3, 4 ) << endl
		<< hypotenuse ( 5, 12 ) << endl
		<< hypotenuse ( 8, 15 ) << endl;

	return 0;
}

double hypotenuse ( double side1, double side2 )
{
	return sqrt ( side1 * side1 + side2 * side2 );
}
