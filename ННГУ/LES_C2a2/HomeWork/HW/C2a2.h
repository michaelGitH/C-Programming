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
	//доходы
	int a[100];
	int n, i, sum = 0, average;
	cout << "Введите количество доходов: "; cin >> n;
	for(i = 0; i < n; i++){
		cout << "Введите доход " << i+1 << ": "; cin >> a[i];
		sum += a[i];
	}
	average = sum / i;
	cout << "Среднее: " << average
		<< "\nДоходы выше среднего: ";
	for(i = 0; i < n; i++){
		if(a[i] > average) cout << a[i] << ' ';
	}
	cout << endl;
}

void compression(){
	//сжатие
	//srand(time(0));
	int n, i, a[100];
	cout << "Введите количество элементов массива: "; cin >> n;
	cout << "Заполните массив значениями: ";
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
			if(a[j]==a[i]) a[j--] = a[--n];
	
	cout << "Сжатый массив: ";	
	for(i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void HappyBirthdays(){
	// Дни Рождения
	int a[7] ={0}, n, max, i, d;
	string c[8] = {"Воскресение", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};
	cout << "Введите количество дней рождения: "; cin >> n;
	for(i = 0; i < n; i++){
		do{cout << "Введите день рождения(от 0 до 6): ";cin >> d;}
		while(d<0 || d>6);
		a[d]++;
	}
	max = 0;
	for(i = 1; i < 7; i++)
		if(a[i] > a[max]) max = i;
	cout << c[max] << ": самый популярный день недели для ДР( " << a[max] << " )" << endl;
}

void LongNulls(){
	//Длинная цепочка нулей
	srand(time(0));
	const int size = 100000;
	int a[size], i;
	for (i = 0; i < size; i++)
		a[i] = rand() % 10;
	cout << "в массиве:\n";
	for (i = 0; i < size; i++) {
		(i + 1) % 10 != 0 ? cout << a[i] << ' ' : cout << a[i] << endl;
	}
	cout << "\nсамая длиная последовательность нулей: ";
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
	//Формирование упорядоченного массива вставками
	int a[100], count = 0, N, i, j, k;
	while(1){
		cout << "Введите число или Ctrl+Z чтобы закончить: "; cin >> N;
		if(cin.eof()) break;
		else if(!cin){
			cerr << "Введено некорректное значение, попробуйте еще раз!\n";
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
	//Быстрый поиск
	int n, a[100], i, j, k, N;
	cout << "Введите число элементов массива: "; cin>>n;
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
	cout << "Введите число для поиска: "; cin >> N;
	
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
	if(a[i] == N ) cout << "Число найдено в позиции " << i + 1 << endl;
	else cout << "Такого числа в массиве нет!" << endl;
}

void volumes(){
	//ТОМА
	srand(time(0));
	int i, j, K, N, a[100], b[100][100] = { 0 }, c[100]; double sum = 0, average;
	cout << "Введите число элементов массива и томов: "; cin>>N>>K;
	for(i = 0; i < N; ++i)
		a[i] = 1 + rand() % 100;

	for (i = 0; i < N; ++i)
		(i + 1) % 10 != 0 ? cout << a[i] << ' ' : cout << a[i] << endl;
	
	for(i = 0; i < N; ++i)
		sum += a[i];
	average = sum/K;
	
	int otkl = mode(average - a[0]), k = 0; // отклонение от среднего

	//for (i = 1; i < N; ++i) 
		//if (mode(average - a[i]) < otkl)
			//otkl = mode(average - a[i]), k = i;

	cout << "Средний том: " << average;
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

	cout << "\nОтчеты сгруппированы в тома, следующим образом:\n";
	for (i = 0; i < K; ++i) {
		for(j = 0; b[i][j]!=0; ++j)
			cout << b[i][j] << '\t';
		cout << " Всего: " << c[i] << endl;
	}
}

void costs(){
	//Упорядочение расходов
	int i, j, a[100]; // = { 1000, 1500, 750, 678, 1987, 2000, 1234, 2345, 450, 900, 901, 500 };
	srand(time(0));
	for (i = 0; i < 12; ++i)
		a[i] = 200 + rand() % 1500;
	for (i = 0; i < 12; ++i)
		cout << a[i] << ' ';
	int b[100];
	for(i = 0; i < 12; ++i) b[i] = a[i];
	
	cout << "\nНомера месяцев по убыванию расходов: ";
	int pos = 0; double max = b[0];
	for(i = 0; i < 12; ++i){
		for(j = 0; j < 12; j++)
			if(b[j]>b[pos]) pos = j;
		cout << pos+1 << ' '; b[pos] = 0;
	}	
	cout << endl;
}

void quietHome(){
	//Тихий дом
	int homes[100], noise[100];
	int N, K;
	cout << "Введите количество домов и источников шума: ";
	cin >> N >> K;
	int i, j;
	
	cout << "Введите координаты дома или введите Ctrl+Z для остановки:\n";
	for(i = 0; i < N; ++i){
		cin >> homes[i];
		if(cin.eof()) {cin.clear(); break;}
	}
	cout << "Введите координаты шума или введите Ctrl+Z для остановки:\n";
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
	
	cout << "\nСамый тихий дом: " << homes[home] << endl;
}

void volumes2() {
	//ТОМА
	srand(time(0));
	int a[] = { 10, 12, 8 }; const int N = 3; // Размерность и инициализация массива отчетов
	const int K = 2;// Количество томов
	int i, j, k; // Счетчики
	int c[100][K][N]; // массив комбинаций
	double average = double(10 + 12 + 8) / 2; // Средний размер тома
	double otkl = mode(average - a[0]); // минимальное отклонение от среднего
	for (i = 0, k = 0; i < 3; ++i, ++k) {
		for (j = i + 1; j < 3; ++j);
	}
}

double mode(double a) {
	return a >= 0 ? a : -a;
}



























