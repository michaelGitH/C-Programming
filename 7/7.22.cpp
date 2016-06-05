#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
#include <string>
using std::string;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int card ( int[][ 6 ], int, int, int );

int main()
{
	int sales[ 7 ][ 6 ] = { 0 };
	card( sales, 1, 1, 500 );
	card( sales, 1, 2, 300 );
	card( sales, 1, 3, 700 );
	card( sales, 1, 4, 100 );
	card( sales, 1, 5, 0 );
	card( sales, 2, 1, 100 );
	card( sales, 2, 2, 400 );
	card( sales, 2, 3, 200 );
	card( sales, 2, 4, 0 );
	card( sales, 2, 5, 0 );
	card( sales, 3, 1, 50 );
	card( sales, 3, 2, 600 );
	card( sales, 3, 3, 0 );
	card( sales, 3, 4, 800 );
	card( sales, 3, 5, 100 );
	card( sales, 4, 1, 0 );
	card( sales, 4, 2, 75 );
	card( sales, 4, 3, 50 );
	card( sales, 4, 4, 100 );
	card( sales, 4, 5, 0 );
	for ( int string = 1; string < 6; string++ )
		sales[ string ][ 5 ] = sales[ string ][ 1 ] + sales[ string ][ 2 ]
		+ sales[ string ][ 3 ] + sales[ string ][ 4 ];
	for ( int column = 1; column < 5; column++ )
		sales[ 6 ][ column ] = sales[ 1 ][ column ] + sales[ 2 ][ column ] + 
		sales[ 3 ][ column ] + sales[ 4 ][ column ] + sales[ 5 ][ column ];
	sales[ 6 ][ 5 ] = sales[ 1 ][ 5 ] + sales[ 2 ][ 5 ] + sales[ 3 ][ 5 ] + sales[ 4 ][ 5 ] + sales[ 5 ][ 5 ];

	cout << setw( 17 ) << "seller 1" << setw( 10 ) << "seller 2" << setw( 10 ) << "seller 3" << setw( 10 )
	 << "seller 4" << setw( 15 ) << "total product" << endl;

	for ( int string = 1; string < 7; string++ )
	{
		if ( string == 6 )
		{
			cout << "total seller";
			for ( int count = 1; count < 6; count++ )
				cout << setw( 5 ) << sales[ string ][ count ] << "     ";
			cout << endl;
		}
		else
		{
			cout << "product " << string;
			for ( int column = 1; column < 6; column++ )
				cout << setw( 8 ) << sales[ string ][ column ] << "  ";
			cout << endl;
		}
	}


	return 0;
}

int card ( int sale[][ 6 ], int s, int p, int sum )
{
	cout << "seller " << s << ";" << endl <<
		"product " << p << ";" << endl <<
		"sum is " << sum << endl;
	return sale[ p ][ s ] = sum;
}






























