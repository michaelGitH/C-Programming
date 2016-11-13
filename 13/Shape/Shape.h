#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
	virtual double getArea() const = 0;
	virtual void print() const = 0;
};

#endif
