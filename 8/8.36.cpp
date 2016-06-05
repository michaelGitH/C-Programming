#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char strok[ 1000 ] = "";
	cout << "Введите предложение: " << endl;
	cin.getline( strok, 100 );
	char *arr[ 100 ];
	int count = -1;
	arr[ 0 ] = strtok( strok, " ");
	for ( int i = 1; arr[ i - 1 ] != NULL; i++ )
	{
		arr[ i ] = strtok( NULL, " ");
		count++;
	}

	for ( int i = count; i >= 0; i-- )
	{
		cout << arr[ i ] << " ";	
	}
	
	cout << endl;
	
	return 0;
}
