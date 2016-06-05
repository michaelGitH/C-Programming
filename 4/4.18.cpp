#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int N = 1;
	int n;
	int c;

	cout << "N\t10*N\t100*N\t1000*N\n" << endl;

	while ( N <= 10 )
	{
		c = 1;
		n = N;
		while ( c <= 6 )
		{
			cout << n << "\t";
			n *= 10;
			c++;
		}
		cout << endl;
		N++;
	}
		
	return 0;
}
