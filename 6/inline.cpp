 // Рис. 6.18: fig06_18.cpp
 // Использование встроенной функции для вычисления объема куба.
 #include <iostream>
 using std::cout;
 using std::cin;
 using std::endl;

 // Определение встроенной функции возведения в куб. Определение
 // появляется до вызова функции, так что прототип для нее не нужен.
 //В качестве прототипа служит первая строка определения функции.
 inline double cube( const double side )
 {
 return side * side * side; // вычисляет куб
 } // конец функции cube

 int main ()
 {
 double sideValue; // сохраняет значение, введенное пользователем
 cout << "Enter the side length of your cube: ";
 cin >> sideValue; // прочитать пользовательское значение

 // вычислить куб sideValue и вывести результат
 cout << "Volume of cube with side "
 << sideValue << " is " << cube( sideValue ) << endl;
 return 0; // успешное завершение
 } // конец main
