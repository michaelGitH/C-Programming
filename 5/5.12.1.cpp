#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int c = 0;

	for ( int count = 1; count <= 10; count++ )
	{
		int count1 = 1;
		for ( count1; count1 <= count; count1++ )
			cout << "*";

		int count2 = 11;
		for ( count2; count2 >= count; count2-- )
			cout << " ";
		count2 = 10;
		for ( count2; count2 >= count; count2-- )
				cout << "*";
			
			
		int count3 = 1 - c;
		for ( count3; count3 <= count; count3++ )
			cout << " ";
		count3 = 10;
		for ( count3; count3 >= count; count3-- )
				cout << "*";
		c++;

		int count4 = 11;
		for ( count4; count4 >= count; count4-- )
			cout << " ";
		count4 = 1;
		for ( count4; count4 <= count; count4++ )
			cout << "*";
		cout << endl;
	}

	return 0;
}
			
