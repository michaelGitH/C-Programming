#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
#include <string>
using std::string;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int chess ( int [][ 8 ] );

int main()
{
	const int size = 8;
	int boardy[ size ][ size ] = { 0 };
	chess ( boardy );
	chess ( boardy );





	for ( int row = 0; row < size; row++ )
	{
		for ( int col = 0; col < size; col++ )
			cout << setw( 3 ) << boardy[ row ][ col ];
		cout << endl;
	}

	return 0;
}

int chess ( int board[][ 8 ] )
{
	const int size = 8;
	int minBoard[ size ][ size ] = { 0 };
	int ver, hor;
	int x = 0;
	int min = 100;

		for ( ver = 0; ver < size; ver++ )
		{
			for ( hor = 0; hor < size; hor++ )
			{	
				if ( ( minBoard[ ver ][ hor ] == 0 ) )
				{
					board[ ver ][ hor ] = 2;
					for ( int row = 0; row < size; row++ )
					{
						if ( board[ row ][ hor ] == 2 )
							board[ row ][ hor ] = 2;
						else
						{
							board[ row ][ hor ] = 1;
							x++;
						}
					}
					for ( int col = 0; col < size; col++ )
					{
						if ( board[ ver ][ col ] == 2 )
							board[ ver ][ col ] = 2;
						else
						{
							board[ ver ][ col ] = 1;
							x++;
						}
					}
					int verF, horF;
					if ( ver < hor )
					{
						verF = ( size - ( hor + 1 ) );
					}
					else
					{
						verF = ( size - ( ver + 1 ) );
					}
					int row = ver + 1, col = hor + 1;
					for ( int counter = 0; counter < verF; counter++ )
					{
						board[ row ][ col ] = 1;
						row++;
						col++;
						x++;
					}
					row = ver - 1; col = hor - 1;
					int counter;
					if ( ver < hor )
						counter = ver;
					else
						counter = hor;
		
					for ( counter; counter > 0; counter-- )
					{
						board[ row ][ col ] = 1;
						row--;
						col--;
						x++;
					}

					if ( hor < ( size - ( ver + 1 ) ) )
					{
						row = ver + 1;
						col = hor - 1;
						for ( counter = hor; counter > 0; counter-- )
						{
							board[ row ][ col ] = 1;
							row++;
							col--;
							x++;
						}
						row = ver - 1; col = hor + 1;
						for ( counter = ver; counter > 0; counter-- )
						{
							board[ row ][ col ] = 1;
							row--;
							col++;
							x++;
						}
					}
					else
					{
						row = ver + 1;
						col = hor - 1;
						for ( counter = ( size - ( ver + 1 ) ); counter > 0; counter-- )
						{
							board[ row ][ col ] = 1;
							row++;
							col--;
							x++;
						}
						row = ver - 1; col = hor + 1;
						for ( counter = ( size - ( hor + 1 ) ); counter > 0; counter-- )
						{
							board[ row ][ col ] = 1;
							row--;
							col++;
							x++;
						}
					}
					if ( x < min )
					{
						min = x;
						for ( int row = 0; row < size; row++ )
						{
							for ( int col = 0; col < size; col++ )
							{
								if ( board[ row ][ col ] == 2 )
									minBoard[ row ][ col ] = 2;
								else if ( board[ row ][ col ] == 1 )
									minBoard[ row ][ col ] = 1;
							}
						}
					}
					x = 0;
				}				
			}
			for ( int row = 0; row < size; row++ )
			{
				for ( int col = 0; col < size; col++ )
					return minBoard[ row ][ col ];
			}
		}
	}
					
	
	
	
