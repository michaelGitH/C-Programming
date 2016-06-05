#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	cout << time( 0 ) << endl;
	int h = ( ( time( 0 ) / 3600 ) % 24 ) + 3;
	int m = ( time( 0 ) / 60 ) % 60 ;
	int s = time( 0 ) % 60;
	cout << h << ':' << m << ':' << s << endl;
	return 0;
}
