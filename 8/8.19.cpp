#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void dump ( double[], double, int, int, int, int );

int main()
{
	double memory[ 1000 ] = { 0 };
	double accumulator = 0;
	int instructionCounter = 0;
	int operationCode = 0;
	int operand = 0;
	int instructionRegister = 0;

	cout << "*** Симплетрон приветствует вас! ***\n"
		"*** Пожалуйста, введите вашу программу, по одной команде ***\n"
		"*** (или слову данных) за раз. Я буду выводить в качестве ***\n"
		"*** подсказки текущий адрес и знак вопроса (?). Введенное ***\n"
		"*** вами слово будет размещено по указанному адресу. Для ***\n"
		"*** прекращения ввода программы введите число -99999. ***\n";
	cout << endl;

	while ( memory[ instructionCounter ] != -99999 )
	{
		if ( instructionCounter < 10 )
			cout << 0 << 0 << instructionCounter << "? ";
		else if ( instructionCounter < 100 )
			cout << 0 << instructionCounter << "? ";
		else
			cout << instructionCounter << "? ";

		if ( memory[ instructionCounter ] == 0 )
			cin >> memory[ instructionCounter ];
		
		instructionRegister = memory[ instructionCounter ];

		if ( ( instructionRegister > 9999 || instructionRegister < -9999 ) && 
		instructionRegister != -99999 )
			cout << "*** Введенное значение выходит за рамки допустимого ***\n"
				  << "*** Попробуйте еще раз ***\n";
		else if ( instructionRegister == -99999 )
			cout << "*** Загрузка программы завершена ***\n"
				  << "*** Начинаю выполнение программы ***\n";
		else
			instructionCounter++;
	}

	memory[ instructionCounter ] = -9999;

	dump( memory, accumulator, instructionCounter, operationCode, operand, instructionRegister );

	for ( int count = 0; count <= instructionCounter; )
	{
		instructionRegister = memory[ count ];
	
		operationCode = instructionRegister / 100;
		operand = instructionRegister % 100;
		
		cout << setbase( 16 ) << operationCode << setbase( 10 ) << operand << " ";


		//cout << "oc = " << operationCode
		//	  << "\nod = " << operand
		//	  << "\ncount = " << count << endl;
		
		switch ( operationCode )
		{
			case 10: cin >> memory[ operand ]; 
				if ( memory[ operand ] > 9999 || memory[ operand ] < -9999 )
				{
						cout << "*** Введенное значение выходит за рамки допустимого ***\n"
					 	  	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
						count = instructionCounter + 1;
				}
				else
						count++;
				break;
			case 11:{
				int op = memory[ operand ];
				if ( memory[ operand ] - op == 0 )
					cout << fixed << setprecision( 0 ) << memory[ operand ] << endl; 
				else
					cout << fixed << setprecision( 2 ) << memory[ operand ] << endl;
				count++;
				}
				break;
			case 12: cout << endl; count++;
				break;
			case 13:
				{
					int adrn = static_cast< int >( memory[ count ] ) % 100;
					cin >> memory[ adrn ];	
					if ( memory[ adrn ] > 99999 || memory[ operand ] < 100 )
					{
						cout << "*** Неверное значение, верное от 1000 до 99999 ***\n"
						 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
						count = instructionCounter + 1;
					}	
					else
					{
						int control = static_cast< int >( memory[ adrn ] ) / 100;
						int adr = static_cast< int >( memory[ adrn ] ) % 100;
						char t[ control + 1 ];
						t[ control ] = '\0';
						cin >> t;
						if ( t[ control ] == '\0')
						{
							for ( int i = 0; i < control; i++ )
							{
								memory[ adr ] = ( static_cast< int >( t[ i ] ) * 100 + adr );
								adr++;
							}
						count = adr;
						}
						else 
						{
							cout << "*** Превышение допустимого колличества символов.( " << control << " )  ***\n"
								  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
							count = instructionCounter + 1;
						}
					}
					
				}
				break;
			case 14:
				{
					int size = static_cast< int >( memory[ operand ] ) / 100;
					int adr = static_cast< int >( memory[ operand ] ) % 100;
					int word;
					for ( int i = 0; i < size; i++ )
					{
						word = memory[ adr ] / 100;
						cout << static_cast< char >( word );
						adr++;
					}
					cout << endl;
					count++;
				}			
				break;
			case 20: accumulator = memory[ operand ]; count++;
				break;
			case 21: memory[ operand ] = accumulator; count++;
				break;
			case 30: accumulator += memory[ operand ]; 
				if ( accumulator > 9999 )
				{
					cout << "*** Аккумулятор перегружен ***\n"
					 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
					count = instructionCounter + 1;
				}
				else
					count++;
				break;
			case 31: accumulator -= memory[ operand ];
				if ( accumulator < -9999 )
				{
					cout << "*** Аккумулятор перегружен ***\n"
					 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
					count = instructionCounter + 1;
				}
				else
					count++;
				break;
			case 32:
				if ( memory[ operand ] != 0 )
				{
					accumulator /= memory[ operand ];
					count++;
				}
				else
				{
 					cout << "*** Попытка деления на ноль ***\n"
						  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
					count = instructionCounter + 1;
				}
				break;
			case 33: accumulator *= memory[ operand ];
				if ( accumulator < -9999 || accumulator > 9999 )
				{
					cout << "*** Аккумулятор перегружен ***\n"
					 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
					count = instructionCounter + 1;
				}
				else
					count++;
				break;
			case 34:{ 
				int acc = accumulator; int op = memory[ operand ];
				if ( ( ( accumulator - acc ) == 0 ) && ( ( memory[ operand ] - op ) == 0 )  )
				{
					accumulator = acc % op;
					if ( accumulator < -9999 || accumulator > 9999 )
					{
						cout << "*** Аккумулятор перегружен ***\n"
						 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
						count = instructionCounter + 1;
					}
					else count++;
				}
				else
				{
					cout << "*** Нельзя взять по модулю не целое число ***\n"
					 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
					count = instructionCounter + 1;
				}
				}
				break;
			case 35: 
				accumulator = pow( accumulator, memory[ operand ] );
				if ( accumulator < -9999 || accumulator > 9999 )
				{
					cout << "*** Аккумулятор перегружен ***\n"
					 	  << "*** Симплетрон аварийно завершил выполнение программы ***\n";
					count = instructionCounter + 1;
				}
				else count++;
				break;
			case 40: count = operand;
				break;
			case 41: if ( accumulator < 0 )
					count = operand;
				else 
					count++;
				break;
			case 42: if ( accumulator == 0 )
					count = operand;
				else
					count++;
				break;
			case 43: cout << "*** Симплетрон закончил свои вычисления ***" << endl;
				count = instructionCounter + 1;
				break;
			case 0: count++;
				cout << endl;
				break;
			default: cout << "*** Недействительная команда! ***" << endl;
				count++;
				break;
		}
	}

	dump( memory, accumulator, instructionCounter, operationCode, operand, instructionRegister );

	return 0;
}

