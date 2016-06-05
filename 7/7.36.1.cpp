#include<iostream>
#include<cstdlib>
using namespace std;


{
	int size = 0;
	for( size; a[ size ] != '\0'; size++ )
	if( size == 0 )
		return 0;
	else
	{
		cout << a[ size - 1 ];
		int b[ size ];
		for ( int count
