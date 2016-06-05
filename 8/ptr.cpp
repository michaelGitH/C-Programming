#include<iostream>
using namespace std;

void x( int * );
void y( const int * );

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	const int b[] = { 7, 6, 5, 4, 3, 2, 1 };
	x( a );
	for( int count = 0; count < 7; count++ )
		cout << a[ count ] << "  ";
	cout << endl;
	y( b );

	return 0;
}

void x( int *xPtr )
{
	for( int count = 0; count < 7; count++ )
	{
		*xPtr = *xPtr * 2;
		xPtr++;
	}
}
void y( const int *yPtr )
{
	for( int count = 0; count < 7; count++ )
	{
		cout << *yPtr << "  ";
		yPtr++;
	}
	cout << endl;
}
		
