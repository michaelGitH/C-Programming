#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

double mode(double);
void income();
void compression();
void HappyBirthdays();
void LongNulls();

void income(){
	//������
	int a[100];
	int n, i, sum = 0, average;
	cout << "������� ���������� �������: "; cin >> n;
	for(i = 0; i < n; i++){
		cout << "������� ����� " << i+1 << ": "; cin >> a[i];
		sum += a[i];
	}
	average = sum / i;
	cout << "�������: " << average
		<< "\n������ ���� ��������: ";
	for(i = 0; i < n; i++){
		if(a[i] > average) cout << a[i] << ' ';
	}
	cout << endl;
}

void compression(){
	//������
	//srand(time(0));
	int n, i, a[100];
	cout << "������� ���������� ��������� �������: "; cin >> n;
	cout << "��������� ������ ����������: ";
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
			if(a[j]==a[i]) a[j--] = a[--n];
	
	cout << "������ ������: ";	
	for(i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void HappyBirthdays(){
	// ��� ��������
	int a[7] ={0}, n, max, i, d;
	string c[8] = {"�����������", "�����������", "�������", "�����", "�������", "�������", "�������"};
	cout << "������� ���������� ���� ��������: "; cin >> n;
	for(i = 0; i < n; i++){
		do{cout << "������� ���� ��������(�� 0 �� 6): ";cin >> d;}
		while(d<0 || d>6);
		a[d]++;
	}
	max = 0;
	for(i = 1; i < 7; i++)
		if(a[i] > a[max]) max = i;
	cout << c[max] << ": ����� ���������� ���� ������ ��� ��( " << a[max] << " )" << endl;
}

void LongNulls(){
	//������� ������� �����
	srand(time(0));
	const int size = 100000;
	int a[size], i;
	for (i = 0; i < size; i++)
		a[i] = rand() % 10;
	cout << "� �������:\n";
	for (i = 0; i < size; i++) {
		(i + 1) % 10 != 0 ? cout << a[i] << ' ' : cout << a[i] << endl;
	}
	cout << "\n����� ������ ������������������ �����: ";
	int length = 0, max = 0;
	for (i = 0; i < size; i++)
		if (a[i] == 0) {
			length++;
			if (length > max) max = length;
		}
		else length = 0;
	cout << max << endl;
}

void isertArray(){
	//������������ �������������� ������� ���������
	int a[100], count = 0, N, i, j, k;
	while(1){
		cout << "������� ����� ��� Ctrl+Z ����� ���������: "; cin >> N;
		if(cin.eof()) break;
		else if(!cin){
			cerr << "������� ������������ ��������, ���������� ��� ���!\n";
			cin.ignore(cin.rdbuf()->in_avail());
			cin.clear();
		}
		else{
			count++; a[count - 1] = N;
			for(k = 0; k < count; k++){
				for(i = 0; i < count; i++)
					for(j = i+1; j < count; j++){
						if(a[j]<a[i]){
							a[j] = a[i]+a[j];
							a[i] = a[j]-a[i];
							a[j] = a[j]-a[i];
						}
					}
			}
			for(i = 0; i < count; i++)
				(i+1)%10!=0? cout << a[i] << ' ': cout << a[i] << endl;
			cout << "\n\n";
		}
	}
}

void quickSearch(){
	//������� �����
	int n, a[100], i, j, k, N;
	cout << "������� ����� ��������� �������: "; cin>>n;
	for(i = 0; i < n; ++i)
		a[i] = rand() % 100;
	for(k = 0; k < n; ++k)
		for(i = 0; i < n; ++i)
			for(j = i+1; j < n; ++j)
				if(a[j] < a[i]){
					a[j] = a[j]+a[i];
					a[i] = a[j]-a[i];
					a[j] = a[j]-a[i];
				}
	for(i = 0; i < n; ++i)
		(i+1)%10!=0? cout<<a[i]<<' ': cout<<a[i]<<endl;
	cout << "������� ����� ��� ������: "; cin >> N;
	
	j = 0, k = n - 1;
	int c = 0;
	for(i = (k - j)/2; N!=a[i]; i = (k-j)/2){
		if(N>a[i])
			j = -(i+1);
		else if (N<a[i])
			k = i-1;
		if (i == (k - j) / 2) c++;
		if (c > 3) break;
	}
	if(a[i] == N ) cout << "����� ������� � ������� " << i + 1 << endl;
	else cout << "������ ����� � ������� ���!" << endl;
}

void volumes(){
	//����
	srand(time(0));
	int i, j, K, N, a[100], b[100][100] = { 0 }, c[100]; double sum = 0, average;
	cout << "������� ����� ��������� ������� � �����: "; cin>>N>>K;
	for(i = 0; i < N; ++i)
		a[i] = 1 + rand() % 100;

	for (i = 0; i < N; ++i)
		(i + 1) % 10 != 0 ? cout << a[i] << ' ' : cout << a[i] << endl;
	
	for(i = 0; i < N; ++i)
		sum += a[i];
	average = sum/K;
	
	int otkl = mode(average - a[0]), k = 0; // ���������� �� ��������

	//for (i = 1; i < N; ++i) 
		//if (mode(average - a[i]) < otkl)
			//otkl = mode(average - a[i]), k = i;

	cout << "������� ���: " << average;
	int x, y;
	sum = 0;
	for (i = 0, x = 0, y = 0; i < N; ++i, ++x) {
		//if (i == k) {
		//	b[x][y] = a[i]; continue;
		//}
		otkl = mode(average - a[i]);
		b[x][y] = a[i];
		sum = a[i];
		for (++i; i < N; ++i) {
			sum += a[i];
			if (N - i >= K - x && mode(average - sum) < otkl) {
				otkl = mode(average - sum);
				b[x][++y] = a[i];
			}
			else break;
		}
		sum = i < N ? sum - a[i] : sum;
		c[x] = sum;
		y = 0; --i;	
	}

	cout << "\n������ ������������� � ����, ��������� �������:\n";
	for (i = 0; i < K; ++i) {
		for(j = 0; b[i][j]!=0; ++j)
			cout << b[i][j] << '\t';
		cout << " �����: " << c[i] << endl;
	}
}

void costs(){
	//������������ ��������
	int i, j, a[100]; // = { 1000, 1500, 750, 678, 1987, 2000, 1234, 2345, 450, 900, 901, 500 };
	srand(time(0));
	for (i = 0; i < 12; ++i)
		a[i] = 200 + rand() % 1500;
	for (i = 0; i < 12; ++i)
		cout << a[i] << ' ';
	int b[100];
	for(i = 0; i < 12; ++i) b[i] = a[i];
	
	cout << "\n������ ������� �� �������� ��������: ";
	int pos = 0; double max = b[0];
	for(i = 0; i < 12; ++i){
		for(j = 0; j < 12; j++)
			if(b[j]>b[pos]) pos = j;
		cout << pos+1 << ' '; b[pos] = 0;
	}	
	cout << endl;
}

void quietHome(){
	//����� ���
	int homes[100], noise[100];
	int N, K;
	cout << "������� ���������� ����� � ���������� ����: ";
	cin >> N >> K;
	int i, j;
	
	cout << "������� ���������� ���� ��� ������� Ctrl+Z ��� ���������:\n";
	for(i = 0; i < N; ++i){
		cin >> homes[i];
		if(cin.eof()) {cin.clear(); break;}
	}
	cout << "������� ���������� ���� ��� ������� Ctrl+Z ��� ���������:\n";
	for(i = 0; i < K; ++i){
		cin >> noise[i];
		if(cin.eof()) {cin.clear(); break;}
	}
	
	int otkl, home, no, mmotkl = 0;
	for(i = 0; i < N; ++i){
		otkl = mode(homes[i] - noise[i]);
		no = i;
		for(j = 0; j < K; ++j){
			if(mode(homes[i]-noise[j]) < otkl){
				otkl = mode(homes[i]-noise[j]);
				no = j;
			}
		}
		if(otkl>mmotkl){
			mmotkl = otkl;
			home = i;
		}
	}
	
	cout << "\n����� ����� ���: " << homes[home] << endl;
}

void volumes2() {
	//����
	srand(time(0));
	int a[] = { 10, 12, 8 }; const int N = 3; // ����������� � ������������� ������� �������
	const int K = 2;// ���������� �����
	int i, j, k; // ��������
	int c[100][K][N]; // ������ ����������
	double average = double(10 + 12 + 8) / 2; // ������� ������ ����
	double otkl = mode(average - a[0]); // ����������� ���������� �� ��������
	for (i = 0, k = 0; i < 3; ++i, ++k) {
		for (j = i + 1; j < 3; ++j);
	}
}

double mode(double a) {
	return a >= 0 ? a : -a;
}



























