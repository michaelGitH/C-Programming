#ifndef CUBE_H
#define CUBE_H

#include"ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape
{
public:
	Cube(const double);

	void setLength(const double);
	double getLength() const;

	virtual double getArea() const;
	virtual double getVolume() const;
	virtual void print() const;
private:
	double length;
};

#endif
