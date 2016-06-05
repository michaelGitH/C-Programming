#include <iostream>
using namespace std;

int main()
{
	int nNumber;
	int number;
	long minimal = 999999999999999999;
	cout << "Enter the number of numbers: ";
	cin >> nNumber;	

	for ( int count = 1; count <= nNumber; count++ )
	{
		cout << "Enter next number: ";
		cin >> number;
		if ( number < minimal )
			minimal = number;
	}
	
	cout << "Minimal number is: " << minimal << endl;
	return 0;
}
