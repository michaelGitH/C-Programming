#include<iostream>
#include<cstdlib>
using namespace std;
#include"bs.h"

int main()
{
	const int size = 1000;
	int array[ size ];
	for( int count = 0; count < size; count++ )
	{
		array[ count ] = rand() % 10001;
	}

	for( int row = 0; row < size; row++ )
	{
		if( row % 15 == 0 )
			cout << endl;
		cout << array[ row ] << "  ";
	}	
	cout << endl << endl;

	bucketSort( array, size );
	for( int row = 0; row < size; row++ )
	{
		if( row % 15 == 0 )
			cout << endl;
		cout << array[ row ] << "  ";
	}	
	cout << endl;
	return 0;
}


