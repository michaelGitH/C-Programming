// sale.срр
// Элемент-функции класса Salesperson.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include "sale.h"

SalesPerson::SalesPerson()
{
	for ( int i = 0; i < 12; i++ )
		sales[ i ] = 0.0;
}

// получить от пользователя (с клавиатуры) 12 сумм месячных продаж
void SalesPerson::getSalesFromUser()
{
	double salesFigure;

	for ( int i = 1; i <= 12; i++ )
	{
		cout << "Enter sales amount for month " << i << ": ";
		cin >> salesFigure;
		setSales( i, salesFigure );
	}
}

// установить одну из 12 месячных сумм; функция вычитает из
// значения месяца 1, чтобы получить правильный индекс массива
void SalesPerson::setSales( int month, double amount )
{
	// проверить действительность значений месяца и суммы продаж
	if( month >= 1 && month <= 12 && amount > 0 )
		sales[ month - 1 ] = amount;
	else // недействительное значение месяца или суммы
		cout << "Invalid month or sales figure" << endl;
}

// напечатать родовую сумму (с помощью вспомогательной функции)
void SalesPerson::printAnnualSales()
{
	cout << setprecision( 2 ) << fixed
		  << "\nThe total annual sales are: $"
		  << totalAnnualSales() << endl; // вызов вспомогательной функции
}

// закрытая вспомогательная функция для суммирования продаж за год
double SalesPerson::totalAnnualSales()
{
	double total = 0.0; // инициализировать годовую сумму

	for ( int i = 0; i < 12; i++ ) // подытожить продажи за год
		total += sales[ i ]; // прибавить продажи месяца i к total

	return total;
} 




























