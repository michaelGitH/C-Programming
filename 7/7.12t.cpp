#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	const int arraySize = 40000;
	int array[ arraySize ] = { 48, 29, 1, 15, 8, 16, 13, 27, 98, 54, 2, 49, 14, 228, 113, 3, 56, 87 };
	for ( int count = 19; count < arraySize; count++ )
		array[ count ] = array[ rand() % 18 ] * array[ rand() % 18 ] / array[ rand() % 18 ] + array[ rand() % 18 ];

	for ( int copy = arraySize - 1; copy > 0; copy-- )
	{
		int counter = 0;
		for ( int count = copy; count >= 0; count-- )
		{
			int clone = array[ count ];
			if ( array[ count - 1 ] > array[ count ] && ( count - 1 ) >= 0 )
			{
				array[ count ] = array[ count - 1 ];
				array[ count - 1 ] = clone;
				counter++;
			} 
		}
		if ( counter == 0 )
			copy -= copy;
		else
		{
			int max = 0;
			int copying;
			for ( int count = copy; count >= 0; count-- )
			{
				if ( array[ count ] > max )
				{
					max = array[ count ];
					copying = count;
					array[ copying ] = array[ copy ];
					array[ copy ] = max;
				}		
			}
		}
	}
	for ( int count = 0; count < arraySize; count++ )
		cout << array[ count ] << "  ";
	cout << endl;
	return 0;
}
