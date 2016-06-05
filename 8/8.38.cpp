#include<iostream>
using std::cout;
using std::cin;
using std::endl;

char copyar( char*, const char* );
char copyptr( char*, const char* ); 

int main()
{
	char s1[] = "Monday";
	char s2[] = "Weekend    ";
	char s3[ 20 ];

	copyar( s3, s1 );
	copyptr( s1, s2 );

	cout << s1 << endl << s2 << endl << s3 << endl;
	return 0;
}

char copyar( char *x1, const char *x2 )
{
	int i;
	for ( i = 0; ( x2[ i ] != '\0' ) || ( x1[ i ] != '\0' ); i++ )
		x1[ i ] = x2[ i ];
	x1[ i ] = '\0';
}

char copyptr( char *x1, const char *x2 )	
{
	for ( ; ( ( *x1 != '\0' ) && ( *x1 = *x2 ) != '\0' ); ++x1, ++x2 );
	*x1 = '\0';
}
	
	
