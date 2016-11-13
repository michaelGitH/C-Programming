#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack
{
public:
	Stack(int = 10); // конструктор по умолчанию (размер стека 10) 

	// деструктор 
	~Stack() {
		delete[] stackPtr; // удалить внутреннее представление стека 
	}
	
	bool push(const T&); // затолкнуть элемент в стек
	bool pop(T&); // вытолкнуть элемент из стека 

	// определить, пуст ли стек 
	bool isEmpty() const {
		return top == -1;
	}

	bool isFull() const {
		return top == size - 1;
	}
private:
	int size; // # элементов в стеке 
	int top; // позиция верхнего элемента (-1 означает - стек пуст) t
	T *stackPtr; // указатель на внутреннее представление стека 
};

// шаблон конструктора 
template< typename T >
Stack< T >::Stack(int s)
	: size(s > 0 ? s : 10), top(-1),
	stackPtr(new T[size]) // выделить память для элементов 
{
}

// затолкнуть элемент в стек; 
// если успешна, возвратить true; в противном случае false 
template<typename T>
bool Stack< T >::push(const T &pushValue){
	if (!isFull()) {
		stackPtr[++top] = pushValue; // поместить элемент в стек 
		return true;
	}
	return false;
}

// вытолкнуть элемент из стека; 
// если успешна, возвратить true; в противном случае false 
template<typename T>
bool Stack<T>::pop(T &popValue) {
	if (!isEmpty()) {
		popValue = stackPtr[top--]; // удалить элемент из стека 
		return true;
	}
	return false;
}


#endif
