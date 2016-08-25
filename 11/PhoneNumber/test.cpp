#include<iostream>
using namespace std;
#include"PhoneNumber.h"

int main() {
	Number n1, n2;
	cin >> n1;
	n1 << cout << endl;
	cin >> n2;
	n2.operator<<(cout) << endl;

	system("pause");
	return 0;
}