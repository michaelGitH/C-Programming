#include<iostream>
using namespace std;
//Устранение повторов и сложение однотипов


void arrays3a(){
	const int MAXN = 100;
	int Kod[MAXN] = {5, 8, 1, 5, 8, 1, 2};
	double Dat[MAXN]={3.5, 2.0, 6.5, 2.1, 3.5, 7.0, 5.0};
	int N = 7;
	int i, j, pos, newN;

	for(i = 0; i < N; ++i)
		if(i==0) newN = 1;
		else{
			pos = -1;
			for(j=0; j<newN; ++j)
				if(Kod[i] = Kod[j])
				{pos = j; break;}
			if(pos!=-1) Dat[pos]+=Dat[i];
			else{Kod[newN]=Kod[i];
				 Dat[newN++]=Dat[i];}
		}
	cout << "Таблица без повторов:\n";
	for(i = 0; i < newN; ++i)
		cout << Kod[i] << '\t' << Dat[i] << endl;
}

void arrays3b(){
	const int MAXN = 100;
	int Kod[MAXN] = {5, 8, 1, 5, 8, 1, 2};
	double Dat[MAXN]={3.5, 2.0, 6.5, 2.1, 3.5, 7.0, 5.0};
	int N = 7;
	int i, j, newN;
	for(i = 0; i<N; ++i)
		for(j=i+1;j<N;++j){
			if(Kod[j]==Kod[i])
				Dat[i]+=Dat[j];
			Kod[j]=Kod[--N];
			Dat[j]=Dat[N];
			j--;
		}
	cout << "Таблица без повторов:\n";
	for(i = 0; i < N; ++i)
		cout << Kod[i] << '\t' << Dat[i] << endl;
}