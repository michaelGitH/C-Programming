#include<iostream>
using std::cout;
using std::endl;
using std::boolalpha;

#include"String.h"

int main()
{
	String s1("happy"), s2(" birthday"), s3;
	// тестировать перегруженные операции равенства и отношений 
	cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
		<< "\"; s3 is \"" << '\"'
		<< boolalpha << "\n\nThe results of comparing s2 and s1:"
		<< "\ns2 == s1 yields " << (s2 == s1)
		<< "\ns2 != s1 yields " << (s2 != s1)
		<< "\ns2 > s1 yields " << (s2 > s1)
		<< "\ns2 < s1 yields " << (s2 < s1)
		<< "\ns2 >= s1 yields " << (s2 >= s1)
		<< "\ns2 <= s1 yields " << (s2 <= s1);

	// тестировать перегруженную операцию "пусто" (!) класса String 
	cout << "\n\nTesting !s3:" << endl;
	if (!s3) {
		cout << "s3 is empty. Assigning s1 to s3" << endl;
		s3 = s1; // протестировать перегруженное присваивание 
		cout << "s3 is \"" << s3 << '\"';
	}

	s3 = s1 + s2;
	cout << "\n\ns3 after s3 = s1 + s2 is " << s3 << endl;

	// тестировать перегруженную операцию конкатенации строк 
	cout << "\n\ns1 += s2 yields s1 = ";
	s1 += s2; // протестировать перегруженную конкатенацию 
	cout << s1;

	// тестировать конструктор преобразования 
	cout << "\n\ns1 += \" to you\" yields " << endl;
	s1 += " to you";
	cout << "s1 = " << s1 << "\n\n";

	// тестировать операцию вызова () для подстроки 
	cout << "The substring of s1 starting at\n"
		<< "location 0 for 14 characters, s1( 0, 14 ) is:\n"
		<< s1(0, 14) << "\n\n";

	// тестировать случай подстроки "до конца строки" 
	cout << "The substring of s1 starting at\n"
		<< "location 15, s1(15) is: "
		<< s1(15) << "\n\n";

	// тестировать конструктор копии 
	String *s4Ptr = new String(s1);
	cout << "\n*s4Ptr = " << *s4Ptr << "\n\n";

	// тестировать операцию присваивания (=) с самоприсваиванием 
	cout << "assinging *s4Ptr to *s4Ptr" << endl;
	*s4Ptr = *s4Ptr;
	cout << "*s4Ptr = " << *s4Ptr << endl;

	// тестировать деструктор 
	delete s4Ptr;

	// тестировать использование индексации для получения lvalue 
	s1[0] = 'H';
	s1[6] = 'B';
	cout << "\ns1 after s1[0] = 'H' and s1[6] = 'B' is: "
		<< s1 << endl;

	// тестировать выход индекса из диапазона 
	cout << "\nAttempt to assign 'd' to s2[ 30 ] yields:" << endl;
	//s3[30] = 'd'; // ОШИБКА: индекс вне диапазона 

	String s5 = "                                  ";
	strnCpy(s5, s1, 5);
	s5.strnCat( s1, 13);
	cout << s5 << endl;
	s3 = s1;
	cout << "strCmp( s1, s3 ): " << strCmp(s1, s3) << endl;
	cout << "strCmp( s5, s1 ): " << strCmp(s5, s1) << "\n\n";

	cout << s1 << endl;
	char *sPtr = strTok(s1, " ");
	while (sPtr != NULL) {
		cout << sPtr << "\n";
		sPtr = strTok("", " ");
	}

	system("pause");
	return 0;
}