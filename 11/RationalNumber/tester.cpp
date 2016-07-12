#include<iostream>
using std::cout;
using std::endl;
using std::boolalpha;

#include"RationalNumber.h"

int main() {
	RationalNumber r1(20, 4), r2( 124, 16 ), r3, r4( 5, 10 ), r5( 13, 39 );

	r1 - r2;
	cout << r1 + r2 << endl;
	cout << r1 - r2 << endl;

	cout << r4 * r5 << endl;
	cout << r4 / r5 << endl;

	cout << "r4: " << r4 << "; r5: " << r5 << endl;
	cout << "r4 < r5: " << boolalpha << ( r4 < r5 ) << endl;
	cout << "r4 > r5: " << ( r4 > r5 ) << endl;
	cout << "r4 == r5: " << (r4 == r5) << endl;
	cout << "r4 != r5: " << (r4 != r5) << endl;
	cout << "r4 <= r5: " << (r4 >= r5) << endl;
	cout << "r4 >= r5: " << (r4 <= r5) << endl;


	system("pause");
	return 0;
}