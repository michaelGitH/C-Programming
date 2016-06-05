#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter 5-number: " << endl;
	cin >> n;
	cout << n / 10000 << "\t" << ( n % 10000 ) / 1000 << "\t"
	<< ( n % 1000 ) / 100 << "\t" << ( n % 100 ) / 10 << "\t"
	<< ( n % 10 )  << endl;
	return 0;
}
