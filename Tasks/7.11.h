#include<iostream>
using std::cout;

void bubbleSort(int *a, int size) {
	int max = -9999999;
	int min = 9999999;
	for (int i = 1; i < size; i++) {
		for (int j = 1; j < size; j++) {
			if (a[j] < a[j - 1]) {
				a[j] = a[j - 1] + a[j];
				a[j - 1] = a[j] - a[j - 1];
				a[j] = a[j] - a[j - 1];
			}
		}
	}
}

void bSortTest() {
	const int s = 10;
	int a[s];
	for (int i = 0; i < s; i++) {
		a[i] = rand() % 1000;
	}

	for (int i = 0; i < s; i++) {
		cout << a[i] << "   ";
		if (i % 10 != 0) {
			if ((i - (i / 10 * 10)) % 9 == 0)
				cout << "\n";
		}
	}
	cout << "\n\n";
	bubbleSort(a, s);
	for (int i = 0; i < s; i++) {
		cout << a[i] << "   ";
		if (i % 10 != 0) {
			if ((i - (i / 10 * 10)) % 9 == 0)
				cout << "\n";
		}
	}
}
