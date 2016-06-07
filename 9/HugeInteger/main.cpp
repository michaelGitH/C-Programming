#include<iostream>
using namespace std;

#include "Huge.h"

int main() {
	HugeInteger h1;
	h1.output();
	h1.input();
	h1.output();
	h1.add("923456");
	h1.output();
	system("pause");
	return 0;
}