//Парковка
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges ( double );

int main()
{
	double hour1, hour2, hour3;
	cout << "Enter hours of parking car 1: ";
	cin >> hour1;
	cout << "Enter hours of parking car 2: ";
	cin >> hour2;
	cout << "Enter hours of parking car 3: ";
	cin >> hour3;


	cout << "Car" << setw( 12 ) << "Hours" << setw( 12 )
		<< "Charges" << fixed << endl;
	cout << 1 << setw( 14 ) << setprecision( 1 )
	  << hour1 << setw( 12 ) << setprecision( 2 )
     << calculateCharges( hour1 ) << endl;
	cout << 2 << setw( 14 ) << setprecision( 1 )
	  << hour2 << setw( 12 ) << setprecision( 2 )
     << calculateCharges( hour2 ) << endl;
	cout << 3 << setw( 14 ) << setprecision( 1 )
	  << hour3 << setw( 12 ) << setprecision( 2 )
     << calculateCharges( hour3 ) << endl;
	cout << "Total" << setw( 10 ) << setprecision( 1 )
	  << hour1 + hour2 + hour3 << setprecision( 2 )
	  << setw( 12 ) << calculateCharges( hour1 ) +
	  calculateCharges( hour2 ) + calculateCharges( hour3 )	
	  << endl;	
	return 0;
}

double calculateCharges ( double hour )
{
	double pay = 2.00;
	if ( hour > 3.00 )
	{
		for ( double count = 3.00; count < hour; count++ )
			pay += 0.5;
		if ( pay > 10.00 )
			pay = 10.00;
	}
	return pay;
}
