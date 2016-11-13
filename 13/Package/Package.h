#ifndef PACKAGE_H
#define PACKAGE_H

#include<iostream>
using std::ostream;

#include<string>
using std::string;

class Package
{
	friend ostream &operator<<(ostream&, const Package&);
public:
	Package(string = "", string = "", string = "", string = "",
		string = 0, string = 0, double = 0, double = 0);
	void setString(string&);
	void setIndex(string&);
	void setWeight(double&);
	void setPrice(double&);

	double getWeight() const;

	string getName() const;
	string getRegion() const;
	string getCity() const;
	string getAddress() const;
	string getIndexSender() const;
	string getIndexRecipient() const;
	

	virtual double calculateCost() const;
private:
	string name;
	string address;
	string region;
	string city;
	string indexSender;
	string indexRecipient;
	double weight;
	double price;
};

#endif
