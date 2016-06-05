#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

inline double sphereVolume ( double radius)
{
	return ( 4.0 / 3.0 ) * 3.14159 * pow ( const radius, 3 );
}

int main()
{
	double radius;
	cout << fixed << setprecision( 2 )
		<< "Enter radius: ";
	cin >> radius;

	cout << "Volume of sphere is " << sphereVolume( radius )
		<< endl;
	return 0;
}


	
