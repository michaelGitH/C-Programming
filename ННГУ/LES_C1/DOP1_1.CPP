#include <cstdio>
#include <conio.h>
#include <windows.h> //Есть функция перекодировки в OEM

//#pragma hdrstop



char B[81]; // Буфер для перекодировки русских букв
char* Rus(char* in) { CharToOem(in, B);  return B;}

#define  MY_CONST  1997

//              Демонстратор работы функции и спецификаций вывода языка С

//#pragma argsused

void main(void)
{
char cSim1 = 'A',cSim2 ;
int  iK1,iK2 = -1997;
short hI0,hI1;
long  lL1,lL2 = 2111222333;
float fDat;
double dDat = 3.141593123456789;
long double ldDat;
unsigned char ucSim1 = 'A',ucSim2;
unsigned int  uiK1,uiK2 = 1997;
unsigned short uhI0,uhI1;
unsigned long  ulL1,ulL2;

 {int NChar = printf( Rus("\n\n\n\n\nВас приветствует BC++ !!!\n") );
      printf( Rus("\tНапечатано %i символов\n") ,NChar);
 }
  printf( Rus("\n\nСтандартные значения %c,%4c,% d."),
		    cSim1,cSim1,MY_CONST);
 printf( Rus("\n\nСтандартные значения %8d,%-8d,%+8d,% 8d,%8.6d,%-8.6d."),
		    iK2,iK2,iK2,iK2,iK2,iK2);
 printf( Rus("\n\nСтандартные значения %12ld,%-12ld,%+12ld,% 12ld."),
		    lL2,lL2,lL2,lL2);
 printf( Rus("\n\nСтандартные значения %le,%10.3le,%10.3lf,%10.3lg,%10f"),
		    dDat,dDat,dDat,dDat,dDat);
_getch();
}

