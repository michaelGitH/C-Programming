// Символьные массивы в качестве строк.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	char string1[ 20 ]; // резервирует 20 символов
	char string2[] = "string literal"; // резервирует 15 символов

	// прочитать строку пользователя в string1
	cout << "Enter the string \"hello there\": ";
	cin >> string1; // читает "hello" [пробел прекращает ввод]

	// вывести строки
	cout << "string1 is: " << string1 << "\nstring2 is: " << string2;
	cout <<"\nstring1 with spaces between characters is:\n";
	
	// выводить символы, пока не встретится нуль-символ
	for ( int i = 0; i < string1[ i ] != '\0'; i++ )
		cout << string1[ i ] << ' ';

	cin >> string1; // reads "there"
	cout << "\nstring1 is: " << string1 << endl;

	return 0;
}
			
	
