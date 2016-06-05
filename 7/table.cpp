#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int tableSize = 3;
	int table [ tableSize ][ tableSize ];
	for ( int x = 0; x < tableSize; x++ )
	{
		for ( int y = 0; y < tableSize; y++ )
			table[ x ][ y ] = x + y;
	}
	for ( int x = 0; x < tableSize; x++ )
	{
		for ( int y = 0; y < tableSize; y++ )
			cout << setw( 3 ) << table[ x ][ y ];
		cout << endl;
	}
	cout << endl;
	int table1[ tableSize ][ tableSize ] = { { 1, 8 }, { 2, 4, 6 }, { 5 } };
	for ( int x = 0; x < tableSize; x++ )
	{
		for ( int y = 0; y < tableSize; y++ )
			cout << setw( 3 ) << table1[ x ][ y ];
		cout << endl;
	}
	return 0;
}
