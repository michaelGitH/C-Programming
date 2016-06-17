#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet {
public:
	IntegerSet( int[] = { 0 } );
	IntegerSet unionOfSet(IntegerSet);
	IntegerSet intersectionOfSets(IntegerSet);
	void insertElement(int);
	void deleteElement(int);
	void printSet() const;
	bool isEqualTo(IntegerSet);
private:
	int array[100];
};

#endif
