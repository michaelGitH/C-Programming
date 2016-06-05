#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int mini( int [][ 8 ],int ,int );
void chess( int [][ 8 ], int, int );
int size( int, int );


int mini( int a[][ 8 ],int x,int y )
{
	int min = 30;
	for( x = 0; x < 8; x++ )
		for( y = 0; y < 8; y++ )
			if( a[ x ][ y ] < min )
				min = a[ x ][ y ];
	return min;
}

void chess( int a[][ 8 ], int x, int y )
{
	a[ x ][ y ] = 2;
	int row = x;
	int col = y;
	if( x > y )
		for( int count = 0; count < y; count++ )
		{
			row--;
			col--;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	else
		for( int count = 0; count < x; count++ )
		{
			row--;
			col--;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	row = x;
	col = y;
	if( x > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
		{
			row--;
			col++;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	else
		for( int count = 0; count < x; count++ )
		{
			row--;
			col++;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	row = x;
	col = y;
	if( ( 7 - x ) > y )
		for( int count = 0; count < y; count++ )
		{
			row++;
			col--;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	else
		for( int count = 0; count < ( 7 - x ); count++ )
		{
			row++;
			col--;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	row = x;
	col = y;
	if( ( 7 - x ) > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
		{
			row++;
			col++;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	else
		for( int count = 0; count < ( 7 - x ); count++ )
		{
			row++;
			col++;
			if( a[ row ][ col ] != 2 )
				a[ row ][ col ] = 1;
		}
	row = x;
	col = y;
	for ( col = 0; col < 8; col++ )
		if( a[ row ][ col ] != 2 )
			a[ row ][ col ] = 1;
	row = x;
	col = y;
	for ( row = 0; row < 8; row++ )
		if( a[ row ][ col ] != 2 )
			a[ row ][ col ] = 1;
}

int size( int x, int y )
{
	int counter = 0;
	if( x > y )
		for( int count = 0; count < y; count++ )
			counter++;
	else
		for( int count = 0; count < x; count++ )
			counter++;
	if( x > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
			counter++;
	else
		for( int count = 0; count < x; count++ )
		counter++;

	if( ( 7 - x ) > y )
		for( int count = 0; count < y; count++ )
			counter++;
	else
		for( int count = 0; count < ( 7 - x ); count++ )
			counter++;
	if( ( 7 - x ) > ( 7 - y ) )
		for( int count = 0; count < ( 7 - y ); count++ )
			counter++;
	else
		for( int count = 0; count < ( 7 - x ); count++ )
			counter++;
	int row = x;
	int col = y;
	for ( col = 0; col < 8; col++ )
			counter++;
	row = x;
	col = y;
	for ( row = 0; row < 7; row++ )
			counter++;

	return counter;
}
