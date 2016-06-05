// Account.cpp Тараканов М.А. 24.09.2015 17:39
// Код клиента Account, создающий в объекта класса
// и тестирующий их. 
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Account.h"


int main()
{
	Account account1( 0 );
	Account account2( 3000 );

	account1.credit();
	account2.debit();

	cout << "\nBalance of account1 is: " << account1.getBalance() << endl;
	cout << "\nBalance of account2 is: " << account2.getBalance() << endl;

	return 0;
}
