#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

void mini( int [][ 8 ], int[][ 8 ], int&, int& );
void chess( int [][ 8 ], int, int );
int size( const int [][ 8 ], int, int );

int main()
{
	int numb[ 8 ][ 8 ] = { 0 };
	int board[ 8 ][ 8 ] = { 0 };
	int row, col;

	for ( int ch = 0; ch < 8; ch++ )
	{

		cout << ch + 1 << " iteration!" << endl << endl;

		for ( int x = 0; x < 8; x++ )
			for ( int y = 0; y < 8; y++ )
			{
				if ( numb[ x ][ y ] < 40 )
					numb[ x ][ y ] = size( numb, x, y );
			}

	for ( int x = 0; x < 8; x++ )
	{
		for ( int y = 0; y < 8; y++ )
		{
			if ( numb[ x ][ y ] == 41 )
				cout << left << setw( 3 ) << '#';
			else if ( numb[ x ][ y ] == 99 )
				cout << left << setw( 3 ) << 'Q';
			else
				cout << left << setw( 3 ) << numb[ x ][ y ];
		}
		cout << endl;
	}

		mini( numb, board, row, col );
	
		cout << endl;

		chess( board, row, col );

	for ( int x = 0; x < 8; x++ )
	{
		for ( int y = 0; y < 8; y++ )
		{
			if ( board[ x ][ y ] == 41 )
				cout << left << setw( 3 ) << '#';
			else if ( board[ x ][ y ] == 99 )
				cout << left << setw( 3 ) << 'Q';
			else
				cout << left << setw( 3 ) << '-';
		}
		cout << endl;
	}

		cout << endl;

		for ( int x = 0; x < 8; x++ )
			for ( int y = 0; y < 8; y++ )
				numb[ x ][ y ] = board[ x ][ y ];	
	}

	cout << "8 quins are:\n" << endl;
	for ( int x = 0; x < 8; x++ )
	{
		for ( int y = 0; y < 8; y++ )
		{
			if ( board[ x ][ y ] == 41 )
				cout << left << setw( 3 ) << '#';
			else if ( board[ x ][ y ] == 99 )
				cout << left << setw( 3 ) << 'Q';
			else
				cout << left << setw( 3 ) << '*';
		}
		cout << endl;
	}

	return 0;
}

void mini( int a[][ 8 ], int b[][ 8 ], int &r, int &c )
{
	int x, y;
	int min = 30;
	for( x = 0; x < 8; x++ )
		for( y = 0; y < 8; y++ )
			if( ( a[ x ][ y ] < min ) && ( x != y ) )
			{
				min = a[ x ][ y ];
				r = x;
				c = y;
			}
	b[ r ][ c ] = 2;
}

void chess( int a[][ 8 ], int x, int y )
{
	a[ x ][ y ] = 99;
	// 1 квадрант
	int row = x;
	int col = y;
	if( x > y )
		for( int count = 0; count < y; count++ )
		{
			row--;
			col--;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	else
		for( int count = 0; count < x; count++ )
		{
			row--;
			col--;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	// 2 квадрант
	row = x;
	col = y;
	if( x > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
		{
			row--;
			col++;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	else
		for( int count = 0; count < x; count++ )
		{
			row--;
			col++;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	// 3 квадрант
	row = x;
	col = y;
	if( ( 7 - x ) > y )
		for( int count = 0; count < y; count++ )
		{
			row++;
			col--;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	else
		for( int count = 0; count < ( 7 - x ); count++ )
		{
			row++;
			col--;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	// 4 квадрант
	row = x;
	col = y;
	if( ( 7 - x ) > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
		{
			row++;
			col++;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	else
		for( int count = 0; count < ( 7 - x ); count++ )
		{
			row++;
			col++;
			if( a[ row ][ col ] != 99 )
				a[ row ][ col ] = 41;
		}
	row = x;
	col = y;
	for ( col = 0; col < 8; col++ )
		if( a[ row ][ col ] != 99 )
			a[ row ][ col ] = 41;
	row = x;
	col = y;
	for ( row = 0; row < 8; row++ )
		if( a[ row ][ col ] != 99 )
			a[ row ][ col ] = 41;
}

int size( const int a[][ 8 ], int x, int y )
{
	int counter = 0;
	// 1 квадрант
	int row = x;
	int col = y;
	if( x > y )
		for( int count = 0; count < y; count++ )
		{
			row--;
			col--;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	else
		for( int count = 0; count < x; count++ )
		{
			row--;
			col--;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	// 2 квадрант
	row = x;
	col = y;
	if( x > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
		{
			row--;
			col++;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	else
		for( int count = 0; count < x; count++ )
		{
			row--;
			col++;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	// 3 квадрант
	row = x;
	col = y;
	if( ( 7 - x ) > y )
		for( int count = 0; count < y; count++ )
		{
			row++;
			col--;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	else
		for( int count = 0; count < ( 7 - x ); count++ )
		{
			row++;
			col--;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	// 4 квадрант
	row = x;
	col = y;
	if( ( 7 - x ) > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
		{
			row++;
			col++;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	else
		for( int count = 0; count < ( 7 - x ); count++ )
		{
			row++;
			col++;
			if( a[ row ][ col ] < 40 )
				counter++;
		}
	row = x;
	col = y;
	for ( col = 0; col < 8; col++ )
		if ( a[ row ][ col ] < 40 )
			if ( a[ row ][ col ] != a[ x ][ y ] )
				counter++;
	row = x;
	col = y;
	for ( row = 0; row < 8; row++ )
		if( a[ row ][ col ] < 40 )
			if( a[ row ][ col ] != a[ x ][ y ] )
				counter++;

	return counter;
}
