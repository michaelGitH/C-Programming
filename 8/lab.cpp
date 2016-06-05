#include<iostream>
using namespace std;

void lab ( char[][ 12 ] );

int main()
{
	const int size = 12;
	char a[ size ][ size ] = 
	{ { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
	  { '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#' },	
	  { '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#' },
	  { '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
	  { '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
	  { '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
	  { '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
	  { '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
	  { '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#' },
	  { '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#' },
	  { '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#' },
	  { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, };

	lab ( a );

	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++ )
			cout << a[ i ][ j ] << " ";
		cout << endl;
	}


	return 0;
}



void lab ( char arr[][ 12 ] )
{
	static int size = 12;
	static int x = 0;
	static int row = 0;
	static int column = 0;
	static int move = 0;
	// 0 - Вправо, 1 - Влево, 2 - вниз, 3 - вверх;

	if ( x == 0 )
	{
		int found = 0;
		while ( found == 0 )
		{
			for ( int i = 0; i < size; i++ )
			{
				if ( arr[ 0 ][ i ] == '.' )
				{
					found = 1;
					row = 0;
					column = i;
					arr[ 0 ][ i ] = 'X';
					x++;
					move = 2;
					i = size;
				}
				else if ( arr[ size - 1 ][ i ] == '.' )
				{
					found = 1;
					row = size - 1;
					column = i;
					arr[ size - 1 ][ i ] = 'X';
					move = 3;
					x++;
					i = size;
				}
				else if ( arr[ i ][ 0 ] == '.' )
				{
					found = 1;
					row = i;
					column = 0;
					arr[ i ][ 0 ] = 'X';
					move = 0;
					x++;
					i = size;
				}
				else if ( arr[ i ][ size - 1 ] == '.' )
				{
					found = 1;
					row = i;
					column = size - 1;
					arr[ i ][ size - 1 ] = 'X';	
					move = 1;
					x++;
					i = size;
				}
			}
		}

		for ( int i = 0; i < size; i++ )
		{
			for ( int j = 0; j < size; j++ )
				cout << arr[ i ][ j ] << " ";
			cout << endl;
		}
		cout << endl;
	}
	
	if ( move == 0 )
	{
		column++;
		if ( arr[ row + 1 ][ column ] == '.' )
			move = 2;
		else if ( arr[ row ][ column + 1 ] == '.' )
			move = 0;
		else if ( arr[ row - 1 ][ column ] == '.' )
			move = 3;
		else if ( arr[ row + 1 ][ column ] == 'X' )
			move = 2;
		else if ( arr[ row ][ column + 1 ] == 'X' )
			move = 0;
		else if ( arr[ row - 1 ][ column ] == 'X' )
			move = 3;
		else
			move = 1;
	}		
	else if ( move == 1 )
	{
		column--;
		if ( arr[ row - 1 ][ column ] == '.' )
			move = 3;
		else if ( arr[ row ][ column - 1 ] == '.' )
			move = 1;
		else if ( arr[ row + 1 ][ column ] == '.' )
			move = 2; 
		else if ( arr[ row - 1 ][ column ] == 'X' )
			move = 3;
		else if ( arr[ row ][ column - 1 ] == 'X' )
			move = 1;
		else if ( arr[ row + 1 ][ column ] == 'X' )
			move = 2;
		else
			move = 0;
	}
	else if ( move == 2 )
	{
		row++;
		if ( arr[ row ][ column - 1 ] == '.' )
			move = 1;
		else if ( arr[ row + 1 ][ column ] == '.' )
			move = 2;
		else if ( arr[ row ][ column + 1 ] == '.' )
			move = 0;
		else if ( arr[ row ][ column - 1 ] == 'X' )
			move = 1;
		else if ( arr[ row + 1 ][ column ] == 'X' )
			move = 2;
		else if ( arr[ row ][ column + 1 ] == 'X' )
			move = 0;
		else
			move = 3;
	}
	else if ( move == 3 )
	{
		row--;
		if ( arr[ row ][ column + 1 ] == '.' )
			move = 0;
		else if ( arr[ row - 1 ][ column ] == '.' )
			move = 3;
		else if ( arr[ row ][ column - 1 ] == '.' )
			move = 1;
		else if ( arr[ row ][ column + 1 ] == 'X' )
			move = 0;
		else if ( arr[ row - 1 ][ column ] == 'X' )
			move = 3;
		else if ( arr[ row ][ column - 1 ] == 'X' )
			move = 1;
		else
			move = 2;
	}
	
	arr[ row ][ column ] = 'X';
	x++;
	
	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++ )
			cout << arr[ i ][ j ] << " ";
		cout << endl;
	}
	cout << endl;

	if ( row != 0 && row != ( size - 1 ) && column != 0 && column != ( size - 1 ) )
		lab ( arr );
	else if ( x == 1 )
		lab ( arr );

}
