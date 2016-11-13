#include<iostream>
using namespace std;

void arrays1(){
	const int MAXN=100;
	double X[MAXN];

	int N;
	cout << "¬ведите N: "; cin>>N;
	cout << "¬ведите " << N << " чисел\n";
	int i;
	for(i = 0; i < N; ++i) cin>>X[i];
	int Imax = 0;
	for(i = 1; i < N; ++i)
		if(X[i]>=X[Imax]) Imax = i;
	X[Imax]=X[N-- -1];
	cout << "\n–езультат обработки:\n";
	for(i = 0; i < N; ++i) cout<<X[i]<<'\n';
	cout << endl;
}