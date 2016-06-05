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

int tripleCallByValue ( int );
void tripleByReference ( int & );

int main()
{
	int count = 3;
	cout << count << endl;
	cout << tripleCallByValue( count ) << endl;
	cout << count << endl;
	tripleByReference( count );
	cout << count << endl;
	return 0;
}

int tripleCallByValue ( int number )
{
	number *= 3;
	return number;
}

void tripleByReference ( int &number )
{
	number *= 3;
}

