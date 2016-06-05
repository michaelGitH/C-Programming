//round of
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <cmath>
using std::floor;

double roundToInteger ( double );
double roundToTenths ( double );
double roundToHandredths ( double );
double roundToThousendths ( double );

int main()
{
	double x;
	cout << "Enter the number: ";
	cin >> x;

	cout << "The number is " << x << endl
		<< "The number rounded to integer is "
		<< roundToInteger ( x ) << endl
		<< "The number rounded to tenth is "
		<< roundToTenths ( x ) << endl
		<< "The number rounded to handredth is "
		<< roundToHandredths ( x ) << endl
		<< "The number rounded to thousendths is "
		<< roundToThousendths ( x ) << endl;

	return 0;
}

double roundToInteger ( double number )
{
	return floor ( number + .5 );
}
double roundToTenths ( double number )
{
	return floor ( number * 10 + .5 ) / 10;
}
double roundToHandredths ( double number )
{
	return floor ( number * 100 + .5 ) / 100;
}
double roundToThousendths ( double number )
{
	return floor ( number * 1000 + .5 ) / 1000;
}








