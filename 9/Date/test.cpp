#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int m = 3;
	int i = ( m == ( 1 || 3 || 5 || 7 || 8 ) ) ? m : 0;
	cout << i << endl;
	return 0;
}
