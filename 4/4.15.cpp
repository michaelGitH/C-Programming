#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
	double staticPay = 200;
	double sales;
	double dynamicPay;
	double totalPay;

	cout << "\nВведите объем продаж в долларах (-1, если ввод закончен): ";
	cin >> sales;
	
	while ( sales != -1 )
	{
		dynamicPay = sales * 0.09;
		totalPay = staticPay + dynamicPay;
		cout << "Заработок: " << setprecision(2) << fixed << totalPay << endl;
		
		cout << "\nВведите объем продаж в долларах (-1, если ввод закончен): ";
		cin >> sales;
	}

	return 0;
}
