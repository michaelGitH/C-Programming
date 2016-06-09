#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cstring>
using std::strlen;

#include "Huge.h"

HugeInteger::HugeInteger()
{
	for (int i = 0; i < 41; i++) {
		hi[i] = 0;
	}
	
	stop = 1;
}

void HugeInteger::input()
{
	char hic[41];
	cin >> hic;
	for (stop = 0; (hic[stop] != '\0' && stop < 41); stop++);
	if (stop >= 41 && hic[stop] != '\0') {
		cout << "Число не должно превышать 40 знаков, попробуйте еще раз!" << endl;
		input();
	}
	else {
		for (int j = 0; j < stop; j++) {
			hi[j] = static_cast<int>(hic[j]) - 48;
		}
	}
}

void HugeInteger::output() {
	for (int i = 0; i < stop; i++) {
		cout << hi[i];
	}
	cout << endl;
}

void HugeInteger::add( char x[] ) {
	int duble[41];
	for (int i = 0; i < 41; i++) {
		duble[i] = hi[i];
	}
	int count = strlen(x);

	if (count > 40) {
		cout << "Попытка прибавить недопустимое значение!" << endl;
	}
	else {
		int raz = 0;
		if (count > stop) {
			raz = count - stop;
			for (int i = stop - 1; i >= 0; i--) {
				duble[i + raz] = duble[i];
				duble[i] = 0;
			}
			stop += raz;
		}

		for (int i = 1; i <= count; i++) {
			duble[stop - i] += static_cast<int>(x[count - i]) - 48;

			if (stop - i == 0 && duble[ 0 ] > 9 ) {
				if (stop >= 41) {
					cout << "Ошибка!Полученная сумма превышает допустимое значение!" << endl;
				}
				else {
					stop++;
					for (int j = stop - 2; j >= 0; j--) {
						duble[j + 1] = duble[j];
					}
					duble[1] -= 10;
					duble[0] = 1;
				}
			}
			else if (duble[stop - i] > 9) {
				duble[stop - i] -= 10;
				duble[stop - i - 1]++;
			}		
		}
		for (int i = 0; i < stop; i++)
			hi[i] = duble[i];
	}
}

void HugeInteger::substract( char x[] ) {
	int count = strlen(x);
	int more = 2;
	if (stop == count) {
		for (int i = 0; i < stop; i++) {
			if (hi[i] < (static_cast<int>(x[i]) - 48)) {
				more = 1;
				i = stop;
			}
			else if (hi[i] > (static_cast<int>(x[i]) - 48)) {
				more = 0;
				i = stop;
			}
				
		}
	}
	if (count > 40)
		cout << "Попытка вычесть недопустимое значение!";
	else if ( stop > count || more == 0 ) {
		int duble[41];
		for (int i = 0; i < 41; i++)
			duble[i] = hi[i];
		for (int i = 1; i <= stop; i++) {
			if ((duble[stop - i] - (static_cast<int>(x[count - i]) - 48)) >= 0)
				duble[stop - i] -= (static_cast<int>(x[count - i]) - 48);
			else {
				duble[stop - i] = duble[stop - i] + 10 - (static_cast<int>(x[count - i]) - 48);
				duble[stop - i - 1]--;
			}
		}
		for (int i = 40; i >= 0; i--) {
			if (duble[i] != 0) {
				stop = i + 1;
				i = -1;
			}
		}
		for (int i = 0; i < stop; i++)
			hi[i] = duble[i];
	}
	else if ( count > stop || more == 1 ) {
		int duble[41];
		for (int i = 0; i < 41; i++)
			duble[i] = hi[i];
		if (count > stop) {
			int raz = count - stop;
			for (int i = stop - 1; i >= 0; i--) {
				duble[i + raz] = duble[i];
				duble[i] = 0;
			}
			stop += raz;
		}
		for (int i = 1; i <= count; i++) {
			if (((static_cast<int>(x[count - i]) - 48) - duble[stop - i]) >= 0)
				duble[stop - i] = (static_cast<int>(x[count - i]) - 48) - duble[stop - i];
			else {
				duble[stop - i] = (static_cast<int>(x[count - i]) - 48) + 10 - duble[stop - i];
				duble[stop - i - 1]++;
			}
		}
		for (int i = 40; i >= 0; i--) {
			if (duble[i] != 0) {
				stop = i + 1;
				i = -1;
			}
		}
		for (int i = 0; i < stop; i++)
			hi[i] = duble[i];
		hi[0] = 0 - hi[0];
	}
}

int* HugeInteger::getHI() {
	return hi;
}

int HugeInteger::getStop() {
	return stop;
}

bool HugeInteger::isEqualTo(HugeInteger x) {
	if (stop != x.getStop())
		return false;
	else {
		int *xPtr = x.getHI();
		for (int i = 0; i < stop; i++) {
			if (hi[i] != xPtr[i])
				return false;
		}
	}
	return true;
}

bool HugeInteger::isGreaterThan(HugeInteger x) {
	if (stop > x.getStop())
		return true;
	else if (stop < x.getStop())
		return false;
	else {
		int *xPtr = x.getHI();
		for (int i = 0; i < stop; i++) {
			if (hi[i] > xPtr[i])
				return true;
			else if (hi[i] < xPtr[i])
				return false;
		}
	}
	return false;
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger x) {
	if (stop > x.getStop())
		return true;
	else if (stop < x.getStop())
		return false;
	else {
		int *xPtr = x.getHI();
		for (int i = 0; i < stop; i++) {
			if (hi[i] > xPtr[i])
				return true;
			else if (hi[i] < xPtr[i])
				return false;
		}
	}
	return true;
}

bool isLessThan(HugeInteger);


