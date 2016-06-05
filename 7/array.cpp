#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int const arraySize = 10;
	static int c[ arraySize ];
	c[ 5 ] = 154;
	for ( int i; i < arraySize; i++ )
		cout << c[ i ] << endl;

	return 0;
}
