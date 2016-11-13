#ifndef ONPACKAGE_H
#define ONPACKAGE_H

#include"Package.h"

class ONPackage : public Package
{
	friend ostream &operator<<(ostream&, const ONPackage&);
public:
	ONPackage(string = "", string = "", string = "", string = "",
		string = 0, string = 0, double = 1, double = 1, double = 1);
	void setONPrice(double&);
	virtual double calculateCost() const;
public:
	double oNPrice;
};

#endif
