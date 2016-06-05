// Декорирование имен.

// функция square для значений типа int
int square( int x )
 {
 return x * x;
 } // конец функции square

 // функция square для значений типа double
double square( double y )
 {
 return y * y;
 } // конец функции square

 // функция, принимающая аргументы типов
 // int, float, char и int &
void nothingl( int a, float b, char c, int &d )
 {
 // пустое тело функции
 } // конец функции nothingl

 // функция, принимающая аргументы типов
 // char, int, float & и double &
int nothing2( char a, int b, float &c, double &d )
 {
 return 0;
 } // конец функции nothing2

int main()
 {
 return 0; // успешное завершение
 } // конец main