void dump ( double mem[], double ac, int ic, int oc, int od, int ir )
{
	int plusa = 0, plusr = 0;
	if ( ac > 0 )
		plusa = 1;
	if ( ir > 0 )
		plusr = 1;

	cout << "РЕГИСТРЫ:\n";
	if ( plusa == 1 )
	cout << "accumulator" << setw( 17 ) << "+" << ac << endl;
	else
	cout << "accumulator" << setw( 18 ) << ac << endl;
	cout << "instructionCounter" << setw ( 11 ) << ic << endl;
	if ( plusr == 1 )
	cout << "instructionRegister" << setw( 9 ) << "+" << ir << endl;
	else
	cout << "instructionRegister" << setw( 10 ) << ir << endl;
	cout << "operationCode" << setw( 16 ) << oc << endl
		  << "operand" << setw( 22 ) << od << endl << endl
		  << "Память:" << endl;

	cout << setw( 10 ) << 0;
	for ( int i = 1; i < 10; i++ )
		cout << setw( 8 ) << i;
	cout << endl;

	for ( int i = 0; i < 1000; i++ )
	{
		if ( i % 10 == 0 )
		{
			if ( i == 0 )
			{
				cout << 0 << 0;
				cout << i << " ";
			}
			else if ( i > 0 && i < 100 )
			{
				cout << 0;
				cout << i << " ";
			}		
			else
				cout << i << " ";
		}



		if ( mem[ i ] == 0 )
			cout << setw( 8 ) << "+0000";
		else 
		{
			cout.setf( ios::showpos );
			int op = mem[ i ];
			if ( mem[ i ] - op != 0 )
				cout << fixed << setprecision( 2 ) << setw( 8 ) << mem[ i ];
			else
				cout << fixed << setprecision( 0 ) << setw( 8 ) << mem[ i ];
			cout.unsetf( ios::showpos );
		}

		if ( i % 10 == 9 )
			cout << endl;
	}
}
















