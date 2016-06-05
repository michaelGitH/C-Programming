#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int array[ 20 ];
	for ( int count = 0; count < 20; count++ )
	{
		cout << "Введите число от 20 до 100 включительно: ";
		cin >> array[ count ];
		if ( array[ count ] < 20 || array[ count ] > 100 )
		{
			cout << "Введено недопустимое знаение!" << endl;
			count --;
		}
		else if ( count == 0 )
			cout << "Введенное число " << array[ count ] << endl;
		else
		{
			int copy = 0;
			for ( int counter = count - 1; counter >= 0; counter-- )
				if ( array[ count ] == array[ counter ] )
					copy = array[ counter ];
			if ( array[ count ] == copy )
			{
				cout << "Число было введено ранее!" << endl;
				count--;
			}
			else
				cout << "Введенное число " << array[ count ] << endl;
		}
	}
	return 0;
}
