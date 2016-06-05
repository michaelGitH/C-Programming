#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 2;

	while ( a != 63 )
	{
		cout << b << ", ";
		b *= 2;
	}

	return 0;
}
