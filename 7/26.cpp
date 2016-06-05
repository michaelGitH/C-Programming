#include<iostream>
using std::endl;
using std::cout;
using std::cin;
using std::fixed;
#include<iomanip>
using std::setw;
using std::setprecision;
using std::left;
using std::right;
#include<cstdlib>
using std::rand;

int size( int, int );
int move( int [], int, int )

int main()
{
	int board[ 8 ][ 8 ] = { 0 };
	int count = 0;

	for ( int x = 0; x < 8; x++ )
	{
		for ( int y = 0; y < 8; y++ )
			cout << board[ x ][ y ] << " ";
		cout << endl;
	}
	cout << endl;
	
	for ( int x = 0; x < 8; x++ )
		for ( int y = 0; y < 8; y++ )
			board[ x ][ y ] = size( x, y );



	for ( int x = 0; x < 8; x++ )
	{
		for ( int y = 0; y < 8; y++ )
			cout << left << setw( 4 ) << board[ x ][ y ];
		cout << endl << endl;
	}
	cout << endl;

	return 0;
}


int size( int s, int c )
{
	int counter = 15;
	int a[ 8 ][ 8 ] = { 0 };
	//1 квадрант доски
	if ( s > c )
		for ( int count = 0; count < c; count++ )
			counter++;
	else
		for ( int count = 0; count < s; count++ )
			counter++;	
	//2 квадрант доски
	if ( s > ( 7 - c ) )
		for ( int count = 0; count < ( 7 - c ); count++ )
			counter++;
	else
		for ( int count = 0; count < s; count++ )
			counter++;
	//3 квадрант доски
	if ( ( 7 - s ) > c )
		for ( int count = 0; count < c ; count++ )
			counter++;
	else
		for ( int count = 0; count < ( 7 - s ); count++ )
			counter++;
	//4 квадрант доски
	if ( ( 7 - s ) > ( 7 - c ) )
		for ( int count = 0; count < ( 7 - c ) ; count++ )
			counter++;
	else
		for ( int count = 0; count < ( 7 - s ); count++ )
			counter++;
	return counter;
}		

int move( int a[], int b, int c )
{
		
	
























