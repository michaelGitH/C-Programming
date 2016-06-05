#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum;
	cout << "Enter the sum of multipliers: ";
	cin >> sum;
	double count = 1;
	double integer;
	double factorial = 1;
	double e = 1;
	double multiplier = 0;

	while ( count <= sum )	
	{	
		factorial = 1;
		integer = count;
		while ( integer > 0 )
		{
			factorial *= integer;
			integer--;
		}	
		multiplier = 1 / factorial;
		e += multiplier;
		count++;
	}


	cout << setprecision(6) << fixed << "The constant e is " << e
		  << endl;

	return 0;
}
