#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw; //позволяет программе устанавливать ширину поля

#include <cmath> // стандартная матеметическая библиотека C++
using std::pow; // позволяет программе использовать функцию pow

int main()
{
	double amount;
	double deposit;
	double rate = .05;
	int year;

	cout << "Enter sum of deposit: ";
	cin >> deposit;
	cout << setprecision( 2 ) << fixed;
	cout << setw( 4 ) << "Year" << setw( 21 ) << "Amount of deposit"
		  << endl;

	for ( rate; rate <= .1; rate += .01 )
	{
		cout << "for rate is " << rate << endl;
		double sum = 1.00 + rate;
		for ( year = 1; year <= 10; year++ )
		{
			amount = deposit * pow( sum, year );
			cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
		}
		cout << endl;
	}

	return 0;
}



















