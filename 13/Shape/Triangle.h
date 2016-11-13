#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape
{
public:
	Triangle(const double, const double, const double);

	void setSide(const double, const double, const double);

	virtual void draw(const int, const int,
		const int, const char, const char);

	virtual double getArea() const;
	virtual void print() const;
private:
	double side1;
	double side2;
	double side3;
};

#endif
