#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int fact;
	
	for ( int count = 1; count <= 20; count++ )
	{
		cout << count << ":";
		long total = 1;
		for ( int counter = count; counter >= 1; counter-- )
		{
			total *= counter;
		}
		cout << " " << total << endl;
	}

	return 0;
}
