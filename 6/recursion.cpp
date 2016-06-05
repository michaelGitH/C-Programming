// Тестирование рекурсивной функции факториалa
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial( unsigned long );

int main()
{
	// вычислить факториал для эначенией от 0 до 10
	for ( int counter = 0; counter <= 20; counter++ )
		cout << setw( 2 ) << counter << "! = "
			<< factorial( counter ) << endl;
	
	return 0;
}

// рекурсивное определение функции факториала
unsigned long factorial( unsigned long number )
{
	if ( number <= 1 ) // проверить на основной случай
		return 1; // основные случаи: 0! = 1 and 1! = 1
	else // рекурсивный шаг
		return number * factorial( number - 1 );
}













