#ifndef SPHERE_H
#define SPHERE_H

#include"ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape
{
public:
	Sphere(const double);

	void setRadius(const double);
	double getRadius() const;

	virtual double getArea() const;
	virtual double getVolume() const;
	virtual void print() const;

private:
	double radius;
};

#endif
