//Тестирование класса Invoice
#include"Invoice.h"

int main()
{
	Invoice invoice1( "7d87e", "suit black", 10, 1000 );
	Invoice invoice2( "5d16c", "white shirt", 12, 300 );

	cout << invoice1.getTheNumber() << " " << invoice1.getDescription()
	  	  << "s" << " for " << invoice1.getPrice() << "$.\n"
		  << "Invoice amount of " << invoice1.getDescription()
		  << " is " << invoice1.getInvoiceAmount() << "$.\n" << endl;

	cout << invoice2.getTheNumber() << " " << invoice2.getDescription()
	  	  << "s" << " for " << invoice2.getPrice() << "$.\n"
		  << "Invoice amount of " << invoice2.getDescription()
		  << " is " << invoice2.getInvoiceAmount() << "$.\n" << endl;

	invoice1.setTheNumber( -20 );

	cout << invoice1.getInvoiceAmount() << endl;

	return 0;
}
