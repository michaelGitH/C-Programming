#include <cstdlib>
//#include <conio.h>
#include <windows.h> //Есть функция перекодировки в OEM

//#pragma hdrstop

//#pragma argsused
char B[81]; // Буфер для перекодировки русских букв
char* Rus(char* in) { CharToOem(in, B);  return B;}

//  Демонстратор работы функции ввода scanf(...) языка С

void main(void)
{
char cSim2;
int  iK1;
short hI0;
long  lL1;
float fDat;
double dDat;
long double ldDat;
unsigned char ucSim2;
unsigned int  uiK1;
unsigned short uhI1;
unsigned long  ulL1;

 {int NChar = printf( Rus("\n\n\n\aВас приветствует\tC++ !!!\n") );
      printf( Rus("\tВыведено %i символов\n") ,NChar);
 }

 printf( Rus("Введите через запятую без пробелов \
 cSim2,iK1,hI0,lL1,ucSim2\n") );
  {int NDat= scanf("%c,%d,%hd,%ld,%c",
			    &cSim2,&iK1,&hI0,&lL1,&ucSim2);
	     printf( Rus(" Введено %d значений\n") ,NDat);
  }
 printf( Rus("Значения %5c,%5.2d,%2.3hd,%2.3ld,%5.2c\n") ,
		    cSim2,iK1,hI0,lL1,ucSim2);

 printf( Rus("\n\nВведите через пробел без других \
 разделителей uiK1,uhI1,ulL1\n") );
  {int NDat= scanf(" %u  %hu  %lu",
			&uiK1,&uhI1,&ulL1);
	     printf( Rus(" Введено %d значений\n") ,NDat);
  }
 printf( Rus("Значения %u,%hu,%lu\n") ,
		    uiK1,uhI1,ulL1);

 printf( Rus("\n\nВведите через запятую с возможными \
 пробелами fDat,dDat,ldDat\n") );
  {int NDat= scanf("  %f , %lf , %Lf",
			   &fDat,&dDat,&ldDat);
	     printf( Rus("Введено %d значений\n") ,NDat);
  }
 printf( Rus("Значения %-8.2e,%+5.3lf,% 5.3Lf\n") ,
		      fDat,dDat,ldDat);

system("pause");
}

