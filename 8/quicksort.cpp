#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int quicksort( int[], int, int );

void partition( int[] );

int main()
{
	const int size = 50;
	int array[ size ];

	for ( int i = 0; i < size; i++ )
		array[ i ] = rand() % 10000;

	for ( int i = 0; i < size; i++ )
	{
		cout << setw( 6 ) << array[ i ];
		if ( i % 10 == 0 && i != 0 )
			cout << endl;
	}

	quicksort ( array, 0, size - 1 );

	cout << endl << "after sorting:" << endl;
	for ( int i = 0; i < size; i++ )
	{
		cout << setw( 6 ) << array[ i ];
		if ( i % 10 == 0 && i != 0 )
			cout << endl;
	}
	cout << endl;	

	return 0;
}

int quicksort( int arr[], const int beg, int end )
{
	if ( beg == end )
		return 0;
	else
	{
		int y = beg;
		int b = beg;
		int e = end;
		int i = e;

		while ( arr[ i ] != arr[ y ] )
		{
			for ( i = e; arr[ i ] > arr[ y ]; i-- );

			if ( arr[ i ] < arr[ y ] )
			{
				int copy = arr[ i ];
				arr[ i ] = arr[ y ];
				arr[ y ] = copy;
				b = y;
				y = i;
				i = b + 1;
			}

			if ( arr[ i ] != arr[ y ] )
				for ( i; arr[ i ] < arr[ y ]; i++ );

			if ( arr[ i ] > arr[ y ] )
			{
				int copy = arr[ i ];
				arr[ i ] = arr[ y ];
				arr[ y ] = copy;
				e = y;
				y = i;
				i = e - 1;
			}
		}

		if ( y != 0 )
			quicksort( arr, 0, y - 1 );

		if ( y != end )
			quicksort( arr, y + 1, end );
	}

}
			
















