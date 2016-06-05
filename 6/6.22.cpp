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

#include <cmath>
using std::sqrt;
using std::pow;

void square ( int, char );

void triangle ( int, char );

void romb ( int, char );

int main()
{
	int side;
	char fill;
	cin >> side >> fill;
	cout << endl;
	square ( side, fill );
	cout << endl;
	triangle ( side, fill );
	cout << endl;
	romb ( side, fill );
	return 0;
}

void square ( int side, char fillCharacter )
{
	for ( int count = 1; count <= side; count++ )
	{
		for ( int count = 1; count <= side; count++ )
			cout << fillCharacter << " ";
		cout << endl;
	}
}

void triangle ( int side, char fillCharacter )
{
	for ( int count = 1; count <= side; count++ )
	{
		for ( int count1 = 1; count1 <= count; count1++ )
			cout << fillCharacter << " ";
		cout << endl;
	}
}

void romb ( int side, char fillCharacter )
{
	int count10 = 1;
	for ( int count = 1; count <= side; count++ )
	{
		if ( count <= side / 2 + 1 )
		{
			for ( int count1 = 1; count1 <= ( ( side / 2 ) + 1 - count ); count1++ )
				cout << "  ";
			for ( int count2 = 1; count2 <= count10; count2++ )
				cout << fillCharacter << " ";
			cout << endl;
			count10 += 2;
		}
		else
		{
			count10 -= 2;
			for ( int count1 = 1; count1 <= ( count - ( side / 2 ) - 1 ); count1++ )
				cout << "  ";
			for ( int count2 = 3; count2 <= count10; count2++ )
				cout << fillCharacter << " ";
			cout << endl;
		}
	}
}






















