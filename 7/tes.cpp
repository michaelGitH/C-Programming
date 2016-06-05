#include<iostream>
#include<iomanip>
using namespace std;

#include<vector>
using std::vector;

void farray( char [] );
int sum( vector< int > );

template< class T >
T input( vector< T > & );

int main()
{
	vector< int > vec( 5 );
	cout << vec.size() << endl;
	for ( size_t count = 0; count < vec.size(); count++ )
		cout << vec[ count ] << " ";
	cout << endl;
	input( vec );
	cout << sum( vec ) << endl;
	vec[ 4 ] = 100;
	cout << vec[ 10 ] << endl;
	cout << vec[ 4 ] << endl;
	vec[ 10 ] = 1000;
	cout << vec[ 10 ] << endl;
	vec.at( 10 );
	return 0;
}

void farray ( char c[] )
{
	for ( int count = 0; count < 5; count++ )
		cout << c[ count ] << " ";
	cout << endl;
}

template< class T >
T input( vector< T > &c )
{
	for( unsigned count = 0; count < c.size(); count++ )
	{
		cout << "Enter next element of array: ";
		cin >> c[ count ];
	}
}

int sum( vector< int > b )
{
	int total = 0;
	for ( int count = 0; count < b.size(); count++ )
		total += b[ count ];
	return total;
}



