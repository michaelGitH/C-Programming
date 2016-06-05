// Account.h Тараканов М.А. 24.09.2015 16:51
// Определение класса Account, которым мог бы воспользоваться 
//банк для представления банковских счетов своих клиентов. 
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Account
{
public:
	Account( int begin );
	void credit();
	void debit();
	int getBalance();
private:
	int balance;
};


