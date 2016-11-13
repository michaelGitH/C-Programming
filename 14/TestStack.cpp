#include<iostream>
#include<string>
#include<windows.h>

#include"Stack.h"

using namespace std;

// шаблон функции, тестирующей Stack< T > 
template<typename T>
void testStack(
	Stack<T> &theStack, // ссылка на Stack< T > 
	T value, // начальное заталкиваемое значение 
	T increment, // инкремент для последующих значений 	
	const string stackName) // имя объекта Stack< T > 
{
	cout << "\nPushing elements onto " << stackName << '\n';
	
	// затолкнуть элемент в стек 
	while (theStack.push(value)) {
		cout << value << ' ';
		value += increment;
	}

	cout << "\nStack is full. Cannot push " << value
		<< "\n\nPopping elements from " << stackName << '\n'; 

		// вытолкнуть элементы из стека 
	while (theStack.pop(value))
		cout << value << ' ';

	cout << "\nStack is empty. Cannot pop" << endl;
}

//тестирование
void StackMain() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stack<double>doubleStack(5);

	double doubleValue = 1.1;
	cout << "Pushing elements onto doublestack\n";

	// затолкнуть в doublestack 5 значений типа double 
	while (doubleStack.push(doubleValue)) {
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	cout << "\nStack is full. Cannot push " << doubleValue
		<< "\n\nPopping elements from doubleStack\n";

	// вытолкнуть элементы из doublestack 
	while (doubleStack.pop(doubleValue)) {
		cout << doubleValue << ' ';
	}

	cout << "\nStack is empty. Cannot pop\n";

	Stack< int > intStack; // размер по умолчанию 10 
	int intValue = 1;
	cout << "\nPushing elements onto intStack\n";

	// затолкнуть в intStack 10 значений типа int 
	while (intStack.push(intValue))
	{
		cout << intValue << ' ';
		intValue++;
	} // конец while 

	cout << "\nStack is full. Cannot push " << intValue
		<< "\n\nPopping elements from intStack\n";

	// вытолкнуть элементы из intStack 
	while (intStack.pop(intValue))
		cout << intValue << ' ';

	cout << "\nStack is empty. Cannot pop" << endl;
}

/*void main() {
	Stack<double>doubleStack(5);
	Stack<int>intStack; // размер по умолчанию 10 

	testStack(doubleStack, 1.1, 1.1, "doubleStack");
	testStack(intStack, 1, 1, "intStack");

	system("pause");
}*/