#include <iostream>
using namespace std;

int main()
{
	int countV = 1;
	int countG = 1;
	while ( countV <= 8 )
	{
		while ( countG <= 8 )
		{
			cout << "* ";
			countG++;
		}
		countG = 1;
		cout << endl;
		countV++;
		if ( countV % 2 )
		{}
		else
			cout << " ";
	}

	return 0;
}
