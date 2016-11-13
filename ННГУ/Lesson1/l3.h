#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
//#include <ctime>


using namespace std;

int main(void)
{
	//srand(time(0));
	const int iNgir(5);
	int iMax(0), iSum;
	int iCursor(0);



	int iLeft(0), iRight(0);

	int IArr[iNgir] = { 0 };

	int sum = 0;

	cout << "Введите гири по убыванию\n";

	for (int i(0); i < iNgir; i++)
	{
		sum += IArr[i];
	}

	int k(0);
	while (iLeft < sum - iLeft)
	{
		iLeft += IArr[k];
		iCursor = k;
		k++;
	}

	iLeft -= IArr[iCursor];
	for (int i(iCursor); i < iNgir; i++)
	{
		iRight += IArr[i];
	}

	int iDiff = iRight - iLeft;

	for (int y(0); y < (iNgir - (iCursor + 1) > Cursor : Ngir - (iCursor + 1) ? Cursor; y++)
	{


		if (iDiff > (iRight - IArr[iNgir - y]) - (iLeft + IArr[iNgir - y]))
		{
			iRight -= IArr[iNgir - y];
				iLeft += IArr[iNgir - y];
		}
	}


	cout << "\n" << iCursor << " первых гирь налево "
		<< iNgir - iCursor << " последних гирь направо";
	cout << "\nМинимальная разница << abs(iRight - iLeft)" << endl;



		return 0;
}
