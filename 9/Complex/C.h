#ifndef C_H
#define C_H

class Complex
{
public:
	Complex( double = 0, double = 0 );
	void plus( double, double, double, double );
	void minus( double, double, double, double );
	double getR();
	double getI();
	void print();
private:
	double real;
	double image;
	double complex[ 2 ];
};

#endif
