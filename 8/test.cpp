#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char t[ 20 ];
	t[ 19 ] = '\0';
	cin.getline( t, 20 );
	for ( int i = 0; t[ i ] != '\0'; i++ )
		cout << t[ i ];
	cout << endl;
	return 0;
}
