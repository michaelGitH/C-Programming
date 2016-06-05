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

int gcd ( int, int );
//int inside ( int, int, int, int );

int main ()
{
	int x, y;
	cin >> x >> y;
	cout << gcd ( x, y ) << endl;
	return 0;
}

int gcd ( int x, int y )
{

	int nodx;
	int nody; 
	int countx = x - 1;
	int county = y - 1;
	if ( x % y == 0 )
		return y;
	else if ( y % x == 0 )
		return x;

	else
	{
		if ( countx > county )
		{
			for ( countx; countx > 1; countx-- )
			{
				if ( x % countx == 0 )
				{
					for ( county; county >= 1; county-- )
					{
						if ( y % county == 0 )
						{
							if ( countx == county )
								break;
						}
					}
					if ( countx == county )
						break;
					else
						county = y - 1;
				}
			}
			return countx;
		}
		if ( county > countx )
		{
			for ( county; county > 1; county-- )
			{
				if ( y % county == 0 )
				{
					for ( countx; countx >= 1; countx-- )
					{
						if ( x % countx == 0 )
						{
							if ( county == countx )
								break;
						}
					}
					if ( county == countx )
						break;
					else
						countx = x - 1;
				}
			}
			return county;
		}
	}
}
				
					







//int inside ( int a, int b, int c, int d )
//{
//	int x = a, cx = b, y = c, cy = d;
//	int nx, ny;
//	for ( cx; x % cx == 0; cx-- )
//		nx = cx;
//	for ( cy; y % cy == 0; cy-- )
//		ny = cy;
// 	if ( nx == ny )
//		return nx;
//	else 
//	{
//		 return inside ( x, cx, y, cy );
//	}
//}



























