#include<iostream>
using namespace std;

int testP( char[] );

int main()
{
	const int size = 8;
	char array[ size ];
	for( int count = 0; count < size - 1; count++ )
		cin >> array[ count ];
	cout << array[ 5 ] << endl << endl;
	if ( testP( array ) == 1 )
		cout << "Palindrom" << endl;
	else
		cout << "Not palindrom" << endl;
	return 0;
}

int testP( char p[] )
{
	int counter = 0;
	for( counter; p[ counter ] != '\0'; counter++ )
		if( p[ counter ] == ' ' )
			counter--;
	counter--;
	cout << counter << endl;
	if( counter == 0 || counter == 1 )
		return 1;
	else
	{
		if( p[ 0 ] != p[ counter - 1 ] )
		{
			cout << p[ 0 ] << " != " << p[ counter - 1 ] << endl;
			return 0;
		}
		else
		{
			cout << p[ 0 ] << " = " << p[ counter - 1 ] << endl;
			for ( int count = 0; count < counter - 1; count++ )
				p[ count ] = p[ count + 1 ];
			p[ counter - 1 ] = '\0';
			testP( p );
		}
	}
}







			
