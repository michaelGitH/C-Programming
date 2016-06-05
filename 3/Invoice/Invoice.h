//Определение класса Invoice
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

#include<string>
using std::string;

class Invoice
{
public:
	Invoice( string, string, int, int );
	void setArticle( string );
	string getArticle();

	void setDescription( string );
	string getDescription();

	void setTheNumber( int );
	int getTheNumber();

	void setPrice( int );
	int getPrice();

	int getInvoiceAmount();

private:
	string article;
	string description;
	int theNumber;
	int price;
};

