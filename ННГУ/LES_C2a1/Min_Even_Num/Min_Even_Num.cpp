// Min_Even_Num.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdafx.h"

# include <iostream>
# include <windows.h>
using namespace std;

int main()
{// SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N; //�������� �����
	int EvenNum_min, Imin; //���������� ��� ����������� ���������� ������ ����� � �� �������
	int Num, i; //������� ����� � ����� �� �������
	cout << "\n����������� ���������� ������ ����� � �� �������"
		<< "\n������� ����� ��������������� �����: ";
	cin >> N;
	cout << "�������: " << N;
	//���������� �� ����� for: 
	for (Imin = -1, i = 0; i == 0 || N != 0; i++)
	{
		Num = N % 10;
		N = N / 10;
		cout << "\n����� ������� " << i << ": " << Num;
		if ((Num & 1) == 0
			&& (Imin == -1 || Num < EvenNum_min)
			)
		{
			EvenNum_min = Num;
			Imin = i;
		}
	}
	if (Imin == -1) cout << "\n��� ������ ����";
	else cout << "\n���������� ������ ����� = " << EvenNum_min
		<< "\n ����� � ������� � ������� " << Imin <<
		" (��� ��������� �� ����)." << endl;

	int kkk = cin.rdbuf()->in_avail(); //���������� ����, ���������� � ������
	cin.ignore(kkk); //�� ��������
	cin.get();// ��������� ������� ����� �������
	system("pause");
	using namespace std;
    return 0;
}

