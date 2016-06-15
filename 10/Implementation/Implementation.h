class Implementation
{
public:
	// конструктор 
	Implementation(int v)
		: value(v) // инициализировать value значением v 
	{
		// пустое тело 
	}
	void setValue(int v) {
		value = v;
	}
	int getValue() const {
		return value;
	}
private:
	int value; // данные, которые мы хотим скрыть от клиента 
};
