// Сокрытие закрытых данных класса с помощью класса-посредника. 
#include <iostream>
using std::cout;
using std::endl;

#include "Interface.h"

int main() {
	Interface i(5);
	cout << "Interface conteins: " << i.getValue() <<
		" befor setValue." << endl;

	i.setValue(10);

	cout << "Interface conteins: " << i.getValue() <<
		" after setValue." << endl;

	system("pause");
	return 0;
}