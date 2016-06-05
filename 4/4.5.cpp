#include <iostream>
using namespace std;

int main()
{
	int sum, x;
	x = 1;
	sum = 0;
	sum += x;
	cout << "The sum is " << sum << endl;

	cout << endl;	

	while ( x != 11 )
	{
		sum += x;
		++x += sum;
		cout << "The sum is " << sum << endl
		  	  << "Value of x is " << x << endl;
	}

	return 0;
}
		

	
