#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int srar( char*, const char* );
int srptr( char*, const char* ); 

int main()
{
	char s1[] = "Monday";
	char s2[] = "Weekend    ";
	char s3[] = "Monday";


	cout << srar( s2, s1 ) << endl << srptr( s1, s2 ) << endl << srar( s1, s3 ) << endl;
	return 0;
}

int srar( char *x1, const char *x2 )
{
	for ( int i = 0; ( x2[ i ] != '\0' ) && ( x1[ i ] != '\0' ); i++ )
	{
		if( static_cast<int>( x1[ i ] ) > static_cast<int>( x2[ i ] ) )
			return -1;
		else if ( static_cast<int>( x1[ i ] ) < static_cast<int>( x2[ i ] ) )
			return 1;
	}	
	return 0;	
}

int srptr( char *x1, const char *x2 )	
{
	for ( ; ( *x1 != '\0' ) && ( *x2 != '\0' ); ++x1, ++x2 )
	{
		if( static_cast<int>( *x1 ) > static_cast<int>( *x2 ) )
			return -1;
		else if ( static_cast<int>( *x1 ) < static_cast<int>( *x2 ) )
			return 1;	
	}
	return 0;
}
