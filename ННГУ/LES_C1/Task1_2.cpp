
#include <windows.h>
#include <iostream>
#include <cstdlib>

#include <iomanip>
using namespace std;

void main(/*int argc, _TCHAR* argv[]*/)
{  SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
	float a=11.0, b=11.0, c=11.0;
    float x,y,z;
 cout<< "x y z : "; cin >> x >> y >>z;
 cout << "\nx= " << setprecision(3)<< x<<
	     "\ny= " << setprecision(3)<< y<<  
		 "\nz= " << setprecision(3)<< z << endl;
  cout << "\na= " << setprecision(3)<< a<<
	     "\nb= " << setprecision(3)<< b<<  
		 "\nc= " << setprecision(3)<< c << endl;
 int ka,kb,kc;
//     ka=a/x; kb=floor(b/y); kc=(int)(floor(c/z)); 
 int k=( ka=a/x, kb=b/y, kc=c/z, ka*kb*kc );
 cout << "В слоях: "<< ka <<" "<< kb << " " << kc<<"\n"
	 << "  Всего: " << k << endl;
 system("pause"); // Приостановка выполнения
}

