// Демонстрация массива указателей на функцию.
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

// прототипы функций - функции производят схожие действия
void function0( int );
void function1( int );
void function2( int );

int main()
{
	// инициализировать массив из 3 указателей на функции, каждая
	//из которых принимает аргумент типа int и возвращает void
	void (*f[ 3 ])( int ) = { function0, function1, function2 };

	int choice;

	cout << "Enter a number between 0 and 2, 3 to end: ";
	cin >> choice;

	// обработать выбор пользователя
	while ( ( choice >= 0 ) && ( choice < 3 ) )
	{
		// вызвать функцию в позиции choice массива f
		//и передать choice в качестве аргумента
		(*f[ choice ])( choice );
		cout << "Enter a number between 0 and 2, 3 to end: ";
		cin >> choice;
	}
	cout << "Program execution completed." << endl;
	return 0;
}

void function0( int a )
{
	cout << "You entered " << a << " so function0 was called\n\n";
}

void function1( int b )
{
	cout << "You entered " << b << " so function1 was called\n\n";
}

void function2( int c )
{
	cout << "You entered " << c << " so function2 was called\n\n";
}


















