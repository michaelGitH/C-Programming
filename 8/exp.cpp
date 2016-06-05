#include<iostream>
using namespace std;

void x ( char choice[] )
{
	size_t size = sizeof choice / sizeof( char );
	for ( int count = 0; count < size; count++ )
		cout << *( choice + count );
	cout << endl;
}
int main()
{
	int a = 5;
	int *b = &a;
	cout << *b << endl;
	void (*f)( char y[] ) = x;
	char word[] = "Yes";
	(*f)( word );
	const int z = 8;
	const int *c = &z;
	return 0;
}
