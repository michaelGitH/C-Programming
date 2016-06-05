#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int t[ 3 ][ 4 ];
	t[ 0 ][ 1 ] = 0;
	for ( int a = 0; a < 3; a++ )
	{
		for ( int b = 0; b < 4; b++ )
			cout << t[ a ][ b ] << " ";
		cout << endl;
	}
	t[ 0 ][ 0 ] = 0;
	t[ 0 ][ 1 ] = 0;
	t[ 0 ][ 2 ] = 0;
	t[ 0 ][ 3 ] = 0;
	t[ 1 ][ 0 ] = 0;
	t[ 1 ][ 1 ] = 0;
	t[ 1 ][ 2 ] = 0;
	t[ 1 ][ 3 ] = 0;
	t[ 2 ][ 0 ] = 0;
	t[ 2 ][ 1 ] = 0;
	t[ 2 ][ 2 ] = 0;
	t[ 2 ][ 3 ] = 0;
	
	cout << endl;
	for ( int a = 0; a < 3; a++ )
	{
		for ( int b = 0; b < 4; b++ )
			cout << t[ a ][ b ] << " ";
		cout << endl;
	}

	for ( int a = 0; a < 3; a++ )
		for ( int b = 0; b < 4; b++ )
			t[ a ][ b ] = 0;

	cout << endl;
	for ( int a = 0; a < 3; a++ )
	{
		for ( int b = 0; b < 4; b++ )
			cout << t[ a ][ b ] << " ";
		cout << endl;
	}
	
	for ( int a = 0; a < 3; a++ )
		for ( int b = 0; b < 4; b++ )
			cin >> t[ a ][ b ];

	for ( int a = 0; a < 3; a++ )
	{
		for ( int b = 0; b < 4; b++ )
			cout << t[ a ][ b ] << " ";
		cout << endl;
	}

	int min = 99999999;
	for ( int a = 0; a < 3; a++ )
		for ( int b = 0; b < 4; b++ )
			if ( t[ a ][ b ] < min )
				min = t[ a ][ b ];
	cout << "min is " << min << endl;	

	cout << "first stray is ";
	for ( int a = 0; a < 4; a++ )
		cout << t[ 0 ][ a ] << " ";
	cout << endl;

	int total = 0;
	for ( int a = 0; a < 3; a++ )
		total += t[ a ][ 3 ];
	cout << "sum is " << total;
	cout << endl;


	cout << setw( 11 ) << "[0]" << setw( 8 ) << "[1]" << setw( 8 ) << "[2]" << setw( 8 ) << "[3]" << endl;
	for ( int a = 0; a < 3; a++ )
	{
		cout << "[" << a << "]";
		for ( int b = 0; b < 4; b++ )
			cout << setw( 7 ) << t[ a ][ b ] << " ";
		cout << endl;
	}

	
	return 0;
}
	

















