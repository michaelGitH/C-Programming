#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	srand( time( 0 ) );
	for ( int count = 1; count <= 25; count++ )
	{
		cout << setw( 11 ) << 1 + rand() % 12;
		if ( count % 5 == 0 )
			cout << endl;
	}
	return 0;
}
