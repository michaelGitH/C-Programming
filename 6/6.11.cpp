#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x = ceil( -fabs( -8 + floor ( -5.5 ) ) );
	cout << x << endl;
	return 0;
}
