#include<iostream>
using namespace std;

void pock ( const int p[][ 5 ] )
{
	int two = 0;
	int space[ 5 ] = { 0 };
	for ( int count = 0; count < 5; count++ )
	{
		int counter = 1;
		if ( space[ count ] == 0 )
		{
			for ( int c = 0; c < 5; c++ )
			{
				if ( c != count )
				{
					if ( p[ 1 ][ count ] == p[ 1 ][ c ] )
					{
						space[ count ] = 1;
						space[ c ] = 1;
						counter++;
					}
				}
			}
		}
		if ( counter == 2 )
			two++;
		else if ( counter == 3 )
			cout << "Тройка" << endl;
		else if ( counter == 4 )
			cout << "Карэ" << endl;
	}
	if ( two == 1 )
		cout << "Пара" << endl;
	if ( two == 2 )
		cout << "Две пары" << endl;

	for ( int i = 0; i < 5; i++ )
		space[ i ] = p[ 1 ][ i ];

	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int clone = space[ i ];
			int j = i - 1;
				if ( space[ i ] < space[ j ] )
				{
					space[ i ] = space[ j ];
					space[ j ] = clone;
				}
		}
	int counter = 0;
	for ( int i = 1; i < 5; i++ )
	{
		if ( space[ i ] - space[ i - 1 ] == 1 )
			counter++;
	}
	if ( counter == 4 )
		cout << "Стрит" << endl;


}

void flash ( int p[][ 5 ] )
{
	int counter = 0;
	for ( int count = 1; count < 5; count++ )
		if ( p[ 0 ][ count ] == p[ 0 ][ count - 1 ] )
			counter++;
	if ( counter == 4 )
		cout << "Флеш" << endl;
}

int oldest ( int x[], int y[] )
{
	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int clone = x[ i ];
			int j = i - 1;
				if ( x[ i ] < x[ j ] )
				{
					x[ i ] = x[ j ];
					x[ j ] = clone;
				}
		}	
	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int clone = y[ i ];
			int j = i - 1;
				if ( y[ i ] < y[ j ] )
				{
					y[ i ] = y[ j ];
					y[ j ] = clone;
				}
		}	
	for ( int i = 4; i >= 0; i-- )
	{
		if ( x[ i ] > y[ i ] )
			return 1;
		else if ( y[ i ] > x[ i ] )
			return 2;
	}
}

int main()
{	
	int player1[ 2 ][ 5 ];
	int player2[ 2 ][ 5 ];
	int count = 1;
	for ( int *p1 = &player1[ 1 ][ 0 ]; p1 <= &player1[ 1 ][ 4 ]; p1++ )
	{
		*p1 = count;
		count += 2;
	}
	count = 2;
	for ( int *p2 = &player2[ 1 ][ 0 ]; p2 <= &player2[ 1 ][ 4 ]; p2++ )
	{
		*p2 = count;
		count += 2;
	}

	for ( int count = 0; count < 5; count++ )
		cout << player1[ 1 ][ count ] << " ";
	cout << endl;
	for ( int count = 0; count < 5; count++ )
		cout << player2[ 1 ][ count ] << " ";
	cout << endl;


	int p1[ 2 ][ 5 ] = { 0 }, p2[ 2 ][ 5 ] = { 0 };

	p2[ 1 ][ 0 ] = 1;
	p2[ 1 ][ 1 ] = 5;
	p2[ 1 ][ 2 ] = 3;
	p2[ 1 ][ 3 ] = 2;
	p2[ 1 ][ 4 ] = 4;
	pock ( p2 );
	flash ( p2 );

	int b1[ 5 ] = { 1, 2, 5, 4, 6 };
	int b2[ 5 ] = { 6, 2, 4, 3, 6 };
	
	cout << oldest( b1, b2 ) << endl;


	return 0;
}
