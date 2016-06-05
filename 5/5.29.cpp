#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include<cmath>
using std::pow;
#include<iomanip>
using std::setprecision;
using std::setw;
using std::left;

int main()
{
	double amount;
	double base = 24.00;
	double rate;
	int year;
	cout << fixed << "year" << setw( 10 ) << "5%"
		  << setw( 10 ) << "6%"
		  << setw( 10 ) << "7%"
		  << setw( 10 ) << "8%"
		  << setw( 10 ) << "9%"
		  << setw( 10 ) << "10%"
		  << endl;

	for ( int y = 1626, year = 1; y <= 2015; y++, year++ )
	{
		for ( rate = .05; rate <= 0.10; rate += .01 )
		{
			double per = pow ( 1.00 + rate, static_cast< double >( year ) );
			amount = base * per;
			cout << y << fixed << setw( 10 ) << setprecision( 2 ) << amount;
		}
		cout << endl;
	}

	return 0;
}
			
