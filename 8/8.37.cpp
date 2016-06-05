#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 100;
	const char *city[ size ] = { "Kstovo", "Derzhinsk", "Vad", "Knyzginino", "Arzamas", "Perevoz", "Murashkino" };

    int iter = size / 2;

    for ( int j = 0; j < iter; j++ ) 	
    	for ( int i = 1; i < size; i++ )
    	{
    		const char *cPtr = city[ i - 1 ];
    		if ( city[ i ] != NULL )
        		if( strcmp( city[ i - 1 ], city[ i ] ) > 0 )
        		{
        			city[ i - 1 ] = city[ i ];
        			city[ i ] = cPtr;
        		}
    	}

	for ( int i = 0; i < size; i++ )
	{
		cout << city[ i ] << endl;
	}
	
	cout << city[ 0 ] << endl;
	
	return 0;
	
}
