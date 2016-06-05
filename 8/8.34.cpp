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

void printLatinWord( char* );

int main()
{
	char word[] = "The litle girl go to school";

	cout << word << endl;
		
	char *wPtr = strtok( word, " " );
	

	while ( wPtr != NULL )
	{
		//cout << *( wPtr + 1 ) << endl;
		printLatinWord( wPtr );
		wPtr = strtok( NULL, " " );
	}
		
	cout << endl;

	return 0;
}


void printLatinWord( char *x )
{
	char *y = x;
	int size = 0;
	while( *y != '\0' )
	{
		size++;
		y++;
	}
	char arr[ size + 3 ];
	strcpy( arr, x );
	char copy = arr[ 0 ];
	if ( islower( copy ) == false )
	{
		copy = tolower( copy );
		arr[ size - 1 ] = toupper( arr[ size - 1 ] );
	}
	arr[ 0 ] = arr[ size - 1 ];
	arr[ size - 1 ] = copy;
	arr[ size ] = 'a';
	arr[ size + 1 ] = 'y';
	arr[ size + 2 ] = '\0';
	cout << arr << ' ';
}	
	




















