#ifndef REC_H
#define REC_H

class Rectangle
{
public:
	Rectangle( float[], float[], float[], float[] );
	void setRec( float[], float[], float[], float[] );
	float perimetr();
	float area();
	float getLength();
	float getWidth();
	void print();
private:
	int setSide( float, float, float, float );
	float p1[ 2 ];
	float p2[ 2 ];
	float p3[ 2 ];
	float p4[ 2 ];
	float length;
	float width;
};

#endif
