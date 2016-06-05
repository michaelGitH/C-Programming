// Тестирование рекурсивной функции вычисления чисел Фибоначчи.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long fibonacci ( unsigned long );

int main()
{
	// вычислить числа Фибоначчи с номерами от 0 до 10
	for ( int counter = 0; counter <= 1000; counter++ )
		cout << "fibonacci( " << counter << " ) = "
			<< fibonacci( counter ) << endl;

	// вывести числа Фибоначчи с более высокими номерами
	cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
	cout << "fibonacci( 30 ) = " << fibonacci( 20 ) << endl;
	cout << "fibonacci( 35 ) = " << fibonacci( 20 ) << endl;
	return 0;
}

// рекурсивный метод вычисления чисел Фибоначчи
unsigned long fibonacci ( unsigned long number )
{
	if ( (number == 0 ) || ( number == 1 ) ) // основные случаи
		return number;
	else // рекурсивный шаг
		return fibonacci( number - 1 ) + fibonacci( number - 2 );
}	













		
