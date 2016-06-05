#include <iostream>
using namespace std;

int main()
{
	int integer;
	int total = 0;
	int count = 0;
	cout << "Enter integer: ";
		
	do {
		cin >> integer;
		if ( integer != 9999 )
			total += integer;
		else
			continue;
		count++;
		}
	while ( integer != 9999 );

	cout << "Middle value is: " << total / count
		  << endl;
	return 0;
}

	
