#include<iostream>
#include<cstdlib>
using namespace std;

int minimum( int[], int );

int main()
{
	const int size = 100;
	int array[ size ];
	for( int count = 0; count < 100; count++ )
		array[ count ] = rand() % 200;
	for( int count = 0; count < 100; count++ )
		cout << array[ count ] << " ";
	cout << endl;
	int m = minimum( array, size );
	cout << "minimum is " << m << endl;
	return 0;
}



int minimum( int a[], int s )
{
	static int min = 9999999;
	if( s == 1 )
		return min;
	else
	{
		if( a[ s - 1 ] < min )
		{
			min = a[ s - 1 ];
		}
		minimum( a, s - 1 );
	}
}
