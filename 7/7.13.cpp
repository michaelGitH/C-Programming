#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int counts[ 10 ] = { 0 };
	int bonus[ 15 ] = { 2 };
	for ( int count = 0; count < 15; count++ )
		bonus[ count ]++;
	int monthlyTemperatures[ 12 ];
	for ( int count = 0; count < 12; count++ )
		cin >> monthlyTemperatures[ count ];
	int bestScores[ 5 ] = { 1, 3, 7, 12, 4 };
	for ( int count = 0; count < 5; count++ )
		cout << bestScores[ count ] << endl;
	return 0;
}
	
