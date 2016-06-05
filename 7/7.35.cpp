#include<iostream>
#include<cstdlib>
using namespace std;

int printArray( int[], int );

int main()
{
	int array[ 100 ];
	for( int count = 0; count < 100; count++ )
		array[ count ] = count + 1;
	printArray( array, 100 );
	return 0;
}


int printArray( int a[], int s )
{
	if( s == 0 )
	{
		cout << endl;
		return 0;
	}
	else
	{
		cout << a[ 0 ] << " ";
		int b[ s - 1 ];
		for( int count = 1; count < s; count++ )
			b[ count - 1 ] = a[ count ];
		printArray( b, ( s - 1 ) );
	}
}
