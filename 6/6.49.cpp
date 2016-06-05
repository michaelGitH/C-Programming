#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int c;
	if ( ( c = cin.get() ) != EOF )
	{	
		main();
		cout << c;
	}
	return 0;
}
