// Завершение итерации цикла for с помощью оператора continue.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	for ( int count = 1; count <= 10; count++ )
	{
		if ( count == 5 ) // если count равен 5,
			continue;		// пропустить оставшийся код цикла

		cout << count << " ";
	} // конец for

	cout << "\nUsed continue to skip printing 5" << endl;
	return 0;
}
