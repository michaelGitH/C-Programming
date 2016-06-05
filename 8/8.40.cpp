#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int lenar( const char* );
int lenptr( const char* ); 

int main()
{
	char s1[] = "Monday";
	char s2[] = "Weekend    ";
	char s3[] = "Monday";


	cout << lenar( s1 ) << endl << lenar( s2 ) << endl << lenptr( s3 ) << endl;
	return 0;
}

int lenar( const char *x )
{
	int i;
	for ( i = 0; x[ i ] != '\0'; i++ );
	return i;	
}

int lenptr( const char *x )	
{
	int i;
	for ( i = 0; *x != '\0'; ++x, i++ );
	return i;
}
