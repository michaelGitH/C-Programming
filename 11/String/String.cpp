#pragma warning(disable:4996)
#include<iostream>
using std::cerr;
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;

#include<cstring>
using std::strcmp;
using std::strcpy;
using std::strcat;

#include<cstdlib>
using std::exit;

#include"String.h"

// ����������� �������������� (� �� ���������) char* � String 
String::String(const char *s)
	: length( ( s != 0 ) ? strlen( s ) : 0 )
{
	cout << "Conversion ( and default ) constructor: " << s << endl;
	setString(s); // call utility function 
}

// ����������� ����� 
String::String(const String &copy)
	: length(copy.length)
{
	cout << "Copy constructor: " << copy.sPtr << endl;
	setString(copy.sPtr); // call utility function
}

// ���������� 
String::~String()
{
	cout << "Destructor: " << sPtr << endl;
	delete[] sPtr; // ���������� ������, �������������� ���������� 
}

// ������������� �������� =; ������������� ���������������� 
const String &String::operator=(const String &right) {
	cout << "operator= called" << endl;
	if (&right != this) {
		delete[] sPtr;
		length = right.length;
		setString(right.sPtr); // ������� ��������������� ������� 
	}
	else
		cout << "Attemted assigment of a String to itself" << endl;

	return *this;
}

const String &String::operator+=(const String &right) {
	size_t newLength = length + right.length; // ����� ����� 
	char *tempPtr = new char[newLength + 1]; // �������� ������ 

	strcpy(tempPtr, sPtr); // ���������� sPtr 
	strcpy(tempPtr + length, right.sPtr); // ���������� right.sPtr 
	delete[] sPtr; // ���������� ������ ������ 
	sPtr = tempPtr; // ��������� sPtr ����� ������ 
	length = newLength; // ��������� length ����� ����� 
	return *this;
}

// ����� �� ������? 
bool String::operator!() const {
	return length == 0;
}

// ����� �� ������ ������ ������ ������? 
bool String::operator==(const String &right) const {
	return strcmp(sPtr, right.sPtr) == 0;
}

// ������ �� ������ ������ ������ ������? 
bool String::operator<(const String &right) const {
	return strcmp(sPtr, right.sPtr) < 0;
}

// ���������� ������ �� ������ ������ ��� �������������� lvalue 
char &String::operator[](int subscript) {
	// ��������� �� ����� ������� �� ��������� 
	if (subscript < 0 || subscript >= length) {
		cerr << "Error: Subscript " << subscript
			<< "out of range!" << endl;
		exit( 1 );
	}
	return sPtr[subscript];
}

// ���������� ������ �� ������ ������ ��� rvalue 
char String::operator[](int subscript) const {
	// ��������� �� ����� ������� �� ��������� 
	if (subscript < 0 || subscript >= length) {
		cerr << "Error: Subscript " << subscript
			<< "out of range!" << endl;
		exit(1);
	}
	return sPtr[subscript];
}

// ���������� ���������, ������������ � index � ������ subLength 
String String::operator()(int index, int sublength) const {
	// ���� ������ ��� ��������� ��� ����� ������ < 0, 
	// ���������� ������� ������ String 
	if (index < 0 || index >= length || sublength < 0)
		return "";

	// ���������� ����� ��������� 
	int len;

	if (sublength == 0 || index + sublength > length)
		len = length - index;
	else
		len = sublength;

	// �������� ��������� ������ ��� ��������� 
	//� ������������ �������� ������� 
	char *tempPtr = new char[len + 1];

	// ���������� ������ � ������ � ��������� ������ 
	strncpy(tempPtr, &sPtr[index], len);
	tempPtr[len] = '\0';

	// ������� ��������� ������ String, ���������� ��������� 
	String tempString(tempPtr);
	delete[] tempPtr;
	return tempString; // ���������� ����� ���������� ������� String 
}

// ���������� ����� ������ 
int String::getLength() const {
	return length;
}

// ��������������� �������, ���������� �������������� � operator= 
void String::setString(const char *string2) {
	sPtr = new char[length + 1]; // �������� ������ 
	if (string2 != 0) // ���� string2 - �� NULL, ���������� 	
		strcpy(sPtr, string2); // ������� � ������ 
	else // ���� string2 - NULL, ������� this ������ ������� 
		sPtr[0] = '\0'; // ������ ������
}

// ������������� �������� ������ 
ostream &operator<<(ostream &output, const String &s) {
	output << s.sPtr;
	return output; // ��������� �������������� 
}

// ������������� �������� ����� 
istream &operator >> (istream &input, String &s) {
	char temp[100]; // ����� ��� �������� ����� 
	input >> setw(100) >> temp;
	s = temp; // ������������ �������� ������������ ������ String 
	return input; // ��������� �������������� 
}

