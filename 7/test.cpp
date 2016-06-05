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

	int currentRow = 0, currentColumn = 0;
	board[ currentRow ][ currentColumn ] = 1;

	int access [ 8 ][ 8 ] = 
	{
   	{ 2, 3, 4, 4, 4, 4, 3, 2 },
  	 	{ 3, 4, 6, 6, 6, 6, 4, 3 },
   	{ 4, 6, 8, 8, 8, 8, 6, 4 },
   	{ 4, 6, 8, 8, 8, 8, 6, 4 },
   	{ 4, 6, 8, 8, 8, 8, 6, 4 },
   	{ 4, 6, 8, 8, 8, 8, 6, 4 },
   	{ 3, 4, 6, 6, 6, 6, 4, 3 },
   	{ 2, 3, 4, 4, 4, 4, 3, 2 }
   }; 
	int x;
	int count = 2;
	for ( x = 2; x <= 64; x++ )
	{
		int moveNumber = 0;
		while ( moveNumber < 8 )
		{
			int ver = currentRow;
			int hor = currentColumn;
			ver += vertical[ moveNumber ];
			hor += horizontal[ moveNumber ];
			if ( ( ver < 0 ) || ( ver >= 8 ) )
				moveNumber++;
			else if ( ( hor < 0 ) || ( hor >= 8 ) )
				moveNumber++;
			else if ( board[ ver ][ hor ] != 0 )
				moveNumber++;
			else
			{
				board[ ver ][ hor ] = count;
				count++;
				currentRow = ver;
				currentColumn = hor;
				moveNumber = 8;
				for ( int row = 0; row < 8; row++ )
				{
					for ( int column = 0; column < 8; column++ )
						cout << setw( 3 ) << board[ row ][ column ] ;
					cout << endl;
				}
				cout << endl;
			}
		}
	}
			
			




	for ( int row = 0; row < 8; row++ )
	{
		for ( int column = 0; column < 8; column++ )
			cout << setw( 3 ) << board[ row ][ column ];
		cout << endl;
	}
	cout << count << endl;
	return 0;
}
