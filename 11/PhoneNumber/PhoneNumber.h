#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
using std::ostream;
using std::istream;

#include <string>
using std::string;

class Number
{
	friend istream &operator>> (istream&, Number&);
public:
	ostream &operator<<(ostream&);
private:
	string areaCode;
	string exchange;
	string line;
};

#endif
