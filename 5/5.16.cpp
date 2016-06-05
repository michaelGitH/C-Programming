#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw; //позволяет программе устанавливать ширину поля

#include <cmath> // стандартная матеметическая библиотека C++
using std::pow; // позволяет программе использовать функцию pow


int main()
{
	int amount; // сумма на счете в конце каждого года
	int principal = 100000; // исходная сумма
	double rate = .05; // процентная ставка

	// вывести заголовки
	cout << "Year" << setw( 21 ) << "Amount on depisit" << endl;

	// установить формат чисел с плавающей точкой
	cout << fixed << setprecision( 2 );

	// вычислить сумму на счете для каждого года
	for ( int year = 1; year <=10; year++ )
	{

		// вычислить новую сумму для указанного года
		amount = principal * pow( 1.0 + rate, year );
		int $ = amount / 100;
		int cent = amount % 100;

		// вывести год и сумму
		cout << setw( 4 ) << year << setw( 21 ) << $ << "," << cent << endl;
	} // конец for
		
	return 0;
}
