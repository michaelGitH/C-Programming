// Рис. 10.26: Interface.срр 
// Реализация класса Interface - клиент получает этот файл 
// только в форме объектного кода; реализация остается скрытой. 
#include "Interface.h"
#include "Implementation.h"

Interface::Interface(int v)
	: ptr(new Implementation(v)) // инициализировать ptr Новым 
{								 // объектом Implementation 
	// пустое тело 
}

// вызвать функцию setValue класса Implementation 
void Interface::setValue(int v) {
	ptr->setValue( v );
}

// вызвать функцию getValue класса Implementation 
int Interface::getValue() const {
	return ptr->getValue();
}

// деструктор 
Interface::~Interface() {
	delete ptr;
}
