#include<iostream>
using std::cout;
using std::endl;
#include"Rec.h"


Rectangle::Rectangle( float x1[], float x2[], float x3[], float x4[] )
{
	p1[ 0 ] = 0; p1[ 1 ] = 0;
	p2[ 0 ] = 0; p2[ 1 ] = 1;
	p3[ 0 ] = 1; p3[ 1 ] = 1;
	p4[ 0 ] = 1; p4[ 1 ] = 0;
	setRec( x1, x2, x3, x4 );	
}

void Rectangle::setRec( float x1[], float x2[], float x3[], float x4[] )
{
	bool predict = false;

	if( setSide( x1[ 0 ], x2[ 0 ], x3[ 0 ], x4[ 0 ] ) != 0 )
	{
		if( setSide( x1[ 1 ], x2[ 1 ], x3[ 1 ], x4[ 1 ] ) != 0 )
		{
			if( setSide( x1[ 0 ], x2[ 0 ], x3[ 0 ], x4[ 0 ] ) == 1 )
			{
				if ( x1[ 0 ] >= 0 && x3[ 0 ] >= 0 && x1[ 0 ] < x3[ 0 ]
					&& ( x3[ 0 ] - x1[ 0 ] <= 20.0 ) )
				{
					p1[ 0 ] = x1[ 0 ]; p1[ 1 ] = x1[ 1 ];				
					p2[ 0 ] = x2[ 0 ]; p2[ 1 ] = x2[ 1 ];				
					p3[ 0 ] = x3[ 0 ]; p3[ 1 ] = x3[ 1 ];				
					p4[ 0 ] = x4[ 0 ]; p4[ 1 ] = x4[ 1 ];
					length = x3[ 0 ] - x1[ 0 ];
					predict = true;	
				}	
				else if ( x1[ 0 ] >= 0 && x3[ 0 ] >= 0 && x1[ 0 ] > x3[ 0 ]
					&& ( x1[ 0 ] - x3[ 0 ] <= 20.0 ) )
				{
					p1[ 0 ] = x3[ 0 ]; p1[ 1 ] = x3[ 1 ];				
					p2[ 0 ] = x4[ 0 ]; p2[ 1 ] = x4[ 1 ];				
					p3[ 0 ] = x1[ 0 ]; p3[ 1 ] = x1[ 1 ];				
					p4[ 0 ] = x2[ 0 ]; p4[ 1 ] = x2[ 1 ];
					length = x1[ 0 ] - x3[ 0 ];
					predict = true;	
				}		
			}
			if( setSide( x1[ 0 ], x2[ 0 ], x3[ 0 ], x4[ 0 ] ) == 2 )
			{
				if ( x1[ 0 ] >= 0 && x2[ 0 ] >= 0 && x1[ 0 ] < x2[ 0 ]
					&& ( x2[ 0 ] - x1[ 0 ] <= 20.0 ) )
				{
					p1[ 0 ] = x1[ 0 ]; p1[ 1 ] = x1[ 1 ];				
					p2[ 0 ] = x3[ 0 ]; p2[ 1 ] = x3[ 1 ];				
					p3[ 0 ] = x2[ 0 ]; p3[ 1 ] = x2[ 1 ];				
					p4[ 0 ] = x4[ 0 ]; p4[ 1 ] = x4[ 1 ];
					length = x2[ 0 ] - x1[ 0 ];
					predict = true;	
				}	
				else if ( x1[ 0 ] >= 0 && x2[ 0 ] >= 0 && x1[ 0 ] > x2[ 0 ]
					&& ( x1[ 0 ] - x2[ 0 ] <= 20.0 ) )
				{
					p1[ 0 ] = x2[ 0 ]; p1[ 1 ] = x2[ 1 ];				
					p2[ 0 ] = x4[ 0 ]; p2[ 1 ] = x4[ 1 ];				
					p3[ 0 ] = x1[ 0 ]; p3[ 1 ] = x1[ 1 ];				
					p4[ 0 ] = x3[ 0 ]; p4[ 1 ] = x3[ 1 ];
					length = x1[ 0 ] - x2[ 0 ];	
					predict = true;
				}						
			}
			if( setSide( x1[ 0 ], x2[ 0 ], x3[ 0 ], x4[ 0 ] ) == 3 )
			{
				if ( x1[ 0 ] >= 0 && x2[ 0 ] >= 0 && x1[ 0 ] < x2[ 0 ]
					&& ( x2[ 0 ] - x1[ 0 ] <= 20.0 ) )
				{
					p1[ 0 ] = x1[ 0 ]; p1[ 1 ] = x1[ 1 ];				
					p2[ 0 ] = x4[ 0 ]; p2[ 1 ] = x4[ 1 ];				
					p3[ 0 ] = x2[ 0 ]; p3[ 1 ] = x2[ 1 ];				
					p4[ 0 ] = x3[ 0 ]; p4[ 1 ] = x3[ 1 ];
					length = x2[ 0 ] - x1[ 0 ];	
					predict = true;
				}	
				else if ( x1[ 0 ] >= 0 && x2[ 0 ] >= 0 && x1[ 0 ] > x2[ 0 ]
					&& ( x1[ 0 ] - x2[ 0 ] <= 20.0 ) )
				{
					p1[ 0 ] = x2[ 0 ]; p1[ 1 ] = x2[ 1 ];				
					p2[ 0 ] = x3[ 0 ]; p2[ 1 ] = x3[ 1 ];				
					p3[ 0 ] = x1[ 0 ]; p3[ 1 ] = x1[ 1 ];				
					p4[ 0 ] = x4[ 0 ]; p4[ 1 ] = x4[ 1 ];
					length = x1[ 0 ] - x2[ 0 ];
					predict = true;	
				}						
			}
		}
	}

	if ( predict == true && x1[ 1 ] >= 0 && x2[ 1 ] >= 0 && x3[ 1 ] >= 0 && x4[ 1 ] >= 0 )
	{
		int l1, l2;
		if ( setSide( x1[ 1 ], x2[ 1 ], x3[ 1 ], x4[ 1 ] ) == 1 )
		{
			if ( x1[ 1 ] > x3[ 1 ] )
				width = x1[ 1 ] - x3[ 1 ];
			else
				width = x3[ 1 ] - x1[ 1 ];
		}
		else if ( setSide( x1[ 1 ], x2[ 1 ], x3[ 1 ], x4[ 1 ] ) == 2 )
		{
			if ( x1[ 1 ] > x2[ 1 ] )
				width = x1[ 1 ] - x2[ 1 ];
			else
				width = x2[ 1 ] - x1[ 1 ];
		}
		else if ( setSide( x1[ 1 ], x2[ 1 ], x3[ 1 ], x4[ 1 ] ) == 3 )
		{
			if ( x1[ 1 ] > x2[ 1 ] )
				width = x1[ 1 ] - x2[ 1 ];
			else
				width = x2[ 1 ] - x1[ 1 ];
		}
		
		float buffer = length;
		if ( width > length )
		{
			length = width;
			width = buffer;
		}
	}
	else
	{
		cout << "Ошибка! Параметры прямоугольника заданы неверно!\n"
			  << "Установка параметров по умолчанию!" << endl;
		p1[ 0 ] = 0; p1[ 1 ] = 0;
		p2[ 0 ] = 0; p2[ 1 ] = 1;
		p3[ 0 ] = 1; p3[ 1 ] = 1;
		p4[ 0 ] = 1; p4[ 1 ] = 0;
		length = 1;
		width = 1;
	}
}	

