#include <iostream>
#include <iomanip>
using namespace std;

double pow ( double, double );

int main()
{
	double x, y;
	cout << "Введите число и степень: ";
	cin >> x >> y;
	cout << fixed << setprecision( 2 ) << pow ( x, y ) << endl;
	return x;
}

double pow ( double x, double y )
{
	double mn = x;
	for ( int count = 2; count <= y; count++ )
	{
		x *= mn;
	}
	return x;
}
