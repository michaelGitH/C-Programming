#include<iostream>
#include<iomanip>
using namespace std;

#include "R.h"

Rational::Rational( int c, int z )
{
	rate[ 0 ] = c;
	rate[ 1 ] = z;
}

void Rational::plus( int r1[], int r2[] )
{
	rate[ 0 ] = r1[ 0 ] * r2[ 1 ] + r2[ 0 ] * r1[ 1 ];
	rate[ 1 ] = r1[ 1 ] * r2[ 1 ];
	int def = 1;
	for ( int i = 100; i > 0; i-- )
		if( ( rate[ 0 ] % i == 0 ) && ( rate[ 1 ] % i == 0 ) )
		{
			def = i;
			i = 0;
		}
	//cout << rate[ 0 ] << "/" << rate[ 1 ] << "def=" << def << endl;
	rate[ 0 ] /= def;
	rate[ 1 ] /= def;
}

void Rational::minus( int r1[], int r2[] )
{
	rate[ 0 ] = r1[ 0 ] * r2[ 1 ] - r2[ 0 ] * r1[ 1 ];
	rate[ 1 ] = r1[ 1 ] * r2[ 1 ];
	int def = 1;
	for ( int i = 100; i > 0; i-- )
		if( ( rate[ 0 ] % i == 0 ) && ( rate[ 1 ] % i == 0 ) )
		{
			def = i;
			i = 0;
		}
	//cout << rate[ 0 ] << "/" << rate[ 1 ] << "def=" << def << endl;
	rate[ 0 ] /= def;
	rate[ 1 ] /= def;
}

void Rational::power( int r1[], int r2[] )
{
	rate[ 0 ] = r1[ 0 ] * r2[ 0 ];
	rate[ 1 ] = r1[ 1 ] * r2[ 1 ];
	int def = 1;
	for ( int i = 100; i > 0; i-- )
		if( ( rate[ 0 ] % i == 0 ) && ( rate[ 1 ] % i == 0 ) )
		{
			def = i;
			i = 0;
		}
	//cout << rate[ 0 ] << "/" << rate[ 1 ] << "def=" << def << endl;
	rate[ 0 ] /= def;
	rate[ 1 ] /= def;
}

void Rational::del( int r1[], int r2[] )
{
	rate[ 0 ] = r1[ 1 ] * r2[ 1 ];
	rate[ 1 ] = r1[ 0 ] * r2[ 0 ];

	int def = 1;
	for ( int i = 100; i > 0; i-- )
		if( ( rate[ 0 ] % i == 0 ) && ( rate[ 1 ] % i == 0 ) )
		{
			def = i;
			i = 0;
		}
	//cout << rate[ 0 ] << "/" << rate[ 1 ] << "def=" << def << endl;
	rate[ 0 ] /= def;
	rate[ 1 ] /= def;
}

void Rational::print()
{
	cout << rate[ 0 ] << "/" << rate[ 1 ] << endl;
}

void Rational::printP()
{
	double d1 = rate[ 0 ];
	double d2 = rate[ 1 ];
	cout << fixed << setprecision( 2 ) << d1 / d2 << endl;
}















