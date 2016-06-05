#include<iostream>
#include<cstdlib>
#include<cctype>
#include<cstring>
using namespace std;

//islower - 

int main()
{
	srand( time( 0 ) );
	const char *article[] = { "the", "a", "one", "some", "any" };
	const char *none[] = { "boy", "girl", "dog", "car", "town" };
	const char *verb[] = { "drove", "skipped", "jumped", "ran", "walked" };
	const char *preposition[] = { "to", "from", "over", "on" };
	char story[ 1000 ];
	int count = 0;
	
	for ( int i = 0; i < 20; i++ )
	{
		int A = count;
		int ss = rand() % 5;
		const char *pAr = article[ ss ];
		int size = strlen( article[ ss ] );
		for ( int j = 0; j < size; j++ )
		{
			story[ count ] = *( pAr + j );
			count++;
		}
		story[ count ] = ' ';
		count++;
		ss = rand() % 4;
		pAr = none[ ss ];
		size = strlen( none[ ss ] );
		for ( int j = 0; j < size; j++ )
		{
			story[ count ] = *( pAr + j );
			count++;
		}
		story[ count ] = ' ';
		count++;
		if ( ss < 3 )
			ss = 1 + rand() % 4;
		else
			ss = rand() % 2;
		pAr = verb[ ss ];
		size = strlen( verb[ ss ] );
		for ( int j = 0; j < size; j++ )
		{
			story[ count ] = *( pAr + j );
			count++;
		}
		story[ count ] = ' ';
		count++;
		ss = rand() % 5;
		pAr = preposition[ ss ];
		size = strlen( preposition[ ss ] );
		for ( int j = 0; j < size; j++ )
		{
			story[ count ] = *( pAr + j );
			count++;
		}
		story[ count ] = ' ';
		count++;
		ss = rand() % 5;
		pAr = article[ ss ];
		size = strlen( article[ ss ] );
		for ( int j = 0; j < size; j++ )
		{
			story[ count ] = *( pAr + j );
			count++;
		}
		story[ count ] = ' ';
		count++;
		ss = rand() % 5;
		pAr = none[ ss ];
		size = strlen( none[ ss ] );
		for ( int j = 0; j < size; j++ )
		{
			story[ count ] = *( pAr + j );
			count++;
		}
		story[ A ] = toupper( story[ A ] );
		story[ count ] = '.';
		story[ ++count ] = '\n';
		count++;
	}	
	story[ ++count ] = '\0';
	
	for ( int i = 0; i < count; i++ )
	{
		cout << story[ i ];
	}

	
	return 0;
}

	
	
		
	
