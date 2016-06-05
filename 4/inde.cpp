// inde.cpp
// Преинкремент и постинкремент.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int c;
	c = 5;
	cout << c << endl;
	cout << c++ << endl; //печатает 5, затем выполняет инкремент
	cout << c << endl; // печатает б

	cout << endl;

	c = 5;
	cout << c << endl;
	cout << ++c << endl; //выполняет инкремент и затем печатает 6
	cout << c << endl;
	return 0;
}
	
