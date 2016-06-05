// Линейный поиск в массиве.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

#include<cstdlib>
using std::rand;

#include<vector>
using std::vector;

int search( const vector< int > &, int );

int main()
{
	const int size = 100;
	vector< int >array( size );
	for( size_t count = 0; count < size; count++ )
		array[ count ] = 1 + rand() % 100;
	for( size_t count = 0; count < size; count++ )
	{
		if( count % 8 == 0 )
			cout << endl;
		cout << setw( 4 ) << array[ count ];
	}
	cout << endl << endl;
	int k;
	cout << "Enter key: " << endl;
	cin >> k;
	int position = search( array, k );
	if( position != -1 )
		cout << "Position is " << position << "!" << endl;
	else
		cout << "Key is not found!" << endl;
	return 0;
}
	

int search( const vector< int > &a, int key )
{
	size_t i;
	cout << "size is " << a.size() << endl;
	for( i = 0; i < a.size(); i++ )
		if( a[ i ] == key )
			return ( i + 1 );

	return -1;
} 
