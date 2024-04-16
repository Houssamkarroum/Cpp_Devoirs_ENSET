#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoXY(int x, int y)
{
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed
}
class point{
      int x,y;
      public:
        point(){
            x=0;
            y=0;
        }
        point(int abs){
            x=abs;
            y=abs;
        }
        point(int abs,int ord){
            x=abs;
            y=ord;
        }
        void affiche();
};
void point::affiche(){
    gotoXY(x,y);
    cout<<"*";
}

int main(){

    point a,b(5);
    a.affiche();
    b.affiche();
    point c(3,12);
    c.affiche();
    return 0;
}
