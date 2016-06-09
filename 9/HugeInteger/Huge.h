#ifndef HUGE_H
#define HUGE_H

class HugeInteger {
public:
	HugeInteger();
	void input();
	void output();
	void add( char[] );
	void substract( char[] );
	int* getHI();
	int getStop();
	bool isEqualTo(HugeInteger);
	bool isNotEqualTo(HugeInteger);
	bool isGreaterThan(HugeInteger);
	bool isLessThan(HugeInteger);
	bool isGreaterThanOrEqualTo(HugeInteger);
	bool isLessThanOrEqualTo(HugeInteger);
private:
	int hi[ 41 ];
	int stop;
};


#endif
