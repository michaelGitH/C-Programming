// Тестовая программа для класса Array. 
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include"Array.h"

int main()
{
	Array integers1( 7 ); // 7-элементный Array 
	Array integers2; // 10-элементный Array по умолчанию 

	// напечатать размер и содержимое integers1 
	cout << "Size of Array integers1 is " <<
		integers1.getSize() <<
		"\nArray after initialization:\n" << integers1 << endl;

	// напечатать размер и содержимое integers2 
	cout << "Size of Array integers2 is " <<
		integers2.getSize() <<
		"\nArray after initialization:\n" << integers2 << endl;

	// ввести и напечатать integersl и integers2 
	cout << "\nEnter 17 integers:" << endl;
	cin >> integers1 >> integers2;

	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	// применить перегруженную операцию неравенства (!=) 
	cout << "\nEvaluating: integersl != integers2" << endl;
	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal!" << endl;

	// создать массив integers3, используя как инициализатор 
	// integersl; напечатать размер и содержимое 
	Array integers3(integers1); // вызывает конструктор копии 
	cout << "Size of integers3 is: " << integers3.getSize()
		<< "\nArray after initialization:\n" << integers3;

	// применить перегруженную операцию присваивания (=) 
	cout << "\nAssigning inegers2 to integers1:" << endl;
	integers1 = integers2; // заметьте, что целевой массив меньше 

	cout << "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	// применить перегруженную операцию равенства (==) 
	cout << "Evaluating: integers1 == integers2" << endl;
	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;

	// применить перегруженную операцию индексации, дающую rvalue 
	cout << "\nintegers1[ 5 ] is " << integers1[5] << endl;

	// применить перегруженную операцию индексации, дающую lvalue 
	cout << "\nAsigning 1000 to integers1[ 5 ]" << endl;
	integers1[5] = 1000;
	cout << "\nintegers1[ 5 ] is " << integers1[5] << endl;

	// попытка использования индекса вне диапазона 
	cout << "\nAttempt to assign 1000 to integers1[ 15 ]" << endl;
	integers1[ 15 ] = 1000;

	system("pause");
	return 0;
}