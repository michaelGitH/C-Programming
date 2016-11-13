#include<iostream>
#include<string>
#include<windows.h>

#include"Stack.h"

using namespace std;

// ������ �������, ����������� Stack< T > 
template<typename T>
void testStack(
	Stack<T> &theStack, // ������ �� Stack< T > 
	T value, // ��������� ������������� �������� 
	T increment, // ��������� ��� ����������� �������� 	
	const string stackName) // ��� ������� Stack< T > 
{
	cout << "\nPushing elements onto " << stackName << '\n';
	
	// ���������� ������� � ���� 
	while (theStack.push(value)) {
		cout << value << ' ';
		value += increment;
	}

	cout << "\nStack is full. Cannot push " << value
		<< "\n\nPopping elements from " << stackName << '\n'; 

		// ���������� �������� �� ����� 
	while (theStack.pop(value))
		cout << value << ' ';

	cout << "\nStack is empty. Cannot pop" << endl;
}

//������������
void StackMain() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stack<double>doubleStack(5);

	double doubleValue = 1.1;
	cout << "Pushing elements onto doublestack\n";

	// ���������� � doublestack 5 �������� ���� double 
	while (doubleStack.push(doubleValue)) {
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	cout << "\nStack is full. Cannot push " << doubleValue
		<< "\n\nPopping elements from doubleStack\n";

	// ���������� �������� �� doublestack 
	while (doubleStack.pop(doubleValue)) {
		cout << doubleValue << ' ';
	}

	cout << "\nStack is empty. Cannot pop\n";

	Stack< int > intStack; // ������ �� ��������� 10 
	int intValue = 1;
	cout << "\nPushing elements onto intStack\n";

	// ���������� � intStack 10 �������� ���� int 
	while (intStack.push(intValue))
	{
		cout << intValue << ' ';
		intValue++;
	} // ����� while 

	cout << "\nStack is full. Cannot push " << intValue
		<< "\n\nPopping elements from intStack\n";

	// ���������� �������� �� intStack 
	while (intStack.pop(intValue))
		cout << intValue << ' ';

	cout << "\nStack is empty. Cannot pop" << endl;
}

/*void main() {
	Stack<double>doubleStack(5);
	Stack<int>intStack; // ������ �� ��������� 10 

	testStack(doubleStack, 1.1, 1.1, "doubleStack");
	testStack(intStack, 1, 1, "intStack");

	system("pause");
}*/