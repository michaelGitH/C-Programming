#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	int romb;
	cout << "Enter number of rhombus strings ( 1 - 19 ): ";
	cin >> romb;

	if ( ( romb <= 1 ) || ( romb > 101 ) )
		cout << "*" << endl;
	else
	{
		int x = ( romb / 2 ) + 1;
		int y = romb / 2;

		for ( int count = 1, counter = 1; count <= x; count++, counter += 2 )
		{
			for ( int count1 = count; count1 <= y; count1++ )
				cout << " ";
			for ( int count2 = 1; count2 <= counter; count2++ )
				cout << "*";
			cout << endl;
		}

		for ( int count = 1, counter = romb - 2; count <= y; count++, counter -= 2 )
		{
			for ( int count1 = count; count1 >= 1; count1-- )
				cout << " ";
			for ( int count2 = 1; count2 <= counter; count2++ )
				cout << "*";
			cout << endl;
		}
	}

	return 0;
}














