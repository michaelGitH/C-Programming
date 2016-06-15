// ���. 10.26: Interface.��� 
// ���������� ������ Interface - ������ �������� ���� ���� 
// ������ � ����� ���������� ����; ���������� �������� �������. 
#include "Interface.h"
#include "Implementation.h"

Interface::Interface(int v)
	: ptr(new Implementation(v)) // ���������������� ptr ����� 
{								 // �������� Implementation 
	// ������ ���� 
}

// ������� ������� setValue ������ Implementation 
void Interface::setValue(int v) {
	ptr->setValue( v );
}

// ������� ������� getValue ������ Implementation 
int Interface::getValue() const {
	return ptr->getValue();
}

// ���������� 
Interface::~Interface() {
	delete ptr;
}
