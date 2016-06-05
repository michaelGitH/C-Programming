#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{

	// 1)   ( ( 1 + rand() % 5 ) * 2 )
	// 2)   ( ( 1 + rand() % 5 ) * 2 + 1 )
	// 3)   ( ( 1.5 + rand() % 5 ) * 4 )
	for ( int count = 1; count <= 15; count++ )
	{
		cout << ( ( 1.5 + rand() % 5 ) * 4 ) << endl;
	}

	return 0;
}
