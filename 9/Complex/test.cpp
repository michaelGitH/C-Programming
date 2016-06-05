#include<iostream>
#include<cmath>
using namespace std;

double* plus( double c1[], double c2[] )
{
	c1[ 0 ] += c2[ 0 ];
	c1[ 1 ] += c2[ 1 ];
}

int main()
{
	double x1[ 2 ] = { 1, 2 }, x2[ 2 ] = { 3, 4 };
	plus( x1, x2 );
	cout << x1[ 0 ] << ", " << x1[ 1 ] << endl; 
	return 0;
}
