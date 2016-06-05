#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int arraySize = 3;
	//int table[ arraySize ][ arraySize ];
	//for ( int row = 0; row < arraySize; row++ )
	//	for ( int column = 0; column < arraySize; column++ )
	//		table[ row ][ column ] = row + column;
	int table[ arraySize ][ arraySize ] = {{1,8},{2,4,6},{5}};
	cout << "row\\column";
	for ( int x = 0; x < arraySize; x++ )
		cout << setw( 9 ) << "column" << x + 1;
	cout << endl;
	for ( int x = 0; x < arraySize; x++ )
	{
		cout << "row" << x + 1 << "         ";
		for( int y = 0; y < arraySize; y++ )
			cout << setw( 4 ) << table[ x ][ y ] << "      ";
		cout << endl;
	}
	
	return 0;
}
