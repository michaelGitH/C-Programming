#include<iostream>
using namespace std;

int y( int );

int main()
{

	double *x;
	long *y;
	*y = static_cast< long >( *x );

	return 0;
}

int y( int p )
{
	return p * p * p;
}



