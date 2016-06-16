#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(int = 1, int = 1, int = 1900);
	Date( long = 1, int = 1900 );
	Date(char* = "January", int = 1, int = 1900);
	void print() const; // ���������� ���� � ������� �����/����/��� 
	void print1() const;
	void print2() const;
	void fullPrint() const;
	~Date();// ������������ ��� ������������� ������� ����������
private:
	int month;
	int day;
	int year;

	// ��������������� ������� ��� �������� ������������ ��� ������ 
	int checkDate( int ) const;
}; // ����� ������ 

#endif
