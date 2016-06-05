#include <iostream>
using namespace std;

int main()
{
	int integer;
	cout << "Enter the integer: ";
	cin >> integer;

	int factorial = 1;	
	while ( integer > 0 )
	{
		factorial *= integer;
		integer--;
	}

	cout << "The factorial is " << factorial
		  << endl;

	return 0;
}
		
