#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	const int arraySize = 120000;
	int array[ arraySize ] = { 48, 29, 1, 15, 8, 16, 13, 27, 98, 54, 2, 49, 14, 228, 113, 3, 56, 87 };
	for ( int count = 19; count < arraySize; count++ )
		array[ count ] = array[ rand() % 18 ] * array[ rand() % 18 ] / array[ rand() % 18 ] + array[ rand() % 18 ];


	for ( int copy = arraySize - 1; copy > 0; copy-- )
	{
		int max = 0;
		int clone;
		for ( int count = copy; count >= 0; count-- )
		{
			if ( array[ count ] > max )
			{
				max = array[ count ];
				clone = count;
			}		
		}
		array[ clone ] = array[ copy ];
		array[ copy ] = max;
	}
	for ( int count = 0; count < arraySize; count++ )
		cout << array[ count ] << "  ";
	cout << endl;
	return 0;
}
