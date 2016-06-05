#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
using std::setw; //позволяет программе устанавливать ширину поля

int main()
{
	double p = 4;
	int count = 1;
	
	for ( double x = 3; x <= 111111111; x += 2 )
	{
		if ( count % 2 )
			p = p - 4 / x;
		else
			p = p + 4 / x;
		count++;
	}

	cout << fixed << setprecision( 1 ) << p << endl
	     << setprecision( 2 ) << p << endl
	     << setprecision( 3 ) << p << endl
	     << setprecision( 4 ) << p << endl
	     << setprecision( 5 ) << p << endl
	     << setprecision( 6 ) << p << endl;
	return 0;
}

