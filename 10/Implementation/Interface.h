// ������������ ���� ��� ������ Interface 
// ������ ����� ������ �������� ���, �� ���� ��� �� ���������� 
// ��������� ������ ������ Implementation. 

class Implementation;

class Interface
{
public:
	Interface(int);
	void setValue(int);
	int getValue() const;
	~Interface();
private:
	// ������� ������������ ���������� (������ 6) 
	Implementation *ptr;
};
