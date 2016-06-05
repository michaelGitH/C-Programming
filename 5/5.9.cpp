#include <iostream>
using namespace std;

int main()
{
	int total = 1;

	for ( int count = 1; count <= 15; count += 2 )
		total *= count;
	
	cout << "The product of numbers is " << total << endl;
	return 0;
}
