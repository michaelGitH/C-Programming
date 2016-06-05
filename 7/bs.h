#include <iostream>
#include <cmath>
using namespace std;

void bucketSort( int a[], int s )
{
	int b[ 10 ][ s - 1 ];
	for( int row = 0; row < 10; row++ )
		for( int column = 0; column < s - 1; column++ )
			b[ row ][ column ] = -9999999;
	for( int count = 0; count < 10; count++ )
	{
		int del = pow( 10, count + 1 ), del1 = pow( 10, count );
		for( int counter = 0; counter < s - 1; counter++ )
			b[ a[ counter ] % del / del1 ][ counter ] = a[ counter ];
		int c = 0;
		for( int row = 0; row < 10; row++ )
			for( int column = 0; column < s - 1; column++ )
				if( b[ row ][ column ]  != -9999999 )
				{
					a[ c ] = b[ row ][ column ];
					c++;
				}

		for( int row = 0; row < 10; row++ )
			for( int column = 0; column < s - 1; column++ )
				b[ row ][ column ] = -9999999;
	}
}


	
	
