#include<iostream>
#include<cstdlib>
using namespace std;

void maze ( char [][ 12 ] );

int main()
{
	const int size = 12;
	char a[ size ][ size ];
	maze( a );
	return 0;
}



void maze ( char arr[][ 12 ] )
{
	const int size = 12;
	for ( int i = 0; i < size; i++ )
		for ( int j = 0; j < size; j++ )
			arr[ i ][ j ] = '#';

	srand( time( 0 ) );
	int os = rand() % 1;
	int row, column;
	if ( os == 0 )
	{
		row = 0;
		column = 2 + rand() % 9;
		cout << column << endl;
		arr[ row ][ column ] = '.';
		cout << column << endl;
		arr[ row++ ][ column ] = '.';
	}
	else
	{
		column = 0;
		row = 2 + rand() % 9;
		arr[ row ][ column ] = '.';
		arr[ row ][ column++ ] = '.';
	}
	
	for ( int i = 0; i < size * 5; i++ )
	{
		int y = 0;
		do
		{
			int x = rand() % 4;
			if ( x == 0 )
			{
				if ( ( column + 2 ) > ( size - 1 ) )
					y = 0;
				else
				{
					y = 1;
					column++;
				}
			}
			else if ( x == 1 )
			{
				if ( ( column - 2 ) < 0 )
					y = 0;
				else
				{
					y = 1;
					column--;
				}
			}
			else if ( x == 2 )
			{
				if ( ( row + 2 ) > ( size - 1 ) )
					y = 0;
				else
				{
					y = 1;
					row++;
				}
			}
			if ( x == 3 )
			{
				if ( ( row - 2 ) < 0 )
					y = 0;
				else
				{
					y = 1;
					row++;
				}
			}
		}
		while ( y == 0 );
		arr[ row ][ column ] = '.';

		for ( int i = 0; i < size; i++ )
		{
			for ( int j = 0; j < size; j++ )
				cout << arr[ i ][ j ] << ' ';
			cout << endl;		
		}
		cout << endl;
	}


} 
			
























