#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

double circleArea ( double );

int main()
{
	int radius;
	cout << fixed << setprecision( 2 ) << "Enter radius: ";
	cin >> radius;
	cout << "Area of circle is: " << circleArea( radius ) << endl;
	return 0;
}

double circleArea ( double number )
{
	double p = 3.141592;
	return p * number * number;
}
	
