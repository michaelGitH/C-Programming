#include<iostream>
#include<cstdlib>
using namespace std;

void lab ( char arr[][ 12 ] );

int main()
{
	const int size = 12;
	char array[ size ][ size ];
	lab( array );
	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size; j++ )
			cout << array[ i ][ j ] << " ";
		cout << endl;
	}
	cout << endl;
	
	

	return 0;
}




void lab ( char arr[][ 12 ] )
{
	srand( time( 0 ) );
	const int size = 12;
	int row = 0;
	int column = 0;
	int move = 0;
	// 0 - Вправо, 1 - Влево, 2 - вниз, 3 - вверх;
	for ( int i = 0; i < size; i++ )
		for ( int j = 0; j < size; j++ )
			arr[ i ][ j ] = '#';
		
	int os = rand() % 2;
	if ( os == 0 )
	{
		int z = 1; 
		if ( rand() % 2 == 0 )
			row = 0;
		else
		{
			row = size - 1;
			z = -1;
		}
		column = 2 + rand() % 9;
		arr[ row ][ column ] = '.';
		arr[ row += z ][ column ] = '.';
	}
	if ( os == 1 )
	{
		int z = 1; 
		if ( rand() % 2 == 0 )
			column = 0;
		else
		{
			column = size - 1;
			z = -1;
		}
		row = 2 + rand() % 9;
		arr[ row ][ column ] = '.';
		arr[ row ][ column += z ] = '.';
	}

	for ( int i = 0; i < size * 6; i++ )
	{
		int dec = 0;
		int counter = 0;
		do
		{
			move = rand() % 4;
			if ( move == 0 )
			{
				if ( ( arr[ row ][ column + 1 ] != '.' ) && ( arr[ row ][ column + 2 ] != '.' ) 
				&& ( ( column + 2 ) < ( size - 1 ) ) && ( arr[ row - 1 ][ column ] != '.' ) && arr[ row + 1 ][ column ] != '.' )
				{
					arr[ row ][ ++column ] = '.';
					dec = 1;
				}	
			}
			else if ( move == 1)
			{
				if ( (arr[ row ][ column - 1 ] != '.' ) && ( arr[ row ][ column - 2 ] != '.' )
				&& ( ( column - 2 ) > 0 ) )
				{
					arr[ row ][ --column ] = '.';
					dec = 1;
				}
			}
			else if ( move == 2 )
			{
				if ( ( arr[ row + 1 ][ column ] != '.' ) && ( arr[ row + 2 ][ column ] != '.' ) 
				&& ( ( row + 2 ) < ( size - 1 ) ) )
				{
					arr[ ++row ][ column ] = '.';
					dec = 1;
				}
			}
			else if ( move == 3 )
			{
				if ( ( arr[ row - 1 ][ column ] != '.' ) && ( arr[ row - 2 ][ column ] != '.' ) 
				&& ( ( row - 2 ) > 0 ) )
				{
					arr[ --row ][ column ] = '.';
					dec = 1;
				}
			}
			for ( int count = 0; count < size; count++ )
			{
				for ( int j = 0; j < size; j++ )
					cout << arr[ count ][ j ] << " ";
				cout << endl;
			}
			counter++;
			if ( counter > 10 )
				if ( dec == 0 )
				{
					do
					{
						int randr;
						int randc;
						if ( move == 0 || move == 1 )
						{
							randr = -1 + rand() % 3;
							randc = 0;
						}
						else
						{
							randr = 0;
							randc = -1 + rand() % 3;
						}
						row += randr;
						column += randc;
						arr[ row ][ column ] = '.';
						dec = 1;
					}
					while ( row < 1 || column < 1 || row > size - 2 || column > size - 2 );
				}
			cout << "move = " << move << "; row = " << row << "; column = " << column << endl << endl;
		}
		while ( dec == 0 );	

		for ( int count = 0; count < size; count++ )
		{
			for ( int j = 0; j < size; j++ )
				cout << arr[ count ][ j ] << " ";
			cout << endl;
		}
		cout << endl;
		cout << "i = " << i << endl;
	}
	int rowlow;
	int collow;
	int exitrow, exitcolumn;
	
	int low = 100;
	int finish[ 4 ] = { 0 };
	for ( int count = 0; count < size; count++ )
	{
		if ( arr[ row + count ][ column ] == '.' )
			finish[ 0 ]++;
		if ( arr[ row - count ][ column ] == '.' )
			finish[ 1 ]++;
		if ( arr[ row ][ column + count ] == '.' )
			finish[ 2 ]++;
		if ( arr[ row ][ column - count ] == '.' )
			finish[ 3 ]++;		
	}
	
	for ( int count = 0; count < 4; count++ )
	{
		if ( finish[ count ] < low )
		{
			low = finish[ count ];
			move = count;
		}
	}
	
	if ( move == 0 )
	{
		for ( int j = column; j < size; j++ )
		{
			if ( arr[ row ][ column + 1 ] == '#' )
				arr[ row ][ ++column ] = '.';
			else if ( arr[ row + 1 ][ column + 1 ] == '#' )
			{
				arr[ ++row ][ column ] = '.';
				arr[ row ][ ++column ] = '.';
			}
			else if ( arr[ row - 1 ][ column + 1 ] == '#' )
			{
				arr[ --row ][ column ] = '.';
				arr[ row ][ ++column ] = '.';
			}
			else
			{
				arr[ row ][ ++column ] = '.';
			}
		}
	}
	else if ( move == 1 )
	{
		for ( int j = column; j >= 0; j-- )
		{
			if ( arr[ row ][ column - 1 ] == '#' )
				arr[ row ][ --column ] = '.';
			else if ( arr[ row + 1 ][ column - 1 ] == '#' )
			{
				arr[ ++row ][ column ] = '.';
				arr[ row ][ --column ] = '.';
			}
			else if ( arr[ row - 1 ][ column - 1 ] == '#' )
			{
				arr[ --row ][ column ] = '.';
				arr[ row ][ --column ] = '.';
			}
			else
			{
				arr[ row ][ --column ] = '.';
			}
		}
	}
	else if ( move == 2 )
	{
		for ( int j = row; j < size; j++ )
		{
			if ( arr[ row + 1 ][ column ] == '#' )
				arr[ ++row ][ column ] = '.';
			else if ( arr[ row + 1 ][ column + 1 ] == '#' )
			{
				arr[ row ][ ++column ] = '.';
				arr[ ++row ][ column ] = '.';
			}
			else if ( arr[ row + 1 ][ column - 1 ] == '#' )
			{
				arr[ row ][ --column ] = '.';
				arr[ ++row ][ column ] = '.';
			}
			else
			{
				arr[ ++row ][ column ] = '.';
			}
		}
	}
	else if ( move == 3 )
	{
		for ( int j = row; j >= 0; j-- )
		{
			if ( arr[ row - 1 ][ column ] == '#' )
				arr[ --row ][ column ] = '.';
			else if ( arr[ row - 1 ][ column + 1 ] == '#' )
			{
				arr[ row ][ ++column ] = '.';
				arr[ --row ][ column ] = '.';
			}
			else if ( arr[ row - 1 ][ column - 1 ] == '#' )
			{
				arr[ row ][ --column ] = '.';
				arr[ --row ][ column ] = '.';
			}
			else
			{
				arr[ --row ][ column ] = '.';
			}
		}
	}
}
	
	
	
		
	
	

	
