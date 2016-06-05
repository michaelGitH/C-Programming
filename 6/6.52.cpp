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
using std::ceil;
using std::cos;
using std::exp;
using std::fabs;
using std::floor;
using std::fmod;
using std::log;
using std::log10;
using std::cin;
using std::tan;


int main()
{
	long double x, y, z, a, b, c, d, e, f;
	cout << fixed << setprecision( 2 );
	x = 10.867;
	y = - 13.258;
	z = 16;
	a = 125;
	b = 750;
	e = 180;
	cout << "Корень из " << z << " равен " << sqrt( z ) << endl;
	cout << "В четвертой степени " << b << " равен " << pow( 750, 4 ) << endl;
	cout << "Округление " << x << " до " << ceil( x ) << endl;
	cout << "Округление " << y << " до " << fabs( y ) << endl;
	cout << "Косинус " << a << " равен " << cos( a ) << endl;
	cout << "exp " << a << " равен " << exp( a ) << endl;
	cout << "floor " << z << " равен " << floor( z ) << endl;
	cout << "fmod " << y << " равен " << fmod( static_cast< int >( y ), x ) << endl;
	cout << "log " << z << " равен " << log( z ) << endl;
	cout << "log10 " << z << " равен " << log10( a ) << endl;

	cout << "tan " << x << " равен " << tan( x ) << endl;
	return 0;
}
	
	



























	
