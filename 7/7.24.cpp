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

int main()
{
	 int board[ 8 ][ 8 ] = { 0 };
	 int horizontal[ 8 ];
	 int vertical[ 8 ];
	 horizontal[ 0 ] = 2;
	 horizontal[ 1 ] = 1;
	 horizontal[ 2 ] = -1;
	 horizontal[ 3 ] = -2;
	 horizontal[ 4 ] = -2;
	 horizontal[ 5 ] = -1;
	 horizontal[ 6 ] = 1;
	 horizontal[ 7 ] = 2;

	 vertical[ 0 ] = -1;
	 vertical[ 1 ] = -2;
	 vertical[ 2 ] = -2;
	 vertical[ 3 ] = -1;
	 vertical[ 4 ] = 1;
	 vertical[ 5 ] = 2;
	 vertical[ 6 ] = 2;
	 vertical[ 7 ] = 1;

 	int currentRow = 0, currentColumn = 0;
 	board[ currentRow ][ currentColumn ] = 1;

	int access [ 8 ][ 8 ] = 
 	{
  		{ 2, 3, 4, 4, 4, 4, 3, 2 },
  		{ 3, 4, 6, 6, 6, 6, 4, 3 },
  		{ 4, 6, 8, 8, 8, 8, 6, 4 },
  		{ 4, 6, 8, 8, 8, 8, 6, 4 },
  		{ 4, 6, 8, 8, 8, 8, 6, 4 },
  		{ 4, 6, 8, 8, 8, 8, 6, 4 },
  		{ 3, 4, 6, 6, 6, 6, 4, 3 },
  		{ 2, 3, 4, 4, 4, 4, 3, 2 }
 	}; 
 	int x;
 	int count = 2;
	for ( x = 2; x <= 64; x++ )
 	{
  		int moveNumber = 0;
  		int min = 9;
  		int ver;
  		int hor;
  		int minVer, minHor;
  		while ( moveNumber < 8 )
  		{
   		ver = currentRow + vertical[ moveNumber ];
   		hor = currentColumn + horizontal[ moveNumber ];
   		if ( ( ver < 0 ) || ( ver >= 8 ) )
    			moveNumber++;
   		else if ( ( hor < 0 ) || ( hor >= 8 ) )
    			moveNumber++;
   		else if ( board[ ver ][ hor ] != 0 )
    			moveNumber++;
   		else if ( access[ ver ][ hor ] < min )
   		{
    			min = access[ ver ][ hor ];
    			minVer = ver;
    			minHor = hor;
    			moveNumber++;
   		}
   		else if ( access[ ver ][ hor ] == min )
   		{
   			for ( int z = 0; z < 8; z++ )
   			{
   	   		if ( access[ minVer + vertical[ z ] ][ minHor + horizontal[ z ] ] < access[ ver + vertical[ z ] ][ hor + horizontal[ z ] ] )
   	   		{
   	      		minVer = minVer;
   	      		minHor = minHor;
   	      		min = access[ minVer ][ minHor ];
   	   		}
   	   		else if ( access[ ver + vertical[ z ] ][ hor + horizontal[ z ]] < access[ minVer + vertical[ z ] ][ minHor + horizontal[ z ] ])
   	   		{
   	      		minVer = ver;
   	      		minHor = hor;
   	      		min = access[ minVer ][ minHor ];
   	   		}
   			}
  		 	}
   		else
   		{
    			ver -= vertical[ moveNumber ];
    			hor -= horizontal[ moveNumber ];
    			moveNumber++;
   		}
  		}    
    	for ( int y = 0; y < 8; y++ )
    	{
    		if ( ( minVer + vertical[ y ] < 0 ) || ( minVer + vertical[ y ] > 7 ) )
    	   	y++;
    		else if ( ( minHor + horizontal[ y ] < 0 ||  minHor + horizontal[ y ]  > 7 ) )
    	   	y++;
    		else
    	   	access[ minVer + vertical[ y ] ][ minHor + horizontal[ y ] ]--;
    	}
    	board[ minVer ][ minHor ] = count;
    	count++;
    	currentRow = minVer;
    	currentColumn = minHor;
    	for ( int row = 0; row < 8; row++ )
    	{
     		for ( int column = 0; column < 8; column++ )
      		cout << setw( 3 ) << board[ row ][ column ];
     		cout << endl;
    	}
    	cout << endl << currentRow << " " << currentColumn << endl;
   
  
 	}
   
   

 	for ( int row = 0; row < 8; row++ )
 	{
  		for ( int column = 0; column < 8; column++ )
   		cout << setw( 3 ) << board[ row ][ column ];
  		cout << endl;
 	}
 	cout <<  count << endl;
 return 0;
}
