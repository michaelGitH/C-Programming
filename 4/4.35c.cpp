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
	double x = 1;

	while ( count <= sum )	
	{	
		factorial = 1;
		integer = count;
		while ( integer > 0 )
		{
			factorial *= integer;
			integer--;
		}	
		x *= sum;
		multiplier = x / factorial;
		e += multiplier;
		count++;
	}


	cout << setprecision(6) << fixed << "The constant e is " << e
		  << endl;
	cout << setprecision(6) << fixed << "The constant e is " << multiplier
		  << endl;

	return 0;
}
