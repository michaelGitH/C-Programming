// Заголовочный файл для класса Interface 
// Клиент видит данный исходный код, но этот код не раскрывает 
// структуру данных класса Implementation. 

class Implementation;

class Interface
{
public:
	Interface(int);
	void setValue(int);
	int getValue() const;
	~Interface();
private:
	// требует опережающего объявления (строка 6) 
	Implementation *ptr;
};