int Rectangle::setSide( float x1, float x2, float x3, float x4 )
{
	if ( x1 == x2 && x3 == x4 )
		return 1;
	else if ( x1 == x3 && x2 == x4 )
		return 2;
	else if ( x1 == x4 && x2 == x3 )
		return 3;
	else
		return 0;
}

float Rectangle::getLength()
{
	return length;
}

float Rectangle::getWidth()
{
	return width;
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
	cout << "p1 = ( " << p1[ 0 ] << ", " << p1[ 1 ] <<
		  " ); p2 = ( " << p2[ 0 ] << ", " << p2[ 1 ] <<
		  " ); p3 = ( " << p3[ 0 ] << ", " << p3[ 1 ] <<
		  " ); p4 = ( " << p4[ 0 ] << ", " << p4[ 1 ] <<
		  " )" << endl << "length = " << getLength() <<
		  ", width = " << getWidth() << ";\nPerimetr = " <<
		  perimetr() << ", area = " << area() << ".\n";
}


/*void Rectangle::setRec( float x1[], float x2[], float x3[], float x4[] )
{
	bool n = false;
	
	if ( setSide( x1, x2, x3, x4 ) == true )
	{
		width = length;
		if ( setSide( x1, x4, x2, x3 ) == true )
			n = true;
	}
	else if ( setSide( x1, x3, x2, x4 ) == true )
	{
		width = length;
		if ( setSide( x1, x4, x3, x2 ) == true )
			n = true;
	}
	else if ( setSide( x1, x4, x2, x3 ) == true )
	{
		width = length;
		if ( setSide( x1, x3, x4, x2 ) == true )
			n = true;
	}

	if ( n == true )
	{
		float buffer = length;
		if ( width > length )
		{
			length = width;
			width = buffer;
		}
	}
	else
	{
		cout << "Ошибка! Параметры прямоугольника заданы неверно!\n"
			  << "Установка параметров по умолчанию!" << endl;
		p1[ 0 ] = 0; p1[ 1 ] = 0;
		p2[ 0 ] = 0; p2[ 1 ] = 1;
		p3[ 0 ] = 1; p3[ 1 ] = 1;
		p4[ 0 ] = 1; p4[ 1 ] = 0;
		length = 1;
		width = 1;
	}
}*/

/*bool Rectangle::setSide( float x1[], float x2[], float x3[], float x4[] )
{
	bool n = false;
	
	if ( x1 == x2 ) // Проверка координат
	{
		if ( x3 == x4 ) 
		{
			// условная длина
			if ( x1[ 0 ] > 0 && x3[ 0 ] > 0 && x1[ 0 ] > x3[ 0 ] && // проверка квадранта
			( ( x1[ 0 ] - x3[ 0 ] ) <= 20.0 ) ) // и длины1
			{
				length = x1[ 0 ] - x3[ 0 ];
				{
					p1[ 0 ] = p2[ 0 ] = x3[ 0 ];
					p1[ 1 ] = p3[ 1 ];
					p2[ 1 ] = p4[ 1 ];
				}
				else
				{
					p1[ xory ] = p4[ xory ] = x3;
					p2[ xory ] = p3[ xory ] = x1;
				}

				n = true;
			}
			else if ( x1 > 0 && x3 > 0 && x3 > x1 && // проверка квадранта
			( ( x3 - x1 ) <= 20.0 ) ) // и длины1
			{
				length = x3 - x1;
				if ( xory == 0 )
				{
					p1[ xory ] = p2[ xory ] = x1;
					p3[ xory ] = p4[ xory ] = x3;
				}
				else
				{
					p1[ xory ] = p4[ xory ] = x1;
					p2[ xory ] = p3[ xory ] = x3;
				}
				n = true;
			}
		}
	}	
	return n;
}*/










