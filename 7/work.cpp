#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a[ 11 ], b[ 34 ];
	for ( int i = 0; i < 11; i++ )
		a[ i ] = ( i + i ) / 1,5;
	for ( int i = 0; i < 11; i++ )
		cout << a[ i ] << "  ";
	cout << endl << endl;
	for ( int i = 0; i < 11; i++ )
		b[ i ] = a[ i ];
	for ( int i = 0; i < 34; i++ )
		cout << b[ i ] << "  ";
	cout << endl;

	double w[ 99 ];
	for ( int i = 0; i < 99; i++ )
		w[ i ] = ( i + 1 ) / 1.25 ;
	for ( int i = 0; i < 99; i++ )
		cout << fixed << setprecision( 2 ) << setw( 2 ) << " " << w[ i ];
	cout << endl << endl;
	double numberMin = 999999, numberMax = -999999;
	for ( int i = 0; i < 99; i++ )
	{
		if ( w[ i ] < numberMin )
			numberMin = w[ i ];
		if ( w[ i ] > numberMax )
			numberMax = w[ i ];
	}
	cout << "max is " << numberMax << "; min is " << numberMin << endl;




	return 0;
}
