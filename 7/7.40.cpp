#include<iostream>
#include<cstdlib>
#include<vector>
#include<iomanip>
using namespace std;

int minimum( const vector< int > & );

int main()
{
	const int size = 100;
	vector< int > array( size );
	for( int count = 0; count < 100; count++ )
		array[ count ] = rand() % 200;
	for( int count = 0; count < 100; count++ )
	{
		if( count % 8 == 0 )
			cout << endl;
		cout << setw( 4 ) << array[ count ];
	}
	cout << endl;
	int m = minimum( array );
	cout << "Minimum is " << m << endl;
	return 0;
}



int minimum( const vector< int > &a )
{
	static int min = 9999999;
	if( a.size() == 1 )
		return min;
	else
	{
		if( a[ a.size() - 1 ] < min )
		{
			min = a[ a.size() - 1 ];
		}
		vector< int > b( a.size() - 1 );
		for ( size_t count = 0; count < b.size(); count++ )
			b[ count ] = a[ count ];
		for ( size_t count = 0; count < b.size(); count++ )
		{
			if( count % 8 == 0 )
				cout << endl;
			cout << setw( 4 ) << b[ count ];
		}
		cout << endl;
		minimum( b );
	}
}
