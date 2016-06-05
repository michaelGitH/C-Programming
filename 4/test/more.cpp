#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	int more = 0;
	int more2 = 0;
	int number;
	while ( count < 10 )
	{
		cin >> number;
		if ( number > more )
		{
			more2 = more;
			more = number;
		}
		else if ( number > more2 )
			more2 = number;
		count++;
	}
	cout << "The most is " << more << " and " << more2 << endl;
	return 0;
}
