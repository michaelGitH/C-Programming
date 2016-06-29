#ifndef STRING_H
#define STRING_H

#include<iostream>
using std::ostream;
using std::istream;

class String
{
	friend ostream &operator<< (ostream &, const String &);
	friend istream &operator>> (istream &, String &);
public:
	String(const char * = ""); // �-��� ��������������/�� ��������� 
	String(const String &); // ����������� ����� 
	~String(); // ���������� 
	const String &operator=(const String &); // on. ������������ 
	const String &operator+=(const String &); // on. ������������ 
	bool operator!() const; // ����� �� ������? 
	bool operator==(const String &) const; // ��������� s1 == s2 
	bool operator<(const String &) const; // ��������� s1 < s2 

	// ��������� s1 != s2 
	bool operator!=(const String &right) const {
		return !(*this == right);
	}
	// ��������� s1 > s2 
	bool operator>(const String &right) const {
		return right < *this;
	}
	// ��������� s1 <= s2 
	bool operator<=(const String &right) const {
		return !(*this > right);
	}
	// ��������� s1 >= s2
	bool operator>=(const String &right) const {
		return !(*this < right);
	}

	char &operator[](int); // �������� ���������� (lvalue) 
	char operator[](int) const; // �������� ���������� (rvalue) 
	String operator()(int, int = 0) const; // ���������� ��������� 
	int getLength() const; // ���������� ����� ������ 
private:
	int length; // ����� ������ (�� ������ ����������� ����) 
	char *sPtr; // ��������� �� ������ ������������� ������ 
	void setString(const char *); // ��������������� ������� 
};

#endif