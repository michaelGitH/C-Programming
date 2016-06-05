#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	int counter = 1;
	int largest = 0;
	int PreLargest = 0;

	while ( counter <= 10 )
	{
		cout << "Enter a number: ";
		cin >> number;
		if ( number > largest )
		{
			PreLargest = largest;
			largest = number;
		}
		else if ( number > PreLargest )
		PreLargest = number;

		counter++;
	}

	cout << "\nTwo largest numbers are: "
		  << PreLargest << " and "
		  << largest << endl;

	return 0;
}

