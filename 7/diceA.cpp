#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

int main()
{
	const int arraySize = 7;
	int frequency[ arraySize ] = { 0 };
	
	srand( time( 0 ) );

	for ( int roll = 1; roll <= 6000000; roll++ )
		frequency[ 1 + rand() % 6 ]++;

	cout << "face:" << setw( 13 ) << "frequency:" << endl;

	for ( int face = 1; face < arraySize; face++ )
		cout << setw( 4 ) << face << setw( 13 ) << frequency[ face ] << endl;

	return 0;
}
	
