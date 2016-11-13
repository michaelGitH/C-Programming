#ifndef TWODSHAPE_H
#define TWODSHAPE_H

#include"Shape.h"

class TwoDimensionalShape : public Shape
{
public:
	virtual void draw( const int, const int, const int, const char, const char);
	
	void setVertical(const int);
	int getVertical() const;

	void setHorizontal(const int);
	int getHorizontal() const;

	void setSize(const int);
	int getSize() const;

	void setFrame(const char);
	char getFrame() const;

	void setFilling(const char);
	char getFilling() const;
private:
	double vertical;
	double horizontal;
	double size;
	char frame;
	char filling;
};

#endif