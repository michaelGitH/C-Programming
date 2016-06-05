#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int total = 0;
	for ( int counter = 2; counter <= 20; counter += 2 )
		total += counter;

	cout << "sum is " << total << endl;

	return 0;
}
