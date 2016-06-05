// Сравнение передачи по значению и передачи по ссылке.
#include <iostream>
using std::cout;
using std::endl;

int squareByValue ( int ); // прототип (передача по значению)
void squareByReference ( int & ); // прототип (передача по ссылке)

int main()
{
	int x = 2; // воэведится в квадрат вызовом squareByValue
	int z = 4; // воэведится в квадрат вызовом squareByReference

	// демонстрация squareByValue
	cout << "x = " << x << " before squareByValue\n";
	cout << "Value returned by squareByValue: "
		<< squareByValue( x ) << endl;
	cout << "x = " << x << " after squareByValue\n" << endl;

	// демонстрация squareByReference
	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference( z );
	cout << "z = " << z << " after squareByReference" << endl;
	return 0; 
}

// squareByValue умножает number на себя, сохраняет
// результат в number и возвращает новое значение number	
int squareByValue( int number )
{
	return number *= number; // аргумент вызывающего не изменяется
}

// squareByReference умножает на себя и сохраняет numberRef
// в переменной, на которую ссылается numberRef в функции main
void squareByReference ( int &numberRef )
{
	numberRef *= numberRef; // аргумент вызывающего модифицируется
}















