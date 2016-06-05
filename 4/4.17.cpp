#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	int counter = 1;
	int largest = 0;

	while ( counter <= 10 )
	{
		cout << "\nEnter a number: ";
		cin >> number;
		if ( number > largest )
			largest = number;
		counter++;
	}

	cout << "\nThe largest number is: "
		  << largest << endl;

	return 0;
}

