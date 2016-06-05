#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cstring>
using std::strcmp;

int main()
{
	char x[] = "qwertyui";
	char y[] = "abcdefgh";

	if ( strncmp( x, y, 5 ) > 0 )
		cout << "Первая строка больше" << endl;
	else if ( strncmp( x, y, 5 ) < 0 ) 
		cout << "Вторая строка больше" << endl;
	else
		cout << "Строки равны" << endl;
	
	return 0;
}
