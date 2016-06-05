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

int main()
{
	int board[ 8 ][ 8 ] = { 0 };
	int horizontal[ 8 ];
	int vertical[ 8 ];
	horizontal[ 0 ] = 2;
	horizontal[ 1 ] = 1;
	horizontal[ 2 ] = -1;
	horizontal[ 3 ] = -2;
	horizontal[ 4 ] = -2;
	horizontal[ 5 ] = -1;
	horizontal[ 6 ] = 1;
	horizontal[ 7 ] = 2;

	vertical[ 0 ] = -1;
	vertical[ 1 ] = -2;
	vertical[ 2 ] = -2;
	vertical[ 3 ] = -1;
	vertical[ 4 ] = 1;
	vertical[ 5 ] = 2;
	vertical[ 6 ] = 2;
	vertical[ 7 ] = 1;

	int currentRow = 3, currentColumn = 4;
	int moveNumber;
	int count = 1;
	board[ currentRow ][ currentColumn ] = count;
	srand( time( 0 ) );

	while ( count != 64 )
	{
		moveNumber = 0 + rand() % 7;
		if ( ( currentRow += vertical[ moveNumber ] >= 0 ) && ( currentRow += vertical[ moveNumber ] <= 7 ) )
			currentRow += vertical[ moveNumber ];
		if ( ( currentColumn += horizontal[ moveNumber ] >= 0 ) && ( currentColumn += horizontal[ moveNumber ] <= 7 ) )
			currentColumn += horizontal[ moveNumber ];
		if ( board[ currentRow ][ currentColumn ] == 0 )
		{
			board[ currentRow ][ currentColumn ] = count;
			for ( int row = 0; row < 8; row++ )
			{
				for ( int column = 0; column < 8; column++ )
					cout << board[ row ][ column ] << "   ";
				cout << endl;
			}
			cout << moveNumber << endl;
			count++;
		}
		else
		{
			currentRow -= vertical[ moveNumber ];
			currentColumn -= horizontal[ moveNumber ];
		}
	}

	for ( int row = 0; row < 8; row++ )
	{
		for ( int column = 0; column < 8; column++ )
			cout << board[ row ][ column ] << " ";
		cout << endl;
	}

	return 0;
}
