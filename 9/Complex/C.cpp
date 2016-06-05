#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include"C.h"

Complex::Complex( double r, double i )
{
	real = complex[ 0 ] = r;
	image = complex[ 1 ] = i;
}

double Complex::getR()
{
	return complex[ 0 ];
}

double Complex::getI()
{
	return complex[ 1 ];
}

void Complex::plus( double r1, double i1, double r2, double i2 )
{
	complex[ 0 ] = r1 + r2;
	complex[ 1 ] = i1 + i2;
}

void Complex::minus( double r1, double i1, double r2, double i2 )
{
	complex[ 0 ] = r1 - r2;
	complex[ 1 ] = i1 - i2;
}

void Complex::print()
{
	cout << "( " << complex[ 0 ] << ", " << complex[ 1 ] << " )" << endl;
}
