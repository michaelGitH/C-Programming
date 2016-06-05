#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	const int arraySize = 11;
	const int saleSize = 100;
	int cArray[ arraySize ] = { 0 };
	double sale[ saleSize ];
	for ( int count = 0; count < saleSize; count++ )
		sale[ count ] = 200 + ( ( rand() % 13000 ) * .09 );
	for ( int count = 0; count < saleSize; count++ )
		cout << sale[ count ] << "  ";
	cout << endl << endl;
	for ( int count = 0; count < saleSize; count++ )
	{
		if ( ( sale[ count ] / 100 ) >= 10 )
			cArray[ 10 ]++;
		else
			cArray[ static_cast<int>( sale[ count ] ) / 100 ]++;
	}

	for ( int count = 2; count <= 10; count++ )
	{	
		if ( count > 9 )
			cout << "More than 1000: " << cArray[ count ] << endl;
		else
			cout << count * 100 << "-" << count * 100 + 99 << ":" << setw( 9 ) << cArray[ count ] << endl;
	}

	return 0;
}
		
