#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::boolalpha;

#include <string>
using std::string;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::left;

#include <cmath>
using std::sqrt;
using std::pow;

double celsius ( double );

double fahrenheit ( double );

int main()
{
	cout << fixed << setprecision( 2 ) << endl;
	cout << setw( 4 ) << "celsius" << setw( 20 ) << "fahrenheit" << setw( 11 ) << "celsius" << setw( 20 ) << "fahrenheit" << endl;
	for ( int count = 0; count <= 50; count++ )
	{
		if ( count < 10 )
		{
			cout << setw( 4 ) << static_cast< double >( count ) << setw( 22 ) << fahrenheit( static_cast< double >( count ) );

			cout << setw( 10 ) << static_cast< double >( count + 50 ) << setw( 22 ) << fahrenheit( static_cast< double >( count + 50 ) );
			
			cout << endl;
		}
		else
		{
			cout << setw( 4 ) << static_cast< double >( count ) << setw( 21 ) << fahrenheit( static_cast< double >( count ) );

			cout << setw( 10 ) << static_cast< double >( count + 50 ) << setw( 22 ) << fahrenheit( static_cast< double >( count + 50 ) );
			
			cout << endl;		
		}
	}
	cout << endl;

	cout << endl;
	cout << setw( 4 ) << "fahrenheit" << setw( 15 ) << "celsius" << setw( 16 ) << "fahrenheit" << setw( 15 ) << "celsius" << endl;
	for ( int count = 32; count <= 122; count++ )
	{
		cout << setw( 4 ) << static_cast< double >( count ) << setw( 22 ) << celsius( static_cast< double >( count ) );

		cout << setw( 10 ) << static_cast< double >( count + 90 ) << setw( 22 ) << celsius( static_cast< double >( count + 90 ) );
			
		cout << endl;
	}

	return 0;
}

double celsius ( double gradus )
{
	return ( gradus - 32 ) * 5 / 9;
}

double fahrenheit ( double gradus )
{
	return gradus * 9 / 5 + 32;
}
































