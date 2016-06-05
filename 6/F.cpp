#include <iostream>
#include <iomanip>
using namespace std;

int a ( int x, int y, int z )
{
	cout << x << "\t" << y << "\t" << z << endl;
}
int a ( int x = 2, double y = 3, int z = 4 )
{
	cout << x << "\t" << y << "\t" << z << endl;
}

int main()
{
	cout << a ();
	return 0;
}
