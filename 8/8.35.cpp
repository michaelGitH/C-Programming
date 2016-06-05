#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cctype>
using std::islower;
using std::toupper;
using std::tolower;
#include<cstring>
using std::strtok;
using std::strcpy;
using std::strcat;

int main()
{
	char number[] = "(000) 000-0000";
	cout << "Введите телефонный номер: ";
	for ( int i = 1; number[ i ] != '\0'; i++ )
	{
		if ( i != 4 && i != 5 && i != 9 )
			cin >> number[ i ];
	}

	cout << "Телефонный номер: " << number << endl;

	char *cPtr = strtok( number, "()" );
	char *tPtr = strtok( NULL, " -" );
	char *fPtr = strtok( NULL, " " );
	char newN[ 8 ] = "";
	strcat( newN, tPtr );
	strcat( newN, fPtr );

	int code[ 3 ];
	long numb[ 7 ];

	for ( int i = 0; i < 3; i++ )
	{
		code[ i ] = static_cast< int >( cPtr[ i ] ) - 48;
		cout << code[ i ];
	}

	for ( int i = 0; i < 7; i++ )
	{
		numb[ i ] = static_cast< long >( newN[ i ] ) - 48;
		cout << numb[ i ];
	}

	cout << endl;


	return 0;
}
