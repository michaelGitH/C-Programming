#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t[ 3 ][ 4 ] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	t[ 0 ][ 1 ] = 0;
	for ( int i = 0; i < 3; i++ )
		for ( int j = 0; j < 4; j++ )
			t[ i ][ j ];
	for ( int i = 0; i < 3; i++ )
		for ( int j = 0; j < 4; j++ )
			cin >> t[ i ][ j ];
	int min = t[ 0 ][ 0 ];
	for ( int i = 0; i < 3; i++ )
		for ( int j = 0; j < 4; j++ )
			if ( t[ i ][ j ] < min )
				min = t[ i ][ j ];
	cout << "min is " << min << endl;
	for ( int i = 0; i < 4; i++ )
		cout << t[ 0 ][ i ] << "  ";
	cout << endl;
	int total = 0;
	for ( int i = 0; i < 3; i++ )
		total += t[ i ][ 3 ];
	cout << "total is " << total << endl;
	cout << setw( 8 ) << "[0]" << setw( 4 ) <<  "[1]" << setw( 4 ) <<  "[2]" << setw( 4 ) <<   "[3]" << endl;
	for ( int i = 0; i < 3; i++ )
	{
		cout << "[" << i << "]";
		for ( int j = 0; j < 4; j++ )
			cout << setw( 4 ) << t[ i ][ j ];
		cout << endl;
	}
	return 0;
}
