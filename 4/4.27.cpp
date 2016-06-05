#include <iostream>
using namespace std;

int main()
{
	int number;	

	cout << "Enter binary number: ";
	cin >> number;

	int mn;
	int ten = 0;
	int count = 1;
	while( number > 0 )
	{		
		mn = ( number % 10 ) * count;
		count *= 2;
		number /= 10;
		ten += mn;
	}	
	
	cout << "Ten equivovelnt is: " << ten << endl;

	return 0;
}
		
