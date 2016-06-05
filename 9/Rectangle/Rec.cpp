#include<iostream>
using std::cout;
using std::endl;
#include"Rec.h"


Rectangle::Rectangle( float l, float w )
{
	setRec( l, w );	
}

void Rectangle::setRec( float l, float w )
{
	length = ( l > 0.0 && l < 20.0 ) ? l : 1.0;
	width = ( w > 0.0 && w < 20.0 ) ? w : 1.0;
}

float Rectangle::perimetr()
{
	return length * 2 + width * 2;
}

float Rectangle::area()
{
	return length * width;
}

void Rectangle::print()
{
	cout << "length = " << length << ", width = " << width <<
	"; perimetr = " << perimetr() << ", area = " << area() << endl;
}
