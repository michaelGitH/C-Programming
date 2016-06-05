//Исходный код класса Invoice
#include"Invoice.h"

Invoice::Invoice ( string a, string d, int n, int p )
{
	setArticle( a );
	setDescription( d );
	setTheNumber( n );
	setPrice( p );
}

void Invoice::setArticle( string a )
{
	article = a;
}

string Invoice::getArticle()
{
	return article;
}

void Invoice::setDescription( string d )
{
	description = d;
}

string Invoice::getDescription()
{
	return description;
}

void Invoice::setTheNumber( int n )
{
	theNumber = n;
}

int Invoice::getTheNumber()
{
	return theNumber;
}

void Invoice::setPrice( int p )
{
	price = p;
}

int Invoice::getPrice()
{
	return price;
}

int Invoice::getInvoiceAmount()
{
	int sum;
	if( theNumber < 0 )
		theNumber = 0;
	sum = theNumber * price;
	return sum;
}
	
















