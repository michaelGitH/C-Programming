// for.cpp
// Повторение, управляемое счетчиком - оператор for.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	// Заголовок оператора for заключает в себе инициализацию,
	// условие продолжение цикла и приращение.
	for ( int counter = 1; counter <=10; counter++ )
		cout << counter << " ";

	cout << endl;
	return 0;
}
