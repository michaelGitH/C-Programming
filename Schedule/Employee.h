#include<iostream>
using namespace std;
#include"Date.h"
#include<iomanip>

class Employee
{
	friend ostream &operator<<(ostream&, const Employee&);
public:
	Employee(int = 168, int = 30);
	~Employee() { delete[] schedule; schedule = 0; }
	int getDays() const;
	const int &operator[](const int);
	int &operator[](const unsigned);
	void workSch(int = 28, int = 30); // ������������ �������
	int workSch(bool, int = 28, int = 30);


	int get10() const { return work10; }
	int get11() const { return work11; }
private:
	void hh(int, int); // �������� ������ ����� + ���������� ������������� ����
	void hh_s(int&, int); // ���� ����������� ������� ��� ������������� ���������� ����
	bool step(int); // �������� �� ����� � ���������� ������� ����?
	void workHour(); // ������ ������������ ����
	int days, hours, work10, work11, eDay;
	int *schedule;
};