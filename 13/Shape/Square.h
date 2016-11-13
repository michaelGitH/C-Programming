#ifndef SQUARE_H
#define SQUARE_H

#include"TwoDimensionalShape.h"

class Square : public TwoDimensionalShape
{
public:
	Square(const double);

	virtual void draw(const int, const int,
		const int, const char, const char);

	void setLength(const double);
	double getLength() const;
	virtual double getArea() const;
	virtual void print() const;
private:
	double length;
};

#endif
