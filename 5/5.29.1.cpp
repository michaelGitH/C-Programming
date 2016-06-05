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
	cout << fixed << "year" << setw( 50 ) << "5%"
		  << endl;

	for ( rate = .05; rate <= 0.05; rate += .01 )
	{
		for ( int y = 1627, year = 1; y <= 2015; y++, year++ )
		{
			double per = pow ( 1.00 + rate, static_cast< double >( year ) );
			amount = base * per;
			cout << y << fixed << setprecision( 2 ) << " " << rate << setw( 50 ) << amount << endl;
		}
		cout << endl;
	}

	return 0;
}
