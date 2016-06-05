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

 int x = 0;
 int count = 2;
 srand( time( 0 ) );
 while ( count < 64 )
 {
  	int moveNumber = 0 + rand() % 7;
  	int ver;
  	int hor;
  	ver = currentRow + vertical[ moveNumber ];
  	hor = currentColumn + horizontal[ moveNumber ];
   if ( ( ver < 0 ) || ( ver >= 8 ) )
    	x++;
   else if ( ( hor < 0 ) || ( hor >= 8 ) )
    	x++;
   else if ( board[ ver ][ hor ] != 0 )
    	x++;
   else
   {
   	board[ ver ][ hor ] = count;
   	count++;
   	currentRow = ver;
   	currentColumn = hor;
	}
   for ( int row = 0; row < 8; row++ )
   {
     	for ( int column = 0; column < 8; column++ )
      	cout << setw( 3 ) << board[ row ][ column ];
     	cout << endl;
   }
	cout << x << " " << "count is " << count << endl;
   
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
