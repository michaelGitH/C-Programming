#include<iostream>
using namespace std;

void arrays2(){
	int d[] = {-2,5,100,3,5,8};
	int N = sizeof(d)/sizeof(int);
	int D, Dpos, i;
	while(1){
		cout << "\n¬ведите искомое число или Ctrl+Z: "; cin>>D;
		if(cin.eof()) break;
		Dpos = -1;
		for(i = 0; i < N; ++i)
			if(d[i] == D){Dpos = i; break;}
		if(Dpos==-1)cout<<"\n«начение не найдено";
		else cout<<"\n«начение найдено в элементе "<<Dpos<<endl;
	}
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
}