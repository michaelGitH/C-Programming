#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H

#include"Shape.h"

class ThreeDimensionalShape : public Shape
{
public:
	virtual double getVolume() const = 0;
};

#endif