#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int x;
	cout << "Enter value: ";
	cin >> x;
	switch ( x % 2 )
	{
		case 0:
			cout << "Even integer!" << endl;
			break;
		case '\n':
		case '\t':
		case ' ': 
			break;
		default:
			cout << "Odd integer!" << endl;
	}
	return 0;
}
