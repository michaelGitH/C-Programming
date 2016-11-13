#pragma once
#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Forest() {
	//Ћ≈—ќ«ј√ќ“ќ¬ »
	double V, Z, P, previous; bool flag = true;
	int count = 0;
	cout << "¬ведите первоначальный объем древесины: "; cin >> V;
	cout << "¬ведите ежегодный прирост: "; cin >> P;
	cout << "¬ведите годовой объем лесозаготовок: "; cin >> Z;

	while (V > 0 && flag) {
		previous = V;
		V -= Z;
		V = V + V * P / 100;
		flag = V > previous ? false : true;
		count++;
	}
	flag ? cout << "Ћес будет вырублен за " << count << "лет\n" :
		cout << "Ћес не будет вырублен!\n";
}