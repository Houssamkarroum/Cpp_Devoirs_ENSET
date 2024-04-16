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
            point();
            point(int);
            point(int,int);
            void affiche();
            void affiche(char *);
};
point :: point(){
    x=0;
    y=0;
}

point :: point(int abs){
    x=abs;
    y=abs;
}

point :: point(int abs,int ord){
    x=abs;
    y=ord;
}
void point::affiche(){
    //Color(couleur,0);// 0 couleur de fond
    gotoXY(x,y);
    cout<<"*";
    //Color(15, 0);
}
void point ::affiche(char * message ){
    cout<<"\n"<<message;
    affiche();
}

int main(){

    point a;
    a.affiche();
    point b(5);
    b.affiche("point b");
    point c(3,12);
    c.affiche("point c");
    return 0;
}
