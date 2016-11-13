#ifndef CIRCLE_H
#define CIRCLE_H

#include"TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape
{
public:
	Circle(const double);

	virtual void draw(const int, const int,
		const int, const char, const char);

	void setRadius(const double);
	double getRadius() const;

	virtual double getArea() const;
	virtual void print() const;
private:
	double radius;
};

#endif
