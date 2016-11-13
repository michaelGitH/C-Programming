// Input_All_Charecters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
# include <iostream>
# include <windows.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{// SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
 cout<<"Подсчет количества символов, слов, записей (абзацев), \"белых\" сисволов";
 cout<<"\n\nВводите строки текста с пробельными символами. Окончание - по Ctrl+z\n\n";
 cin.unsetf(cin.skipws);//Отмена особой обработки "белых" символов

 char c;
 int kc, kws, kw, kL;
 char cOld = ' ';
 c = '\0'; //Если сразу нажать ^Z, то в 'c' ничего не введется, 
           // поэтому лучше ее вначале "почистить"
 for( kc = kws = kw = kL = 0; ; )
 { cin >> c;
   int kod = c;
   cout<<"\nkod= "<<kod<<" - "<<c;
   kc++;
  if ( c==26        //-это сработает при вводе Ctrl+z в конце строки
         || ( !cin 
		      || cin.eof()) ) //.eof() в этом режиме работает только
							   //    при вводе Ctrl+z в начале строки
                {kws++; kL++; 
                        cin.clear(); break;}
  switch (c)
  {case '\n': kL++;
   case ' ': kws++; cOld = ' '; break;
   default:
	   if (cOld == ' ') kw++;
	   cOld = c;
  }
 }
 cout <<"\nВведено: "<<kc<<" -символов, "<<kws<<" -белых символов,\n"
	     <<kw<<" -слов, "<<kL<<" -записей"<<endl;
 cin.clear();//Сбрасывает флаги состояния прочтения ^z 
             // после любого способа ввода Ctrl+z
 cin.setf(cin.skipws);//Восстановление особой обработки "белых" символов
 cin.get();
 system("pause");
	return 0;
}

