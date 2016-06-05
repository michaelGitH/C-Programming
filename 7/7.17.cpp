#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include<iomanip>
using std::setw;



int main()
{
	srand( time( 0 ) );
	int dice1;
	int dice2;
	int sumOfDice;
	int sum[ 12 ] = { 0 };
	for ( int count = 1; count < 3600000; count++ )
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		sumOfDice = dice1 + dice2;
		sum[ sumOfDice ]++;
	}
	cout << "Number" << setw( 13 ) << "Sum of dice" << endl;
	for ( int count = 2; count <= 12; count++ )
		cout << count << setw( 17 ) << sum[ count ] << endl;

	return 0;
}
	
