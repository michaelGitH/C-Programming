#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int const arraySize = 10;
	static int c[ arraySize ] = { 14, 15, 18, 21, 23, 68, 90, 156, 982, 91 };
	int total = 0;
	c[ 5 ] = 154;
	for ( int i; i < arraySize; i++ )
		total += c[ i ];
	cout << "Total is " << total << endl;

	return 0;
}
