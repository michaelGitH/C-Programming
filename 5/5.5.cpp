#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	int tNumber = 0;
	int eNumber;
	cout << "Enter sum of numbers: ";
	cin >> number;

	for ( int count = 1; count <= number; count++ )
	{
		cout << "Enter number " << count << ": ";
		cin >> eNumber;
		tNumber += eNumber;
	}

	cout << "Total is: " << tNumber << endl;
	return 0;
} 
