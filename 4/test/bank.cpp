#include"bank.h"


Bank::Bank( int acc )
{
	double bb, cr, db, ava;
	cout << "Введите сумму начального баланса" << endl;
	cin >> bb;
	cout << "Введите сумму прихода за месяц" << endl;
	cin >> cr;
	cout << "Введите сумму расходов за месяц" << endl;
	cin >> db;
	cout << "Введите сумму доступного кредита" << endl;
	cin >> ava;
	setBank( acc, bb, cr, db, ava );
}

void Bank::setBank( int acc, double bb, double cr, double db, double ava )
{
	account = acc;
	if ( bb >= 0 )
		bBalance = bb;
	else
		cout << "Баланс не может быть отрицательным" << endl;
	credit = cr;
	debit = db;
	available = ava;
	bBalance = bBalance + credit - debit;
	if ( bBalance <= available )
		cout << "Новый баланс: " << bBalance << endl;
	else
	{
		cout << "Счет: " << account << endl;
		cout << "Предел кредита: " << available << endl;
		cout << "Баланс: " << bBalance << "\nПредел кредита превышен!" << endl;
	}
}



