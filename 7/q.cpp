#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
#include <string>
using std::string;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;
 
int main()
{    
    const int size=8;
    
    int horizontal[size]={2,1,-1,-2,-2,-1,1,2};//Ходы коня
    int vertical[size]={-1,-2,-2,-1,1,2,2,1};
    
    int board [size][size]={0};//Массив доски
    
    int recmove=1;//Запись хода
    int x=1,y=1;//Координаты коня
    int verticalx,horizontaly;//Временные координаты коня
    
    for(int i=1;i<=64;i++){
 
    int moveNumber=0;           //Обнуляем ходы
        while(moveNumber<size){
        
            verticalx=x;
            horizontaly=y;
 
            verticalx+=vertical[moveNumber];    //Ходим конём
            horizontaly+=horizontal[moveNumber];
 
            if (verticalx<0||verticalx>7)   //Проверка на выход из массива
                moveNumber++;   //Следующий возможный ход
            else if (horizontaly<0||horizontaly>7)
                moveNumber++;
            else if (board[verticalx][horizontaly]==1)
                moveNumber++;
            else {      //Ход сделан
                board[verticalx][horizontaly]=recmove;
                recmove++;
                x=verticalx;
                y=horizontaly;
                moveNumber=8;//Причина наверное здесь !!!!!!!
            }
        }
    }
 
    cout<<"Ходы коня!"<<endl<<endl;
    for(int z=1,rec=1;z<=64;z++){   //Печатает номер хода и координаты
        for(int j=0;j<size;j++){
            for(int i=0;i<size;i++) 
                if (board[j][i]==rec){
                    cout<<rec<<" Ход "<<j<<"/"<<i<<endl;
                    rec++;
                }
        }
    }
}



























