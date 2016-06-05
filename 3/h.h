//h.h Тараканов М. А. 23.09.2015 18.53
// определение класса GradeBook в отдельном заголовочном файле

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook
{
public:
	GradeBook( string name)
	{
	setCourseName( name );
	}

	void setCourseName( string name )
	{
	courseName = name;
	}

	string getCourseName()
	{
	return courseName;
	}

	void displayMessage()
	{
	cout << "Welcome to programming for: "
		  << getCourseName() <<"!" << endl;
	}

private:
	string courseName;
};
