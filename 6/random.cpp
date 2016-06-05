// Рандомизация программы бросания кости.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib> // содержит прототипы для функций srand и rand
using std::rand;
using std::srand;

int main()
{
	unsigned seed; // хранит введенное пользователем "семя"
	cout << "Enter the seed: ";
	cin >> seed;
	srand( seed ); // засеять генератор случайных чисел

	for ( int count = 1; count <= 10; count++ )
	{
		// получить случайное число от 1 до 6 и вывести его
		cout << setw( 10 ) << ( 1 + rand() % 6 );
		if ( count % 5 == 0 )
			cout << endl;
	}
	return 0;
}

	

