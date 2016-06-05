#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cstring>
using std::strcmp;

void str( char[], char[] );

int main()
{
	char x[] = "abc";
	char y[] = "abcd";
	str( x, y );
	cout << strcmp( x, y ) << endl;
	
	return 0;
}
	


void str( char a[], char b[] )
{
	if ( strcmp( a, b ) > 0 )
		cout << "Первая строка больше" << endl;
	else if ( strcmp( a, b ) < 0 ) 
		cout << "Вторая строка больше" << endl;
	else if ( strcmp( a, b ) == 0 )
		cout << "Строки равны" << endl;
}
