#include<iomanip>
using std::fixed;
using std::setprecision;

#include"ac.h"

int main()
{
	cout << fixed << setprecision( 2 );	

	Account account1( 5000 );
	Account account2( -350 );
	
	cout << account1.getBalance() << endl;
	cout << account2.getBalance() << endl;

	account1.credit( 1800.50 );
	cout << account1.getBalance() << endl;
	account1.debit( 10000 );
	cout << account1.getBalance() << endl;

	account2.credit( 7555.5 );
	cout << account2.getBalance() << endl;
	account2.debit( 5123.28 );
	cout << account2.getBalance() << endl;

	return 0;
}

