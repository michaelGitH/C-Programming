#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cstdlib>
using std::rand;

int selectionSort( int[], int, int );

int main()
{
	int zero = 0;
	const int size = 100;
	int array[ size ];
	for ( int count = 0; count < size; count++ )
		array[ count ] = rand() % 1001;
	for ( int count = 0; count < size; count++ )
		cout << array[ count ] << "  ";
	cout << endl << endl;


	selectionSort( array, size, zero );

	for ( int count = 0; count < size; count++ )
		cout << array[ count ] << "  ";
	cout << endl << endl;
	return 0;
}

int selectionSort( int a[], int s, int z )
{
	if( z == ( s - 1 ) )
		return 0;
	else
	{
		int min = 9999999;
		int buffer;
		for( int c = z; c < s; c++ )
		{
			if( a[ c ] < min )
			{
				min = a[ c ];
				buffer = c;
			}
		}
		a[ buffer ] = a[ z ];
		a[ z ] = min;
		z++;
		selectionSort( a, s, z );
	}
}
		
			


























