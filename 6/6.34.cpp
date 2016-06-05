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

string monet ();

int main ()
{
	srand ( time ( 0 ) );
	for ( int count = 1; count <= 100; count++ )
	{
		cout << monet();
		cout << endl;
	}
	return 0;
}

string monet ()
{
	int x = rand() % 2;
	string eagle = "Eagle";
	string tails = "Tails";
	if ( x == 0 )
		return eagle;
	else if ( x == 1 )
		return tails;
}























