#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	char f[ 20 ] = "Little Klepa!";
	cout << "Seven item of \"" << f << "\" is " << f[ 6 ] << endl;

	float c[ 15 ] = { 3, 5.2, 4.78, 67.48, 78.5 };
	cout << "Item four of \"c\" is " << c[ 4 ] << " and item fourteen is " << c[ 14 ] << endl;

	int g[ 5 ];
	for ( int count = 0; count < 5; count++ )
		g[ count ] = 8;
	for ( int count = 0; count < 5; count++ )
		cout << g[ count ] << " ";
	cout << endl;

	float G[ 100 ];
	for ( int count = 0; count < 100; count++ )
		G[ count ] = static_cast< float >( count ) * 1.2;
	float total = 0;
	for ( int count = 0; count < 100; count++ )
		total += G[ count ];
	cout << "Total G is " << total << endl;

	double a[ 11 ], b[ 34 ];
	for ( int count = 0; count < 11; count++ )
		a[ count ] = count + 1;
	for ( int count = 0; count < 34; count++ )
		b[ count ] = ( count + 1 ) * 2;
	cout << "Array a is ";
	for ( int count = 0; count < 11; count++ )
		cout << a[ count ] << " ";
	cout << endl;
	cout << "Array b is ";
	for ( int count = 0; count < 34; count++ )
		cout << b[ count ] << " ";
	cout << endl;
	for ( int count = 0; count < 11; count++ )
		b[ count ] = a[ count ];
	cout << "Array b after changes is ";
	for ( int count = 0; count < 34; count++ )
		cout << b[ count ] << " ";
	cout << endl;

	float w[ 99 ];
	srand( time( 0 ) );
	for ( int count = 0; count < 99; count++ )
		w[ count ] = ( 1 + rand() % 99 ) * 1.1;
	cout << "Array w is ";
	for ( int count = 0; count < 99; count++ )
		cout << w[ count ] << " ";
	cout << endl;
	float min = 10000000, max = -10000000;
	for ( int count = 0; count < 99; count++ )
	{
		if ( w[ count ] < min )
			min = w[ count ];
		if ( w[ count ] > max )
			max = w[ count ];
	}
	cout << "Max value is " << max << endl;
	cout << "Min value is " << min << endl;
	
	
	
	

	

			

	return 0;
}
