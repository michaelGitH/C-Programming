#include<iostream>
using std::cerr;
using std::cout;
#include<iomanip>
using std::setw;
#include<cstdlib>
using std::exit;
#include "dsa.h"

DSA::DSA(int r, int c)
	: rowSize( r >= 1 ? r : 1 ),
	columnSize( c >= 1 ? c : 1 )
{
	ptr = new int[ size ];
	for (int i = 0; i < size; i++)
		ptr[i] = 0;
}

DSA::DSA(const DSA &copy)
	: rowSize( copy.rowSize ),
	columnSize( copy.columnSize )
{
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		ptr[i] = copy.ptr[i];
	}
}

DSA::~DSA() {
	delete[] ptr;
}

const DSA &DSA::operator=(const DSA &right) {
	if (this != &right) {
		if (rowSize != right.rowSize || columnSize != right.columnSize) {
			delete[] ptr;
			rowSize = right.rowSize;
			columnSize = right.columnSize;
			size = right.size;
			ptr = new int[size];
		}
		for (int i = 0; i < size; i++)
			ptr[i] = right.ptr[i];		
	}
	return *this;
}

int &DSA::operator()(int row, int column) {
	if (row < 1 || row > rowSize || column < 1 || column > columnSize) {
		cerr << "Error subscript " << row << " or " << column << "\n";
		exit(1);
	}
	else
		return ptr[((row - 1) * columnSize + column) - 1];
}

const int DSA::operator()(int row, int column) const {
	if (row < 1 || row > rowSize || column < 1 || column > columnSize) {
		cerr << "Error subscript " << row << " or " << column << "\n";
		exit(1);
	}
	else
		return ptr[((row - 1) * columnSize + column) - 1];
}

const bool DSA::operator==(const DSA &right) {
	if (size != right.size)
		return false;
	for (int i = 0; i < size; i++)
		if (ptr[i] != right.ptr[i])
			return false;
	return true;
}

const int *DSA::sort() {
	int *array = new int[ size ];
	for (int i = 0; i < size; i++)
		array[i] = ptr[i];

	int n = 0;
	for (int i = 0; i < size; i++) {
		int min = 9999999;
		int count = 0;
		int copy;
		for (int j = 1; j < size - n; j++) {
			if (array[j] > array[j - 1]) {
				copy = array[j];
				array[j] = array[j - 1];
				array[j - 1] = copy;
				count++;
			}
			if (array[j] < min)
				min = array[j];
		}
		n++;
		if (count == 0)
			i = size;
	}
	return array;
}

const int DSA::operator[]( int index ) {
	if (index > size) {
		cerr << "Error. Index is incorrect!\n";
		exit(1);
	}
	const int *sortAr = sort();
	return sortAr[index - 1];
}

ostream &operator<<(ostream &output, const DSA &right) {
	for (int i = 0; i < right.size; i++) {
		output << setw(5) << right.ptr[i];
		if ((i + 1) % right.columnSize == 0)
			output << '\n';
	}
	return output;
}

istream &operator>>(istream &input, DSA &right) {
	cout << "Input dsa elements or -999999 to finish:\n";
	int element;
	for (int i = 0; i < right.size; i++) {
		input >> element;
		if (element == -999999)
			return input;
		else
			right.ptr[i] = element;
	}
	return input;
}