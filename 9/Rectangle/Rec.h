#ifndef REC_H
#define REC_H

class Rectangle
{
public:
	Rectangle( float = 1, float = 1 );
	void setRec( float, float );
	float perimetr();
	float area();
	void print();
private:
	float length;
	float width;
};

#endif
