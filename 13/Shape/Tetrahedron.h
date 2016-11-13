#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "ThreeDimensionalShape.h"

class Tetrahedron : public ThreeDimensionalShape
{
public:
	Tetrahedron(const double);

	void setSide(const double);
	double getSide() const;

	virtual double getArea() const;
	virtual void print() const;
	virtual double getVolume() const;
private:
	double side;
};

#endif
