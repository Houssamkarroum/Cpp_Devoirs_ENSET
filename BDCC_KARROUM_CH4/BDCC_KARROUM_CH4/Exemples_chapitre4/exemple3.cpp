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
        point(int abs=0,int ord=2){
            x=abs;
            y=ord;
        }
        void affiche(char * ="Position du point");
};
void point::affiche(char * message ){
    gotoXY(x,y-1);
    cout<< message;
    gotoXY(x,y);
    cout<<"*Le point est en "<<x<<" "<<y<<"\n";
}

int main(){
    point a,b(40);
    a.affiche();
    b.affiche("Point b");
    point c(3,12);
    char texte[10]="Bonjour";
    c.affiche(texte);
    return 0;
}

