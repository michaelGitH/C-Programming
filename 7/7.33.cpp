#include<iostream>
#include<cstdlib>
using namespace std;

int search( int[], int, int );

int main()
{
	const int size = 20;
	int array[ size ];
	for( int count = 0; count < size; count++ )
		array[ count ] = 1 + rand() % 20;
	for( int count = 0; count < size; count++ )
	{
		if( array[ count ] % 10 == 0 )
			cout << endl;
		cout << array[ count ] << "  ";
	}
	cout << endl << endl;
	int key;
	cout << "Enter key: ";
	cin >> key;
	int position = search( array, size, key );
	if( position == -1 )
		cout << "key is not found" << endl;
	else
		cout << "key is found on the " << position << " position!" << endl;
	return 0;
}



int search( int a[], int s, int k )
{
	int x = s;
	if( a[ x - 1 ] == k )
		return x;
	else if( x == 0 )
		return -1;
	else
	{
		x--;
		search( a, x, k );
	}
}
