#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	int x = 1, y = 8, a, b, j, i, g;
	cout << boolalpha << ( ! ( x < 5 ) && ! ( y >= 7 ) ) << ( ! ( ( x < 5 ) && ( y >= 7 ) ) ) << endl;
	cout << ( ! ( a == b ) || ! ( g != 5 ) ) << ( !( ( a == b ) && ( g != 5 ) ) ) << endl;
	
	return 0;
}
	 
