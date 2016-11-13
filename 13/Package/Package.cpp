#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;


#include"Package.h"

Package::Package(string n, string a, string r, string c,
	string is, string ir, double w, double p)
	: name( n ), address( a ), region( r ), city( c ),
	indexSender( is ), indexRecipient( ir ), weight( w ), price( p ) 
{
	setString( name );
	setString(address);
	setString(region);
	setString(city);
	setIndex(indexSender);
	setIndex(indexRecipient);
	setWeight(weight);
	setPrice(price);
}

void Package::setString(string &s) {
	int i = 0;
	for ( i = 0; i < 3; i++) {
		if (s.empty()) {
			cout << "The string should be initiated!"
				<< "Enter correct string: ";
			cin >> s;
			setString(s);
		}
		else
			i = 4;
	}
	if (i == 3) {
		cout << "Wrong name! Set name default!\n";
		name = "Unknown";
	}
}

void Package::setIndex( string& i ) {
	int j;
	for (j = 0; j < 3; j++) {
		if (i.length() != 6) {
			cout << "The index should consist of 6 digits!"
				<< "Enter correct index: ";
			cin >> i;
			if (i.length() == 6)
				j = 4;
		}
		else
			j = 4;
	}
	if( j == 3 ) {
		cout << "Wrong index! Set index default!\n";
		i = "000000";
	}
}

void Package::setWeight(double &w) {
	int i;
	for (i = 0; i < 3; i++) {
		if (w <= 0) {
			cerr << "Incorrect weight. Weight is always more than 0!\n"
				<< "Enter correct weight: ";
			cin >> w;
		}
		if (w > 0)
			i = 4;
	}
	if (3 == i) {
		cerr << "Wrong weight! Set weight default\n";
		w = 1;
	}
	else if (w - static_cast<int>(w) > 0) {
		w = static_cast<int>(w) + 1;
	}
}

void Package::setPrice(double &p) {
	int i;
	for (i = 0; i < 3; i++) {
		if (p <= 0) {
			cerr << "Incorrect price. Price is always more than 0!\n"
				<< "Enter correct price: ";
			cin >> p;
		}
		if (p > 0)
			i = 4;
	}
	if (3 == i) {
		cout << "Wrong price! Set price default( 1 )\n";
		p = 1;
	}
}

double Package::calculateCost() const {
	return weight * price;
}

string Package::getName() const {
	return name;
}
string Package::getRegion() const {
	return region;
}
string Package::getCity() const {
	return city;
}
string Package::getAddress() const {
	return address;
}
string Package::getIndexSender() const {
	return indexSender;
}
string Package::getIndexRecipient() const {
	return indexRecipient;
}

double Package::getWeight() const {
	return weight;
}

ostream &operator<<(ostream &output, const Package &right ) {
	output << "Name: " << right.name << ";\n"
		<< "Address: " << right.address << ";\n"
		<< "Region: " << right.region << ";\n"
		<< "City: " << right.city << ";\n"
		<< "Sender index: " << right.indexSender << ";\n"
		<< "Recipien index: " << right.indexRecipient << ";\n"
		<< "Weight: " << right.weight << ";\n"
		<< "Price: " << right.price << ";\n";
	return output;
}


