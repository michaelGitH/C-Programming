// Выход из оператора for с помощью оператора break.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int count; // счетчик, используемый также после выхода из цикла

	for ( count = 1; count <= 10; count++ ) // повторить 10 раз
	{
		if ( count == 5 ) // если count равен 5,
			break; 			// завершить цикл

		cout << count << " ";
	} // конец for

	cout << "\nBroke out fo loop at count = " << count << endl;

	return 0;
}

	
