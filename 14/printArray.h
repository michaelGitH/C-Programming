
#include<iostream>

#include<locale>

using namespace std;

template < typename T >
void printArray(const T *array, int count) {
	for (int i = 0; i < count; i++)
		cout << array[i] << ' ';
	cout << endl;
}
template<typename T>
int printArray(const T *array, int count, int lowSubscript, int highSubscript) {
	if(lowSubscript < 0 || lowSubscript >= count || highSubscript<0 || highSubscript>count ||
		lowSubscript >= highSubscript) return 0;
	int counter = 1;
	--lowSubscript, --highSubscript;
	for (; lowSubscript <= highSubscript; lowSubscript++, counter++)
		counter % 10 == 0 ? cout << endl << array[lowSubscript] << ' ': 
			cout << array[lowSubscript] << ' ';
	return --counter;
}

void printArray(char *array) {
	cout << array << endl;
}


//������������
void chapter14_5() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int iSize = 15;
	const int dSize = 20;
	int iArray[iSize];
	double dArray[dSize];
	char *cArray = "football and something";

	srand(time(0));

	for (int i = 0; i < dSize; i++) {
		i < iSize ? iArray[i] = rand() % 1000, dArray[i] = rand() % 1000
			: dArray[i] = rand() % 1000;
	}

	cout << "printArray of iArray:\n";
	printArray(iArray, iSize);
	cout << "\nprintArray of iArray from 3 to 12:\n";
	int ci = printArray(iArray, iSize, 3, 15);
	cout << "\nsubscripts of iArray: " << ci;

	cout << "\n\nprintArray of dArray:\n";
	printArray(dArray, dSize);
	cout << "\nprintArray of dArray from 5 to 18:\n";
	int cd = printArray(dArray, dSize, 5, 18);
	cout << "\nsubscripts of dArray: " << cd;

	cout << "\n\nprintArray of cArray:\n";
	printArray(cArray);
	cout << "\nprintArray of cArray from 2 to 10:\n";
	int cc = printArray(cArray, strlen(cArray), 5, 18);
	cout << "\nsubscripts of dArray: " << cc;
}

void printApp() {
	const int aCount = 5; // ������ ������� � 
	const int bCount = 7; // ������ ������� � 
	const int cCount = 6; // ������ ������� � 

	int a[aCount] = { 1,2,3,4,5 };
	double b[bCount] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	char c[cCount] = "HELLO"; // 6-� ������� ��� ���� 

	cout << "Array a contains:" << endl;

	// ������� int-������������� ������� ������� 
	printArray(a, aCount);

	cout << "Array b contains:" << endl;

	// ������� double-������������� ������� ������� 
	printArray(b, bCount);

	cout << "Array � contains:" << endl;

	// ������� char-������������� ������� ������� 
	printArray(c, cCount);
}