#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int const arraySize = 11;
	static int n[ arraySize ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

	cout << "Grade distribution: " << endl;	
	// для каждого элемента массива п вывести столбик диаграммы

	for ( int i; i < arraySize; i++ )
	{
		// вывести метку столбика (0-9:", ..., "90-99:", 100:" )
		if ( i == 0 )
			cout << "  0-9: ";
		else if ( i == 10 )
			cout << "  100: ";
		else
			cout << i * 10 << "-" << i * 10 + 9 << ": ";
		// напечатать столбик звездочек
		for ( int stars = 0; stars < n[ i ]; stars++ )
			cout << '*';
		cout << endl;
	}
		
	return 0;
}
