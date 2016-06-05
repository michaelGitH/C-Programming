// Логические операции.
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha; // печать булевых значений
 							 //в виде "true" или "false"
int main()
{
	// создать таблицу истинности для операции && (логическое И)
	cout << boolalpha << "Logical AND (&&)"
	<< "\nfalse && false: " << ( false && false )
	<< "\nfalse && true: " << ( false && true )
	<< "\ntrue && false: " << ( true && false )
	<< "\ntrue && true: " << ( true && true ) << "\n\n";
	
	// создать таблицу истинности для операции || (логическое ИЛИ)
	cout << "Logical OR (||)"
	<< "\nfalse || false: " << ( false || false )
	<< "\nfalse || true: " << ( false || true )
	<< "\ntrue || false: " << ( true || false )
	<< "\ntrue || true: " << ( true || true ) << "\n\n";

	// создать таблицу истинности для операции ! (логическое НЕ)
	cout << "Logical NOT (!)"
	<< "\n!false: " << ( !false )
	<< "\n!true: " << ( !true ) << endl;

	return 0;
}


