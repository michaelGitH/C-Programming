#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include"Package.h"

class TDPackage : public Package
{
	friend ostream &operator<<(ostream&, const TDPackage&);
public:
	TDPackage( string = "", string = "", string = "", string = "",
		string = 0, string = 0, double = 0, double = 0, double = 0 );
	void setTDPrice(double&);
	virtual double calculateCost() const;
public:
	double tDPrice;
};

#endif
