#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number;
	double balance;
	double credit;
	double debit;
	double maxCredit;
	double newBalance;

	cout << "\nВведите номер счета (-1, если ввод закончен): ";
	cin >> number;	

	while ( number != -1 )
	{
		cout << "Введите начальный баланс: ";
		cin >> balance;
		cout << "Введите сумму расходов: ";
		cin >> credit;
		cout << "Введите сумму прихода: ";
		cin >> debit;
		cout << "Введите предел кредита: ";
		cin >> maxCredit;
		
		newBalance = ( balance + credit - debit );
		cout << "Новый баланс: " << setprecision(2) << fixed << newBalance << endl;
		
		if ( newBalance <= maxCredit )
		{
			cout << "\nВведите номер счета (-1, если ввод закончен): ";
			cin >> number;
		}
		else
		{
			cout << "Счет: " << number << endl;
			cout << "Предел кредита: "<< setprecision(2) << fixed << maxCredit << endl;
			cout << "Баланс: " << setprecision(2) << fixed << newBalance << endl; 
			cout << "Баланс кредита превышен" << endl;
			cout << "\nВведите номер счета (-1, если ввод закончен): ";
			cin >> number;		
		}
	}

	return 0;
}
		
		
